#include <gtk/gtk.h>
#include <gl.h>


static gboolean render (GtkGLArea *area, GdkGLContext *context);


static void activate (GtkApplication* app){
  GtkWidget *window;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Gtk-glarea test");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

  //gl startup code
  GtkWidget *glArea = gtk_gl_area_new();
  g_signal_connect(glArea,"render", G_CALLBACK(render),NULL);
  //end gl code

  gtk_widget_show_all (window);
}

static gboolean render (GtkGLArea *area, GdkGLContext *context){
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

	glutSolidSphere (1.0, 50, 50);

	return TRUE;
}

int main (int argc,char **argv){
  GtkApplication *app;
  int status;
  //gtk window code
  app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);
  //end gtk window code




  return status;
}

//static void on_realize(GtkGLArea *area){
//	gtk_gl_area_make_current(area);
//	if(gtk_gl_area_get_error(area)!=NULL)
//		return;
//	GError *error = NULL;
//
//	init_buffer_objects(&error);
//	if(error != NULL){
//		gtk_gl_area_set_error(area,error);
//		g_error_free(error);
//		return;
//	}
//
//	init_shaders(&error);
//	if(error != NULL){
//		gtk_gl_area_set_error(area,error);
//		g_error_free(error);
//		return;
//	}
//}


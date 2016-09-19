#include <gtk/gtk.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
//#include "Server.c"
//TODO: push latest codes
void show_push(void)
{

    GtkWidget *window1;
    GtkWidget *label;

    window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window1), "Push Modifications");
    gtk_window_set_default_size(GTK_WINDOW(window1), 300, 300);


    label = gtk_label_new ("Co - Code will show push controls in here");
    recordLog(11,"client0","push","this log record was created for pushing latest codes");
    gtk_container_add (GTK_CONTAINER (window1), label);

    gtk_widget_show_all (window1);
}

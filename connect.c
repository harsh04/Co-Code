#include <gtk/gtk.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

static void button_clicked(GtkWidget* widget, gpointer data){

    g_print("HotSpot Started with Username = Harsh and Key = %s\n",gtk_entry_get_text(GTK_ENTRY(data)));
    //gtk_label_set_text(GTK_LABEL(data),"you clicked the button");
}

void show_connect(void)
{

    GtkWidget *window1;
    GtkWidget *entryBox;
    GtkWidget *entry;
    GtkWidget *button;
    GtkWidget *label;
    GtkWidget *box;


    window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title (GTK_WINDOW (window1), "Connect Modifications");
    gtk_window_set_default_size(GTK_WINDOW(window1), 300, 100);


    label = gtk_label_new ("                Entry Key to start a secure connection.\n Only Users with key will be able to access files you share");
    entry = gtk_entry_new();

    button = gtk_button_new_with_label("Start Network");
    g_signal_connect(button,"clicked",G_CALLBACK(button_clicked), (gpointer)entry);

    entryBox = gtk_vbox_new(FALSE,50);
    box = gtk_vbox_new(FALSE, 50);
    gtk_box_pack_start(GTK_BOX(entryBox),label,1,0,0);
    gtk_box_pack_start(GTK_BOX(entryBox),entry,1,0,0);
    gtk_box_pack_start(GTK_BOX(box),entryBox,1,0,0);
    gtk_box_pack_start(GTK_BOX(box),button,0,0,0);

    gtk_container_add (GTK_CONTAINER (window1), box);

    gtk_widget_show_all (window1);
}

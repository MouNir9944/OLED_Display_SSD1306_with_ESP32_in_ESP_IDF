/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "lvgl.h"

void example_lvgl_demo_ui(lv_disp_t *disp)
{
    lv_obj_t *scr = lv_disp_get_scr_act(disp);
    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_long_mode(label,LV_LABEL_LONG_SCROLL); /* Circular scroll */
    //lv_label_set_text(label, "Hello Espressif, Hello LVGL.");
    lv_label_set_text_static(label, "Hello Espressif, Hello LVGL.");
    /* Size of the screen (if you use rotation 90 or 270, please set disp->driver->ver_res) */
    lv_obj_set_width(label, disp->driver->hor_res);
    lv_obj_align(label, LV_ALIGN_DEFAULT, 0, 0);  //  xmax= ymax=55
}

void example_lvgl_demo_ui2(lv_disp_t *disp)
{
    // Get the active screen of the display
    lv_obj_t *scr = lv_disp_get_scr_act(disp);

    // Create a label on the screen
    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_text_sel_start(label,10);

    // Set the text of the label to be static
    lv_label_set_text_static(label, "Hello Espressif, Hello LVGL!");

    // Set the width of the label to fit the screen width
   // lv_obj_set_width(label, lv_disp_get_hor_res(disp));
    lv_obj_set_width(label, disp->driver->hor_res);
    // Align the label to the top-left corner of the screen
    lv_obj_align(label, LV_ALIGN_DEFAULT, 10, 10);
}

// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: 

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Arc1;
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_Screen1_Switch1;
lv_obj_t * ui_Screen1_ImgButton3;
lv_obj_t * ui_Screen1_Switch2;
lv_obj_t * ui_Screen1_Label2;
lv_obj_t * ui_Screen1_Label3;
lv_obj_t * ui_Screen1_Label4;
lv_obj_t * ui_Screen1_Label5;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void screen1_switch1_event_handler(lv_obj_t *switch_btn, lv_event_t event)
{  
        if(event == LV_EVENT_VALUE_CHANGED) {
        //Serial.printf("State: %s\n", lv_switch_get_state(switch_btn) ? "On" : "Off");
    }
}
///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x1C1A1A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_background_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Arc1 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Arc1, 150);
    lv_obj_set_height(ui_Screen1_Arc1, 150);
    lv_obj_set_x(ui_Screen1_Arc1, 0);
    lv_obj_set_y(ui_Screen1_Arc1, -10);
    lv_obj_set_align(ui_Screen1_Arc1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Arc1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_range(ui_Screen1_Arc1, 0, 255);
    lv_arc_set_value(ui_Screen1_Arc1, 0);

    ui_Screen1_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, 0);
    lv_obj_set_y(ui_Screen1_Label1, -10);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label1, "100%");
    lv_obj_set_style_text_font(ui_Screen1_Label1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Switch1 = lv_switch_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Switch1, 70);
    lv_obj_set_height(ui_Screen1_Switch1, 35);
    lv_obj_set_x(ui_Screen1_Switch1, -155);
    lv_obj_set_y(ui_Screen1_Switch1, -40);
    lv_obj_set_align(ui_Screen1_Switch1, LV_ALIGN_CENTER);
    lv_obj_set_event_cb(ui_Screen1_Switch1, screen1_switch1_event_handler);


    ui_Screen1_ImgButton3 = lv_imgbtn_create(ui_Screen1);
    lv_imgbtn_set_src(ui_Screen1_ImgButton3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_829144973, NULL);
    lv_imgbtn_set_src(ui_Screen1_ImgButton3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_194352601, NULL);
    lv_obj_set_height(ui_Screen1_ImgButton3, 66);
    lv_obj_set_width(ui_Screen1_ImgButton3, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_x(ui_Screen1_ImgButton3, 145);
    lv_obj_set_y(ui_Screen1_ImgButton3, 13);
    lv_obj_set_align(ui_Screen1_ImgButton3, LV_ALIGN_CENTER);

    ui_Screen1_Switch2 = lv_switch_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Switch2, 70);
    lv_obj_set_height(ui_Screen1_Switch2, 35);
    lv_obj_set_x(ui_Screen1_Switch2, -155);
    lv_obj_set_y(ui_Screen1_Switch2, 60);
    lv_obj_set_align(ui_Screen1_Switch2, LV_ALIGN_CENTER);

    ui_Screen1_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label2, -155);
    lv_obj_set_y(ui_Screen1_Label2, -80);
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label2, "USB");
    lv_obj_set_style_text_font(ui_Screen1_Label2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label3, -145);
    lv_obj_set_y(ui_Screen1_Label3, 20);
    lv_obj_set_align(ui_Screen1_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label3, "12V AUTO");
    lv_obj_set_style_text_font(ui_Screen1_Label3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label4, 145);
    lv_obj_set_y(ui_Screen1_Label4, -58);
    lv_obj_set_align(ui_Screen1_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label4, "INVERTER");
    lv_obj_set_style_text_font(ui_Screen1_Label4, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label5, 0);
    lv_obj_set_y(ui_Screen1_Label5, 85);
    lv_obj_set_align(ui_Screen1_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label5, "12.6V");
    lv_obj_set_style_text_font(ui_Screen1_Label5, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

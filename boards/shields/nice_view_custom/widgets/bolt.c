#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BOLT
#define LV_ATTRIBUTE_IMG_BOLT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BOLT uint8_t bolt_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0x00, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 2*/
    0x00, 0x00, 0x00, 0x00, /*Color of index 3*/
#else
    0x00, 0x00, 0x00, 0x00, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 2*/
    0x00, 0x00, 0x00, 0x00, /*Color of index 3*/
#endif

    0x00, 0x14, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 0x00, 0x01, 0xa4, 0x00, 0x01, 0xa4,
    0x00, 0x06, 0xa4, 0x00, 0x06, 0xa4, 0x00, 0x1a, 0xa5, 0x54, 0x1a, 0xaa, 0xa4, 0x6a,
    0xaa, 0x90, 0x55, 0x6a, 0x90, 0x00, 0x6a, 0x40, 0x00, 0x6a, 0x40, 0x00, 0x69, 0x00,
    0x00, 0x69, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 0x00, 0x00, 0x50, 0x00,
};

const lv_img_dsc_t bolt = {
    .header.cf = LV_IMG_CF_INDEXED_2BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 11,
    .header.h = 18,
    .data_size = 70,
    .data = bolt_map,
};

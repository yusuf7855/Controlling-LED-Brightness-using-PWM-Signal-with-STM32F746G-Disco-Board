// 4.21.1 0x7353894a
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_backgrounds_480x272_gradient_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_GRADIENT_DARK_ID = 0, Size: 480x272 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID = 1, Size: 240x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID = 2, Size: 240x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_slider_horizontal_thick_filler_medium[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_FILLER_MEDIUM_ID = 3, Size: 300x10 pixels
extern const unsigned char image_alternate_theme_images_widgets_slider_horizontal_thick_rounded_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_ROUNDED_DARK_ID = 4, Size: 32x32 pixels
extern const unsigned char image_alternate_theme_images_widgets_slider_horizontal_thick_track_medium[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_TRACK_MEDIUM_ID = 5, Size: 300x10 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_backgrounds_480x272_gradient_dark, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB888) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_normal, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_slider_horizontal_thick_filler_medium, 0, 300, 10, 5, 0, 290, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 10, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_slider_horizontal_thick_rounded_dark, 0, 32, 32, 2, 2, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_slider_horizontal_thick_track_medium, 0, 300, 10, 5, 0, 290, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 10, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase

#include <gb/gb.h>
#include <stdio.h>
#include <gb/font.h>
#include "map/background_map.c"
#include "tiles/background_map_tiles.c"



void main(){

    font_t min_font;

    font_init();
    min_font = font_load(font_min); //36 tile
    font_set(min_font);

    set_bkg_data(37, 7, backgroud_map_tiles);
    set_bkg_tiles(0, 0, 40, 18, background_map);

    SHOW_BKG;
    DISPLAY_ON;

    while (1)
    {
        scroll_bkg(1, 0);
        delay(100);
    }
    
   
}
#include <gb/gb.h>
#include <stdio.h>
#include "map/background_map.c"
#include "tiles/background_map_tiles.c"


void main(){

    set_bkg_data(0, 7, backgroud_map_tiles);
    set_bkg_tiles(0, 0, 40, 18, background_map);

    SHOW_BKG;
    DISPLAY_ON;

    while (1)
    {
        scroll_bkg(1, 0);
        delay(100);
    }
    
   
}
#include <gb/gb.h>
#include <stdio.h>
#include "heart.c"
#include "tiles/giant_heart.c"
#include "smile.c"


void main(){

    printf("Hello World");
    
    SPRITES_8x16;
    set_sprite_data(0, 32, giant_heart);
    set_sprite_tile(0, 0);
    move_sprite(0, 75, 75);
    set_sprite_tile(1, 2);
	move_sprite(1, 75 + 8, 75);
    SHOW_SPRITES;

    while (1) {
/*         
        switch (joypad())
        {
        case J_LEFT:
            scroll_sprite(0,-1,0);
            scroll_sprite(1,-1,0);
            break;
        case J_RIGHT:
            scroll_sprite(0,1,0);
            scroll_sprite(1,1,0);
            break; 
        case J_UP:
            scroll_sprite(0,0,-1);
            scroll_sprite(1,0,-1);
            break;
        case J_DOWN:
            scroll_sprite(0,0,1);
            scroll_sprite(1,0,1);
            break;
        }
*/
        if (joypad() & J_LEFT)
        {
            scroll_sprite(0,-1,0);
            scroll_sprite(1,-1,0);
        }
        if (joypad() & J_RIGHT)
        {
            scroll_sprite(0,1,0);
            scroll_sprite(1,1,0);
        }
        if (joypad() & J_UP)
        {
            scroll_sprite(0,0,-1);
            scroll_sprite(1,0,-1);
        }
        if (joypad() & J_DOWN)
        {
            scroll_sprite(0,0,1);
            scroll_sprite(1,0,1);
        }
        

        delay(20);
    }
    

/*
    while (1)
    {    

        set_sprite_tile(0, 0);
        set_sprite_tile(1, 2);
        delay(30);
        set_sprite_tile(0, 4);
        set_sprite_tile(1, 6);
        delay(30);
        set_sprite_tile(0, 8);
        set_sprite_tile(1, 10);
        delay(30);
        set_sprite_tile(0, 12);
        set_sprite_tile(1, 14);
        delay(30);
        set_sprite_tile(0, 16);
        set_sprite_tile(1, 18);
        delay(30);
        set_sprite_tile(0, 20);
        set_sprite_tile(1, 22);
        delay(30);
        set_sprite_tile(0, 24);
        set_sprite_tile(1, 26);
        delay(30);
        set_sprite_tile(0, 28);
        set_sprite_tile(1, 30);
        delay(3000);
        scroll_sprite(0, 1, 0);
        scroll_sprite(1, 1, 0);
    }
    


    while (1) {
        set_sprite_tile(0, 0);
        delay(1000);
        set_sprite_tile(10, 10);
        delay(1000);
        set_sprite_tile(00, 02);
        delay(1000);
        set_sprite_tile(0, 3);  
        delay(1000);
        set_sprite_tile(0, 4);
        delay(1000);
        set_sprite_tile(0, 5); 
        delay(1000);
        set_sprite_tile(0, 6); 
        delay(1000);
    }
*/
}
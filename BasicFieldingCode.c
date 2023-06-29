#include <stdio.h>
#include <stdlib.h>
#include <sys/bios.h>
#include <sys/libwwc.h>
void main(int argc, char *argv[]) {
int x, y;
WORD key_data;
x = 10;
y = 10;
key_data = key_press_check();
	while (TRUE) {
        if (key_data){
            if (KEY_LEFT1){
                x--;
            }else if (KEY_RIGHT1){
                x++;
            }else if (KEY_DOWN1){
                y--;
            }else if (KEY_UP1)
        }
        sprite_set_location(0, x, y);
	}
}
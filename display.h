#ifndef DISPLAY_H
#define DISPLAY_H

color from_hex(char * hex_code); 
void plot( screen s, color c, int x, int y);
void reset_color(screen s, color c); 
void clear_screen( screen s);
void save_ppm( screen s, char *file);
void save_ppm_ascii( screen s, char *file);
void save_extension( screen s, char *file);
void display( screen s);

#endif

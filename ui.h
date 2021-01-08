#ifndef UI
#define UI

#include <allegro5/allegro_font.h>

typedef struct button {
    float cex;
    float cey;
    float x;
    float y;
    char *text;
    ALLEGRO_BITMAP *bit;
} button;

button btn_build(float cex, float cey, char *text, char *file);

void btn_draw(button btn, ALLEGRO_FONT *font, int *time);

bool btn_click(button btn, ALLEGRO_MOUSE_EVENT click, int *time);

void text_select(int select, ALLEGRO_FONT *font);

#endif 
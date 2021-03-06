#ifndef playfield_h_
#define playfield_h_

#include "beatmap.h"
#include "replay.h"
#include <cairo.h>
#include <libavcodec/avcodec.h>

typedef struct playfield {
    int fps;
    int tick;
    int width;
    int height;
    beatmap_t *beatmap;
    replay_t *replay;

    cairo_surface_t *surface;
    cairo_t *cr;

    cairo_surface_t *background;
} playfield_t;

void init_playfield(playfield_t *p);
void write_frame(playfield_t *p, AVFrame *frame);
void free_playfield(playfield_t *p);

#endif
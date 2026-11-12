#pragma once

// =============================================================================
// LOADING SCREEN — the loading pictures at the game's resolution
// =============================================================================
//
// CLevelLoader::show and showPromoScreen under NOCTURNE_AUTHENTIC_MENU=0, whose
// keeps call these at their top and carry the shipped routines. Each does as
// that did with the front end's layout (core/front_end_layout.h): the picture
// where and as large as the layout shows it, the loading moon's window placed
// and sized on the picture with it, and the promo's text scaled and centred
// on it. At 640x480 the layout is the screen, and each draws as it shipped.

struct CLevelLoader;

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_level_loader_show(struct CLevelLoader *loader, int total_frames,
                                int use_custom_viewport, int image_variant);
void nocturne_promo_screen(void);

#ifdef __cplusplus
}
#endif

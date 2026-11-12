#pragma once

// =============================================================================
// MOON RENDER — the front end's backdrop at the game's resolution
// =============================================================================
//
// CMoon::render under NOCTURNE_AUTHENTIC_MENU=0, whose keep calls it at its top
// and carries the shipped routine. It draws as that did - the moon and its
// bats in 3D, two layers of cloud added over them, the logo's animation added
// over those - with the front end's layout (core/front_end_layout.h): the 3D
// through nocturne_menu_scene_begin's overlay, the clouds over the whole
// screen sampled at the layout's scale, so they look as they did at 480 lines,
// and the logo where and as large as the layout shows it. The lighting it
// finds is put back unless NOCTURNE_AUTHENTIC_MENU_LIGHTING, and a bat past its
// course's last frame is not drawn unless NOCTURNE_AUTHENTIC_MENU_BAT_WRAP, as
// the keep does.

struct CMoon;

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_moon_render(struct CMoon *moon);

#ifdef __cplusplus
}
#endif

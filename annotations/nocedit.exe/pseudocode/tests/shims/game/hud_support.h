#pragma once

// =============================================================================
// HUD SUPPORT — the engine and the shims the HUD draws through
// =============================================================================
//
// The globals the HUD reads, defined here, and every call it makes stood in
// for and recorded: text with where it went and at what scale, bitmaps, fills,
// clips, the inventory panels and their models, and the overlay pass. Text is
// eight pixels a glyph and ten a line at scale 1; a wrap breaks at newlines
// only. The party is hero_support.h's. reset() puts everything back, at
// 1280x720 with the camera's 640x480 and the frame the whole screen.

#include "hero_support.h"
#include "nocturne.h"

#include <map>
#include <memory>
#include <string>
#include <vector>

namespace hud_support {

using namespace hero_support;

struct Text {
    std::string text;
    int x, y;
    float scale;
    const CBitFont *font;
};
struct Blit {
    const CAlphaBitmap *bitmap;
    int x, y, alpha, scale;
};
struct Fill {
    int x1, y1, x2, y2, color;
    bool bordered;
};
struct Backdrop {
    bool item_style; // drawItemIconBackground, as against the weapon's
    int x1, y1, x2, y2, alpha;
};
struct Model {
    const CDemonActor *item;
    int x, y, size;
    float rotation;
    int alpha;
};
struct Clip {
    int left, top, right, bottom;
};
struct Overlay {
    float scale, scale_y, x, y;
};
struct Wrap {
    int width;
    float scale;
};

struct Stand {
    std::vector<Text> texts;  // nocturne_ui_draw_text_f and CBitFont::drawText (scale 0)
    std::vector<Blit> blits;  // nocturne_ui_blit_alpha(_rect)
    std::vector<Fill> fills;  // fillRectColor, fillRectWithBorder
    std::vector<Backdrop> backdrops;
    std::vector<Model> models;
    std::vector<Clip> clips;  // nocturne_ui_push_clip
    int pops = 0;             // nocturne_ui_pop_clip
    int screen_clips = 0;     // nocturne_ui_push_screen_clip
    std::vector<int> alphas;  // setRenderAlpha
    std::vector<Wrap> wraps;  // nocturne_ui_wrap_to_width_f
    int loads = 0;            // loadAssets
    std::vector<Overlay> overlays;
    int overlay_ends = 0;
    int ui_scale = 1;          // nocturne_ui_scale
    float text_scale = 1.0f;   // nocturne_ui_text_scale
    int text_scales = 1;       // nocturne_ui_text_scale_supported
    int overlay_opens = 1;     // nocturne_trigl_device_begin_overlay
    int picture_left = 0;      // nocturne_widescreen_picture; right -1 for the width
    int picture_right = -1;
    int shown_rows = 480;      // nocturne_widescreen_shown_rows
    std::map<int, int> categories;            // isWeaponInCategory, by category
    int hides_ammo = 0;                        // nocturne_hero_weapon_hides_ammo
    std::map<const void *, std::string> names; // getItemDisplayName; else "name"
    float delta = 0.0f;                        // getGameDeltaTime
    int status_right_cut = 0;                  // nocturne_status_bar_right: right less this

    void reset();
};

extern Stand stand;

// The fonts, distinct so a test can tell which was picked.
extern CBitFont small_font, micro_font, theme_font, medium_font, tiny_font;

// The local hero's inventory, a weapon, a light gun, a health item, a film
// reel and the round the weapon takes, each with a class.
extern std::unique_ptr<CInventory> inventory;
extern std::unique_ptr<CWeapon> weapon;
extern std::unique_ptr<CLightGun> light_gun;
extern std::unique_ptr<CHealthItem> health;
extern std::unique_ptr<CFilmReel> reel;
extern std::unique_ptr<CAmmo> round;
extern std::unique_ptr<CGame> game;
extern std::unique_ptr<CScript> script;

// The weapon classes isOfClass is asked about, beside hero_support's CGun: the
// tommy gun is a CGun, the shotgun and the elephant gun are not, and the sword
// is none of them.
extern CDemonActorType tommy_type, shotgun_type, elephant_type, sword_type;

// Texts drawn so far whose text is `text`.
std::vector<Text> texts_of(const std::string &text);

} // namespace hud_support

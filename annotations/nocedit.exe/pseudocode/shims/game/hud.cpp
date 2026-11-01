// =============================================================================
// HUD — implementation
// =============================================================================
//
// See hud.h, core/hud_layout.h, and NOCTURNE_AUTHENTIC_HUD in
// config/shim_config_authentic.h. The keeps beside each entry point are the
// shipped routines these follow.

#include "game/hud.h"

#include "core/hud_layout.h"
#include "nocturne.h"
#include "renderer/trigl_device.h"

#include <cmath>
#include <cstdio>
#include <cstring>

#if !NOCTURNE_AUTHENTIC_HUD

namespace {

using nocturne_hud::Rect;
using nocturne_hud::Space;

// Below this height the shipped HUD halves its panels and drops to the micro
// font, unless the panel is showing its description.
const int kSmallScreen = 0x180;
// Below this the subtitles and the chapter title take a smaller font.
const int kShortScreen = 0x1e0;

const int kOpaque = 0xffff;
const int kTextColor = 0xf8;
// CBitFont's line height is measured on this glyph.
const int kMeasureGlyph = 0x58;

// The wrapped-text buffers hold ten lines.
const int kMaxLines = 10;

// An inventory timer as an alpha: opaque until its last second, fading in it.
int fade_alpha(float timer) {
    if (timer < 1.0f)
        return (int)std::lround(timer * 65535.0f);
    return kOpaque;
}

// The screen, the HUD's frame on it, the HUD scale its bitmaps are drawn at,
// and the unrounded one its text is: the frame's share of 480 lines, so text
// takes the same part of the screen at every resolution.
struct Screen {
    Rect frame;
    int ui = 1;
    float text = 1.0f;
};

Screen screen() {
    Screen s;
    s.frame = nocturne_hud::frame(g_WindowWidth, g_WindowHeight);
    s.ui = nocturne_ui_scale();
    s.text = nocturne_ui_text_scale(s.frame.height());
    return s;
}

// The camera's space laid onto the frame's corner, which the panels are drawn
// in and placed by.
Space panel_space(const Rect &frame) {
    return nocturne_hud::corner_space(frame, g_CDemonCameraInstance.framebuffer_width,
                                      g_CDemonCameraInstance.framebuffer_height);
}

// --- the inventory panels ------------------------------------------------------

// One panel's geometry in the camera's space, as the shipped
// renderSelectedItems and renderAllItems measure it: the backdrop, the model's
// square and its inset from the corner, and the text's padding, wrap margin
// and the ammo icon's inset.
struct Panel {
    int width;
    int height;
    int model_size;
    int model_inset;
    int text_pad;
    int wrap_margin;
    int ammo_inset;
};

bool small_panels(const CInventory *inventory) {
    return g_WindowHeight < kSmallScreen && inventory->render_mode_flag == 0;
}

Panel panel(const CInventory *inventory, bool weapon) {
    const bool small = small_panels(inventory);
    const int width = small ? g_InventoryWidth / 2 : g_InventoryWidth;
    const int height = small ? g_InventoryHeight / 2 : g_InventoryHeight;
    Panel p;
    // The quick view is a square as tall as the panel; the description view is
    // the panel's own width.
    p.width = inventory->render_mode_flag != 0 ? width : height;
    p.height = height;
    if (weapon) {
        p.model_size = small ? 0x28 : 0x50;
        p.model_inset = small ? 4 : 8;
    } else {
        p.model_size = small ? 0x20 : 0x40;
        p.model_inset = small ? 8 : 0x10;
    }
    p.text_pad = small ? 8 : 0x10;
    p.wrap_margin = small ? 0x28 : 0x70;
    p.ammo_inset = small ? 0x12 : 0x24;
    return p;
}

// The backdrop, drawn at the camera space's corner, and the model in it.
void draw_panel(CInventory *inventory, const Panel &p, CDemonActor *actor, float rotation,
                float timer) {
    const int right = g_CDemonCameraInstance.framebuffer_width;
    const int bottom = g_CDemonCameraInstance.framebuffer_height;
    const int alpha = fade_alpha(timer);
    if (inventory->render_mode_flag == 0)
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050(right - p.width, bottom - p.height,
                                                           right - 1, bottom - 1, alpha * 2 / 3);
    else
        core_inv_cpp_drawItemIconBackground_FUN_005001e0(right - p.width, bottom - p.height,
                                                         right - 1, bottom - 1, alpha * 2 / 3);
    core_inv_cpp_CInventory_renderItemModel_FUN_004fee00(
        inventory, actor, right - p.model_size - p.model_inset,
        bottom - p.model_size - p.model_inset, p.model_size, rotation, alpha);
}

bool hud_owner(const CInventory *inventory) {
    return g_CGamePtr->letterbox_mode == 0 &&
           (CHero *)inventory->owner == g_HeroActors[g_LocalHeroIndex];
}

// --- the inventory's text -------------------------------------------------------

CBitFont *panel_font(const CInventory *inventory) {
    return small_panels(inventory) ? g_MicroFont : g_SmallEditorFont;
}

// `text` right- and bottom-aligned `pad` in from the corner of `box`.
void draw_in_corner(CBitFont *font, char *text, const Rect &box, int pad, float scale) {
    const int width = nocturne_ui_text_width_f(font, text, scale);
    const int height = nocturne_ui_char_height_f(font, kMeasureGlyph, scale);
    nocturne_ui_draw_text_f(font, text, box.right - pad - width, box.bottom - pad - height,
                            kTextColor, 0, scale);
}

// `text` wrapped to `box` less `margin` and drawn from its top-left, `pad` in,
// clipped to it.
void draw_description(CBitFont *font, char *text, char (*lines)[256], const Rect &box, int pad,
                      int margin, float scale) {
    int pitch = 0;
    const int count = nocturne_ui_wrap_to_width_f(font, text, lines[0], kMaxLines, 0x100,
                                                  box.width() - margin, scale, &pitch);
    nocturne_ui_push_clip(box.left, box.top, box.right - 1, box.bottom - 1);
    int y = box.top + pad;
    for (int i = 0; i < count; i++) {
        nocturne_ui_draw_text_f(font, lines[i], box.left + pad, y, kTextColor, 0, scale);
        y += pitch;
    }
    nocturne_ui_pop_clip();
}

// The icon of the round the selected gun takes, or none.
CAlphaBitmap *ammo_icon(CWeapon *weapon) {
    CDemonActor *actor = &weapon->base;
    CAlphaBitmap *icon = nullptr;
    if (core_actor_cpp_isOfClass_FUN_0040c6d0(actor, (char *)"CTommyGun") != 0)
        icon = &g_TommyClipIconBitmap;
    if (core_actor_cpp_isOfClass_FUN_0040c6d0(actor, (char *)"CShotgun") != 0)
        icon = &g_ShotShellIconBitmap;
    if (core_actor_cpp_isOfClass_FUN_0040c6d0(actor, (char *)"CElephantGun") != 0)
        icon = &g_ShotShellIconBitmap;
    if (core_actor_cpp_isOfClass_FUN_0040c6d0(actor, (char *)"CGun") != 0) {
        switch (weapon->ammo_type) {
        case 0:
            icon = &g_BulletIconBitmap;
            break;
        case 1:
            icon = &g_HolyBulletIconBitmap;
            break;
        case 3:
            icon = &g_LithiumIconBitmap;
            break;
        case 7:
            icon = &g_MercuryBulletIconBitmap;
            break;
        case 8:
            icon = &g_SilverBulletIconBitmap;
            break;
        default:
            break;
        }
    }
    return icon;
}

// Whether the selected weapon shows no ammo count.
bool hides_ammo(CInventory *inventory) {
    CDemonActor *weapon = &inventory->selected_weapon->base;
    if (core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70(inventory, weapon, 3) != 0)
        return true;
#if !NOCTURNE_AUTHENTIC_HERO_WEAPON
    return nocturne_hero_weapon_hides_ammo(inventory->selected_weapon) != 0;
#else
    return false;
#endif
}

// The weapon's name and description; with the round it takes, for a gun.
void weapon_description(CInventory *inventory, char *out, size_t size) {
    CDemonActor *weapon = &inventory->selected_weapon->base;
    char *name = core_inv_cpp_getItemDisplayName_FUN_004fcf00(weapon);
    char *description = core_inv_cpp_getItemDescription_FUN_004fcf70(weapon);
    if (core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70(inventory, weapon, 3) == 0 &&
        (core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70(inventory, weapon, 0) != 0 ||
         core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70(inventory, weapon, 1) != 0)) {
        char *round = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&inventory->ammo_ptr->base);
        std::snprintf(out, size, "%s\n\n%s %s%s", name, description, round,
                      support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)" are loaded."));
        return;
    }
    std::snprintf(out, size, "%s\n\n%s", name, description);
}

void weapon_text(CInventory *inventory, const Screen &s, const Space &space, CBitFont *font) {
    const Panel p = panel(inventory, true);
    const Rect box = nocturne_hud::from_corner(s.frame, space, p.width, p.height);
    const int pad = (int)std::lround((float)p.text_pad * space.scale);
    char text[256];
    CLightGun *light_gun = (CLightGun *)core_actor_cpp_castToClassHash_FUN_0040c790(
        &inventory->selected_weapon->base, g_CLightGunClassInfo.name_hash);
    if (light_gun != nullptr) {
        std::snprintf(text, sizeof(text), "%d%%",
                      (int)std::lround((double)light_gun->charge_ratio * 100.0));
        draw_in_corner(font, text, box, pad, s.text);
    } else if (!hides_ammo(inventory)) {
        CAlphaBitmap *icon = ammo_icon(inventory->selected_weapon);
        if (icon != nullptr) {
            const int inset = (int)std::lround((float)p.ammo_inset * space.scale);
            nocturne_ui_blit_alpha(icon, box.right - inset, box.bottom - inset,
                                   fade_alpha(inventory->weapon_highlight_timer), s.ui);
        }
        const int count = inventory->selected_weapon->ammo_count;
        if (inventory->ammo_detail_timer <= 0.0f || inventory->render_mode_flag != 0)
            std::snprintf(text, sizeof(text), "%d", count);
        else
            std::snprintf(text, sizeof(text), "%s %d",
                          core_inv_cpp_getItemDisplayName_FUN_004fcf00(&inventory->ammo_ptr->base),
                          count);
        draw_in_corner(font, text, box, pad, s.text);
    }
    if (inventory->render_mode_flag == 0)
        return;
    weapon_description(inventory, text, sizeof(text));
    draw_description(font, text, g_InventoryWrappedTextLines, box, pad,
                     (int)std::lround((float)p.wrap_margin * space.scale), s.text);
}

void item_text(CInventory *inventory, const Screen &s, const Space &space, CBitFont *font) {
    const Panel p = panel(inventory, false);
    const Rect box = nocturne_hud::from_corner(s.frame, space, p.width, p.height);
    const int pad = (int)std::lround((float)p.text_pad * space.scale);
    char text[256];
    CHealthItem *health = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c790(
        inventory->selected_item, g_CHealthItemClassInfo.name_hash);
    if (health != nullptr) {
        std::snprintf(text, sizeof(text), "%d x%3.0f%%", health->use_count,
                      (double)health->hp_restored);
        draw_in_corner(font, text, box, pad, s.text);
    }
    CDemonActor *reel = core_actor_cpp_castToClassHash_FUN_0040c790(
        inventory->selected_item, g_CFilmReelClassInfo.name_hash);
    if (reel != nullptr) {
        std::snprintf(text, sizeof(text), "%s", core_inv_cpp_getItemDisplayName_FUN_004fcf00(reel));
        draw_in_corner(font, text, box, pad, s.text);
    }
    if (inventory->render_mode_flag == 0)
        return;
    std::snprintf(text, sizeof(text), "%s\n\n%s",
                  core_inv_cpp_getItemDisplayName_FUN_004fcf00(inventory->selected_item),
                  core_inv_cpp_getItemDescription_FUN_004fcf70(inventory->selected_item));
    draw_description(font, text, g_InventoryWrappedTextLines2, box, pad,
                     (int)std::lround((float)p.wrap_margin * space.scale), s.text);
}

// The battery gauge in the frame's bottom-left corner while a light is on.
void battery(const CInventory *inventory, const Screen &s) {
    if (g_CGamePtr->flashlight_active == 0 && g_CGamePtr->goggles_active == 0)
        return;
    const int ui = s.ui;
    const int bottom = s.frame.bottom - 6 * ui;
    const int top = s.frame.bottom - 0x21 * ui;
    const int level =
        (int)std::lround((float)bottom + (float)(top - bottom) * inventory->battery_charge * 0.01f);
    engine_2d_c_fillRectColor_FUN_00403170(s.frame.left + 6 * ui, level,
                                           s.frame.left + 0x10 * ui, bottom, 2);
    nocturne_ui_blit_alpha(&g_BatteryIconBitmap, s.frame.left + 4 * ui,
                           s.frame.bottom - 0x24 * ui, kOpaque, ui);
}

// The health bar in the frame's top-right corner while the inventory is up.
void health_bar(const CInventory *inventory, const Screen &s) {
    float timer = inventory->inventory_display_timer;
    if (timer < inventory->item_highlight_timer)
        timer = inventory->item_highlight_timer;
    if (timer <= 0.0f)
        return;
    const CCharacter &hero = g_HeroActors[g_LocalHeroIndex]->base;
#if NOCTURNE_AUTHENTIC_HERO_ACTIONS
    float health = hero.hit_points * 0.01f;
#else
    float health = hero.hit_points / hero.max_hit_points;
#endif
    if (health < 0.0f)
        health = 0.0f;
    if (health > 1.0f)
        health = 1.0f;
    const bool small = g_WindowHeight < kSmallScreen;
    const int height = small ? 0x1f : 0x3f;
    const int width = small ? 0xd : 0x1b;
    const int ui = s.ui;
    const int alpha = fade_alpha(timer) / 2;
    const Rect bar = nocturne_hud::place(s.frame, nocturne_hud::TOP_RIGHT, width * ui, height * ui,
                                         4 * ui, 4 * ui);
    const int empty = (int)std::lround((float)height - (float)height * health);
    nocturne_ui_blit_alpha_rect(&g_HealthBar1Bitmap, bar.left, bar.top + empty * ui, 0, empty,
                                width - 1, height, alpha, ui);
    nocturne_ui_blit_alpha(&g_HealthBar2Bitmap, bar.left, bar.top, alpha, ui);
}

// The pickup's help sentence, top-left under the letterbox.
void pickup_help(CInventory *inventory, const Screen &s, const Space &space) {
    const float timer = inventory->message_display_timer;
    if (timer <= 0.0f)
        return;
    engine_3d_c_setRenderAlpha_FUN_00406d80(fade_alpha(timer));
    const bool small = g_WindowHeight < kSmallScreen;
    CBitFont *font = small ? g_MicroFont : g_SmallEditorFont;
    // OS text has no micro size to stand in for the micro font.
    if (font == g_MicroFont && g_UseOSFonts != 0)
        return;
    const int ui = s.ui;
    const int panel_height = small ? g_InventoryHeight / 2 : g_InventoryHeight;
    const int width =
        s.frame.width() - (int)std::lround((float)panel_height * space.scale) - 4 * ui;
    int pitch = 0;
    const int count = nocturne_ui_wrap_to_width_f(font, inventory->message_text,
                                                  g_InventoryWrappedTextLines3[0], kMaxLines,
                                                  0x100, width, s.text, &pitch);
    int y = nocturne_hud_letterbox_height() + 4 * ui;
    for (int i = 0; i < count; i++) {
        nocturne_ui_draw_text_f(font, g_InventoryWrappedTextLines3[i], s.frame.left + 4 * ui, y,
                                kTextColor, 0, s.text);
        y += pitch;
    }
}

// --- the letterbox --------------------------------------------------------------

// The subtitles' font, by the screen's height, and the whole stretch of the bar
// they sit in.
CBitFont *subtitle_font(int height) {
    if (height < kSmallScreen)
        return g_UseOSFonts != 0 ? g_SmallEditorFont : g_MicroFont;
    return height < kShortScreen ? g_TinyFont : g_MediumFont;
}

// A bar at full extension, never too short for two subtitle lines and half a
// line of room.
int full_bar() {
    const int height = g_WindowHeight;
    const int pitch = nocturne_ui_char_height_f(subtitle_font(height), kMeasureGlyph,
                                                nocturne_ui_text_scale(height));
    return nocturne_hud::letterbox_bar(g_WindowWidth, height, pitch * 2 + pitch / 2);
}

// --- the overlay --------------------------------------------------------------

// CGame::displayMessage's line, centred above the bottom letterbox.
void message_line(CGame *game, const Screen &s) {
    if (std::fabs(game->message_timer) == 0.0f)
        return;
    engine_3d_c_setRenderAlpha_FUN_00406d80(fade_alpha(game->message_timer));
    const bool small = g_CDemonCameraInstance.framebuffer_width < kShortScreen;
    CBitFont *font = small ? g_SmallEditorFont : g_ThemeFont;
    int pitch = 0;
    const int count =
        nocturne_ui_wrap_to_width_f(font, game->message_text, g_WrappedTextBuffer[0], kMaxLines,
                                    0x100, s.frame.width() * 9 / 10, s.text, &pitch);
    int y = s.frame.bottom - count * pitch - nocturne_hud_letterbox_height() - pitch;
    if (small)
        y -= (int)std::lround(7.0f * s.text);
    for (int i = 0; i < count; i++) {
        const int width = nocturne_ui_text_width_f(font, g_WrappedTextBuffer[i], s.text);
        nocturne_ui_draw_text_f(font, g_WrappedTextBuffer[i],
                                nocturne_hud::centre_x(s.frame, width), y, kTextColor, 0, s.text);
        y += pitch;
    }
}

CBitFont *screen_font() {
    if (g_WindowHeight < kSmallScreen)
        return g_SmallEditorFont;
    return g_WindowHeight < kShortScreen ? g_TinyFont : g_MediumFont;
}

// The chapter's year and name, bottom-left above the letterbox.
void chapter_title(const Screen &s) {
    if (g_OverlayDisplayTimer <= 0.0f)
        return;
    CBitFont *font = screen_font();
    const int height = nocturne_ui_char_height_f(font, kMeasureGlyph, s.text);
    const int gap = (int)std::lround(
        (float)engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(font, kMeasureGlyph) * s.text);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
    char text[300];
    std::snprintf(text, sizeof(text), "%d - %s", g_ChapterDisplayYear, g_ChapterDisplayName);
    nocturne_ui_draw_text_f(font, text, s.frame.left + gap * 2,
                            s.frame.bottom - nocturne_hud_letterbox_height() - height - gap,
                            kTextColor, 0, s.text);
}

// The characters' health bars, stacked up from the frame's bottom-left.
void status_bars(CGame *game, const Screen &s) {
    if (game->letterbox_mode != 0 || game->status_display_count <= 0)
        return;
    const int width = s.frame.width();
    const int height = s.frame.height();
    CBitFont *font = g_SmallEditorFont;
    if (width > 0x280)
        font = g_TinyFont;
    if (width > 800)
        font = g_MediumFont;
    int bar_height = height / 0x28;
    const int glyph = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(font, kMeasureGlyph);
    if (bar_height < glyph)
        bar_height = glyph;
    const int left = s.frame.left + width / 0x50;
    const int right = left + width / 4;
    int bottom = s.frame.bottom - height / 0x50;
    for (int i = 0; i < game->status_display_count; i++) {
        const int top = bottom - bar_height;
        const float value = game->status_bar_values[i];
        int color = 2;
        if (value < 0.6f)
            color = 0xfb;
        if (value < 0.35f)
            color = 1;
#if NOCTURNE_AUTHENTIC_STATUS_BAR_WIDTH
        const int bar_right = right;
#else
        const int bar_right = nocturne_status_bar_right(game->status_bar_names[i], left, right);
#endif
        engine_2d_c_fillRectWithBorder_FUN_00403200(left, top, bar_right, bottom, 0, 0);
        const int filled = (int)std::lround((float)(bar_right - left + 1) * value);
        if (filled > 0)
            engine_2d_c_fillRectColor_FUN_00403170(left, top, left + filled, bottom, color);
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(font, game->status_bar_names[i], left, top,
                                                       kTextColor, 0);
        bottom -= bar_height * 3 / 2;
    }
}

} // namespace

extern "C" void nocturne_hud_inventory(CInventory *inventory) {
    if (!hud_owner(inventory))
        return;
    if (g_WindowHeight != g_InventoryScreenHeight)
        core_inv_cpp_loadAssets_FUN_004fd220();
    const int external = g_UseExternalRenderer;
    g_UseExternalRenderer = 0;
    const Screen s = screen();
    const Space space = panel_space(s.frame);
    CBitFont *font = panel_font(inventory);
    if (inventory->selected_weapon != nullptr && inventory->weapon_highlight_timer > 0.0f)
        weapon_text(inventory, s, space, font);
    if (inventory->selected_item != nullptr && inventory->item_highlight_timer > 0.0f)
        item_text(inventory, s, space, font);
    battery(inventory, s);
    health_bar(inventory, s);
    pickup_help(inventory, s, space);
    g_UseExternalRenderer = external;
}

extern "C" void nocturne_hud_inventory_panels(CInventory *inventory) {
    if (!hud_owner(inventory))
        return;
    if (g_WindowHeight != g_InventoryScreenHeight)
        core_inv_cpp_loadAssets_FUN_004fd220();
    const bool weapon =
        inventory->selected_weapon != nullptr && inventory->weapon_highlight_timer > 0.0f;
    const bool item = inventory->selected_item != nullptr && inventory->item_highlight_timer > 0.0f;
    if (!weapon && !item)
        return;
    const Space space = panel_space(screen().frame);
    // Without a device the camera's space is the screen's, as it is below 480
    // lines, and the panels are drawn where they are.
    const int overlay = nocturne_trigl_device_begin_overlay(space.scale, space.scale,
                                                            space.offset_x, space.offset_y);
    if (weapon)
        draw_panel(inventory, panel(inventory, true), &inventory->selected_weapon->base,
                   1.5707964f, inventory->weapon_highlight_timer);
    if (item)
        draw_panel(inventory, panel(inventory, false), inventory->selected_item, 0.0f,
                   inventory->item_highlight_timer);
    if (overlay)
        nocturne_trigl_device_end_overlay();
}

extern "C" void nocturne_hud_overlay(CGame *game) {
    const Screen s = screen();
    message_line(game, s);
    chapter_title(s);
    status_bars(game, s);
}

extern "C" int nocturne_hud_letterbox_height(void) {
    return (int)std::lround((float)full_bar() * g_ScriptTimeScale);
}

extern "C" void nocturne_hud_subtitles(CScript *script) {
    // The bars slide in over 0.35 seconds while the letterbox is up, and out
    // over the same once it is down.
    const float step = core_charactr_cpp_getGameDeltaTime_FUN_0042f9e0(g_CGamePtr) / 0.35f;
    if (g_CGamePtr->letterbox_mode == 0) {
        g_ScriptTimeScale -= step;
    } else {
        g_PreviousLetterboxMode = g_CGamePtr->letterbox_mode;
        g_ScriptTimeScale += step;
    }
    if (g_ScriptTimeScale < 0.0f)
        g_ScriptTimeScale = 0.0f;
    if (g_ScriptTimeScale > 1.0f)
        g_ScriptTimeScale = 1.0f;

    const int width = g_WindowWidth;
    const int height = g_WindowHeight;
    const int bar = nocturne_hud_letterbox_height();
    if (bar > 0) {
#if !NOCTURNE_AUTHENTIC_NETPLAY
        if (g_ModalDialogActive != 0)
            nocturne_ui_push_screen_clip();
#endif
        // Letterbox mode 2 keeps the top of the shot.
        if (g_PreviousLetterboxMode != 2)
            engine_2d_c_fillRectColor_FUN_00403170(0, 0, width - 1, bar - 1, 0);
        engine_2d_c_fillRectColor_FUN_00403170(0, height - bar, width - 1, height - 1, 0);
#if !NOCTURNE_AUTHENTIC_NETPLAY
        if (g_ModalDialogActive != 0)
            nocturne_ui_pop_clip();
#endif
    }
    const int clip_top = g_ClipTop;
    if (script->current_message[0] != '\0' && g_CGamePtr->subtitle_mode != 0) {
#if !NOCTURNE_AUTHENTIC_NETPLAY
        if (g_ModalDialogActive != 0)
            nocturne_ui_push_screen_clip();
#endif
        CBitFont *font = subtitle_font(height);
        const Screen s = screen();
        const float scale = s.text;
        int pitch = 0;
        const int count =
            nocturne_ui_wrap_to_width_f(font, script->current_message, g_ScriptSubtitleLines[0],
                                        kMaxLines, 0x400, s.frame.width() * 9 / 10, scale, &pitch);
        // Clipped to the bar while the block fits in a full one; a bar too
        // small to hold it, or still sliding in, leaves it the screen.
        const int block = pitch * count;
        if (bar > 0 && block <= full_bar())
            nocturne_ui_push_clip(0, height - bar, width - 1, height - 1);
        else
            nocturne_ui_push_clip(0, 0, width - 1, height - 1);
        int y = (height * 2 - bar - block) / 2;
        if (y > height - block)
            y = height - block;
        engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
        for (int i = 0; i < count; i++) {
            const int line_width =
                nocturne_ui_text_width_f(font, g_ScriptSubtitleLines[i], scale);
            nocturne_ui_draw_text_f(font, g_ScriptSubtitleLines[i],
                                    nocturne_hud::centre_x(s.frame, line_width), y, kTextColor, 0,
                                    scale);
            y += pitch;
        }
        nocturne_ui_pop_clip();
#if !NOCTURNE_AUTHENTIC_NETPLAY
        if (g_ModalDialogActive != 0)
            nocturne_ui_pop_clip();
#endif
    }
    g_ClipTop = clip_top;
}

extern "C" void nocturne_hud_death_banner(char *text, int at_top) {
    const Screen s = screen();
    const float scale = nocturne_ui_text_scale_supported() ? s.text : 1.0f;
    const int height = (int)std::lround((float)g_MediumFont->max_char_height * scale);
    const int y = at_top != 0 ? s.frame.top + height * 2
                              : s.frame.top + (s.frame.height() - height) / 4;
    const int width = nocturne_ui_text_width_f(g_MediumFont, text, scale);
    nocturne_ui_draw_text_f(g_MediumFont, text, nocturne_hud::centre_x(s.frame, width), y,
                          (int)g_ColorCubeLookup[0x7c00], 0, scale);
}

#else

extern "C" void nocturne_hud_inventory(CInventory *) {}
extern "C" void nocturne_hud_inventory_panels(CInventory *) {}
extern "C" void nocturne_hud_overlay(CGame *) {}
extern "C" void nocturne_hud_subtitles(CScript *) {}
extern "C" int nocturne_hud_letterbox_height(void) {
    return 0;
}
extern "C" void nocturne_hud_death_banner(char *, int) {}

#endif // !NOCTURNE_AUTHENTIC_HUD

// =============================================================================
// HUD — every element in its box
// =============================================================================
//
// The stand's screen is 1280x720 over the camera's 640x480, the frame the whole
// screen, and the HUD and text scales 2. The camera's space lands on the frame's corner
// at 1.5 to a unit, 320 pixels in: the inventory's 96-unit quick panel is the
// box from (1136, 576) to the corner, its 16-unit pad 24 pixels and its ammo
// icon 54 pixels in. Text is 8 pixels a glyph and 10 a line, times its scale.

#include "game/hud.h"
#include "hud_support.h"
#include "nocturne_test.h"

#include <cmath>
#include <string>

namespace {

using hud_support::stand;

CInventory *inv() {
    return hud_support::inventory.get();
}

void fresh() {
    stand.reset();
    stand.ui_scale = 2;
    stand.text_scale = 2.0f;
}

void select_weapon(CDemonActorType *type, float timer = 2.0f) {
    hero_support::give_class(&hud_support::weapon->base, type);
    inv()->selected_weapon = hud_support::weapon.get();
    inv()->weapon_highlight_timer = timer;
}

void select_item(CDemonActor *item, float timer = 2.0f) {
    inv()->selected_item = item;
    inv()->item_highlight_timer = timer;
}

hud_support::Text only(const std::string &text) {
    const std::vector<hud_support::Text> found = hud_support::texts_of(text);
    CHECK_EQ((int)found.size(), 1);
    return found.empty() ? hud_support::Text{"", -1, -1, -1, nullptr} : found[0];
}

} // namespace

// --- the inventory panels ----------------------------------------------------------

// The panels go out in an overlay pass with the camera's space on the frame's
// corner, at the shipped camera-space coordinates: the weapon's quick square
// with its model turned a quarter, then the item's.
NOCTURNE_TEST(the_panels_are_drawn_over_the_scene_in_the_frames_corner) {
    fresh();
    select_weapon(&hud_support::sword_type, 0.5f);
    select_item(&hud_support::health->base);
    nocturne_hud_inventory_panels(inv());
    CHECK_EQ((int)stand.overlays.size(), 1);
    CHECK_EQ(stand.overlays[0].scale, 1.5f);
    CHECK_EQ(stand.overlays[0].scale_y, 1.5f);
    CHECK_EQ(stand.overlays[0].x, 320.0f);
    CHECK_EQ(stand.overlays[0].y, 0.0f);
    CHECK_EQ(stand.overlay_ends, 1);
    CHECK_EQ((int)stand.backdrops.size(), 2);
    const hud_support::Backdrop &back = stand.backdrops[0];
    CHECK(!back.item_style);
    CHECK_EQ(back.x1, 544);
    CHECK_EQ(back.y1, 384);
    CHECK_EQ(back.x2, 639);
    CHECK_EQ(back.y2, 479);
    CHECK_EQ(back.alpha, (int)std::lround(0.5f * 65535.0f) * 2 / 3);
    CHECK_EQ(stand.models[0].x, 552);
    CHECK_EQ(stand.models[0].y, 392);
    CHECK_EQ(stand.models[0].size, 0x50);
    CHECK_EQ(stand.models[0].rotation, 1.5707964f);
    CHECK_EQ(stand.models[1].item, &hud_support::health->base);
    CHECK_EQ(stand.models[1].x, 560);
    CHECK_EQ(stand.models[1].size, 0x40);
    CHECK_EQ(stand.models[1].alpha, 0xffff);
    CHECK_EQ(stand.loads, 0);
}

// The description view is the panel's own width, on the item backdrop. A short
// screen halves the quick panels and their models; a pass that cannot open
// leaves the panels in the camera's space as they are, with nothing to close.
NOCTURNE_TEST(the_panels_follow_the_view_and_the_screen) {
    fresh();
    inv()->render_mode_flag = 1;
    select_item(&hud_support::reel->base);
    nocturne_hud_inventory_panels(inv());
    CHECK(stand.backdrops[0].item_style);
    CHECK_EQ(stand.backdrops[0].x1, 400);

    fresh();
    g_WindowHeight = 360;
    g_WindowWidth = 480;
    g_CDemonCameraInstance.framebuffer_width = 480;
    g_CDemonCameraInstance.framebuffer_height = 360;
    stand.overlay_opens = 0;
    select_weapon(&hud_support::sword_type);
    select_item(&hud_support::health->base);
    nocturne_hud_inventory_panels(inv());
    CHECK_EQ(stand.loads, 1);
    CHECK_EQ(stand.backdrops[0].x1, 480 - 48);
    CHECK_EQ(stand.models[0].size, 0x28);
    CHECK_EQ(stand.models[0].x, 480 - 0x28 - 4);
    CHECK_EQ(stand.models[1].size, 0x20);
    CHECK_EQ(stand.models[1].x, 480 - 0x20 - 8);
    CHECK_EQ(stand.overlay_ends, 0);
}

// Nothing is drawn for another player's inventory, under the letterbox, or with
// nothing selected and lit.
NOCTURNE_TEST(the_panels_need_something_to_show) {
    fresh();
    select_weapon(&hud_support::sword_type, 0.0f);
    select_item(nullptr);
    nocturne_hud_inventory_panels(inv());
    inv()->selected_weapon = nullptr;
    select_item(&hud_support::health->base, 0.0f);
    nocturne_hud_inventory_panels(inv());
    g_CGamePtr->letterbox_mode = 1;
    select_item(&hud_support::health->base);
    nocturne_hud_inventory_panels(inv());
    g_CGamePtr->letterbox_mode = 0;
    inv()->owner = nullptr;
    nocturne_hud_inventory_panels(inv());
    nocturne_hud_inventory(inv());
    CHECK_EQ((int)stand.overlays.size(), 0);
    CHECK_EQ((int)stand.texts.size(), 0);
}

// --- the inventory's text -------------------------------------------------------

// The count sits in the weapon panel's corner, 24 in, and the round's icon 54
// in; the renderer is set aside while the 2D is drawn and given back.
NOCTURNE_TEST(the_ammo_sits_in_the_weapon_panels_corner) {
    fresh();
    select_weapon(&hud_support::tommy_type, 0.25f);
    hud_support::weapon->ammo_count = 12;
    hud_support::weapon->ammo_type = (EAmmoType)2;
    nocturne_hud_inventory(inv());
    const hud_support::Text count = only("12");
    CHECK_EQ(count.x, 1280 - 24 - 32);
    CHECK_EQ(count.y, 720 - 24 - 20);
    CHECK_EQ(count.scale, 2);
    CHECK_EQ(stand.blits[0].bitmap, &g_TommyClipIconBitmap);
    CHECK_EQ(stand.blits[0].x, 1280 - 54);
    CHECK_EQ(stand.blits[0].y, 720 - 54);
    CHECK_EQ(stand.blits[0].alpha, (int)std::lround(0.25f * 65535.0f));
    CHECK_EQ(g_UseExternalRenderer, 1);
}

// Each gun's round, by class and by what it is loaded with; a weapon of none of
// them has no icon but its count.
NOCTURNE_TEST(each_gun_shows_its_round) {
    struct Case {
        CDemonActorType *type;
        int ammo;
        const CAlphaBitmap *icon;
    };
    const Case cases[] = {
        {&hud_support::shotgun_type, 0, &g_ShotShellIconBitmap},
        {&hud_support::elephant_type, 0, &g_ShotShellIconBitmap},
        {&g_CGunClassInfo, 0, &g_BulletIconBitmap},
        {&g_CGunClassInfo, 1, &g_HolyBulletIconBitmap},
        {&g_CGunClassInfo, 3, &g_LithiumIconBitmap},
        {&g_CGunClassInfo, 7, &g_MercuryBulletIconBitmap},
        {&g_CGunClassInfo, 8, &g_SilverBulletIconBitmap},
    };
    for (const Case &c : cases) {
        fresh();
        select_weapon(c.type);
        hud_support::weapon->ammo_type = (EAmmoType)c.ammo;
        nocturne_hud_inventory(inv());
        CHECK_EQ_AT((int)stand.blits.size(), 1, std::to_string(c.ammo));
        if (!stand.blits.empty())
            CHECK_EQ_AT(stand.blits[0].bitmap, c.icon, std::to_string(c.ammo));
    }
    fresh();
    select_weapon(&g_CGunClassInfo);
    hud_support::weapon->ammo_type = (EAmmoType)2;
    nocturne_hud_inventory(inv());
    CHECK_EQ((int)stand.blits.size(), 0);
    CHECK_EQ((int)hud_support::texts_of("0").size(), 1);
}

// Freshly switched rounds are named beside the count, except in the
// description view; a light gun shows its charge instead; a melee weapon, or
// one its hero cannot load, shows no count.
NOCTURNE_TEST(the_count_says_what_it_counts) {
    fresh();
    select_weapon(&hud_support::sword_type);
    hud_support::weapon->ammo_count = 3;
    inv()->ammo_detail_timer = 1.0f;
    stand.names[&hud_support::round->base] = "Silver";
    nocturne_hud_inventory(inv());
    CHECK_EQ(only("Silver 3").x, 1280 - 24 - 8 * 8 * 2);

    fresh();
    inv()->selected_weapon = &hud_support::light_gun->base;
    inv()->weapon_highlight_timer = 1.0f;
    hud_support::light_gun->charge_ratio = 0.426f;
    nocturne_hud_inventory(inv());
    only("43%");

    fresh();
    select_weapon(&hud_support::sword_type);
    stand.categories[3] = 1;
    nocturne_hud_inventory(inv());
    fresh();
    select_weapon(&hud_support::sword_type);
    stand.hides_ammo = 1;
    nocturne_hud_inventory(inv());
    CHECK_EQ((int)stand.texts.size(), 0);
}

// The description view names no round beside the count, and is never halved,
// even on a short screen.
NOCTURNE_TEST(the_description_view_counts_plainly_at_full_size) {
    fresh();
    g_WindowHeight = 360;
    g_InventoryScreenHeight = 360;
    inv()->render_mode_flag = 1;
    inv()->ammo_detail_timer = 1.0f;
    select_weapon(&hud_support::sword_type);
    nocturne_hud_inventory(inv());
    CHECK(only("0").font == &hud_support::small_font);
}

// An inventory whose selections have faded draws neither panel's text, and a
// screen it has not loaded its art for loads it first; a weapon alone is drawn
// alone.
NOCTURNE_TEST(faded_selections_draw_nothing) {
    fresh();
    g_InventoryScreenHeight = 480;
    select_weapon(&hud_support::sword_type, 0.0f);
    select_item(&hud_support::health->base, 0.0f);
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.loads, 1);
    CHECK_EQ((int)stand.texts.size(), 0);

    fresh();
    select_weapon(&hud_support::sword_type);
    nocturne_hud_inventory_panels(inv());
    CHECK_EQ((int)stand.models.size(), 1);
}

// In the description view the text is wrapped to the panel less its margin,
// drawn from its top-left 24 in, at the text scale, and clipped to it. A gun says what it is loaded with.
NOCTURNE_TEST(a_description_is_written_in_its_panel) {
    fresh();
    inv()->render_mode_flag = 1;
    select_weapon(&hud_support::sword_type);
    stand.categories[0] = 1;
    stand.names[&hud_support::weapon->base] = "Pistol";
    stand.names[&hud_support::round->base] = "Silver";
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.wraps[0].width, 360 - 168);
    CHECK_EQ(stand.wraps[0].scale, 2.0f);
    CHECK_EQ(stand.clips[0].left, 920);
    CHECK_EQ(stand.clips[0].top, 576);
    CHECK_EQ(stand.clips[0].right, 1279);
    CHECK_EQ(stand.clips[0].bottom, 719);
    CHECK_EQ(stand.pops, 1);
    const hud_support::Text name = only("Pistol");
    CHECK_EQ(name.x, 944);
    CHECK_EQ(name.y, 600);
    CHECK_EQ(only("about Silver are loaded.").y, 640);

    // Category 1 the same; category 3 and any other, the description alone.
    for (int category : {1, 3, 5}) {
        fresh();
        inv()->render_mode_flag = 1;
        select_weapon(&hud_support::sword_type);
        stand.categories[category] = 1;
        nocturne_hud_inventory(inv());
        CHECK_EQ_AT((int)hud_support::texts_of("about").size(), category == 1 ? 0 : 1,
                    std::to_string(category));
    }
}

// The item's count or reel name in its corner, and its description in the
// description view.
NOCTURNE_TEST(the_item_panel_has_its_count_and_description) {
    fresh();
    select_item(&hud_support::health->base);
    hud_support::health->use_count = 2;
    hud_support::health->hp_restored = 25.0f;
    nocturne_hud_inventory(inv());
    CHECK_EQ(only("2 x 25%").y, 720 - 24 - 20);

    fresh();
    inv()->render_mode_flag = 1;
    select_item(&hud_support::reel->base);
    stand.names[&hud_support::reel->base] = "Reel";
    nocturne_hud_inventory(inv());
    CHECK_EQ((int)hud_support::texts_of("Reel").size(), 2);
    CHECK_EQ(only("about").x, 944);
    CHECK_EQ(stand.clips[0].left, 920);
}

// The battery gauge in the frame's bottom-left while a light is on; none
// without.
NOCTURNE_TEST(the_battery_sits_bottom_left_while_a_light_is_on) {
    fresh();
    g_CGamePtr->flashlight_active = 1;
    inv()->battery_charge = 50.0f;
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.fills[0].x1, 12);
    CHECK_EQ(stand.fills[0].y1, 681);
    CHECK_EQ(stand.fills[0].x2, 32);
    CHECK_EQ(stand.fills[0].y2, 708);
    CHECK_EQ(stand.blits[0].bitmap, &g_BatteryIconBitmap);
    CHECK_EQ(stand.blits[0].x, 8);
    CHECK_EQ(stand.blits[0].y, 648);

    fresh();
    g_CGamePtr->goggles_active = 1;
    stand.picture_left = 160;
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.blits[0].x, 168);
}

// The health bar in the frame's top-right while the inventory is up, filled to
// the hero's health, clamped; halved on a short screen.
NOCTURNE_TEST(the_health_bar_sits_top_right) {
    fresh();
    inv()->inventory_display_timer = 0.5f;
    inv()->item_highlight_timer = 0.25f;
    g_HeroActors[0]->base.hit_points = 50.0f;
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.blits[0].bitmap, &g_HealthBar1Bitmap);
    CHECK_EQ(stand.blits[0].x, 1280 - 8 - 54);
    CHECK_EQ(stand.blits[0].y, 8 + 32 * 2);
    CHECK_EQ(stand.blits[0].alpha, (int)std::lround(0.5f * 65535.0f) / 2);
    CHECK_EQ(stand.blits[1].y, 8);

    fresh();
    inv()->item_highlight_timer = 2.0f;
    g_HeroActors[0]->base.hit_points = 500.0f;
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.blits[0].y, 8);
    fresh();
    inv()->item_highlight_timer = 2.0f;
    g_HeroActors[0]->base.hit_points = -5.0f;
    g_WindowHeight = 360;
    g_InventoryScreenHeight = 360;
    stand.ui_scale = 1;
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.blits[0].x, 1280 - 4 - 0xd);
    CHECK_EQ(stand.blits[0].y, 4 + 0x1f);
}

// The pickup help top-left under the letterbox, wrapped short of the panel,
// fading in its last second; on a short screen in the micro font, which OS text
// has no size for.
NOCTURNE_TEST(the_pickup_help_sits_under_the_letterbox) {
    fresh();
    inv()->message_display_timer = 0.5f;
    std::snprintf(inv()->message_text, sizeof(inv()->message_text), "%s", "Press\nUse");
    g_ScriptTimeScale = 1.0f;
    nocturne_hud_inventory(inv());
    CHECK_EQ(stand.alphas[0], (int)std::lround(0.5f * 65535.0f));
    CHECK_EQ(stand.wraps[0].width, 1280 - 144 - 8);
    const hud_support::Text press = only("Press");
    CHECK_EQ(press.x, 8);
    CHECK_EQ(press.y, 101 + 8);
    CHECK_EQ(only("Use").y, 101 + 8 + 20);
    CHECK(press.font == &hud_support::small_font);

    fresh();
    inv()->message_display_timer = 2.0f;
    std::snprintf(inv()->message_text, sizeof(inv()->message_text), "%s", "Help");
    g_WindowHeight = 360;
    g_InventoryScreenHeight = 360;
    nocturne_hud_inventory(inv());
    CHECK(only("Help").font == &hud_support::micro_font);
    fresh();
    inv()->message_display_timer = 2.0f;
    g_WindowHeight = 360;
    g_InventoryScreenHeight = 360;
    g_UseOSFonts = 1;
    nocturne_hud_inventory(inv());
    CHECK_EQ((int)stand.texts.size(), 0);
}

// --- the overlay ----------------------------------------------------------------

// The message line centred in the frame above the bottom letterbox, at the HUD
// scale; with a small camera, in the small font and 7 higher. Nothing with no
// message.
NOCTURNE_TEST(the_message_line_is_centred_above_the_letterbox) {
    fresh();
    g_CGamePtr->message_timer = 3.0f;
    std::snprintf(g_CGamePtr->message_text, sizeof(g_CGamePtr->message_text), "%s", "Found");
    nocturne_hud_overlay(g_CGamePtr);
    CHECK_EQ(stand.wraps[0].width, 1152);
    const hud_support::Text found = only("Found");
    CHECK_EQ(found.x, (1280 - 80) / 2);
    CHECK_EQ(found.y, 720 - 20 - 20);
    CHECK(found.font == &hud_support::theme_font);

    fresh();
    g_CGamePtr->message_timer = -0.5f;
    g_CDemonCameraInstance.framebuffer_width = 400;
    stand.picture_left = 160;
    stand.picture_right = 1120;
    std::snprintf(g_CGamePtr->message_text, sizeof(g_CGamePtr->message_text), "%s", "Hi");
    nocturne_hud_overlay(g_CGamePtr);
    const hud_support::Text hi = only("Hi");
    CHECK(hi.font == &hud_support::small_font);
    CHECK_EQ(hi.y, 720 - 20 - 20 - 14);
    CHECK_EQ(hi.x, 160 + (960 - 32) / 2);

    fresh();
    nocturne_hud_overlay(g_CGamePtr);
    CHECK_EQ((int)stand.texts.size(), 0);
}

// The chapter's year and name bottom-left above the letterbox, in the screen's
// font.
NOCTURNE_TEST(the_chapter_title_sits_bottom_left) {
    const int heights[] = {720, 400, 300};
    CBitFont *const fonts[] = {&hud_support::medium_font, &hud_support::tiny_font,
                               &hud_support::small_font};
    for (int i = 0; i < 3; i++) {
        fresh();
        g_WindowHeight = heights[i];
        g_OverlayDisplayTimer = 1.0f;
        g_ChapterDisplayYear = 1931;
        std::snprintf(g_ChapterDisplayName, sizeof(g_ChapterDisplayName), "%s", "Chicago");
        nocturne_hud_overlay(g_CGamePtr);
        const hud_support::Text title = only("1931 - Chicago");
        CHECK_EQ_AT(title.font, fonts[i], std::to_string(heights[i]));
        CHECK_EQ_AT(title.x, 32, std::to_string(heights[i]));
        CHECK_EQ_AT(title.y, heights[i] - 20 - 16, std::to_string(heights[i]));
    }
}

// The status bars stack up from the frame's bottom-left, clear of the
// battery's column, a quarter of the frame wide, coloured by health, each as
// long as STATUS_BAR_WIDTH lets it be; none under the letterbox.
NOCTURNE_TEST(the_status_bars_stack_from_the_bottom_left) {
    fresh();
    g_CGamePtr->status_display_count = 3;
    g_CGamePtr->status_bar_values[0] = 1.0f;
    g_CGamePtr->status_bar_values[1] = 0.5f;
    g_CGamePtr->status_bar_values[2] = 0.0f;
    std::snprintf(g_CGamePtr->status_bar_names[0], 256, "%s", "Ice");
    stand.status_right_cut = 20;
    nocturne_hud_overlay(g_CGamePtr);
    CHECK(stand.fills[0].bordered);
    CHECK_EQ(stand.fills[0].x1, 40); // the gauge's 0x10 at the HUD scale, and 4 more
    CHECK_EQ(stand.fills[0].y1, 711 - 18);
    CHECK_EQ(stand.fills[0].x2, 360 - 20);
    CHECK_EQ(stand.fills[0].y2, 711);
    CHECK_EQ(stand.fills[1].color, 2);
    CHECK_EQ(stand.fills[3].color, 0xfb);
    CHECK_EQ((int)stand.fills.size(), 5); // the empty bar has no fill
    CHECK(only("Ice").font == &hud_support::medium_font);
    CHECK_EQ(stand.fills[2].y2, 711 - 27);

    const int widths[] = {640, 800};
    CBitFont *const fonts[] = {&hud_support::small_font, &hud_support::tiny_font};
    for (int i = 0; i < 2; i++) {
        fresh();
        g_WindowWidth = widths[i];
        g_WindowHeight = 200;
        g_CGamePtr->status_display_count = 1;
        g_CGamePtr->status_bar_values[0] = 0.2f;
        nocturne_hud_overlay(g_CGamePtr);
        CHECK_EQ_AT(stand.texts[0].font, fonts[i], std::to_string(widths[i]));
        CHECK_EQ_AT(stand.fills[1].color, 1, std::to_string(widths[i]));
        CHECK_EQ_AT(stand.fills[0].y1, 200 - 2 - 10, std::to_string(widths[i]));
    }

    fresh();
    g_CGamePtr->status_display_count = 1;
    g_CGamePtr->letterbox_mode = 1;
    nocturne_hud_overlay(g_CGamePtr);
    CHECK_EQ((int)stand.fills.size(), 0);
}

// The battery's column is its icon where that is wider than the gauge, and the
// bars keep clear of it with no light on; a frame wide enough to start them
// past it already leaves them where they were.
NOCTURNE_TEST(the_status_bars_keep_clear_of_the_battery) {
    fresh();
    g_BatteryIconBitmap.width = 30;
    g_CGamePtr->status_display_count = 1;
    g_CGamePtr->status_bar_values[0] = 1.0f;
    nocturne_hud_overlay(g_CGamePtr);
    CHECK_EQ(g_CGamePtr->flashlight_active, 0);
    CHECK_EQ(stand.fills[0].x1, (4 + 30) * 2 + 8);

    fresh();
    g_BatteryIconBitmap.width = 0;
    g_WindowWidth = 3840;
    g_WindowHeight = 2160;
    g_CGamePtr->status_display_count = 1;
    nocturne_hud_overlay(g_CGamePtr);
    CHECK_EQ(stand.fills[0].x1, 3840 / 80);
}

// --- the letterbox and the subtitles ---------------------------------------------

// The bars slide in with the letterbox and out after it, kept to their
// proportion over the 4:3 picture, the top one left off in mode 2; a modal
// dialog's clip is set aside around them.
NOCTURNE_TEST(the_letterbox_slides_and_keeps_its_proportion) {
    fresh();
    g_CGamePtr->letterbox_mode = 1;
    stand.delta = 0.175f;
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(g_ScriptTimeScale, 0.5f);
    CHECK_EQ(nocturne_hud_letterbox_height(), 51);
    CHECK_EQ(stand.fills[0].y2, 50);
    CHECK_EQ(stand.fills[1].y1, 720 - 51);
    CHECK_EQ(g_PreviousLetterboxMode, 1);

    stand.delta = 1.0f;
    g_CGamePtr->letterbox_mode = 2;
    g_ModalDialogActive = 1;
    stand.fills.clear();
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(g_ScriptTimeScale, 1.0f);
    CHECK_EQ((int)stand.fills.size(), 1);
    CHECK_EQ(stand.fills[0].y1, 720 - 101);
    CHECK_EQ(stand.screen_clips, 1);
    CHECK_EQ(stand.pops, 1);

    g_CGamePtr->letterbox_mode = 0;
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(g_ScriptTimeScale, 0.0f);
    CHECK_EQ(g_ClipTop, 5);
}

// Panned and scanned, a bar is what is left of the shipped one past the crop —
// 14 pixels at 720 — but never less than three subtitle lines and half a line
// above and below them.
NOCTURNE_TEST(a_panned_letterbox_is_what_the_crop_leaves) {
    fresh();
    stand.shown_rows = 360;
    g_ScriptTimeScale = 1.0f;
    CHECK_EQ(nocturne_hud_letterbox_height(), 80); // 20-pixel lines at the text scale
    hud_support::medium_font.max_char_height = 1;
    CHECK_EQ(nocturne_hud_letterbox_height(), 14);
}

// Three lines fill a bar of the least height with half a line of room on each
// side, clipped to it; a fourth rises over the shot, still half a line off the
// screen's bottom, with the screen.
NOCTURNE_TEST(three_subtitle_lines_fit_the_bar) {
    fresh();
    stand.shown_rows = 360;
    g_CGamePtr->letterbox_mode = 1;
    g_CGamePtr->subtitle_mode = 1;
    stand.delta = 1.0f;
    std::snprintf(hud_support::script->current_message, 1024, "%s", "a\nb\nc");
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(stand.clips[0].top, 720 - 80);
    CHECK_EQ(only("a").y, 720 - 80 + 10);
    CHECK_EQ(only("c").y + 20, 720 - 10);

    fresh();
    stand.shown_rows = 360;
    g_CGamePtr->letterbox_mode = 1;
    g_CGamePtr->subtitle_mode = 1;
    stand.delta = 1.0f;
    std::snprintf(hud_support::script->current_message, 1024, "%s", "a\nb\nc\nd");
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(stand.clips[0].top, 0);
    CHECK_EQ(only("d").y + 20, 720 - 10);
}

// A subtitle is centred in the frame in the lower bar, clipped to it while it
// fits a full bar; one too tall for it, or with no bar, has the screen, and
// stays half a line off its bottom.
NOCTURNE_TEST(a_subtitle_is_written_in_the_bar) {
    fresh();
    g_CGamePtr->letterbox_mode = 1;
    g_CGamePtr->subtitle_mode = 1;
    stand.delta = 1.0f;
    g_ModalDialogActive = 1;
    std::snprintf(hud_support::script->current_message, 1024, "%s", "hi");
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(stand.clips[0].top, 720 - 101);
    const hud_support::Text hi = only("hi");
    CHECK_EQ(hi.x, (1280 - 32) / 2);
    CHECK_EQ(hi.y, (1440 - 101 - 20) / 2);
    CHECK_EQ(hi.scale, 2.0f);
    CHECK(hi.font == &hud_support::medium_font);
    CHECK_EQ(stand.screen_clips, 2);
    CHECK_EQ(stand.pops, 3);

    fresh();
    g_CGamePtr->subtitle_mode = 1;
    std::snprintf(hud_support::script->current_message, 1024, "%s", "a\nb");
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(stand.clips[0].top, 0);
    CHECK_EQ(only("b").y, 720 - 20 - 10);

    fresh();
    g_CGamePtr->letterbox_mode = 1;
    g_CGamePtr->subtitle_mode = 1;
    stand.delta = 1.0f;
    hud_support::medium_font.max_char_height = 60;
    std::snprintf(hud_support::script->current_message, 1024, "%s", "a\nb");
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ(stand.clips[0].top, 0);
}

// The subtitle's font follows the screen's height; a message with subtitles
// off, or none, is not drawn.
NOCTURNE_TEST(a_subtitle_takes_the_screens_font) {
    struct Case {
        int height;
        int os_fonts;
        const CBitFont *font;
    };
    const Case cases[] = {{400, 0, &hud_support::tiny_font},
                          {300, 0, &hud_support::micro_font},
                          {300, 1, &hud_support::small_font}};
    for (const Case &c : cases) {
        fresh();
        g_WindowHeight = c.height;
        g_UseOSFonts = c.os_fonts;
        g_CGamePtr->subtitle_mode = 1;
        std::snprintf(hud_support::script->current_message, 1024, "%s", "x");
        nocturne_hud_subtitles(hud_support::script.get());
        CHECK_EQ_AT(only("x").font, c.font, std::to_string(c.height));
    }
    fresh();
    std::snprintf(hud_support::script->current_message, 1024, "%s", "x");
    nocturne_hud_subtitles(hud_support::script.get());
    CHECK_EQ((int)stand.texts.size(), 0);
}

// --- the death banner ------------------------------------------------------------

// Centred in the frame a quarter of the way down at the HUD scale, or two lines
// from the top; unscaled where scaled text cannot be drawn.
NOCTURNE_TEST(the_death_banner_is_clear_of_the_message_line) {
    fresh();
    char text[] = "Dead";
    nocturne_hud_death_banner(text, 0);
    const hud_support::Text dead = only("Dead");
    CHECK_EQ(dead.x, (1280 - 64) / 2);
    CHECK_EQ(dead.y, (720 - 20) / 4);
    CHECK_EQ(dead.scale, 2);

    fresh();
    stand.text_scales = 0;
    nocturne_hud_death_banner(text, 1);
    CHECK_EQ(only("Dead").y, 20);
    CHECK_EQ(only("Dead").scale, 1);
}

NOCTURNE_TEST_MAIN()

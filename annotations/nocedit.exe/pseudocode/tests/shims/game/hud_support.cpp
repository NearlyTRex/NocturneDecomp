// =============================================================================
// HUD SUPPORT — see hud_support.h
// =============================================================================

#include "hud_support.h"

#include "class_support.h"

#include <cmath>
#include <cstring>

int g_WindowWidth = 0;
int g_WindowHeight = 0;
CDemonCamera g_CDemonCameraInstance = {};
CGame *g_CGamePtr = nullptr;
CScript *g_CScriptPtr = nullptr;
int g_InventoryScreenHeight = 0;
int g_UseExternalRenderer = 0;
int g_InventoryWidth = 0;
int g_InventoryHeight = 0;
int g_UseOSFonts = 0;
CBitFont *g_SmallEditorFont = nullptr;
CBitFont *g_MicroFont = nullptr;
CBitFont *g_ThemeFont = nullptr;
CBitFont *g_MediumFont = nullptr;
CBitFont *g_TinyFont = nullptr;
CDemonActorType g_CLightGunClassInfo = {};
CDemonActorType g_CFilmReelClassInfo = {};
CAlphaBitmap g_TommyClipIconBitmap = {};
CAlphaBitmap g_ShotShellIconBitmap = {};
CAlphaBitmap g_BulletIconBitmap = {};
CAlphaBitmap g_LithiumIconBitmap = {};
CAlphaBitmap g_MercuryBulletIconBitmap = {};
CAlphaBitmap g_SilverBulletIconBitmap = {};
CAlphaBitmap g_HolyBulletIconBitmap = {};
CAlphaBitmap g_BatteryIconBitmap = {};
CAlphaBitmap g_HealthBar1Bitmap = {};
CAlphaBitmap g_HealthBar2Bitmap = {};
char g_InventoryWrappedTextLines[10][256] = {};
char g_InventoryWrappedTextLines2[10][256] = {};
char g_InventoryWrappedTextLines3[10][256] = {};
char g_WrappedTextBuffer[10][256] = {};
char g_ScriptSubtitleLines[10][1024] = {};
int g_ClipTop = 0;
float g_ScriptTimeScale = 0.0f;
int g_PreviousLetterboxMode = 0;
int g_ModalDialogActive = 0;
float g_OverlayDisplayTimer = 0.0f;
int g_ChapterDisplayYear = 0;
char g_ChapterDisplayName[256] = {};
uchar g_ColorCubeLookup[32768] = {};

namespace hud_support {

Stand stand;
CBitFont small_font, micro_font, theme_font, medium_font, tiny_font;
std::unique_ptr<CInventory> inventory(new CInventory());
std::unique_ptr<CWeapon> weapon(new CWeapon());
std::unique_ptr<CLightGun> light_gun(new CLightGun());
std::unique_ptr<CHealthItem> health(new CHealthItem());
std::unique_ptr<CFilmReel> reel(new CFilmReel());
std::unique_ptr<CAmmo> round(new CAmmo());
std::unique_ptr<CGame> game(new CGame());
std::unique_ptr<CScript> script(new CScript());
CDemonActorType tommy_type, shotgun_type, elephant_type, sword_type;

namespace {

const int kGlyph = 8;
const int kLine = 10;

template <typename T>
void zero(T *object) {
    std::memset(object, 0, sizeof(*object));
}

} // namespace

void Stand::reset() {
    *this = Stand();
    hero_support::reset();
    place_heroes(1);
    using class_support::make;
    g_CLightGunClassInfo = make("CLightGun", 0x450, &g_CGunClassInfo);
    g_CFilmReelClassInfo = make("CFilmReel", 0x540);
    tommy_type = make("CTommyGun", 0x460, &g_CGunClassInfo);
    shotgun_type = make("CShotgun", 0x470);
    elephant_type = make("CElephantGun", 0x480);
    sword_type = make("CSword", 0x490);

    zero(inventory.get());
    zero(weapon.get());
    zero(light_gun.get());
    zero(health.get());
    zero(reel.get());
    zero(round.get());
    zero(game.get());
    zero(script.get());
    give_class(&weapon->base, &sword_type);
    give_class(&light_gun->base.base, &g_CLightGunClassInfo);
    give_class(&health->base, &g_CHealthItemClassInfo);
    give_class(&reel->base, &g_CFilmReelClassInfo);
    inventory->owner = &heroes[0]->base.base;
    inventory->ammo_ptr = round.get();

    for (CBitFont *font : {&small_font, &micro_font, &theme_font, &medium_font, &tiny_font}) {
        zero(font);
        font->max_char_height = kLine;
    }
    g_SmallEditorFont = &small_font;
    g_MicroFont = &micro_font;
    g_ThemeFont = &theme_font;
    g_MediumFont = &medium_font;
    g_TinyFont = &tiny_font;
    g_UseOSFonts = 0;

    g_WindowWidth = 1280;
    g_WindowHeight = 720;
    g_InventoryScreenHeight = 720;
    g_InventoryWidth = 240;
    g_InventoryHeight = 96;
    zero(&g_CDemonCameraInstance);
    g_CDemonCameraInstance.framebuffer_width = 640;
    g_CDemonCameraInstance.framebuffer_height = 480;
    g_CGamePtr = game.get();
    g_CScriptPtr = script.get();
    g_UseExternalRenderer = 1;
    g_ClipTop = 5;
    g_ScriptTimeScale = 0.0f;
    g_PreviousLetterboxMode = 0;
    g_ModalDialogActive = 0;
    g_OverlayDisplayTimer = 0.0f;
    g_ChapterDisplayYear = 0;
    g_ChapterDisplayName[0] = '\0';
    g_ColorCubeLookup[0x7c00] = 0x42;
}

std::vector<Text> texts_of(const std::string &text) {
    std::vector<Text> found;
    for (const Text &t : stand.texts) {
        if (t.text == text)
            found.push_back(t);
    }
    return found;
}

} // namespace hud_support

using hud_support::stand;

// --- the engine --------------------------------------------------------------------

void __cdecl core_inv_cpp_loadAssets_FUN_004fd220(void) {
    ++stand.loads;
}

int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory *,
                                                                    CDemonActor *,
                                                                    int weapon_category) {
    return stand.categories[weapon_category];
}

// Each actor's own string, as the engine returns its item definition's: two
// names asked for in turn are both still good.
char *__cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor *actor_ptr) {
    std::map<const void *, std::string>::iterator it = stand.names.find(actor_ptr);
    if (it == stand.names.end())
        it = stand.names.emplace(actor_ptr, "name").first;
    return (char *)it->second.c_str();
}

char *__cdecl core_inv_cpp_getItemDescription_FUN_004fcf70(CDemonActor *) {
    return (char *)"about";
}

char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    return key;
}

void __cdecl core_inv_cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2,
                                                                int alpha) {
    stand.backdrops.push_back(hud_support::Backdrop{false, x1, y1, x2, y2, alpha});
}

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2,
                                                              int alpha) {
    stand.backdrops.push_back(hud_support::Backdrop{true, x1, y1, x2, y2, alpha});
}

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004fee00(CInventory *, CDemonActor *item,
                                                                  int viewport_x, int viewport_y,
                                                                  int viewport_size,
                                                                  float rotation_y, int alpha) {
    stand.models.push_back(
        hud_support::Model{item, viewport_x, viewport_y, viewport_size, rotation_y, alpha});
}

void __cdecl engine_2d_c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, int color) {
    stand.fills.push_back(hud_support::Fill{x1, y1, x2, y2, color, false});
}

void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2,
                                                         int fill_color, int) {
    stand.fills.push_back(hud_support::Fill{x1, y1, x2, y2, fill_color, true});
}

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value) {
    stand.alphas.push_back(alpha_color_value);
    return 0;
}

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont *, int) {
    return 8;
}

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont *this_ptr, int) {
    return this_ptr->max_char_height;
}

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004cda80(CBitFont *this_ptr, char *text, int x,
                                                          int y, int, int) {
    stand.texts.push_back(hud_support::Text{text, x, y, 0, this_ptr});
    return 0;
}

float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_0042f9e0(CGame *) {
    return stand.delta;
}

// --- the shims --------------------------------------------------------------------

extern "C" {

int nocturne_ui_scale(void) {
    return stand.ui_scale;
}

int nocturne_ui_text_scale_supported(void) {
    return stand.text_scales;
}

void nocturne_ui_blit_alpha(CAlphaBitmap *bitmap, int x, int y, int alpha, int scale) {
    stand.blits.push_back(hud_support::Blit{bitmap, x, y, alpha, scale});
}

void nocturne_ui_blit_alpha_rect(CAlphaBitmap *bitmap, int dest_x, int dest_y, int, int, int, int,
                                 int alpha, int scale) {
    stand.blits.push_back(hud_support::Blit{bitmap, dest_x, dest_y, alpha, scale});
}

float nocturne_ui_text_scale(int) {
    return stand.text_scale;
}

int nocturne_ui_draw_text_f(CBitFont *font, char *text, int x, int y, int, int, float scale) {
    stand.texts.push_back(hud_support::Text{text, x, y, scale, font});
    return 0;
}

int nocturne_ui_text_width_f(CBitFont *, char *text, float scale) {
    return (int)std::lround((float)std::strlen(text) * (float)hud_support::kGlyph * scale);
}

int nocturne_ui_char_height_f(CBitFont *font, int, float scale) {
    return (int)std::lround((float)font->max_char_height * scale);
}

int nocturne_ui_wrap_to_width_f(CBitFont *font, char *text, char *lines, int max_lines,
                                int line_stride, int box_width, float scale, int *line_pitch) {
    stand.wraps.push_back(hud_support::Wrap{box_width, scale});
    *line_pitch = (int)std::lround((float)font->max_char_height * scale);
    int count = 0;
    const char *at = text;
    while (count < max_lines) {
        const char *end = std::strchr(at, '\n');
        const size_t length = end ? (size_t)(end - at) : std::strlen(at);
        std::memcpy(lines + (size_t)count * (size_t)line_stride, at, length);
        lines[(size_t)count * (size_t)line_stride + length] = '\0';
        ++count;
        if (end == nullptr)
            break;
        at = end + 1;
    }
    return count;
}

void nocturne_ui_push_clip(int left, int top, int right, int bottom) {
    stand.clips.push_back(hud_support::Clip{left, top, right, bottom});
}

void nocturne_ui_pop_clip(void) {
    ++stand.pops;
}

void nocturne_ui_push_screen_clip(void) {
    ++stand.screen_clips;
}

int nocturne_hero_weapon_hides_ammo(CWeapon *) {
    return stand.hides_ammo;
}

int nocturne_status_bar_right(char *, int, int right) {
    return right - stand.status_right_cut;
}

int nocturne_widescreen_shown_rows(int, int) {
    return stand.shown_rows;
}

void nocturne_widescreen_picture(int width, int, int *left, int *right) {
    *left = stand.picture_left;
    *right = stand.picture_right < 0 ? width : stand.picture_right;
}

int nocturne_trigl_device_begin_overlay(float scale, float scale_y, float offset_x,
                                        float offset_y) {
    stand.overlays.push_back(hud_support::Overlay{scale, scale_y, offset_x, offset_y});
    return stand.overlay_opens;
}

void nocturne_trigl_device_end_overlay(void) {
    ++stand.overlay_ends;
}

} // extern "C"

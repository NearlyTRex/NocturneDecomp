// =============================================================================
// LOADING SCREEN — implementation
// =============================================================================
//
// See loading_screen.h. The keeps of CLevelLoader::show and showPromoScreen are
// the shipped routines these follow.

#include "core/loading_screen.h"

#include "core/front_end_layout.h"
#include "core/ui_scale.h"
#include "net/rng.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

const int kOpaque = 0xffff;
const int kPictureWidth = 0x280;
const int kPictureHeight = 0x1e0;
const int kRandomPicture = -1;
const int kPictureCount = 3;
// The window the moon is given without a picture, in the layout's top right.
const int kCornerX = 0x1bf;
const int kCornerSize = 0xc0;
const int kWhite = 0xff;
// The moon's window on a picture.
const int kPictureWindowSize = 0x5a;

// A loading picture, where its moon's window sits on it and the moon's tint.
struct Picture {
    const char *name;
    int x;
    int y;
    int r;
    int g;
    int b;
};

const Picture kPictures[] = {
    {"load1", 0x78, 0x82, 0x82, 200, 0xf4},
    {"load2", 0x1e4, 0x42, 0x82, 0xbd, 0xff},
    {"load3", 0x9f, 1, 0x9e, 0xe1, 0xff},
    {"load4", 0x17b, 0x44, 0x6b, 0x9a, 0xff},
};
const int kPictureKinds = (int)(sizeof(kPictures) / sizeof(kPictures[0]));

// The promo: its date and address centred on the picture, and once its time
// is up, or Shift and Escape are held, the prompt above the address.
const int kPromoCentre = 0x140;
const int kPromoDateY = 0xdc;
const int kPromoColour = 7;
const int kPromoTime = 0xa0000;
const int kTicksPerStep = 0x12;
const int kLongestStep = 0x4000;
const int kHeightCharacter = 0x58;
char kPromoDate[] = "In stores 10/26/99";
char kPromoAddress[] = "www.nocturnegame.com";

uint random_number() {
#if NOCTURNE_AUTHENTIC_RNG
    return (uint)rand();
#else
    return nocturne_rng_fx();
#endif
}

// `text` centred on the layout's column `centre`, its top at screen row `y`.
void draw_centred(CBitFont *font, char *text, const NocturneLayout &layout, int y) {
    const int width = nocturne_ui_text_width_f(font, text, layout.scale);
    nocturne_ui_draw_text_f(font, text, nocturne_layout_x(layout, kPromoCentre) - width / 2, y,
                            kPromoColour, 0, layout.scale);
}

} // namespace

extern "C" void nocturne_level_loader_show(struct CLevelLoader *loader, int total_frames,
                                           int use_custom_viewport, int image_variant) {
    const NocturneLayout layout = nocturne_layout();
    loader->version = 0;
    loader->enabled = 1;
    loader->current_frame = 0;
    loader->use_custom_viewport = use_custom_viewport;
    loader->total_frames = total_frames;
    if (use_custom_viewport == 0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        loader->viewport_x = 0;
        loader->viewport_y = 0;
        loader->viewport_width = kPictureWidth;
        loader->viewport_height = kPictureHeight;
    } else {
        loader->viewport_x = nocturne_layout_x(layout, kCornerX);
        loader->viewport_y = nocturne_layout_y(layout, 0);
        loader->viewport_width = nocturne_layout_length(layout, kCornerSize);
        loader->viewport_height = nocturne_layout_length(layout, kCornerSize);
    }
    loader->color.r = kWhite;
    loader->color.g = kWhite;
    loader->color.b = kWhite;
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_LoadingMoonModel, (char *)"moon.kfm");
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,
                                                                  &g_LoadingMoonGlowTexture);
    if (image_variant == kRandomPicture && loader->use_custom_viewport == 0)
        image_variant = (int)random_number() % kPictureCount;
    if (image_variant < 0 || image_variant >= kPictureKinds)
        return;
    const Picture &picture = kPictures[image_variant];
    CAlphaBitmap bitmap;
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&bitmap);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&bitmap, (char *)picture.name, kPictureWidth,
                                                       kPictureHeight);
    nocturne_layout_display(&bitmap, 0, 0, kOpaque);
    loader->viewport_x = nocturne_layout_x(layout, picture.x);
    loader->viewport_y = nocturne_layout_y(layout, picture.y);
    loader->viewport_width = nocturne_layout_length(layout, kPictureWindowSize);
    loader->viewport_height = nocturne_layout_length(layout, kPictureWindowSize);
    loader->use_custom_viewport = 1;
    loader->color.r = picture.r;
    loader->color.g = picture.g;
    loader->color.b = picture.b;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&bitmap, 0);
}

extern "C" void nocturne_promo_screen(void) {
    const NocturneLayout layout = nocturne_layout();
    CBitFont *font = g_MediumFont;
    // Its rows are its own font's height; the shipped routine measured the theme
    // font's.
    const int line_height = nocturne_ui_char_height_f(font, kHeightCharacter, layout.scale);
    const int foot = nocturne_layout_y(layout, kPictureHeight);
    char name[256];
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    _sprintf(name, "load%d", (random_number() & 3) + 1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_LoadingScreenBitmap1, name, kPictureWidth,
                                                       kPictureHeight);
    engine_special_cpp_clearScreen_FUN_005b3e70();
    nocturne_layout_display(&g_LoadingScreenBitmap1, 0, 0, kOpaque);
    draw_centred(font, kPromoDate, layout, nocturne_layout_y(layout, kPromoDateY));
    draw_centred(font, kPromoAddress, layout, foot - line_height);
    int remaining = kPromoTime;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    int last = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    while (true) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        const int now = wincore_winrun_cpp_getTime_FUN_005f2dc0();
        g_GlobalDeltaTimeInt = (now - last) / kTicksPerStep;
        if (g_GlobalDeltaTimeInt < 0)
            g_GlobalDeltaTimeInt = 0;
        if (g_GlobalDeltaTimeInt > kLongestStep)
            g_GlobalDeltaTimeInt = kLongestStep;
        remaining -= g_GlobalDeltaTimeInt;
        const bool skipped = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_LSHIFT) != 0 &&
                             (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0;
        if (skipped || remaining <= 0)
            break;
        last = now;
    }
    char *prompt =
        support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Press any key to continue...");
    draw_centred(font, prompt, layout, foot - line_height * 2);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap1);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap2);
}

#endif // !NOCTURNE_AUTHENTIC_MENU

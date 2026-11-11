// =============================================================================
// MOON RENDER — implementation
// =============================================================================
//
// See moon_render.h. CMoon::render's keep is the shipped routine this follows.

#include "core/moon_render.h"

#include "core/front_end_layout.h"
#include "core/menu_screen.h"
#include "nocturne.h"

#include <vector>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

const float kFieldOfView = 112.0f;
const float kMoonSwing = 48.0f;
const float kMoonDepth = 72.0f;
const int kMoonLight = 37000;
const int kMoonAmbient = 0x280;
const int kMoonFlatScale = 0x10000;
const int kMoonRenderFlags = 0x205;
const int kBatLight = 0x4844;
const int kBatAmbient = 0x2000;
const int kBatCount = 30;
const float kBatYawOffset = 1.570796f;
const int kAnimationFrames = 30;
const int kAnimationAlpha = 48000;
const int kTrueColourBits = 0x20;
const uint kTexelMask = 0xff;

// The cloud texture is 256 by 256, read at (u, v) as u * 0x100 + v. A layout
// pixel's u and v at one layer's scale, which halves it per step, scrolled and
// wrapped: the texel's top six bits pick one of the palette's first 64 colours.
uint texel_row(uint layout_x, uint shift, int scroll_x) {
    return (((layout_x >> shift) + (uint)scroll_x) & kTexelMask) * 0x100;
}
uint texel_column(uint layout_y, uint shift, int scroll_y) {
    return ((layout_y >> shift) + (uint)scroll_y) & kTexelMask;
}

// PADDUSB: each byte added, held at 0xff; the low seven bits of each added
// apart so no carry crosses into the next byte.
uint add_saturating(uint a, uint b) {
    const uint kLow = 0x7f7f7f7fu;
    const uint kHigh = 0x80808080u;
    const uint low = (a & kLow) + (b & kLow);
    const uint either_high = (a ^ b) & kHigh;
    const uint overflow = (a & b & kHigh) | (either_high & low);
    return (low ^ either_high) | ((overflow >> 7) * 0xff);
}

void render_moon(CMoon *moon, float field_of_view) {
    CVector3f position;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(
        g_CDemonRendererPtr2, &g_ZeroVector.f);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,
                                                                      field_of_view);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2,
                                                                       &g_ZeroVector.f);
    position.x = (moon->rotation_phase - 0.5f) * kMoonSwing;
    position.y = kMoonSwing * (moon->rotation_phase - 0.5f);
    position.z = kMoonDepth;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(g_CDemonRendererPtr2,
                                                                               &position);
    CDemonSet *set = g_CDemonSetPtr;
    set->rendering_mode = 1;
    set->light_direction.x = -kMoonLight;
    set->light_direction.y = -kMoonLight;
    set->light_direction.z = kMoonLight;
    set->ambient_base_quick = kMoonAmbient;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0(set, kMoonFlatScale, kMoonFlatScale,
                                                     kMoonFlatScale);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(
        &moon->moon, 0, (CKeyFramedModelInstance *)0, kMoonRenderFlags);
}

void render_bat(const SBat &bat) {
    CVector3f position;
    CVector3f euler;
    core_course_cpp_CCourse_evaluate_FUN_00442710(g_MoonBatCourses + bat.course_index,
                                                  bat.course_position, &position, &euler);
    position.x = position.x + bat.random_offset.x;
    position.y = position.y + bat.random_offset.y;
    position.z = position.z + bat.random_offset.z;
    euler.y = euler.y + kBatYawOffset;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(g_CDemonRendererPtr2,
                                                                               &position);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(g_CDemonRendererPtr2,
                                                                        &euler, (CVector3f *)0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(
        &g_MoonBatModel, (int)ROUND(ROUND(bat.animation_frame)), (CKeyFramedModelInstance *)0, -1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
}

// Each bat's place on its course sets the ambient level the next is lit by:
// brightest at the ends, darkest halfway.
void render_bats() {
    CDemonSet *set = g_CDemonSetPtr;
    set->light_direction.x = -kBatLight;
    set->light_direction.y = -kBatLight;
    set->light_direction.z = kBatLight;
    set->ambient_base_quick = kBatAmbient;
    if (g_MoonBatsEnabled == 0)
        return;
    for (int i = 0; i < kBatCount; i++) {
        const SBat &bat = g_MoonBats[i];
        if (bat.course_position < 0.0f)
            continue;
        const int length = g_MoonBatCourses[bat.course_index].len;
#if !NOCTURNE_AUTHENTIC_MENU_BAT_WRAP
        if (bat.course_position <= (float)(length + -1))
#endif
            render_bat(bat);
        const float share = bat.course_position / (float)length;
        double ambient;
        if (0.5f <= share)
            ambient = ((double)share + -0.5) * 8192;
        else
            ambient = (double)8192.0f - (double)share * (double)16384.0f;
        g_CDemonSetPtr->ambient_base_quick = (int)ROUND(ROUND(ambient));
    }
}

// Two layers of the cloud texture added over the frame, the nearer at twice
// the scale of the farther, over the whole screen, each screen pixel taking
// the layout pixel under it.
void render_clouds(const NocturneLayout &layout) {
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(&g_MoonCloudTexture);
    if (g_BitsPerPixel != kTrueColourBits)
        return;
    const uchar *texels = (const uchar *)g_MoonCloudTexture.raw;
    const int scroll_x = g_MoonCloudScrollX >> 0x10;
    const int scroll_y = g_MoonCloudScrollY >> 0x10;
    // A column's texel rows in each layer, the same on every screen row.
    std::vector<uint> near_u((size_t)g_WindowWidth);
    std::vector<uint> far_u((size_t)g_WindowWidth);
    for (int x = 0; x < g_WindowWidth; x++) {
        const uint layout_x = (uint)((float)x / layout.scale);
        near_u[(size_t)x] = texel_row(layout_x, 1, scroll_x);
        far_u[(size_t)x] = texel_row(layout_x, 2, scroll_x);
    }
    for (int y = 0; y < g_WindowHeight; y++) {
        uint *row = (uint *)g_ScreenBufferArray[y];
        const uint layout_y = (uint)((float)y / layout.scale);
        const uchar *near_texels = texels + texel_column(layout_y, 1, scroll_y);
        const uchar *far_texels = texels + texel_column(layout_y, 2, scroll_y);
        for (int x = 0; x < g_WindowWidth; x++) {
            const uint near_layer = g_Hardware32BitPalette[near_texels[near_u[(size_t)x]] >> 2];
            const uint far_layer = g_Hardware32BitPalette[far_texels[far_u[(size_t)x]] >> 2];
            row[x] = add_saturating(add_saturating(row[x], near_layer), far_layer);
        }
    }
}

} // namespace

extern "C" void nocturne_moon_render(struct CMoon *moon) {
#if !NOCTURNE_AUTHENTIC_MENU_LIGHTING
    const CVector3i saved_light_direction = g_CDemonSetPtr->light_direction;
    const int saved_ambient_base = g_CDemonSetPtr->ambient_base_quick;
    const int saved_rendering_mode = g_CDemonSetPtr->rendering_mode;
    const int saved_flat_color_r = g_CDemonSetPtr->flat_color.r;
    const int saved_flat_color_g = g_CDemonSetPtr->flat_color.g;
    const int saved_flat_color_b = g_CDemonSetPtr->flat_color.b;
#endif
    sound_sndmain_cpp_processAudio_FUN_005abe20();
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
    render_moon(moon, nocturne_menu_scene_begin(kFieldOfView));
    render_bats();
    g_CDemonSetPtr->rendering_mode = 0;
    nocturne_menu_scene_end();
    render_clouds(nocturne_layout());
    engine_3d_c_setBlendMode_FUN_00406dd0(1);
    int frame = (int)ROUND(ROUND(g_MoonAnimationTimer));
    if (frame >= kAnimationFrames)
        frame = 0;
    nocturne_layout_display(g_MoonAnimTextures + frame, 0, 0, kAnimationAlpha);
    engine_3d_c_setBlendMode_FUN_00406dd0(0);
#if !NOCTURNE_AUTHENTIC_MENU_LIGHTING
    g_CDemonSetPtr->light_direction = saved_light_direction;
    g_CDemonSetPtr->ambient_base_quick = saved_ambient_base;
    g_CDemonSetPtr->rendering_mode = saved_rendering_mode;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0(g_CDemonSetPtr, saved_flat_color_r,
                                                     saved_flat_color_g, saved_flat_color_b);
#endif
}

#endif // !NOCTURNE_AUTHENTIC_MENU

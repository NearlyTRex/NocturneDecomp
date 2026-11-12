// =============================================================================
// MOON RENDER SUPPORT — see moon_render_support.h
// =============================================================================

#include "moon_render_support.h"

namespace moon_render_support {

Stand stand;

namespace {

std::vector<unsigned> s_pixels;
int s_width = 0;
std::vector<char> s_clouds(256 * 256, 0);
CDemonSet s_set;

} // namespace

// The set lit as a mission leaves it, which the moon must put back.
void Stand::reset() {
    *this = Stand();
    s_set.rendering_mode = 7;
    s_set.light_direction = {1, 2, 3};
    s_set.ambient_base_quick = 4;
    s_set.flat_color = {5, 6, 7};
    g_CDemonSetPtr = &s_set;
    s_clouds.assign(s_clouds.size(), 0);
    g_MoonCloudTexture.raw = s_clouds.data();
    g_MoonCloudScrollX = 0;
    g_MoonCloudScrollY = 0;
    g_MoonBatsEnabled = 0;
    for (SBat &bat : g_MoonBats)
        bat = SBat{0, -1.0f, 0.0f, {0.0f, 0.0f, 0.0f}};
    g_MoonAnimationTimer = 0.0f;
}

void screen(int width, int height, int bits, unsigned fill) {
    s_width = width;
    s_pixels.assign((size_t)width * (size_t)height, fill);
    for (int y = 0; y < GAME_SCREEN_MAX_HEIGHT; y++)
        g_ScreenBufferArray[y] = y < height ? (void *)&s_pixels[(size_t)y * width] : nullptr;
    g_WindowWidth = width;
    g_WindowHeight = height;
    g_BitsPerPixel = bits;
}

unsigned pixel(int x, int y) {
    return s_pixels[(size_t)y * (size_t)s_width + (size_t)x];
}

} // namespace moon_render_support

using moon_render_support::stand;

// --- the game's globals ------------------------------------------------------

int g_WindowWidth = 640;
int g_WindowHeight = 480;
int g_BitsPerPixel = 32;
void *g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};
uint g_Hardware32BitPalette[256] = {};
CDemonSet *g_CDemonSetPtr = nullptr;
CDemonRenderer *g_CDemonRendererPtr2 = nullptr;
UVector3 g_ZeroVector = {};
int g_MoonBatsEnabled = 0;
SBat g_MoonBats[30] = {};
CCourse g_MoonBatCourses[3] = {};
CKeyFramedModel g_MoonBatModel = {};
CAlphaBitmap g_MoonCloudTexture = {};
int g_MoonCloudScrollX = 0;
int g_MoonCloudScrollY = 0;
float g_MoonAnimationTimer = 0.0f;
CAlphaBitmap g_MoonAnimTextures[30] = {};

// --- the routines it draws through ---------------------------------------------

void __cdecl sound_sndmain_cpp_processAudio_FUN_005abe20(void) {
    stand.calls.push_back("audio");
}
void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void) {
    stand.calls.push_back("clear");
}
void __cdecl engine_special_cpp_clearZBufferNative_FUN_005b3ed4(void) {
    stand.calls.push_back("clear depth");
}
void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(
    CDemonRenderer *, CVector3f *) {
    stand.calls.push_back("origin");
}
void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(
    CDemonRenderer *, float field_of_view) {
    stand.fields_of_view.push_back(field_of_view);
}
void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer *,
                                                                                CVector3f *) {
    stand.calls.push_back("scene");
}
void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(
    CDemonRenderer *, CVector3f *world_position) {
    stand.vertices.push_back(*world_position);
}
void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(
    CDemonRenderer *, CVector3f *euler_angles, CVector3f *) {
    stand.bat_yaws.push_back(euler_angles->y);
}
void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer *) {
    stand.calls.push_back("pop");
}
void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0(CDemonSet *set, int light_scale,
                                                              int color_scale, int fog_scale) {
    stand.flat_colours.push_back(light_scale);
    set->flat_color = {light_scale, color_scale, fog_scale};
}
void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(
    CKeyFramedModel *model, int frame_index, CKeyFramedModelInstance *, int render_flags) {
    const CDemonSet *set = g_CDemonSetPtr;
    stand.models.push_back({model, frame_index, render_flags, set->light_direction,
                            set->ambient_base_quick, set->rendering_mode});
}
// Every course places a bat at (10, 20, 30) facing (0, 1, 0).
void __cdecl core_course_cpp_CCourse_evaluate_FUN_00442710(CCourse *, float, CVector3f *out_pos,
                                                           CVector3f *out_euler) {
    *out_pos = {10.0f, 20.0f, 30.0f};
    *out_euler = {0.0f, 1.0f, 0.0f};
}
void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *) {
    stand.calls.push_back("palette");
}
void __cdecl engine_3d_c_setBlendMode_FUN_00406dd0(int blend_mode) {
    stand.blend_modes.push_back(blend_mode);
}

// --- the front end's scene and layout ----------------------------------------------

float nocturne_menu_scene_begin(float field_of_view) {
    stand.calls.push_back("widen");
    return field_of_view * stand.widened;
}
void nocturne_menu_scene_end(void) {
    stand.calls.push_back("narrow");
}
NocturneLayout nocturne_layout(void) {
    return stand.layout;
}
void nocturne_layout_display(struct CAlphaBitmap *bitmap, int x, int y, int alpha) {
    stand.logos.push_back((int)(bitmap - g_MoonAnimTextures));
    stand.logos.push_back(x);
    stand.logos.push_back(y);
    stand.logos.push_back(alpha);
    stand.calls.push_back("logo");
}

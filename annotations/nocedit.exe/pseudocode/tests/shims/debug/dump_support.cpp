// =============================================================================
// DUMP SUPPORT — see dump_support.h
// =============================================================================

#include "dump_support.h"

#include "directx/ddraw.h"
#include "game/hero_slot.h"
#include "gl/gl_present.h"
#include "nocturne.h"

#include <SDL.h>
#include <cstdlib>
#include <cstring>

// --- the engine's globals ----------------------------------------------------

int g_AmbientLightLevel = 0;
void *g_BackBuffer = nullptr;
int g_BitsPerPixel = 0;
CDemonActorType g_CCharacterClassInfo = {};
CDemonCamera g_CDemonCameraInstance = {};
CDemonMission *g_CDemonMissionPtr = nullptr;
CDemonRaytrace g_CDemonRaytraceInstance = {};
CDemonRenderer *g_CDemonRendererPtr2 = nullptr;
CDemonSet g_CDemonSetInstance = {};
CEventList *g_CEventListPtr = nullptr;
CDemonActorType g_CFlameClassInfo = {};
CDemonActorType g_CHeroClassInfo = {};
int g_ClippedVertexCount = 0;
CDemonActorType g_CStrangerClassInfo = {};
CDemonActorType g_CSvetlanaClassInfo = {};
int g_DynamicLightCount = 0;
CHero *g_HeroActors[4] = {};
CVector3f g_LightingReferencePosition = {};
int g_LocalHeroIndex = 0;
int g_PerspectiveReciprocal = 0;
CVector3f g_PrecomputedSurfaceNormals[241][320] = {};
CVector3i g_PrecomputedWorldPositions[77120] = {};
int g_ProjectionScale = 0x10000;
int g_RasterizerMaxY = 0;
int g_RasterizerMinY = 0;
int g_RenderedTriangleCount = 0;
_BIT_INTEGER32 g_RenderStateFlags = {};
int g_ScanlinePixelCount = 0;
MainScanlineFunc *g_ScanlineRenderFunc = nullptr;
int g_SetDisplayListCount = 0;
void *g_SoftwareZBuffer = nullptr;
ulong g_SolidColorMode = 0;
CRect g_SpotLightBounds[96] = {};
int g_SpotLightCount = 0;
CDemonLight *g_SpotLightList[96] = {};
CVector3f g_StaticColorVector = {};
int g_TexturesDisabled = 0;
CVector3i g_TransformedVertexArray[20000] = {};
CMatrix3x3i g_TransformMatrix = {};
int g_VertexAlphaDelta = 0;
int g_VertexAlphaStart = 0;
_MMX_INTEGER g_VertexBlueDelta = {};
_MMX_INTEGER g_VertexBlueStart = {};
int g_VertexCount = 0;
_MMX_INTEGER g_VertexGreenDelta = {};
_MMX_INTEGER g_VertexGreenStart = {};
CVector3f g_VertexNormalArray[20000] = {};
int g_VertexPreprocessMode = 0;
_MMX_INTEGER g_VertexRedDelta = {};
_MMX_INTEGER g_VertexRedStart = {};
int g_WindowHeight = 0;
int g_WindowWidth = 0;
uint *g_ZBufferScanlineArray[1200] = {};

namespace dump_support {

Stand stand;

void Stand::reset() {
    *this = Stand();
    g_CStrangerClassInfo.name_hash = kStranger;
    g_CHeroClassInfo.name_hash = kHero;
    g_CCharacterClassInfo.name_hash = kCharacter;
    g_CSvetlanaClassInfo.name_hash = kSvetlana;
    g_CFlameClassInfo.name_hash = kFlame;
}

void is_a(const CDemonActor *actor, std::set<unsigned> hashes) {
    stand.classes[actor] = hashes;
}

} // namespace dump_support

using dump_support::stand;

// --- the decompiled functions ------------------------------------------------

CDemonActor *__cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor, uint hash) {
    auto it = stand.classes.find(actor);
    if (it == stand.classes.end() || it->second.count(hash) == 0)
        return nullptr;
    return actor;
}

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *) {
    ++stand.render_state_brackets;
}

void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor *) {
    --stand.render_state_brackets;
}

int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *) {
    g_PerspectiveReciprocal = 0x1234;
    g_SolidColorMode = 0x5678;
    return stand.visible;
}

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *) {
    return stand.visible_with_camera;
}

CDemonCube *__cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace *, int x,
                                                                          int y, int z) {
    auto it = stand.cubes.find(std::make_tuple(x, y, z));
    return it == stand.cubes.end() ? nullptr : it->second;
}

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList *,
                                                                     char *condition) {
    auto it = stand.conditions.find(condition);
    return it == stand.conditions.end() ? 0 : it->second;
}

// The ground a unit below the probe, less the radius.
float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet *,
                                                                             CVector3f *position,
                                                                             float radius) {
    return position->y - 1.0f - radius;
}

// --- the shims ---------------------------------------------------------------

CHero *nocturne_hero_local(void) {
    return stand.local_hero;
}

extern "C" {

int nocturne_gl_is_active(void) {
    return stand.gl_active;
}

// A 2x1 frame, red then blue.
int nocturne_gl_read_front(unsigned char **out_rgb, int *out_width, int *out_height) {
    if (stand.gl_read_result != 0)
        return stand.gl_read_result;
    unsigned char *rgb = (unsigned char *)malloc(6);
    const unsigned char pixels[6] = {255, 0, 0, 0, 0, 255};
    memcpy(rgb, pixels, 6);
    *out_rgb = rgb;
    *out_width = 2;
    *out_height = 1;
    return 0;
}

SDL_Renderer *nocturne_ddraw_present_renderer(void) {
    static int marker = 0;
    return stand.renderer_present ? (SDL_Renderer *)&marker : nullptr;
}

int dump_support_SDL_GetRendererOutputSize(SDL_Renderer *, int *w, int *h) {
    *w = stand.output_width;
    *h = stand.output_height;
    return stand.output_size_result;
}

int dump_support_SDL_RenderReadPixels(SDL_Renderer *, const SDL_Rect *, Uint32, void *pixels,
                                      int pitch) {
    memset(pixels, 0x7f, (size_t)pitch * (size_t)stand.output_height);
    return stand.read_pixels_result;
}

} // extern "C"

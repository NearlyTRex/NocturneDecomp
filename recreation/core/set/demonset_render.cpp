#include "common/error/error.h"
#include "common/math/vector3i.h"
#include "core/actor/actorrenderowners.h"
#include "core/actor/demonactor.h"
#include "core/dcamera/demoncamera.h"
#include "core/dcube/cubedrawowners.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"

#include <cstddef>
#include <cstdint>
#include <ranges>
#include <span>

namespace nocturne::core {
namespace {

// The scene's light, from above and in front, in 16.16.
constexpr common::CVector3i kSceneLightDirection{.x = 0, .y = -46333, .z = 46333};
constexpr int kOpaqueRenderAlpha = 0xffff;
// 16.16: the flat colour that leaves a colour as it is.
constexpr int kUntinted = 0x10000;
// The passes the scene's display list is built for, and the actors that moved are due in.
constexpr std::uint32_t kScenePasses =
    SDrawnTransform::kOpaquePass | SDrawnTransform::kTransparentPass;

// The pass's bit kept on the actor while it drew something in it.
void markPass(CDemonActor &actor, std::uint32_t pass, bool drew) {
    SDrawnTransform drawn = actor.getDrawnTransform();
    drawn.dirty_flags = drew ? (drawn.dirty_flags | pass) : (drawn.dirty_flags & ~pass);
    actor.setDrawnTransform(drawn);
}

} // namespace

// The game is never in the editor, where the original drew every actor's background as though
// not asked for its own layer.
// deferred: each actor's place, turn and box for the spatial lights, with setLightingParameters
//   and calculateSpatialLighting
// nocedit 0x0056aca0
// bw1 0x0054eef0
// bw2 0x0052dc10
// bw3 0x005346b0
void CDemonSet::renderBackgroundActors(int layer_flag) {
    const SActorRenderOwners render_owners{.renderer = owners_.renderer,
                                           .three_d = owners_.three_d,
                                           .special = owners_.special,
                                           .set = *this,
                                           .camera_tables = owners_.light_owners.camera.tables,
                                           .events = owners_.events};
    for (CDemonActor *actor : sorted_render_actors_) {
        const common::CVector3i &scale = actor->getScale();
        setFlatColor(scale.x, scale.y, scale.z);
        static_cast<void>(owners_.renderer.setRenderAlpha(kOpaqueRenderAlpha));
        actor->renderBackground(layer_flag, render_owners);
        setFlatColor(kUntinted, kUntinted, kUntinted);
        owners_.renderer.enableFaceCapture(true);
    }
}

// The game draws the scene once its prerender is done: only the editor asked for that here, the
// dynamic lights and the coronas forgotten, the flashlight added and the static lights drawn.
// Retail has no panning camera, for which the original drew nothing.
// deferred: the shown camera's view set up again once a mirror has marked it, with
//   markMirrorCameraDirty's caller CGlass::shatter and restoreCameraView
// The coronas start over while shadows are on, which the game's shadowFlag has them by default,
// or once a camera has just been shown.
// deferred: the spotlights' light maps added to the coronas and the dynamic lights', the globes'
//   and the queued globes' coronas drawn, in each mirror too, with addLightmapToCorona,
//   renderLightCoronas, renderGlobeCoronas, addDynamicLight and addQueuedCoronaGlobe
// deferred: the pan-and-scan crop told where the script's focus actor is in the shot, the
//   camera, the letterbox and the player's look (the decomp's widescreen_focus.h), with the
//   crop's focus tracking
// deferred: the gore's particles and the fire's effects, in each mirror too, the animated water,
//   on the train the terrain, and the weather's particles, with CGore::renderParticles,
//   CFireEffect::render, CWater::render, CTerrain::render and CWeather::renderParticles
// deferred: each dynamic light's bloom, and after the backgrounds its glow sprites, fogged at the
//   light, in each mirror too, with renderLightBloomQuad and renderLightGlowSprites
// deferred: the gore's and the fire's decals, the still water and each glass's backdrop drawn
//   into the camera's frame, with CGore::renderDecals, CFireEffect::renderDecals, CWater::render
//   and CGlass
// deferred: the local hero's weapon and item drawn in their panels, with
//   CInventory::renderSelectedItems
// deferred: the spotlights' dirty regions put back, with CDemonLight::restoreDirtyRegions
// deferred: the time the scene's parts took, printed while profiling, with processHotkeys'
//   profile mode
// deferred: the virtual directors drawn while debugging, with renderVirtualDirectors
// nocedit 0x0056c1a0
// bw1 0x00550580
// bw2 0x0052f2a0
// bw3 0x00535da0
void CDemonSet::renderScene() {
    checkCameraSelected();
    CDemonCamera &camera = owners_.camera;
    camera.restoreZBufferRectArray();
    camera.beginScene(1);
    if (corona_due_ || owners_.game.shadow_flag != 0) {
        corona_due_ = false;
        camera.processCorona();
    }
    camera.lockAndRenderToBuffer(owners_.game.getDeltaTimeInt());
    buildDisplayList(kScenePasses);
    renderOpaqueActors();
    camera.setupPerspectiveAndFog(nullptr, nullptr);
    renderTransparentActors();
    camera.endScene(0);
    for (CDemonActor *actor : actors_) {
        SDrawnTransform drawn = actor->getDrawnTransform();
        drawn.position = actor->getLocation().position;
        drawn.orientation = actor->getOrientation();
        actor->setDrawnTransform(drawn);
    }
}

// The original returned whether the camera panned, which no retail camera does.
// nocedit 0x00571320
void CDemonSet::checkCameraSelected() const {
    if (selected_camera_index_ < 0) {
        common::displayErrorAndQuit("CDemonSet::isCameraPanning - no camera selected");
    }
}

// deferred: each actor's place, turn and box for the spatial lights, with setLightingParameters
//   and calculateSpatialLighting
// deferred: each actor drawn again in each mirror, with buildMirrorList and setupMirrorRendering
// nocedit 0x0056cd60
// bw1 0x00551480
// bw2 0x005301d0
// bw3 0x00536c90
void CDemonSet::renderOpaqueActors() {
    for (CDemonActor *actor : sorted_render_actors_ | std::views::reverse) {
        bool drew = false;
        if (actor->isRenderable()) {
            const common::CVector3i &scale = actor->getScale();
            setFlatColor(scale.x, scale.y, scale.z);
            static_cast<void>(owners_.renderer.setRenderAlpha(kOpaqueRenderAlpha));
            drew = actor->renderOpaque() != 0;
            owners_.renderer.enableFaceCapture(true);
            setFlatColor(kUntinted, kUntinted, kUntinted);
        }
        markPass(*actor, SDrawnTransform::kOpaquePass, drew);
    }
}

// deferred: each actor's place, turn and box for the spatial lights, with setLightingParameters
//   and calculateSpatialLighting
// deferred: each actor drawn again in each mirror, with buildMirrorList and setupMirrorRendering
// nocedit 0x0056cf00
// bw1 0x005516c0
// bw2 0x00530410
// bw3 0x00536f90
void CDemonSet::renderTransparentActors() {
    for (CDemonActor *actor : sorted_render_actors_ | std::views::reverse) {
        bool drew = false;
        if (actor->isTransparent()) {
            const common::CVector3i &scale = actor->getScale();
            setFlatColor(scale.x, scale.y, scale.z);
            drew = actor->renderTransparent() != 0;
            owners_.renderer.enableFaceCapture(true);
            setFlatColor(kUntinted, kUntinted, kUntinted);
        }
        markPass(*actor, SDrawnTransform::kTransparentPass, drew);
    }
}

// deferred: testing through the active mirror's reflection while the renderer's advanced
//   culling is on, with setupMirrorRendering and CMirror::renderReflectedPrimitive
// nocedit 0x00570df0
bool CDemonSet::renderSinglePrimitive(const platform::SMRGLHeaderPrimitive &prim) {
    return owners_.renderer.renderDepthProfiledDirect(prim);
}

// A camera that has no PVS saves the one the walk draws. A selected camera may be none, which
// draws a PVS already set, whichever camera set it.
// deferred: the ambient light at a quarter, with CLight::calculateLighting's callers
// deferred: drawing in software the mirror list, the environment model, the sky dome, the
//   water and, on the train, the terrain, with buildMirrorList, the enviro model's
//   prepareForRender, renderSkyDome, CWater::calculateVisibleTiles and render, and
//   CTerrain::render
// deferred: each mirror's depth, its broken glass, and the geometry reflected in it, with
//   setupMirrorRendering, restoreCameraAfterMirror, CMirror::renderMirrorQuadDepth and
//   CGlass::renderBrokenGlass
// deferred: the shadow pass drawing only the mirrors, while mirrors are on, with
//   setShadowPass's callers
// nocedit 0x0056a190
// bw2 0x0052d0e0
// bw3 0x00533b80
void CDemonSet::renderSceneGeometry(float frustum_param, int render_mode) {
    owners_.renderer.setLightDirection(kSceneLightDirection);
    if (render_mode != kDrawReachedGeometry && selected_camera_index_ >= 0) {
        const std::span<const int> pvs =
            cameras_.at(static_cast<std::size_t>(selected_camera_index_)).getPVSList();
        if (pvs.empty()) {
            render_mode = kRecordCameraPVS;
        } else {
            owners_.raytrace.setPVS(pvs);
        }
    }
    const SCubeDrawOwners draw{.renderer = owners_.renderer,
                               .special = owners_.special,
                               .matrix = owners_.matrix,
                               .set = *this};
    owners_.raytrace.renderFrustumCubes(frustum_param, render_mode == kDrawCameraPVS, draw);
    if (render_mode == kRecordCameraPVS) {
        cameras_.at(static_cast<std::size_t>(selected_camera_index_))
            .setPVSList(owners_.raytrace.savePVS());
    }
}

// deferred: drawing nothing while the game suppresses set geometry, with CGame's cheats and
//   game session
// deferred: the env-mapped drawing in the game's env-map render modes, with
//   renderEnvMapBatchQuad and the code that sets CGame's render_mode
// deferred: the per-pixel flat-colour pass first, with renderCustomScanline and the code that
//   sets per_pixel_lighting_enabled
// nocedit 0x00570770
void CDemonSet::renderPrimitiveBatch(std::span<const platform::SMRGLPrimitiveQuad> primitives,
                                     int render_flags) {
    owners_.renderer.renderQuadBatch(primitives, render_flags);
}

// deferred: drawing nothing while the game suppresses set geometry, with CGame's cheats and
//   game session
// deferred: each primitive reflected through the active mirror while advanced culling is on,
//   with enableAdvancedCulling's callers and CMirror::clipAndRenderReflectedPrimitive
// nocedit 0x005708e0
void CDemonSet::renderPrimitiveList(std::span<const platform::SMRGLHeaderPrimitive> primitives) {
    for (const platform::SMRGLHeaderPrimitive &primitive : primitives) {
        owners_.renderer.renderSolidColorDepthDirect(primitive);
    }
}

} // namespace nocturne::core

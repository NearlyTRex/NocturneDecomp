#include "common/math/vector3i.h"
#include "core/dcube/cubedrawowners.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"

#include <cstddef>
#include <span>

namespace nocturne::core {
namespace {

// The scene's light, from above and in front, in 16.16.
constexpr common::CVector3i kSceneLightDirection{.x = 0, .y = -46333, .z = 46333};

} // namespace

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

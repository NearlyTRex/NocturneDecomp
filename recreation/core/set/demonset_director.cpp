#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/actor/demonactor.h"
#include "core/actor/notported.h"
#include "core/box/boundingbox3d.h"
#include "core/game/game.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>

namespace nocturne::core {
namespace {

// What an unforced pass scores a second for each camera, and the fewest it scores a frame.
constexpr int kCamerasScoredPerSecond = 10;
constexpr int kFewestCamerasScored = 3;
// How long a camera switched away from is held back from being chosen again.
constexpr float kPreviousBestHold = 3.0F;
// The actor's sphere: its box's largest bound, half as much again, and one more.
constexpr double kRadiusScale = 1.5;
constexpr double kRadiusMargin = 1.0;
// How near a camera must stand to be scored, squared.
constexpr double kFarthestCameraSquared = 200.0 * 200.0;
// The score of a camera in another virtual director area.
constexpr float kOtherAreaScore = -99999.9F;
// What a hold is cut to when a script lets go of it.
constexpr float kReleasedHold = 1e-20F;
// An unforced pass favours the camera shown, and disfavours the one shown before it.
constexpr double kSelectedWeight = 3.0;
constexpr float kPreviousBestWeight = 0.2F;
// A world unit in 24.8.
constexpr double kFixedOne = 256.0;
// A thumb's projection scale is its camera's in units of the unit field of view, 18.
constexpr float kThumbProjectionScale = 1.0F / 18.0F;
// A corner's clip flags: past a side when the sign bit is set, which sides below it. The box is
// wholly out of view when every corner is past the same side.
constexpr std::uint32_t kClipped = 0x80000000U;
constexpr std::uint32_t kLowByte = 0xffU;
constexpr std::uint32_t kAllOutsideStart = kClipped | kLowByte;
// How far the box is pushed from the camera, in its eye-space depth's units.
constexpr int kPushBack = 0x80;
// What a corner past a side, or behind the camera, leaves of the count.
constexpr float kSideScale = 0.5F;
constexpr float kBehindScale = 0.0625F;

// A box face: its plane's normal along an axis, and its corners, as getCorner numbers them.
struct SBoxFace {
    int a = 0;
    int b = 0;
    int c = 0;
    std::array<int, 4> corners{};
};

// Facing -x, +x, -y, +y, -z and +z.
constexpr std::array<SBoxFace, 6> kBoxFaces = {{
    {.a = -1, .b = 0, .c = 0, .corners = {0, 4, 6, 2}},
    {.a = 1, .b = 0, .c = 0, .corners = {1, 3, 7, 5}},
    {.a = 0, .b = -1, .c = 0, .corners = {0, 1, 5, 4}},
    {.a = 0, .b = 1, .c = 0, .corners = {2, 6, 7, 3}},
    {.a = 0, .b = 0, .c = -1, .corners = {0, 2, 3, 1}},
    {.a = 0, .b = 0, .c = 1, .corners = {4, 5, 7, 6}},
}};

} // namespace

// The hold is counted down as the original stores it; the radius and the scores' weights are
// worked out at the x87's precision. The last switch's area flag is set only when it switches.
// The cameras are scored through the software rasteriser. The original also listed the actors
// near the one shown that block the director, which nothing read, and pointed the screen's depth
// rows at each thumb's and back, where here the thumb's rows go to the count.
// deferred: scoring with the shadow pass off, with setShadowPass's callers
// nocedit 0x005751d0
int CDemonSet::evaluateVirtualDirector(CDemonActor *actor, int force_evaluation_mode) {
    if (actor == nullptr) {
        if (selected_camera_index_ < 0) {
            setCameraView(0);
        }
        return 1;
    }
    const float delta_time = owners_.game.getDeltaTimeFloat();
    if (selected_camera_index_ < 0) {
        force_evaluation_mode = 1;
    }
    if (force_evaluation_mode <= 1 && camera_switch_cooldown_ > 0.0F) {
        camera_switch_cooldown_ = camera_switch_cooldown_ - delta_time;
        if (camera_switch_cooldown_ > 0.0F) {
            const bool held =
                pending_camera_index_ >= 0 && pending_camera_index_ != selected_camera_index_;
            if (held) {
                setCameraView(pending_camera_index_);
            }
            return static_cast<int>(held);
        }
        force_evaluation_mode = 1;
    }
    camera_switch_cooldown_ = 0.0F;
    const int camera_count = static_cast<int>(cameras_.size());
    int count = camera_count;
    if (force_evaluation_mode == 0) {
        count =
            (common::CExtendedFloat(static_cast<float>(camera_count * kCamerasScoredPerSecond)) *
             common::CExtendedFloat(delta_time))
                .truncateToInt();
        count = std::min(std::max(count, kFewestCamerasScored), camera_count);
        previous_best_camera_timer_ = previous_best_camera_timer_ - delta_time;
        if (previous_best_camera_timer_ <= 0.0F) {
            previous_best_camera_index_ = -1;
            previous_best_camera_timer_ = 0.0F;
        }
    } else {
        previous_best_camera_index_ = -1;
        next_scored_camera_ = 0;
        previous_best_camera_timer_ = 0.0F;
    }
    CBoundingBox3D box;
    actor->getBoundingBox(&box);
    const SActorOutline outline = outlineActor(box);
    const float radius =
        ((common::CExtendedFloat(box.getMaximumBound()) * common::CExtendedFloat(kRadiusScale)) +
         common::CExtendedFloat(kRadiusMargin))
            .toFloat();
    common::CVector3f centre{.x = (box.min.x + box.max.x) * 0.5F,
                             .y = (box.min.y + box.max.y) * 0.5F,
                             .z = (box.min.z + box.max.z) * 0.5F};
    common::CVector3f world_centre;
    actor->localToWorldPoint(&world_centre, &centre);
    const int area = findVdirBoxAtPosition(world_centre);
    const bool external_renderer = owners_.special.getUseExternalRenderer();
    owners_.special.setUseExternalRenderer(false);
    scoreCameras(*actor, {.area = area, .radius = radius, .outline = outline}, count,
                 force_evaluation_mode);
    owners_.special.setUseExternalRenderer(external_renderer);
    if (next_scored_camera_ < camera_count) {
        return 0;
    }
    next_scored_camera_ = 0;
    int best = -1;
    float best_score = -1.0F;
    for (int camera = 0; camera < camera_count; ++camera) {
        const float score = camera_scores_.at(static_cast<std::size_t>(camera));
        if (best_score < score) {
            best_score = score;
            best = camera;
        }
    }
    const bool switching = best >= 0 && (selected_camera_index_ < 0 || force_evaluation_mode > 1 ||
                                         (best != selected_camera_index_ && best_score > 0.0F));
    if (switching) {
        last_switch_area_invalid_ = area == -1;
        setCameraView(best);
    }
    return static_cast<int>(switching);
}

// The corners as 24.8 points, chopped, and each face's plane through its first corner.
CDemonSet::SActorOutline CDemonSet::outlineActor(const CBoundingBox3D &box) {
    SActorOutline outline;
    for (std::uint32_t corner = 0; corner < CBoundingBox3D::kCorners; ++corner) {
        const common::CVector3f point = box.getCorner(corner);
        outline.corners.at(corner) = {.x = common::truncateToInt(double{point.x} * kFixedOne),
                                      .y = common::truncateToInt(double{point.y} * kFixedOne),
                                      .z = common::truncateToInt(double{point.z} * kFixedOne)};
    }
    for (std::size_t face = 0; face < kBoxFaces.size(); ++face) {
        const SBoxFace &template_face = kBoxFaces.at(face);
        platform::SMRGLPrimitiveQuad &quad = outline.faces.at(face);
        const common::CVector3i &through =
            outline.corners.at(static_cast<std::size_t>(template_face.corners.front()));
        const std::int64_t distance = (std::int64_t{template_face.a} * through.x) +
                                      (std::int64_t{template_face.b} * through.y) +
                                      (std::int64_t{template_face.c} * through.z);
        quad.surface_normal = {.a = template_face.a,
                               .b = template_face.b,
                               .c = template_face.c,
                               .d = static_cast<int>(distance)};
        quad.vertices.clear();
        for (const int corner : template_face.corners) {
            quad.vertices.push_back({.vertex_index = corner});
        }
    }
    return outline;
}

// A camera in another area scores far below any other, and a disabled one, one farther than 200
// or one whose view the actor's sphere misses scores 0. An unforced pass favours the camera
// shown three times and the one shown before it a fifth as much.
void CDemonSet::scoreCameras(CDemonActor &actor, const SScoringTarget &target, int count,
                             int force_evaluation_mode) {
    const common::CVector3f &position = actor.getLocation().position;
    camera_scores_.resize(cameras_.size());
    for (; count > 0 && static_cast<std::size_t>(next_scored_camera_) < cameras_.size();
         --count, ++next_scored_camera_) {
        const auto index = static_cast<std::size_t>(next_scored_camera_);
        const C3DSCamera &camera = cameras_.at(index);
        float score = 0.0F;
        if (camera.getVdirZone() != target.area) {
            score = kOtherAreaScore;
        } else if (camera.getEnabled()) {
            const common::CVector3f &at = camera.getPosition();
            const auto apart = [](float from, float to) {
                const common::CExtendedFloat gap =
                    common::CExtendedFloat(from) - common::CExtendedFloat(to);
                return gap * gap;
            };
            const common::CExtendedFloat distance_squared =
                (apart(at.z, position.z) + apart(at.y, position.y)) + apart(at.x, position.x);
            if (distance_squared <= common::CExtendedFloat(kFarthestCameraSquared) &&
                camera.testSphereInFrustum(position, target.radius)) {
                score = calculateActorVisibility(index, actor, target.outline);
            }
        }
        if (force_evaluation_mode == 0 && score > 0.0F) {
            common::CExtendedFloat weighted(score);
            if (next_scored_camera_ == selected_camera_index_) {
                weighted = weighted * common::CExtendedFloat(kSelectedWeight);
            }
            if (next_scored_camera_ == previous_best_camera_index_) {
                weighted = weighted * common::CExtendedFloat(kPreviousBestWeight);
            }
            score = weighted.toFloat();
        }
        camera_scores_.at(index) = score;
    }
}

// The camera's thumb stands in for the screen: the actor's box is turned by its pitch and bank
// but the camera's heading, as the original turns it, pushed half a unit further from the camera,
// and its faces' pixels no nearer than the thumb's depths are counted. Each corner past a side
// of the view halves the count, and each behind the camera takes it to a sixteenth. The original
// also gave the window the thumb's size while it drew, which the viewport does here.
// nocedit 0x00574ba0
float CDemonSet::calculateActorVisibility(std::size_t camera_index, const CDemonActor &actor,
                                          const SActorOutline &outline) {
    const C3DSCamera &camera = cameras_.at(camera_index);
    engine::CDemonRenderer &renderer = owners_.renderer;
    renderer.pushViewport(0, 0, static_cast<int>(kThumbWidth) - 1,
                          static_cast<int>(kThumbHeight) - 1);
    renderer.setCameraOriginFromScaledPoint(camera.getPosition());
    renderer.setProjectionScaleSimple(camera.getProjectionScale() * kThumbProjectionScale);
    renderer.setupSceneRendering(camera.getOrientation());
    renderer.processCameraRelativeVertex(actor.getLocation().position);
    const common::CVector3f &turn = actor.getOrientation();
    renderer.applyScaledTransform({.x = turn.x, .y = camera.getOrientation().y, .z = turn.z},
                                  nullptr);
    const std::span<platform::SRenderVertex> vertices = renderer.getVertexBuffer();
    std::uint32_t outside_all = kAllOutsideStart;
    std::uint32_t outside_any = 0;
    for (std::size_t corner = 0; corner < outline.corners.size(); ++corner) {
        platform::SProjectedVertex &point = vertices[corner].projected_vertex;
        owners_.special.transformAndProjectPoint(point, outline.corners.at(corner));
        const auto flags = static_cast<std::uint32_t>(point.screen_x);
        outside_all &= flags;
        outside_any |= flags;
    }
    renderer.matrixPop();
    if ((outside_all & kClipped) != 0 && (outside_all & kLowByte) != 0) {
        renderer.popViewport();
        return 0.0F;
    }
    float scale = 1.0F;
    for (std::size_t corner = 0; corner < outline.corners.size(); ++corner) {
        platform::SProjectedVertex &point = vertices[corner].projected_vertex;
        const int depth = point.transformed_z;
        if (depth > 0) {
            const int further = common::wrappingAdd(depth, kPushBack);
            point.transformed_x =
                static_cast<int>((std::int64_t{point.transformed_x} * further) / depth);
            point.transformed_y =
                static_cast<int>((std::int64_t{point.transformed_y} * further) / depth);
            point.transformed_z = further;
            owners_.matrix.projectTransformedPoint(point);
        }
    }
    for (std::size_t corner = 0; corner < outline.corners.size(); ++corner) {
        const platform::SProjectedVertex &point = vertices[corner].projected_vertex;
        if ((static_cast<std::uint32_t>(point.screen_x) & kClipped) != 0) {
            scale *= point.transformed_z > 0 ? kSideScale : kBehindScale;
        }
    }
    renderer.setRenderingState(false);
    std::array<std::uint32_t *, kThumbHeight> rows{};
    std::uint32_t *thumb = thumbs_.data() + (camera_index * kThumbWidth * kThumbHeight);
    for (std::size_t row = 0; row < kThumbHeight; ++row) {
        rows.at(row) = thumb + (row * kThumbWidth);
    }
    renderer.setRenderingState(true);
    renderer.enableFaceCapture((outside_any & kClipped) != 0);
    int count = 0;
    for (const platform::SMRGLPrimitiveQuad &face : outline.faces) {
        count += renderer.countVisiblePixelsPoly(face, rows);
    }
    renderer.enableFaceCapture(true);
    renderer.setRenderingState(false);
    renderer.popViewport();
    return static_cast<float>(count) * scale;
}

// Switching to the camera already shown leaves the camera shown before it and its hold as they
// were, where the original held that camera back again (the decomp's windowed reswitch fix).
// deferred: restoring the dynamic lights' and spotlights' dirty regions, freeing the spotlights'
//   master z-buffers and resetting their restore memory, with restoreDirtyRegions,
//   freeMasterZBuffer and resetRestoreMemoryAllocator
// deferred: drawing the camera's background, its shadows and lights, its fog, reverb and
//   weather, then the scene's static lights, with setCameraView's scene rendering
// nocedit 0x0056ae50
void CDemonSet::setCameraView(int index) {
    if (static_cast<std::size_t>(index) >= cameras_.size()) {
        common::displayErrorAndQuit(
            std::format("CDemonSet::setCameraView - invalid index: {}", index));
    }
    if (index != selected_camera_index_) {
        previous_best_camera_timer_ = kPreviousBestHold;
        previous_best_camera_index_ = selected_camera_index_;
    }
    selected_camera_index_ = index;
    quitNotPorted("CDemonSet", "setCameraView's scene rendering");
}

// nocedit 0x00575b00
void CDemonSet::setPendingCamera(int camera_index, float hold_time) {
    pending_camera_index_ = camera_index;
    camera_switch_cooldown_ = hold_time;
}

// nocedit 0x00575b20
void CDemonSet::clearCameraSwitchCooldown() {
    if (camera_switch_cooldown_ > 0.0F) {
        camera_switch_cooldown_ = kReleasedHold;
    }
}

int CDemonSet::getSelectedCameraIndex() const {
    return selected_camera_index_;
}

int CDemonSet::getPreviousBestCameraIndex() const {
    return previous_best_camera_index_;
}

float CDemonSet::getPreviousBestCameraTimer() const {
    return previous_best_camera_timer_;
}

float CDemonSet::getCameraSwitchCooldown() const {
    return camera_switch_cooldown_;
}

int CDemonSet::getPendingCameraIndex() const {
    return pending_camera_index_;
}

std::span<const float> CDemonSet::getCameraScores() const {
    return camera_scores_;
}

bool CDemonSet::wasLastSwitchAreaInvalid() const {
    return last_switch_area_invalid_;
}

} // namespace nocturne::core

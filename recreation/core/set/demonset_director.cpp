#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/actor/notported.h"
#include "core/box/boundingbox3d.h"
#include "core/game/game.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"

#include <algorithm>
#include <cstddef>
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

} // namespace

// The hold is counted down as the original stores it; the radius and the scores' weights are
// worked out at the x87's precision. The last switch's area flag is set only when it switches.
// deferred: the actor's box corners and its faces' planes, the nearby actors that block the view
//   and their boxes, and the depth table saved round the scoring with the shadow pass and the
//   external renderer off, with calculateActorVisibility
// deferred: an unforced pass favouring the camera shown three times and the one shown before it a
//   fifth as much, and switching to a better camera that shows some of the actor, with
//   calculateActorVisibility, whose scores alone are above 0
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
    scoreCameras(*actor, area, radius, count);
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
    const bool switching = best >= 0 && (selected_camera_index_ < 0 || force_evaluation_mode > 1);
    if (switching) {
        last_switch_area_invalid_ = area == -1;
        setCameraView(best);
    }
    return static_cast<int>(switching);
}

// A camera in another area scores far below any other, and a disabled one, one farther than 200
// or one whose view the actor's sphere misses scores 0.
void CDemonSet::scoreCameras(CDemonActor &actor, int area, float radius, int count) {
    const common::CVector3f &position = actor.getLocation().position;
    camera_scores_.resize(cameras_.size());
    for (; count > 0 && static_cast<std::size_t>(next_scored_camera_) < cameras_.size();
         --count, ++next_scored_camera_) {
        const auto index = static_cast<std::size_t>(next_scored_camera_);
        const C3DSCamera &camera = cameras_.at(index);
        float score = 0.0F;
        if (camera.getVdirZone() != area) {
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
                camera.testSphereInFrustum(position, radius)) {
                score = calculateActorVisibility(index, actor);
            }
        }
        camera_scores_.at(index) = score;
    }
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

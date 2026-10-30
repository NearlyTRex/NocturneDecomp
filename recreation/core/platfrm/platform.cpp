#include "core/platfrm/platform.h"

#include "common/error/error.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/dmodel/keyframedmodelinstance.h"

#include <cstddef>
#include <memory>
#include <span>
#include <string>
#include <utility>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;
// The versions that first held each field after the ground.
constexpr int kOneShotVersion = 2;
constexpr int kBlockDirectorVersion = 3;
constexpr int kBackgroundVersion = 4;
constexpr int kCameraVersion = 5;
constexpr int kShadowBoxVersion = 6;
// Before this version the trip to the end took as long as the trip to the start.
constexpr int kTravelTimeToEndVersion = 7;
constexpr int kMovementVersion = 8;
constexpr int kPushVersion = 9;
constexpr int kFogVersion = 10;
constexpr int kShadowVersion = 11;

} // namespace

// nocedit 0x0054c7e0
constinit const CDemonActorType CPlatform::kType =
    makeActorType("CPlatform", &CDemonActor::kType, &CPlatform::create, kVersion);

// The ends start where the actor is made, at the origin, and turned as it is.
// deferred: the course, the slew mode the editor sets, being drawn in the background, the health
//   of 50 and the attached actors' places, with CPlatform::setup and CPlatform::process
// nocedit 0x0054c850
CPlatform::CPlatform() {
    model_.setModelName("slider1.kfm");
}

// nocedit 0x00442380
CPlatform::~CPlatform() = default;

// nocedit 0x0054c840
const CDemonActorType &CPlatform::getActorType() const {
    return kType;
}

// nocedit 0x0054c810
std::unique_ptr<CDemonActor> CPlatform::create() {
    return std::make_unique<CPlatform>();
}

// A platform on a course has no ends of its own to read.
// nocedit 0x0054dbc0
void CPlatform::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveString(to_start_event_, "toStartEvent");
    actor_archive.archiveString(to_end_event_, "toEndEvent");
    actor_archive.archiveString(stop_event_, "stopEvent");
    actor_archive.archiveString(start_sound_, "startSound");
    actor_archive.archiveString(stop_sound_, "stopSound");
    actor_archive.archiveString(active_sound_, "activeSound");
    actor_archive.archiveString(course_filename_, "courseFilename");
    if (course_filename_.empty()) {
        actor_archive.archiveVector(start_position_, "startPos");
        actor_archive.archiveQuaternion(start_orientation_, "origOrient");
        actor_archive.archiveVector(end_position_, "endPos");
        actor_archive.archiveQuaternion(end_orientation_, "endOrient");
    }
    actor_archive.archiveEnum(state_, "state");
    actor_archive.archiveFloat(param_, "param");
    actor_archive.archiveFloat(travel_time_to_start_, "travelTimeToStart");
    const int version = actor_archive.getSavedVersion(kType);
    if (version >= kTravelTimeToEndVersion) {
        actor_archive.archiveFloat(travel_time_to_end_, "travelTimeToEnd");
    } else {
        travel_time_to_end_ = travel_time_to_start_;
    }
    actor_archive.archiveEnum(ground_type_, "groundType");
    if (version >= kOneShotVersion) {
        actor_archive.archiveFlag(one_shot_, "oneShot");
    }
    if (version >= kBlockDirectorVersion) {
        actor_archive.archiveFlag(block_virtual_director_, "blockVirtualDirectorFlag");
    }
    if (version >= kBackgroundVersion) {
        actor_archive.archiveFlag(render_in_background_when_not_moving_,
                                  "renderInBackgroundWhenNotMovingFlag");
    }
    if (version >= kCameraVersion) {
        actor_archive.archiveString(camera_while_moving_, "cameraWhileMoving");
    }
    if (version >= kShadowBoxVersion) {
        actor_archive.archiveFlag(plot_as_box_in_shadow_, "plotAsBoxInShadow");
    }
    if (version >= kMovementVersion) {
        actor_archive.archiveFloat(goal_param_, "goalParam");
        actor_archive.archiveFloat(current_movement_rate_, "currentMovementRate");
        int count = 0;
        actor_archive.archiveInteger(count, "attachCount");
        if (std::cmp_greater(count, kMaxAttachedActors)) {
            common::displayErrorAndQuit("CPlatform::archive - too many attached actors.");
        }
        attached_actors_.clear();
        for (int i = 0; i < count; ++i) {
            CDemonActor *actor = nullptr;
            actor_archive.archiveActor(actor, "attach actor");
            attached_actors_.push_back(actor);
        }
    }
    if (version >= kPushVersion) {
        actor_archive.archiveFlag(pushed_, "pushFlag");
    }
    if (version >= kFogVersion) {
        actor_archive.archiveFlag(fog_recomputed_, "recomputeFog");
    }
    if (version >= kShadowVersion) {
        actor_archive.archiveFlag(plot_in_shadow_, "plotInShadowFlag");
    }
}

// nocedit 0x0054e1a0
int CPlatform::allowBulletHoles() {
    return 1;
}

// nocedit 0x0054e1c0
EGroundType CPlatform::getGroundType() {
    return ground_type_;
}

// nocedit 0x0054e1d0
int CPlatform::getBlockVirtualDirectorFlag() {
    return block_virtual_director_ ? 1 : 0;
}

const CKeyFramedModelInstance &CPlatform::getModel() const {
    return model_;
}

const std::string &CPlatform::getToStartEvent() const {
    return to_start_event_;
}

const std::string &CPlatform::getToEndEvent() const {
    return to_end_event_;
}

const std::string &CPlatform::getStopEvent() const {
    return stop_event_;
}

const std::string &CPlatform::getStartSound() const {
    return start_sound_;
}

const std::string &CPlatform::getStopSound() const {
    return stop_sound_;
}

const std::string &CPlatform::getActiveSound() const {
    return active_sound_;
}

const std::string &CPlatform::getCourseFilename() const {
    return course_filename_;
}

const common::CVector3f &CPlatform::getStartPosition() const {
    return start_position_;
}

const common::CQuaternion4f &CPlatform::getStartOrientation() const {
    return start_orientation_;
}

const common::CVector3f &CPlatform::getEndPosition() const {
    return end_position_;
}

const common::CQuaternion4f &CPlatform::getEndOrientation() const {
    return end_orientation_;
}

EPlatformState CPlatform::getState() const {
    return state_;
}

float CPlatform::getParam() const {
    return param_;
}

float CPlatform::getTravelTimeToStart() const {
    return travel_time_to_start_;
}

float CPlatform::getTravelTimeToEnd() const {
    return travel_time_to_end_;
}

bool CPlatform::isOneShot() const {
    return one_shot_;
}

bool CPlatform::isRenderedInBackgroundWhenNotMoving() const {
    return render_in_background_when_not_moving_;
}

const std::string &CPlatform::getCameraWhileMoving() const {
    return camera_while_moving_;
}

bool CPlatform::isPlottedAsBoxInShadow() const {
    return plot_as_box_in_shadow_;
}

float CPlatform::getGoalParam() const {
    return goal_param_;
}

float CPlatform::getCurrentMovementRate() const {
    return current_movement_rate_;
}

std::span<CDemonActor *const> CPlatform::getAttachedActors() const {
    return attached_actors_;
}

bool CPlatform::isPushed() const {
    return pushed_;
}

bool CPlatform::isFogRecomputed() const {
    return fog_recomputed_;
}

bool CPlatform::isPlottedInShadow() const {
    return plot_in_shadow_;
}

} // namespace nocturne::core

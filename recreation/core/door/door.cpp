#include "core/door/door.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/vector3f.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/actorrenderowners.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/event/rulelist.h"
#include "core/location.h"
#include "core/oneshotstate.h"
#include "core/set/demonset.h"

#include <cmath>
#include <format>
#include <memory>
#include <string>
#include <string_view>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;
// The versions that first held each field after the speeds.
constexpr int kGroundVersion = 2;
constexpr int kTriggerEventVersion = 3;
constexpr int kOneShotVersion = 4;
// From this version to the rules', one event the script ran to open the door.
constexpr int kScriptOpenEventVersion = 5;
constexpr int kBlockDirectorVersion = 6;
constexpr int kOpenRulesVersion = 7;
constexpr int kShadowBoxVersion = 8;
constexpr int kAllowedSidesVersion = 9;
constexpr int kBulletHolesVersion = 10;
constexpr int kLockedSoundVersion = 11;
// What an old door's one script event became: a rule that always holds.
constexpr std::string_view kAlwaysCondition = "true";
// A param of 1 swings or tilts a door a quarter turn, as the float the original multiplies by.
constexpr float kQuarterTurn = 1.57079632675F;
// How high up the door it is reached for, and how far in from a swinging door's far edge.
constexpr float kReachHeight = 3.5F;
constexpr float kReachInset = 0.3F;

} // namespace

// nocedit 0x0047fa60
constinit const CDemonActorType CDoor::kType =
    makeActorType("CDoor", &CDemonActor::kType, &CDoor::create, kVersion);

// nocedit 0x0047fad0
CDoor::CDoor(CActor &classes) : classes_(classes), model_(classes.getKeyFramedModels()) {
    model_.setModelName("churchd01.kfm");
}

// nocedit 0x0047fc70
void CDoor::setup() {
    model_.preCache();
    CDemonActor::setup();
    if (open_event_ == kDefaultOpenEvent) {
        open_event_ = std::format("{}Open", getActorName());
    }
    if (close_event_ == kDefaultCloseEvent) {
        close_event_ = std::format("{}Close", getActorName());
    }
}

// nocedit 0x00481670
CDoor::~CDoor() = default;

// A swinging door's angle is worked out at the x87's precision and stored.
// nocedit 0x0047fd20
void CDoor::reposition() {
    CBoundingBox3D box;
    getBoundingBox(&box);
    CLocation location = getLocation();
    common::CVector3f orientation = getOrientation();
    common::CVector3f reach;
    switch (door_type_) {
    case EDoorType::kSwing: {
        location.position = original_position_;
        setLocation(location);
        const common::CExtendedFloat turn =
            common::CExtendedFloat(param_) * common::CExtendedFloat(kQuarterTurn);
        const common::CExtendedFloat closed(original_orientation_.y);
        orientation = {
            .x = 0.0F,
            .y = (door_swing_ == EDoorSwing::kClockwise ? turn + closed : closed - turn).toFloat(),
            .z = 0.0F};
        setOrientation(orientation);
        updateOrientationMatrix();
        reach = {.x = std::abs(box.min.x) <= std::abs(box.max.x) ? box.max.x - kReachInset
                                                                 : box.min.x + kReachInset,
                 .y = kReachHeight};
    } break;
    case EDoorType::kVertical:
        location.position.y = original_position_.y + param_;
        setLocation(location);
        reach = {.y = kReachHeight};
        break;
    case EDoorType::kSlide: {
        common::CVector3f offset{.x = door_side_ == EDoorSide::kRight ? param_ : -param_};
        common::CVector3f moved;
        transformVector(&moved, &offset);
        location.position = {.x = original_position_.x + moved.x,
                             .y = original_position_.y + moved.y,
                             .z = original_position_.z + moved.z};
        setLocation(location);
        reach = {.y = kReachHeight};
    } break;
    case EDoorType::kTilt:
        orientation.x = param_ * kQuarterTurn;
        setOrientation(orientation);
        updateOrientationMatrix();
        reach = {.x = (box.min.x + box.max.x) * 0.5F,
                 .y = (box.min.y + box.max.y) * 0.5F,
                 .z = (box.min.z + box.max.z) * 0.5F};
        break;
    default:
        common::displayErrorAndQuit("CDoor::reposition - Unknown type");
    }
    localToWorldPoint(&open_position_, &reach);
    if (swing_range_ > 0.0F) {
        common::CVector3f nudge{.x = classes_.getRandomFloatFromRange(-swing_range_, swing_range_),
                                .z = classes_.getRandomFloatFromRange(-swing_range_, swing_range_)};
        common::CVector3f moved;
        transformVector(&moved, &nudge);
        location = getLocation();
        location.position = {.x = moved.x + location.position.x,
                             .y = moved.y + location.position.y,
                             .z = moved.z + location.position.z};
        setLocation(location);
        swing_range_ = 0.0F;
    }
}

// A one-shot door that has moved is drawn into the backdrop from then on.
// nocedit 0x004809e0
void CDoor::renderBackground(int layer_flag, const SActorRenderOwners &owners) {
    if (layer_flag == 0 || one_shot_ < EOneShotState::kDone) {
        return;
    }
    one_shot_ = EOneShotState::kDoneInBackground;
    renderIfBoxVisible(owners, [this, &owners] {
        model_.prepareForRendering(0.0F, -1, owners.renderer, owners.set);
    });
}

// nocedit 0x00480a50
CBoundingBox3D *CDoor::getBoundingBox(CBoundingBox3D *out_box) {
    *out_box = model_.getModelPtr().getFrameBounds().front();
    return out_box;
}

// The original leaves the doors where they are while the mission is in the editor, which the
// game never is.
// nocedit 0x00481020
void CDoor::updateCollisionData(CDemonSet &set) {
    if (door_state_ == EDoorState::kClosed) {
        reposition();
        set.castVoxelShadow(*this);
    }
}

const common::CVector3f &CDoor::getOpenPosition() const {
    return open_position_;
}

// nocedit 0x0047fac0
const CDemonActorType &CDoor::getActorType() const {
    return kType;
}

// nocedit 0x0047fa90
std::unique_ptr<CDemonActor> CDoor::create(CActor &classes) {
    return std::make_unique<CDoor>(classes);
}

// nocedit 0x00480aa0
void CDoor::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveEnum(door_type_, "doorType");
    actor_archive.archiveEnum(door_side_, "doorSide");
    actor_archive.archiveEnum(door_state_, "doorState");
    actor_archive.archiveEnum(door_swing_, "doorSwing");
    actor_archive.archiveString(open_event_, "openEvent");
    actor_archive.archiveString(close_event_, "closeEvent");
    actor_archive.archiveString(open_sound_, "openSound");
    actor_archive.archiveString(close_sound_, "closeSound");
    actor_archive.archiveInteger(key_mask_, "keyMask");
    actor_archive.archiveVector(original_position_, "origPos");
    actor_archive.archiveVector(original_orientation_, "origOrient");
    actor_archive.archiveFloat(param_, "param");
    actor_archive.archiveFloat(max_param_, "maxParam");
    actor_archive.archiveFloat(open_speed_, "openSpeed");
    actor_archive.archiveFloat(close_speed_, "closeSpeed");
    const int version = actor_archive.getSavedVersion(kType);
    if (version >= kGroundVersion) {
        actor_archive.archiveEnum(ground_type_, "groundType");
    }
    if (version >= kTriggerEventVersion) {
        actor_archive.archiveString(event_when_open_, "eventToTriggerWhenOpen");
        actor_archive.archiveString(event_when_closed_, "eventToTriggerWhenClosed");
    }
    if (version >= kOneShotVersion) {
        actor_archive.archiveEnum(one_shot_, "oneShot");
    }
    if (version >= kOpenRulesVersion) {
        actor_archive.archiveRules(open_rules_, "openRules");
    } else if (version >= kScriptOpenEventVersion) {
        std::string event;
        actor_archive.archiveString(event, "scriptOpenEvent");
        if (event.empty()) {
            open_rules_.clear();
        } else {
            open_rules_.setRules({{.condition = std::string(kAlwaysCondition), .event = event}});
        }
    }
    if (version >= kBlockDirectorVersion) {
        actor_archive.archiveFlag(block_virtual_director_, "blockVirtualDirectorFlag");
    }
    if (version >= kShadowBoxVersion) {
        actor_archive.archiveFlag(plot_as_box_in_shadow_, "plotAsBoxInShadow");
    }
    if (version >= kAllowedSidesVersion) {
        actor_archive.archiveEnum(allowed_sides_, "allowedSides");
    }
    if (version >= kBulletHolesVersion) {
        actor_archive.archiveFlag(allow_bullet_holes_, "allowBulletHoles");
    }
    if (version >= kLockedSoundVersion) {
        actor_archive.archiveString(locked_sound_, "lockedSound");
    }
}

// nocedit 0x00480dd0
EGroundType CDoor::getGroundType() {
    return ground_type_;
}

// nocedit 0x00480df0
int CDoor::getBlockVirtualDirectorFlag() {
    return block_virtual_director_ ? 1 : 0;
}

// nocedit 0x00480e00
int CDoor::allowBulletHoles() {
    return allow_bullet_holes_ ? 1 : 0;
}

// nocedit 0x00480de0
void CDoor::setSwingRange(float swing_range) {
    swing_range_ = swing_range;
}

const CKeyFramedModelInstance &CDoor::getModel() const {
    return model_;
}

EDoorType CDoor::getDoorType() const {
    return door_type_;
}

EDoorSide CDoor::getDoorSide() const {
    return door_side_;
}

EDoorState CDoor::getDoorState() const {
    return door_state_;
}

EDoorSwing CDoor::getDoorSwing() const {
    return door_swing_;
}

const std::string &CDoor::getOpenEvent() const {
    return open_event_;
}

const std::string &CDoor::getCloseEvent() const {
    return close_event_;
}

const std::string &CDoor::getOpenSound() const {
    return open_sound_;
}

const std::string &CDoor::getCloseSound() const {
    return close_sound_;
}

const std::string &CDoor::getLockedSound() const {
    return locked_sound_;
}

int CDoor::getKeyMask() const {
    return key_mask_;
}

const common::CVector3f &CDoor::getOriginalPosition() const {
    return original_position_;
}

const common::CVector3f &CDoor::getOriginalOrientation() const {
    return original_orientation_;
}

float CDoor::getParam() const {
    return param_;
}

float CDoor::getMaxParam() const {
    return max_param_;
}

float CDoor::getOpenSpeed() const {
    return open_speed_;
}

float CDoor::getCloseSpeed() const {
    return close_speed_;
}

const std::string &CDoor::getEventWhenOpen() const {
    return event_when_open_;
}

const std::string &CDoor::getEventWhenClosed() const {
    return event_when_closed_;
}

EOneShotState CDoor::getOneShotState() const {
    return one_shot_;
}

const CRuleList &CDoor::getOpenRules() const {
    return open_rules_;
}

bool CDoor::isPlottedAsBoxInShadow() const {
    return plot_as_box_in_shadow_;
}

EDoorOpenSides CDoor::getAllowedSides() const {
    return allowed_sides_;
}

float CDoor::getSwingRange() const {
    return swing_range_;
}

} // namespace nocturne::core

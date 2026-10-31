#include "core/door/door.h"

#include "common/math/vector3f.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/event/rulelist.h"

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

} // namespace

// nocedit 0x0047fa60
constinit const CDemonActorType CDoor::kType =
    makeActorType("CDoor", &CDemonActor::kType, &CDoor::create, kVersion);

// nocedit 0x0047fad0
CDoor::CDoor(CActor &classes) : model_(classes.getKeyFramedModels()) {
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
        actor_archive.archiveFlag(one_shot_, "oneShot");
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

bool CDoor::isOneShot() const {
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

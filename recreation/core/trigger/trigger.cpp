#include "core/trigger/trigger.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/trigger/triggercause.h"

#include <cmath>
#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;
// Before version 7 the fields after the events came one version at a time: who sets the trigger
// off and the actor's name from 2, the light levels from 3, a laser trigger's type from 4, an
// actor trigger's classes and a damage trigger's hit points from 5, and the pressure plate from
// 6. Version 7 held them all, with the test radius from 8, auto aim from 9, the shape from 10
// and the damage wildcard from 11.
constexpr int kCauseVersion = 2;
constexpr int kLightVersion = 3;
constexpr int kLaserVersion = 4;
constexpr int kActorTypesVersion = 5;
constexpr int kPressurePlateVersion = 6;
constexpr int kAllFieldsVersion = 7;
constexpr int kTestRadiusVersion = 8;
constexpr int kAutoAimVersion = 9;
constexpr int kShapeVersion = 10;
constexpr int kDamageWildcardVersion = 11;

// How far the box reaches below the trigger's floor and above its height.
constexpr float kBoxMargin = 0.1F;
// What a hero or actor trigger's test radius reaches past the box's diagonal.
constexpr double kTestRadiusMargin = 10.0;

} // namespace

// nocedit 0x005df7d0
constinit const CDemonActorType CTrigger::kType =
    makeActorType("CTrigger", &CDemonActor::kType, &CTrigger::create, kVersion);

// deferred: the defaults the constructor gives CDemonActor's health, and the trigger's previous
//   state, event flag, cached and triggering actors and damage cooldown, with the steps that
//   read them
// nocedit 0x005df840
CTrigger::CTrigger() = default;

// nocedit 0x005e1660
CTrigger::~CTrigger() = default;

// nocedit 0x005df830
const CDemonActorType &CTrigger::getActorType() const {
    return kType;
}

// nocedit 0x005df800
std::unique_ptr<CDemonActor> CTrigger::create() {
    return std::make_unique<CTrigger>();
}

// nocedit 0x005e0630
CBoundingBox3D *CTrigger::getBoundingBox(CBoundingBox3D *out_box) {
    const float half_width = trigger_size_.x * 0.5F;
    const float half_depth = trigger_size_.z * 0.5F;
    out_box->min = {.x = -half_width, .y = -kBoxMargin, .z = -half_depth};
    out_box->max = {.x = half_width, .y = trigger_size_.y + kBoxMargin, .z = half_depth};
    return out_box;
}

// A hero or actor trigger tests what is within its box's diagonal and a margin, rounded up; any
// other keeps the radius it has.
// unverified: the diagonal's x87 sum and square root, worked in double here, not run against
//   nocedit's own code
// nocedit 0x005e0ba0
void CTrigger::calculateTestRadius() {
    if (trigger_cause_ != ETriggerCause::kHero && trigger_cause_ != ETriggerCause::kActor) {
        return;
    }
    CBoundingBox3D box;
    getBoundingBox(&box);
    const double width = box.max.x - box.min.x;
    const double height = box.max.y - box.min.y;
    const double depth = box.max.z - box.min.z;
    test_radius_ = static_cast<float>(std::ceil(
        std::sqrt((height * height) + (width * width) + (depth * depth)) + kTestRadiusMargin));
}

// nocedit 0x005e0690
void CTrigger::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveInteger(trigger_state_, "triggerState");
    actor_archive.archiveVector(trigger_size_, "triggerSize");
    actor_archive.archiveEnum(event_type_, "triggerType");
    actor_archive.archiveString(on_event_, "onName");
    actor_archive.archiveString(off_event_, "offName");
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version < kAllFieldsVersion) {
        archiveFieldsByVersion(actor_archive, saved_version);
        return;
    }
    actor_archive.archiveEnum(trigger_cause_, "whoTriggers");
    actor_archive.archiveString(actor_trigger_name_, "actorTriggerName");
    actor_archive.archiveString(actor_trigger_types_, "actorTriggerTypes");
    actor_archive.archiveFloat(light_min_, "lightMin");
    actor_archive.archiveFloat(light_max_, "lightMax");
    actor_archive.archiveInteger(laser_type_, "laserType");
    actor_archive.archiveFloat(hit_points_, "hitPoints");
    actor_archive.archiveFlag(pressure_plate_, "pressurePlate");
    if (saved_version < kTestRadiusVersion) {
        calculateTestRadius();
    } else {
        actor_archive.archiveFloat(test_radius_, "testRadius");
    }
    if (saved_version >= kAutoAimVersion) {
        actor_archive.archiveFlag(auto_aim_at_me_, "autoAimAtMe");
    }
    if (saved_version >= kShapeVersion) {
        actor_archive.archiveEnum(trigger_shape_, "shape");
    }
    if (saved_version >= kDamageWildcardVersion) {
        actor_archive.archiveString(damage_actor_wildcard_, "damageActorWildcard");
    }
}

void CTrigger::archiveFieldsByVersion(CActorArchive &actor_archive, int saved_version) {
    if (saved_version >= kCauseVersion) {
        actor_archive.archiveEnum(trigger_cause_, "whoTriggers");
        actor_archive.archiveString(actor_trigger_name_, "actorTriggerName");
    }
    if (saved_version >= kLightVersion) {
        actor_archive.archiveFloat(light_min_, "lightMin");
        actor_archive.archiveFloat(light_max_, "lightMax");
    }
    if (saved_version >= kLaserVersion && trigger_cause_ == ETriggerCause::kLaser) {
        actor_archive.archiveInteger(laser_type_, "laserType");
    }
    if (saved_version >= kActorTypesVersion) {
        if (trigger_cause_ == ETriggerCause::kActor) {
            actor_archive.archiveString(actor_trigger_types_, "actorTriggerTypes");
        }
        if (trigger_cause_ == ETriggerCause::kDamage) {
            actor_archive.archiveFloat(hit_points_, "hitPoints");
        }
    }
    if (saved_version >= kPressurePlateVersion) {
        actor_archive.archiveFlag(pressure_plate_, "pressurePlate");
    }
}

void CTrigger::setTriggerSize(const common::CVector3f &trigger_size) {
    trigger_size_ = trigger_size;
}

const common::CVector3f &CTrigger::getTriggerSize() const {
    return trigger_size_;
}

ETriggerShape CTrigger::getTriggerShape() const {
    return trigger_shape_;
}

ETriggerEventType CTrigger::getEventType() const {
    return event_type_;
}

const std::string &CTrigger::getOnEvent() const {
    return on_event_;
}

const std::string &CTrigger::getOffEvent() const {
    return off_event_;
}

int CTrigger::getTriggerState() const {
    return trigger_state_;
}

ETriggerCause CTrigger::getTriggerCause() const {
    return trigger_cause_;
}

const std::string &CTrigger::getActorTriggerName() const {
    return actor_trigger_name_;
}

const std::string &CTrigger::getActorTriggerTypes() const {
    return actor_trigger_types_;
}

bool CTrigger::isPressurePlate() const {
    return pressure_plate_;
}

float CTrigger::getLightMin() const {
    return light_min_;
}

float CTrigger::getLightMax() const {
    return light_max_;
}

int CTrigger::getLaserType() const {
    return laser_type_;
}

float CTrigger::getHitPoints() const {
    return hit_points_;
}

float CTrigger::getTestRadius() const {
    return test_radius_;
}

bool CTrigger::isAutoAimAtMe() const {
    return auto_aim_at_me_;
}

const std::string &CTrigger::getDamageActorWildcard() const {
    return damage_actor_wildcard_;
}

} // namespace nocturne::core

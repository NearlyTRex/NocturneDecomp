#include "core/boxactor/boxactor.h"

#include "core/actor/actor_functions.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/box/box.h"
#include "core/dmodel/keyframedmodelinstance.h"

#include <memory>
#include <string>
#include <utility>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 15;
// The versions that first held each field after the carrier.
constexpr int kPushVersion = 2;
constexpr int kGroundVersion = 3;
constexpr int kSimBoxVersion = 4;
constexpr int kShadowVersion = 5;
constexpr int kCollisionVersion = 6;
// Before this version a box could only be carried or not.
constexpr int kPickupTypeVersion = 7;
constexpr int kTransparentVersion = 8;
// The one version with a name for the editor, which nothing reads.
constexpr int kDescriptiveNameVersion = 9;
constexpr int kConstrainVersion = 11;
constexpr int kUseEventVersion = 12;
constexpr int kMeleeVersion = 13;
constexpr int kPushSoundVersion = 14;
constexpr int kBlockDirectorVersion = 15;
// A box still to be set up from its model when the mission starts.
constexpr int kBoxToSetUp = -1;

} // namespace

// The record CLightActor's file also registers is CLightActor's own.
// nocedit 0x00421650
constinit const CDemonActorType CBoxActor::kType =
    makeActorType("CBoxActor", &CDemonActor::kType, &CBoxActor::create, kVersion);

// deferred: the animation frame and the looping sound's handle, with CBoxActor::setup
// nocedit 0x00421700
CBoxActor::CBoxActor() {
    model_.setModelName("question.kfm");
    physics_box_.setValidity(kBoxToSetUp);
}

// nocedit 0x00423670
CBoxActor::~CBoxActor() = default;

// nocedit 0x004216f0
const CDemonActorType &CBoxActor::getActorType() const {
    return kType;
}

// nocedit 0x004216c0
std::unique_ptr<CDemonActor> CBoxActor::create() {
    return std::make_unique<CBoxActor>();
}

// nocedit 0x00422060
void CBoxActor::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveFloat(weight_in_pounds_, "weightInPounds");
    actor_archive.archiveFloat(fps_, "fps");
    actor_archive.archiveVector(rpm_, "rpm");
    actor_archive.archiveString(loop_wav_name_, "loopWavName");
    actor_archive.archiveString(collision_wav_name_, "collisionWavName");
    const int version = actor_archive.getSavedVersion(kType);
    if (version < kPickupTypeVersion) {
        bool can_be_carried = false;
        actor_archive.archiveFlag(can_be_carried, "canBeCarried");
        pickup_type_ = can_be_carried ? EBoxPickupType::kCarry : EBoxPickupType::kCant;
    } else {
        actor_archive.archiveEnum(pickup_type_, "pickupType");
    }
    actor_archive.archiveActor(carrier_, "carriedByActor");
    if (version >= kPushVersion) {
        actor_archive.archiveFlag(can_be_pushed_, "canBePushed");
        actor_archive.archiveActor(pushed_by_, "pushedByActor");
    }
    if (version >= kGroundVersion) {
        actor_archive.archiveEnum(ground_type_, "groundType");
    }
    if (version >= kSimBoxVersion) {
        actor_archive.archiveBox(physics_box_, "simBox");
    } else {
        physics_box_.setValidity(kBoxToSetUp);
    }
    if (version >= kShadowVersion) {
        actor_archive.archiveFlag(plot_in_shadow_, "plotInShadowFlag");
    } else {
        plot_in_shadow_ = true;
    }
    if (version >= kCollisionVersion) {
        actor_archive.archiveFlag(collision_enabled_, "collisionFlag");
    } else {
        collision_enabled_ = true;
    }
    if (version >= kTransparentVersion) {
        bool transparent = isTransparent();
        actor_archive.archiveFlag(transparent, "isTransparent");
        setTransparent(transparent);
        actor_archive.archiveFlag(dont_use_normals_, "dontUseNormals");
    }
    if (version == kDescriptiveNameVersion) {
        std::string descriptive_name;
        actor_archive.archiveString(descriptive_name, "descriptiveName");
    }
    if (version >= kConstrainVersion) {
        actor_archive.archiveActor(constrain_extents_actor_, "constrainExtentsActor");
    }
    if (version >= kUseEventVersion) {
        actor_archive.archiveString(use_event_, "useEvent");
    }
    if (version >= kMeleeVersion) {
        actor_archive.archiveInteger(allowed_melee_attack_types_, "allowedMeleeAttackTypes");
    }
    if (version >= kPushSoundVersion) {
        actor_archive.archiveString(push_sound_, "pushSound");
    }
    if (version >= kBlockDirectorVersion) {
        actor_archive.archiveFlag(block_virtual_director_, "blockVirtualDirectorFlag");
    }
}

// nocedit 0x00422330
int CBoxActor::getBlockVirtualDirectorFlag() {
    return block_virtual_director_ ? 1 : 0;
}

// nocedit 0x00422560
EGroundType CBoxActor::getGroundType() {
    return ground_type_;
}

// nocedit 0x004226d0
int CBoxActor::getAllowedMeleeAttackTypes() {
    return allowed_melee_attack_types_;
}

// nocedit 0x004224b0
int CBoxActor::canPickup(CDemonActor *picker) {
    if (pickup_type_ != EBoxPickupType::kCarry && !isOfClass(picker, "CHero")) {
        return 0;
    }
    return std::to_underlying(pickup_type_);
}

// nocedit 0x004224e0
void CBoxActor::pickup(CDemonActor *carrier) {
    carrier_ = carrier;
}

// nocedit 0x00422550
CDemonActor *CBoxActor::getCarrier() {
    return carrier_;
}

const CKeyFramedModelInstance &CBoxActor::getModel() const {
    return model_;
}

float CBoxActor::getWeightInPounds() const {
    return weight_in_pounds_;
}

float CBoxActor::getFps() const {
    return fps_;
}

const common::CVector3f &CBoxActor::getRpm() const {
    return rpm_;
}

const std::string &CBoxActor::getLoopWavName() const {
    return loop_wav_name_;
}

const std::string &CBoxActor::getCollisionWavName() const {
    return collision_wav_name_;
}

EBoxPickupType CBoxActor::getPickupType() const {
    return pickup_type_;
}

bool CBoxActor::canBePushed() const {
    return can_be_pushed_;
}

CDemonActor *CBoxActor::getPushedBy() const {
    return pushed_by_;
}

const CBox &CBoxActor::getPhysicsBox() const {
    return physics_box_;
}

bool CBoxActor::isPlottedInShadow() const {
    return plot_in_shadow_;
}

bool CBoxActor::isCollisionEnabled() const {
    return collision_enabled_;
}

bool CBoxActor::isDrawnWithoutNormals() const {
    return dont_use_normals_;
}

CDemonActor *CBoxActor::getConstrainExtentsActor() const {
    return constrain_extents_actor_;
}

const std::string &CBoxActor::getUseEvent() const {
    return use_event_;
}

const std::string &CBoxActor::getPushSound() const {
    return push_sound_;
}

} // namespace nocturne::core

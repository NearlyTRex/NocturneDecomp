#include "core/charactr/character.h"

#include "common/error/error.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/healthbarmode.h"
#include "core/cloth/clothlist.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <string>
#include <utility>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;
// The versions that first held what the character carries, the event talking to it raises, what
// grabs it and its cloth, its size, and its health bar, shown name and most hit points.
constexpr int kCarryingVersion = 2;
constexpr int kTalkingVersion = 3;
constexpr int kGrabbingVersion = 4;
constexpr int kSizedVersion = 5;
constexpr int kHealthBarVersion = 6;

} // namespace

// nocedit 0x00427d80
constinit const CDemonActorType CCharacter::kType =
    makeActorType("CCharacter", &CDemonActor::kType, nullptr, kVersion);

// deferred: the collision points, fires and flames, and the defaults the constructor gives the
//   movement, walking, looking, carrying bones, smoking fields and the layer action fields other
//   than the current action and its time, with the steps that read them
// deferred: a living character more than 32 units below the collision grid taking 9999 fall
//   damage, and the Stranger playing his splat (the decomp's hero_fall.h
//   nocturne_fall_out_of_world, BOTTOMLESS_FALL), with CCharacter::process
// deferred: a scripted walk's forward step scaled by how far the facing is off the path heading,
//   full speed to 30 degrees and stopped at 90, so the walker turns before arcing through a
//   doorway (the decomp's walk_turn.h, WALK_TURN), with CCharacter::walkToPoint
// nocedit 0x00427e20
CCharacter::CCharacter() = default;

// nocedit 0x0042f9f0
CCharacter::~CCharacter() = default;

CDeformableModelInstance &CCharacter::getModel() {
    return model_;
}

// A file before version 6 gives no most hit points, which are then the hit points it gives. The
// original wrote a carried actor past its two hands; here that is fatal.
// nocedit 0x004283a0
void CCharacter::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    archiveHitPoints(actor_archive);
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version >= kCarryingVersion) {
        int hands_carrying = 0;
        actor_archive.archiveInteger(hands_carrying, "numCarryHands");
        for (int i = 0; i < hands_carrying; ++i) {
            int hand = 0;
            actor_archive.archiveInteger(hand, "carry hand");
            if (hand < 0 || std::cmp_greater_equal(hand, kCarryHands)) {
                common::displayErrorAndQuit(std::format(
                    "CCharacter::archive - {} has no carry hand {}", getActorName(), hand));
            }
            actor_archive.archiveActor(carried_actors_.at(static_cast<std::size_t>(hand)),
                                       "carry actor");
        }
    }
    if (saved_version >= kTalkingVersion) {
        actor_archive.archiveString(talk_to_me_event_, "talkToMeEvent");
    }
    if (saved_version >= kGrabbingVersion) {
        archiveGrabbedBy(actor_archive);
        actor_archive.archiveInteger(grabbed_type_, "grabbedType");
        actor_archive.archiveClothList(cloth_list_, "clothList");
    }
    if (saved_version >= kSizedVersion) {
        actor_archive.archiveFloat(size_scale_, "sizeScale");
    }
    if (saved_version < kHealthBarVersion) {
        max_hit_points_ = hit_points_;
        return;
    }
    actor_archive.archiveEnum(health_bar_mode_, "healthBarMode");
    actor_archive.archiveLocalizedString(descriptive_name_, "descriptiveName");
    actor_archive.archiveFloat(max_hit_points_, "maxHitPoints");
}

void CCharacter::archiveDemonActorFields(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
}

void CCharacter::archiveGrabbedBy(CActorArchive &actor_archive) {
    actor_archive.archiveActor(grabbed_by_, "grabbedBy");
}

void CCharacter::archiveHitPoints(CActorArchive &actor_archive) {
    actor_archive.archiveFloat(hit_points_, "hitPoints");
}

void CCharacter::archiveCarryObjects(CActorArchive &actor_archive) {
    actor_archive.archiveActor(carried_actors_[0], "lhCarryObject");
    actor_archive.archiveActor(carried_actors_[1], "rhCarryObject");
}

void CCharacter::archiveLayerAction(CActorArchive &actor_archive) {
    actor_archive.archiveInteger(layer_action_index_, "layerActionIndex");
    actor_archive.archiveFloat(layer_action_t_, "layerActionT");
}

void CCharacter::clearGrabbedType() {
    grabbed_type_ = kOrdinaryGrab;
}

void CCharacter::setHealthBarMode(EHealthBarMode health_bar_mode) {
    health_bar_mode_ = health_bar_mode;
}

// nocedit 0x0042bf80
CDemonActor *CCharacter::getGrabber() {
    return grabbed_by_;
}

// nocedit 0x0042d360
bool CCharacter::isCarryingAnything() const {
    return std::ranges::any_of(carried_actors_,
                               [](const CDemonActor *actor) { return actor != nullptr; });
}

float CCharacter::getHitPoints() const {
    return hit_points_;
}

float CCharacter::getMaxHitPoints() const {
    return max_hit_points_;
}

CDemonActor *CCharacter::getCarriedActor(std::size_t hand) const {
    return carried_actors_.at(hand);
}

const std::string &CCharacter::getTalkToMeEvent() const {
    return talk_to_me_event_;
}

int CCharacter::getGrabbedType() const {
    return grabbed_type_;
}

const CClothList &CCharacter::getClothList() const {
    return cloth_list_;
}

float CCharacter::getSizeScale() const {
    return size_scale_;
}

EHealthBarMode CCharacter::getHealthBarMode() const {
    return health_bar_mode_;
}

const std::string &CCharacter::getDescriptiveName() const {
    return descriptive_name_;
}

int CCharacter::getLayerActionIndex() const {
    return layer_action_index_;
}

float CCharacter::getLayerActionT() const {
    return layer_action_t_;
}

} // namespace nocturne::core

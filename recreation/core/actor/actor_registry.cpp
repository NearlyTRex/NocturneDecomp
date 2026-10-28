#include "common/error/error.h"
#include "core/actor/actor.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammo.h"
#include "core/backgnd/backgroundactor.h"
#include "core/baron/baron.h"
#include "core/baron/baronweapon.h"
#include "core/barrier/barrier.h"
#include "core/charactr/character.h"
#include "core/colonel/colonel.h"
#include "core/gabriela/gabriella.h"
#include "core/gun/gun.h"
#include "core/haystack/haystack.h"
#include "core/health/healthitem.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/icepick/icepick.h"
#include "core/litecone/lightcone.h"
#include "core/moloch/moloch.h"
#include "core/scat/scat.h"
#include "core/stranger/stranger.h"
#include "core/svetlana/svetlana.h"
#include "core/trigger/trigger.h"
#include "core/waypoint/waypoint.h"
#include "core/weapon/weapon.h"

#include <algorithm>
#include <array>
#include <format>
#include <memory>
#include <string_view>

namespace nocturne::core {
namespace {

// What a class the file doesn't list reads as.
constexpr int kUnlistedVersion = 1;

} // namespace

// Each class's file registered it as the game started; here the ported classes are listed in
// one place, and each port adds its own.
// nocedit 0x00408320
void CActor::registerActorClasses() {
    static constexpr std::array<const CDemonActorType *, 23> kTypes = {
        &CDemonActor::kType,      &CCharacter::kType, &CHero::kType,
        &CHeroPlaceholder::kType, &CGabriella::kType, &CSvetlana::kType,
        &CStranger::kType,        &CScat::kType,      &CBaron::kType,
        &CIcePick::kType,         &CHaystack::kType,  &CColonel::kType,
        &CMoloch::kType,          &CWeapon::kType,    &CGun::kType,
        &CBaronWeapon::kType,     &CAmmo::kType,      &CTrigger::kType,
        &CWayPoint::kType,        &CBarrier::kType,   &CBackgroundActor::kType,
        &CHealthItem::kType,      &CLightCone::kType};
    for (const CDemonActorType *type : kTypes) {
        registerActorClass(*type);
    }
}

// The hash is the record's own, worked out with its name.
// nocedit 0x0040c2e0
void CActor::registerActorClass(const CDemonActorType &type) {
    if (registrations_.size() >= kMaxActorTypes) {
        common::displayErrorAndQuit("Too many actor types!");
    }
    registrations_.push_back(&type);
}

// nocedit 0x0040c3c0
const CDemonActorType *CActor::getActorClassByName(std::string_view class_name) const {
    const std::uint32_t hash = hashClassName(class_name);
    const auto found = std::ranges::find(registrations_, hash, &CDemonActorType::name_hash);
    return found == registrations_.end() ? nullptr : *found;
}

// The original also quit when there was no memory for the actor.
// nocedit 0x0040c430
std::unique_ptr<CDemonActor> CActor::createActorByName(std::string_view class_name) const {
    const CDemonActorType *type = getActorClassByName(class_name);
    if (type == nullptr) {
        common::displayErrorAndQuit(
            std::format("Can't create actor of unknown class type: {}", class_name));
    }
    if (type->factory_func == nullptr) {
        common::displayErrorAndQuit(
            std::format("Can't create instance of abstract type {}", class_name));
    }
    return type->factory_func();
}

std::size_t CActor::getActorClassCount() const {
    return registrations_.size();
}

// The original set every class's version to 1; here a class not set reads as 1.
// nocedit 0x0040c7f0
void CActor::resetSavedVersions() {
    saved_versions_.clear();
}

void CActor::setSavedVersion(const CDemonActorType &type, int saved_version) {
    saved_versions_.insert_or_assign(&type, saved_version);
}

int CActor::getSavedVersion(const CDemonActorType &type) const {
    const auto found = saved_versions_.find(&type);
    return found == saved_versions_.end() ? kUnlistedVersion : found->second;
}

} // namespace nocturne::core

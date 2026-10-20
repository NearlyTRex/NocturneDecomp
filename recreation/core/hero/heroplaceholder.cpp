#include "core/hero/heroplaceholder.h"

#include "common/error/error.h"
#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/game/herotype.h"
#include "core/hero/hero.h"
#include "core/mission/demonmission.h"

#include <memory>
#include <string_view>

namespace nocturne::core {
namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

std::string_view getHeroClassName(EHeroType hero_type) {
    switch (hero_type) {
    case EHeroType::HERO_TYPE_GABRIELLA:
        return "CGabriella";
    case EHeroType::HERO_TYPE_SVETLANA:
        return "CSvetlana";
    case EHeroType::HERO_TYPE_STRANGER:
        return "CStranger";
    case EHeroType::HERO_TYPE_SCAT:
        return "CScat";
    case EHeroType::HERO_TYPE_BARON:
        return "CBaron";
    case EHeroType::HERO_TYPE_ICEPICK:
        return "CIcePick";
    case EHeroType::HERO_TYPE_HAYSTACK:
        return "CHaystack";
    case EHeroType::HERO_TYPE_COLONEL:
        return "CColonel";
    case EHeroType::HERO_TYPE_MOLOCH:
        return "CMoloch";
    }
    common::displayErrorAndQuit("CHeroPlaceholder::createHero - invalid hero type.");
}

} // namespace

constinit const CDemonActorType CHeroPlaceholder::kType =
    makeActorType("CHeroPlaceholder", &CDemonActor::kType, &CHeroPlaceholder::create, kVersion);

// deferred: drawing it transparent, with the set's renderable list
// nocedit 0x004f3c00
CHeroPlaceholder::CHeroPlaceholder() = default;

// nocedit 0x004f3c30
CHeroPlaceholder::~CHeroPlaceholder() = default;

// nocedit 0x004f3bf0
const CDemonActorType &CHeroPlaceholder::getActorType() const {
    return kType;
}

// nocedit 0x004f3bc0
std::unique_ptr<CDemonActor> CHeroPlaceholder::create() {
    return std::make_unique<CHeroPlaceholder>();
}

// The original also quit when the class it made wasn't a hero, which none of these can be.
// deferred: updating the hero's orientation matrix, with updateOrientationMatrix
// nocedit 0x004f3d80
std::unique_ptr<CHero> CHeroPlaceholder::createHero(EHeroType hero_type, const CActor &actor,
                                                    const CDemonMission &mission) const {
    std::unique_ptr<CHero> hero(
        &dynamic_cast<CHero &>(*actor.createActorByName(getHeroClassName(hero_type)).release()));
    mission.generateActorName(*hero);
    hero->setLocation(getLocation());
    hero->CDemonActor::setOrientation(getOrientation());
    return hero;
}

int CHeroPlaceholder::getIndex() const {
    return index_;
}

void CHeroPlaceholder::setIndex(int index) {
    index_ = index;
}

} // namespace nocturne::core

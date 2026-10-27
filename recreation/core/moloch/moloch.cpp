#include "core/moloch/moloch.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x00528ac0
constinit const CDemonActorType CMoloch::kType =
    makeActorType("CMoloch", &CHero::kType, &CMoloch::create, kVersion);

// deferred: loading the human model moloch_h.dfm, with CDeformableModelInstance::init
// deferred: the morph, with the steps that read it
// deferred: a processDamage override for a player's Moloch, which the original lacks so nothing
//   hurts it: damage down to a floor of 1 hit point, none while invincible or in god mode, and
//   destroying damage dealt as generic (the decomp's HERO_ACTIONS moloch_process_damage), with
//   CCharacter::processDamage
// deferred: regenerating a player's Moloch 5 hit points a second up to its most, with the heroes'
//   per-frame update (the decomp's nocturne_moloch_regenerate)
// deferred: fire attacking in demon form, alternating PUNCH and OVERHEADSMASH with the hit
//   landing at a fixed frame from either hand bone, morphs held off while attacking, and attacks
//   starting over at the punch as a mission builds its heroes (the decomp's nocturne_moloch_fire,
//   _attack_hit, _is_attacking and _reset), with CMoloch::process
// deferred: leaving Moloch out of fall damage, which reaches the other heroes through their
//   process (the decomp's hero_fall.h), with CMoloch::process
// deferred: a player Moloch's fire opening doors, pulling levers and talking, which the original
//   never reaches (the decomp's hero_interact.h nocturne_hero_fire_interact), with
//   CMoloch::process
// nocedit 0x00528b30
CMoloch::CMoloch() = default;

// nocedit 0x00528bf0
CMoloch::~CMoloch() = default;

// nocedit 0x00528b20
const CDemonActorType &CMoloch::getActorType() const {
    return kType;
}

// nocedit 0x00529880
void CMoloch::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
    actor_archive.archiveString(human_to_demon_condition_, "humanToDemonCond");
    actor_archive.archiveString(demon_to_human_condition_, "demonToHumanCond");
    actor_archive.archiveFlag(in_human_form_, "inHumanForm");
    actor_archive.archiveFlag(morphing_, "morphing");
    actor_archive.archiveFloat(morph_timer_, "morphTimer");
}

const std::string &CMoloch::getHumanToDemonCondition() const {
    return human_to_demon_condition_;
}

const std::string &CMoloch::getDemonToHumanCondition() const {
    return demon_to_human_condition_;
}

bool CMoloch::isInHumanForm() const {
    return in_human_form_;
}

bool CMoloch::isMorphing() const {
    return morphing_;
}

float CMoloch::getMorphTimer() const {
    return morph_timer_;
}

// nocedit 0x00528af0
std::unique_ptr<CDemonActor> CMoloch::create() {
    return std::make_unique<CMoloch>();
}

} // namespace nocturne::core

#include "core/zombie/zombie.h"

#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"

#include <cstddef>
#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;
// The versions that first held each field after the model.
constexpr int kMotionVersion = 2;
constexpr int kPartStatusVersion = 3;
constexpr int kRiseVersion = 4;
constexpr int kGraveVersion = 5;
constexpr int kClothVersion = 6;
// From this version a zombie's carried actor is CCharacter's to save.
constexpr int kCharacterCarryVersion = 7;
constexpr int kMinerVersion = 8;
// From this version the cloth list is CCharacter's to save.
constexpr int kCharacterClothVersion = 9;
constexpr int kChaseFastVersion = 10;
// From this version the guard distance is CEnemy's alone to save.
constexpr int kEnemyGuardVersion = 11;
constexpr std::size_t kRightHand = 1;
// How far it reaches for things to pick up, as a fraction of the most.
constexpr float kNearestReach = 0.3F;
constexpr float kFarthestReach = 1.0F;
constexpr int kMostPickupSeed = 0xff;

} // namespace

// nocedit 0x005f8c90
constinit const CDemonActorType CZombie::kType =
    makeActorType("CZombie", &CEnemy::kType, &CZombie::create, kVersion);

// deferred: being a miner when the set's geometry is mine.geo, with CActor::createActorByName
//   given the set
// deferred: the collision cylinder, the detection range, what it is picking up and how far it
//   has come, the door it heads for, the pain cooldown, rising and burial timers, and not finding
//   paths to new targets, with CZombie::setup and CZombie::process
// deferred: chasing the hero netplay gives it rather than the local one (the decomp's
//   nocturne_net_sim_target_for), with CZombie::process
// deferred: drawing the part a blow takes off from the simulation's random numbers rather than
//   rand, so netplay agrees on it (the decomp's nocturne_rng_sim), with
//   CZombie::processDismemberment
// nocedit 0x005f8fe0
CZombie::CZombie(CActor &classes)
    : CEnemy(classes),
      pickup_range_factor_(classes.getRandomFloatFromRange(kNearestReach, kFarthestReach)),
      pickup_seed_(classes.getRandomInt(0, kMostPickupSeed)) {
    getModel().init("zombie1.dfm");
}

// nocedit 0x005fcc50
CZombie::~CZombie() = default;

// nocedit 0x005f8fd0
const CDemonActorType &CZombie::getActorType() const {
    return kType;
}

// nocedit 0x005f8fa0
std::unique_ptr<CDemonActor> CZombie::create(CActor &classes) {
    return std::make_unique<CZombie>(classes);
}

// The speed is saved again after CEnemy's.
// nocedit 0x005fbfd0
void CZombie::archive(CActorArchive &actor_archive) {
    CEnemy::archive(actor_archive);
    archiveSpeed(actor_archive);
    actor_archive.archiveDeformableModelInstance(getModel(), "modelName");
    const int version = actor_archive.getSavedVersion(kType);
    if (version >= kMotionVersion) {
        if (version < kEnemyGuardVersion) {
            archiveGuardDistance(actor_archive);
        }
        actor_archive.archiveMotionState(getModel(), "motion state");
    }
    if (version >= kPartStatusVersion) {
        actor_archive.archivePartStatus(getModel(), "partStatus");
        if (version < kCharacterCarryVersion) {
            archiveCarriedActor(actor_archive, kRightHand, "carriedActor");
        }
    }
    if (version >= kRiseVersion) {
        actor_archive.archiveString(rise_from_grave_condition_, "riseFromGraveCondition");
    }
    if (version >= kGraveVersion) {
        actor_archive.archiveActor(grave_actor_, "graveActor");
    }
    if (version >= kClothVersion && version < kCharacterClothVersion) {
        archiveClothList(actor_archive);
    }
    if (version >= kMinerVersion) {
        actor_archive.archiveFlag(miner_zombie_, "isMinerZombie");
    }
    if (version >= kChaseFastVersion) {
        actor_archive.archiveFlag(always_chase_fast_, "alwaysChaseFast");
    }
}

float CZombie::getPickupRangeFactor() const {
    return pickup_range_factor_;
}

int CZombie::getPickupSeed() const {
    return pickup_seed_;
}

const std::string &CZombie::getRiseFromGraveCondition() const {
    return rise_from_grave_condition_;
}

CDemonActor *CZombie::getGraveActor() const {
    return grave_actor_;
}

bool CZombie::isMinerZombie() const {
    return miner_zombie_;
}

bool CZombie::alwaysChasesFast() const {
    return always_chase_fast_;
}

} // namespace nocturne::core

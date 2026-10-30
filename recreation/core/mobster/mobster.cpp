#include "core/mobster/mobster.h"

#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;
// The one version whose cloth list was the mobster's to save.
constexpr int kClothVersion = 2;
// From this version the guard distance is CEnemy's alone to save.
constexpr int kEnemyGuardVersion = 4;
constexpr int kPostVersion = 5;
constexpr int kVehicleVersion = 6;
constexpr int kHoldPositionVersion = 7;
constexpr float kMobsterVictimHeight = 40.0F;
constexpr int kMostIdleCounter = 0xff;
constexpr char kFirstVoice = 'b';
constexpr char kLastVoice = 'e';

} // namespace

// nocedit 0x00525070
constinit const CDemonActorType CMobster::kType =
    makeActorType("CMobster", &CEnemy::kType, &CMobster::create, kVersion);

// deferred: the collision cylinder, the detection range, the idle, weapon, firing and taunt
//   timers, the weapon it heads for and how often it has looked, and not finding paths to new
//   targets, with CMobster::setup and CMobster::process
// deferred: chasing the hero netplay gives it rather than the local one (the decomp's
//   nocturne_net_sim_target_for), with CMobster::process
// deferred: drawing the part a blow takes off from the simulation's random numbers rather than
//   rand, so netplay agrees on it (the decomp's nocturne_rng_sim), with
//   CMobster::processDismemberment
// nocedit 0x00525200
CMobster::CMobster(CActor &classes)
    : CEnemy(classes), idle_counter_(classes.getRandomInt(0, kMostIdleCounter)),
      voice_(static_cast<char>(classes.getRandomInt(kFirstVoice, kLastVoice))) {
    getModel().init("mobster1.dfm");
    setVictimHeight(kMobsterVictimHeight);
}

// nocedit 0x00527c70
CMobster::~CMobster() = default;

// nocedit 0x005251f0
const CDemonActorType &CMobster::getActorType() const {
    return kType;
}

// nocedit 0x005251c0
std::unique_ptr<CDemonActor> CMobster::create(CActor &classes) {
    return std::make_unique<CMobster>(classes);
}

// The speed is saved again after CEnemy's.
// nocedit 0x00527230
void CMobster::archive(CActorArchive &actor_archive) {
    CEnemy::archive(actor_archive);
    archiveSpeed(actor_archive);
    actor_archive.archiveDeformableModelInstance(getModel(), "modelName");
    const int version = actor_archive.getSavedVersion(kType);
    if (version < kEnemyGuardVersion) {
        archiveGuardDistance(actor_archive);
    }
    actor_archive.archiveMotionState(getModel(), "motion state");
    if (version == kClothVersion) {
        archiveClothList(actor_archive);
    }
    if (version >= kPostVersion) {
        actor_archive.archiveInteger(post_mode_, "postMode");
        actor_archive.archiveActor(post_, "ourPost");
    }
    if (version >= kVehicleVersion) {
        actor_archive.archiveActor(vehicle_, "vehicle");
        actor_archive.archiveInteger(side_of_car_, "sideOfCar");
    }
    if (version >= kHoldPositionVersion) {
        actor_archive.archiveFlag(holding_position_, "holdPosFlag");
        actor_archive.archiveString(hold_position_condition_, "holdPosCond");
    }
}

int CMobster::getIdleCounter() const {
    return idle_counter_;
}

char CMobster::getVoice() const {
    return voice_;
}

int CMobster::getPostMode() const {
    return post_mode_;
}

CDemonActor *CMobster::getPost() const {
    return post_;
}

CDemonActor *CMobster::getVehicle() const {
    return vehicle_;
}

int CMobster::getSideOfCar() const {
    return side_of_car_;
}

bool CMobster::isHoldingPosition() const {
    return holding_position_;
}

const std::string &CMobster::getHoldPositionCondition() const {
    return hold_position_condition_;
}

} // namespace nocturne::core

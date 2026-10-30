#include "core/ghoul/ghoul.h"

#include "common/math/fixed.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;
// From this version the speed is CEnemy's alone to save.
constexpr int kEnemySpeedVersion = 4;
// From this version to the next the guard distance was saved again.
constexpr int kGuardVersion = 2;
constexpr int kEnemyGuardVersion = 7;
constexpr int kLivesVersion = 3;
constexpr int kMotionVersion = 5;
constexpr int kPartStatusVersion = 6;
constexpr double kFixedOne = 65536.0;
constexpr float kSoonestBurp = 20.0F;
constexpr float kLatestBurp = 35.0F;
constexpr float kSoonestSpasm = 4.0F;
constexpr float kLatestSpasm = 10.0F;
constexpr int kFewestLives = 1;
constexpr int kMostLives = 3;

// Seconds as 16.16, chopped as the original's round and FISTP leave them.
int drawFixedSeconds(CActor &classes, float soonest, float latest) {
    return common::truncateToInt(
        static_cast<double>(classes.getRandomFloatFromRange(soonest, latest)) * kFixedOne);
}

} // namespace

// nocedit 0x004e5f90
constinit const CDemonActorType CGhoul::kType =
    makeActorType("CGhoul", &CEnemy::kType, &CGhoul::create, kVersion);

// deferred: the collision cylinder, the detection range, the eating state, flinching, the stun,
//   heal and stuck timers, the dark waypoint and going berserk, with CGhoul::setup and
//   CGhoul::process
// deferred: chasing the hero netplay gives it rather than the local one (the decomp's
//   nocturne_net_sim_target_for), with CGhoul::process
// deferred: drawing the part a blow takes off from the simulation's random numbers rather than
//   rand, so netplay agrees on it (the decomp's nocturne_rng_sim), with
//   CGhoul::processDismemberment
// deferred: tracing each blow for netplay debugging (the decomp's nocturne_sim_trace_damage), with
//   CGhoul::processDamage
// nocedit 0x004e6030
CGhoul::CGhoul(CActor &classes)
    : CEnemy(classes), burp_timer_(drawFixedSeconds(classes, kSoonestBurp, kLatestBurp)),
      spasm_timer_(drawFixedSeconds(classes, kSoonestSpasm, kLatestSpasm)),
      lives_left_(classes.getRandomInt(kFewestLives, kMostLives)) {
    getModel().init("guul.dfm");
}

// nocedit 0x004e8f10
CGhoul::~CGhoul() = default;

// nocedit 0x004e6020
const CDemonActorType &CGhoul::getActorType() const {
    return kType;
}

// nocedit 0x004e5ff0
std::unique_ptr<CDemonActor> CGhoul::create(CActor &classes) {
    return std::make_unique<CGhoul>(classes);
}

// From version 6 the lives are saved twice, the later read winning.
// nocedit 0x004e81c0
void CGhoul::archive(CActorArchive &actor_archive) {
    CEnemy::archive(actor_archive);
    const int version = actor_archive.getSavedVersion(kType);
    if (version < kEnemySpeedVersion) {
        archiveSpeed(actor_archive);
    }
    actor_archive.archiveDeformableModelInstance(getModel(), "modelName");
    if (version >= kGuardVersion && version < kEnemyGuardVersion) {
        archiveGuardDistance(actor_archive);
    }
    if (version >= kLivesVersion) {
        actor_archive.archiveInteger(lives_left_, "livesLeft");
    }
    if (version >= kMotionVersion) {
        actor_archive.archiveMotionState(getModel(), "motion state");
    }
    if (version >= kPartStatusVersion) {
        actor_archive.archivePartStatus(getModel(), "partStatus");
        actor_archive.archiveInteger(spasm_count_, "spasmCount");
        actor_archive.archiveInteger(lives_left_, "livesLeft");
        actor_archive.archiveInteger(arise_timer_, "ariseTimer");
    }
}

int CGhoul::getBurpTimer() const {
    return burp_timer_;
}

int CGhoul::getSpasmTimer() const {
    return spasm_timer_;
}

int CGhoul::getLivesLeft() const {
    return lives_left_;
}

int CGhoul::getSpasmCount() const {
    return spasm_count_;
}

int CGhoul::getAriseTimer() const {
    return arise_timer_;
}

} // namespace nocturne::core

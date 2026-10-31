#include "core/enemy/enemy.h"

#include "common/math/vector3i.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 10;
// Before this version CCharacter's fields weren't saved.
constexpr int kCharacterVersion = 4;
// The versions that first held each field, before CCharacter's were saved and after.
constexpr int kOldSpeedVersion = 2;
constexpr int kOldHitPointsVersion = 3;
constexpr int kRandomizeVersion = 5;
constexpr int kScriptVictimVersion = 6;
constexpr int kPatrolVersion = 7;
constexpr int kGuardVersion = 8;
constexpr int kVictimHeightVersion = 9;
constexpr int kVictimVersion = 10;
// How far an enemy's speed and its size along each axis, in 16.16, are from its kind's.
constexpr float kSlowestSpeed = 0.9F;
constexpr float kFastestSpeed = 1.1F;
constexpr int kScaleVariation = 0x1fff;

int drawScale(CActor &classes) {
    return classes.getRandomInt(-kScaleVariation, kScaleVariation) + CDemonActor::kUnitScale;
}

} // namespace

// nocedit 0x004a94d0
constinit const CDemonActorType CEnemy::kType =
    makeActorType("CEnemy", &CCharacter::kType, nullptr, kVersion);

// deferred: the special form, the victim search's timer and radius, being in combat, the attack
//   cooldown, finding paths to new targets and the enemy's footsteps, with CEnemy::updateVictim
//   and CCharacter::process
// deferred: dropping a victim the enemy can neither see nor path to, where the original kept it,
//   so an enemy doesn't hold a hero two floors away (the decomp's ENEMY_RETAIN), with
//   CEnemy::updateVictim
// deferred: counting the enemies of its class attacking the hero netplay gives it to chase,
//   rather than the local one (the decomp's nocturne_net_sim_target_for), with
//   CEnemy::countSameClassAttackingHero
// nocedit 0x004a9500
CEnemy::CEnemy(CActor &classes)
    : CCharacter(classes), speed_(classes.getRandomFloatFromRange(kSlowestSpeed, kFastestSpeed)) {
    const int scale_x = drawScale(classes);
    const int scale_y = drawScale(classes);
    const int scale_z = drawScale(classes);
    setScale({.x = scale_x, .y = scale_y, .z = scale_z});
}

// nocedit 0x004125c0
CEnemy::~CEnemy() = default;

// nocedit 0x004a9650
void CEnemy::setup() {
    CCharacter::setup();
}

// nocedit 0x004a9660
void CEnemy::archive(CActorArchive &actor_archive) {
    const int version = actor_archive.getSavedVersion(kType);
    if (version < kCharacterVersion) {
        archiveDemonActorFields(actor_archive);
        if (version >= kOldSpeedVersion) {
            archiveSpeed(actor_archive);
        }
        if (version >= kOldHitPointsVersion) {
            archiveHitPoints(actor_archive);
            actor_archive.archiveFlag(left_blood_pool_, "poolMe");
        }
        return;
    }
    CCharacter::archive(actor_archive);
    archiveSpeed(actor_archive);
    actor_archive.archiveFlag(left_blood_pool_, "poolMe");
    if (version >= kRandomizeVersion) {
        actor_archive.archiveFlag(randomizable_, "randomizeMe");
    }
    if (version >= kScriptVictimVersion) {
        actor_archive.archiveActor(script_victim_, "scriptVictim");
    }
    if (version >= kPatrolVersion) {
        actor_archive.archiveString(patrol_name_pattern_, "patrolNamePattern");
    }
    if (version >= kGuardVersion) {
        archiveGuardDistance(actor_archive);
    }
    if (version >= kVictimHeightVersion) {
        actor_archive.archiveFloat(victim_height_, "victimHeight");
    }
    if (version >= kVictimVersion) {
        actor_archive.archiveActor(victim_, "victim");
    }
}

void CEnemy::archiveSpeed(CActorArchive &actor_archive) {
    actor_archive.archiveFloat(speed_, "speed");
}

void CEnemy::archiveGuardDistance(CActorArchive &actor_archive) {
    actor_archive.archiveFloat(guard_distance_, "guardDistance");
}

void CEnemy::setVictimHeight(float victim_height) {
    victim_height_ = victim_height;
}

float CEnemy::getSpeed() const {
    return speed_;
}

bool CEnemy::hasLeftBloodPool() const {
    return left_blood_pool_;
}

bool CEnemy::isRandomizable() const {
    return randomizable_;
}

CDemonActor *CEnemy::getScriptVictim() const {
    return script_victim_;
}

const std::string &CEnemy::getPatrolNamePattern() const {
    return patrol_name_pattern_;
}

float CEnemy::getGuardDistance() const {
    return guard_distance_;
}

float CEnemy::getVictimHeight() const {
    return victim_height_;
}

CDemonActor *CEnemy::getVictim() const {
    return victim_;
}

} // namespace nocturne::core

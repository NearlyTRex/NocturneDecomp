#include "core/flame/flame.h"

#include "common/math/extendedfloat.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/collisiontype.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/flame/flametype.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;
constexpr int kLookVersion = 2;
constexpr int kOnEventVersion = 3;
constexpr int kOffEventVersion = 4;
constexpr int kStateVersion = 5;
constexpr int kFlickerVersion = 6;
constexpr int kBurnVersion = 7;
constexpr float kAnimationFrames = 8.0F;
// The box's margin above and below the flame. The bottom's is a float, the top's a double.
constexpr float kBoxFloor = -0.1F;
constexpr double kBoxHeadroom = 0.1;
constexpr float kHalf = 0.5F;

} // namespace

// nocedit 0x004c9a30
constinit const CDemonActorType CFlame::kType =
    makeActorType("CFlame", &CDemonActor::kType, &CFlame::create, kVersion);

// deferred: the sound handle, the visibility check, the enemy it burns next and the corona flag,
//   with CFlame::process and CFlame::renderTransparent
// deferred: setting alight the hero netplay gives it rather than the local one (the decomp's
//   nocturne_net_sim_target_for), with CFlame::process
// deferred: drawing the torch sound's pitch and start time from the cosmetic stream (the decomp's
//   nocturne_rng_fx_range), with CFlame::process
// deferred: drawing the globe's flicker from the cosmetic stream, with CFlame::updateGlobe
// nocedit 0x004c9aa0
CFlame::CFlame(CActor &classes)
    : classes_(classes), animation_time_(classes.getCosmeticFloatFromRange(0.0F, kAnimationFrames)),
      which_flame_(EFlameType::kTorch) {
    setTransparent(true);
}

// The flip is drawn from the cosmetic stream, as the decomp's nocturne_rng_fx draws it, so
// netplay can't fall out of step over it.
// deferred: capturing every flame's eight frames, the torch's F, the candle's CAN and the other
//   three's BF, with CFlame::renderTransparent
// nocedit 0x004c9b90
void CFlame::setup() {
    CDemonActor::setup();
    texture_flipped_ = (classes_.getCosmeticRand() & 1) != 0;
}

bool CFlame::isTextureFlipped() const {
    return texture_flipped_;
}

// nocedit 0x00412690
CFlame::~CFlame() = default;

// nocedit 0x004c9a90
const CDemonActorType &CFlame::getActorType() const {
    return kType;
}

// nocedit 0x004c9a60
std::unique_ptr<CDemonActor> CFlame::create(CActor &classes) {
    return std::make_unique<CFlame>(classes);
}

// The original saves the off event under the on event's description too.
// nocedit 0x004cac60
void CFlame::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveVector(flame_size_, "flameSize");
    const int version = actor_archive.getSavedVersion(kType);
    if (version >= kLookVersion) {
        actor_archive.archiveEnum(which_flame_, "whichFlame");
        actor_archive.archiveFloat(globe_scalar_, "globeScalar");
    }
    if (version >= kOnEventVersion) {
        actor_archive.archiveString(on_event_, "onEvent");
    }
    if (version >= kOffEventVersion) {
        actor_archive.archiveString(off_event_, "onEvent");
    }
    if (version >= kStateVersion) {
        actor_archive.archiveFlag(flame_state_, "flameState");
    }
    if (version >= kFlickerVersion) {
        actor_archive.archiveFloat(intensity_, "intensity");
        actor_archive.archiveFloat(randomness_, "randomness");
    }
    if (version >= kBurnVersion) {
        actor_archive.archiveFlag(burn_hero_, "burnHero");
        actor_archive.archiveFlag(burn_enemy_, "burnEnemy");
    }
}

// nocedit 0x004cac00
CBoundingBox3D *CFlame::getBoundingBox(CBoundingBox3D *out_box) {
    out_box->min = {.x = -flame_size_.x * kHalf, .y = kBoxFloor, .z = -flame_size_.z * kHalf};
    const common::CExtendedFloat top =
        common::CExtendedFloat(flame_size_.y) + common::CExtendedFloat(kBoxHeadroom);
    out_box->max = {.x = flame_size_.x * kHalf, .y = top.toFloat(), .z = flame_size_.z * kHalf};
    return out_box;
}

// nocedit 0x004cad80
ECollisionType CFlame::getCollisionType(SCollisionInfo * /*collision_info*/) {
    return ECollisionType::kNone;
}

// nocedit 0x004caa70
void CFlame::hide() {
    is_visible_ = false;
}

const common::CVector3f &CFlame::getFlameSize() const {
    return flame_size_;
}

EFlameType CFlame::getFlameType() const {
    return which_flame_;
}

float CFlame::getGlobeScalar() const {
    return globe_scalar_;
}

const std::string &CFlame::getOnEvent() const {
    return on_event_;
}

const std::string &CFlame::getOffEvent() const {
    return off_event_;
}

bool CFlame::isFlameOn() const {
    return flame_state_;
}

float CFlame::getIntensity() const {
    return intensity_;
}

float CFlame::getRandomness() const {
    return randomness_;
}

bool CFlame::burnsHero() const {
    return burn_hero_;
}

bool CFlame::burnsEnemies() const {
    return burn_enemy_;
}

bool CFlame::isVisible() const {
    return is_visible_;
}

float CFlame::getAnimationTime() const {
    return animation_time_;
}

} // namespace nocturne::core

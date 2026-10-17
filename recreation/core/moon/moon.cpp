#include "core/moon/moon.h"

#include "common/math/extendedfloat.h"
#include "common/math/fixed.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/game/game.h"

#include <cstdint>
#include <format>
#include <string>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

// The cheat that swaps the moon for a head.
constexpr int kHeadOfHorrorCheat = 666;
constexpr int kCloudSize = 256;
constexpr int kAnimationWidth = 640;
constexpr int kAnimationHeight = 278;
constexpr float kStartPhase = 0.25F;
constexpr double kTurnPerSecond = 0.0125;
constexpr double kRestingPhaseLimit = 0.58;
constexpr float kRestingPhase = 0.58F;
constexpr double kAnimationFramesPerSecond = 12.0;
constexpr double kAnimationLength = 60.0;
constexpr double kBatFramesPerSecond = 20.0;
constexpr double kBatAnimationFramesPerSecond = 30.0;
constexpr float kBatScatter = 5.0F;
// 16.16 texels a 16.16 second.
constexpr std::uint32_t kCloudScrollShiftX = 5;
constexpr std::uint32_t kCloudScrollShiftY = 4;

std::int32_t scrollBy(std::int32_t scroll, int delta_time_int, std::uint32_t shift) {
    return common::wrappingAdd(
        scroll, static_cast<std::int32_t>(static_cast<std::uint32_t>(delta_time_int) << shift));
}

} // namespace

// What staticInit constructed is the members.
// nocedit 0x005299f0
// nocedit 0x00529a80
CMoon::CMoon(const SMoonOwners &owners)
    : owners_(owners), moon_(owners.dosio), bat_model_(owners.dosio),
      cloud_texture_(owners.dosio, owners.screen, owners.special) {
    animation_textures_.reserve(kAnimationFrameCount);
    for (std::size_t i = 0; i < kAnimationFrameCount; ++i) {
        animation_textures_.emplace_back(owners.dosio, owners.screen, owners.special);
    }
    bat_courses_.reserve(3);
    for (int i = 0; i < 3; ++i) {
        bat_courses_.emplace_back(owners.dosio);
    }
}

// nocedit 0x00529ab0
CMoon::~CMoon() {
    free();
}

// nocedit 0x00529ae0
void CMoon::init() {
    if (!is_loaded_) {
        load();
    }
    rotation_phase_ = kStartPhase;
    for (SBat &bat : bats_) {
        scatterBat(bat);
    }
    bats_enabled_ = false;
}

void CMoon::load() {
    if (owners_.game.head_of_horror_cheat == kHeadOfHorrorCheat) {
        moon_.load("taylor_head.kfm");
        owners_.game.head_of_horror_cheat = 0;
    } else {
        moon_.load("moon.kfm");
    }
    bat_model_.load("menubat.kfm");
    cloud_texture_.load("menucld2", kCloudSize, kCloudSize);
    for (std::size_t i = 0; i < animation_textures_.size(); ++i) {
        animation_textures_[i].load(std::format("noc{:05}", i), kAnimationWidth, kAnimationHeight);
    }
    is_loaded_ = true;
    for (std::size_t i = 0; i < bat_courses_.size(); ++i) {
        bat_courses_[i].load(std::format("menu{}.pth", i + 1));
    }
}

// Each bat starts up to a course's length before its course, so they arrive one by one.
void CMoon::scatterBat(SBat &bat) {
    bat.course_index = owners_.crt_random.rand() % static_cast<int>(bat_courses_.size());
    const auto length =
        static_cast<float>(bat_courses_[static_cast<std::size_t>(bat.course_index)].getLength());
    bat.course_position = -owners_.actor.getRandomFloatFromRange(0.0F, length);
    bat.animation_frame =
        owners_.actor.getRandomFloatFromRange(0.0F, static_cast<float>(bat_model_.getFrameCount()));
    bat.random_offset.x = owners_.actor.getRandomFloatFromRange(-kBatScatter, kBatScatter);
    bat.random_offset.y = owners_.actor.getRandomFloatFromRange(-kBatScatter, kBatScatter);
    bat.random_offset.z = owners_.actor.getRandomFloatFromRange(-kBatScatter, kBatScatter);
}

// nocedit 0x00529ce0
void CMoon::free() {
    if (is_loaded_) {
        cloud_texture_.free();
        for (engine::CAlphaBitmap &texture : animation_textures_) {
            texture.free();
        }
        is_loaded_ = false;
    }
    for (CCourse &course : bat_courses_) {
        course.free();
    }
    moon_.free();
    bat_model_.free();
}

// The phase, the timer and the frames are compared before they are rounded to float, as the x87
// holds them.
// nocedit 0x00529d60
void CMoon::update(float delta_time) {
    const CExtendedFloat step(delta_time);
    const CExtendedFloat phase =
        (step * CExtendedFloat(kTurnPerSecond)) + CExtendedFloat(rotation_phase_);
    rotation_phase_ = phase.toFloat();
    if (phase > CExtendedFloat(kRestingPhaseLimit)) {
        rotation_phase_ = kRestingPhase;
        bats_enabled_ = true;
    }
    const CExtendedFloat timer =
        (step * CExtendedFloat(kAnimationFramesPerSecond)) + CExtendedFloat(animation_timer_);
    animation_timer_ = timer.toFloat();
    if (timer >= CExtendedFloat(kAnimationLength)) {
        animation_timer_ =
            (CExtendedFloat(animation_timer_) + CExtendedFloat(-kAnimationLength)).toFloat();
    }
    const int delta_time_int = owners_.game.getDeltaTimeInt();
    cloud_scroll_x_ = scrollBy(cloud_scroll_x_, delta_time_int, kCloudScrollShiftX);
    cloud_scroll_y_ = scrollBy(cloud_scroll_y_, delta_time_int, kCloudScrollShiftY);
    if (!bats_enabled_) {
        return;
    }
    for (SBat &bat : bats_) {
        advanceBat(bat, step);
    }
}

void CMoon::advanceBat(SBat &bat, const CExtendedFloat &step) {
    bat.course_position =
        ((step * CExtendedFloat(kBatFramesPerSecond)) + CExtendedFloat(bat.course_position))
            .toFloat();
    const auto length =
        static_cast<float>(bat_courses_[static_cast<std::size_t>(bat.course_index)].getLength());
    if (bat.course_position >= length) {
        bat.course_position =
            (CExtendedFloat(bat.course_position) + CExtendedFloat(-length)).toFloat();
    }
    const auto frames = static_cast<float>(bat_model_.getFrameCount());
    const CExtendedFloat frame =
        (step * CExtendedFloat(kBatAnimationFramesPerSecond)) + CExtendedFloat(bat.animation_frame);
    bat.animation_frame = frame.toFloat();
    if (frame >= CExtendedFloat(frames)) {
        bat.animation_frame =
            (CExtendedFloat(bat.animation_frame) + CExtendedFloat(-frames)).toFloat();
    }
}

// A NaN timer counts as the first half, as the original's unordered compare does.
// nocedit 0x0052a3f0
int CMoon::isAnimationFirstHalf() const {
    return animation_timer_ >= kAnimationLength / 2 ? 0 : 1;
}

} // namespace nocturne::core

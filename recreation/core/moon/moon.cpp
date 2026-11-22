#include "core/moon/moon.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/fixed.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/frontend.h"
#include "core/game/game.h"
#include "engine/package/gamecontent.h"

#include <cstdint>
#include <format>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

std::int32_t scrollBy(std::int32_t scroll, int delta_time_int, int shift) {
    return common::wrappingAdd(scroll,
                               static_cast<std::int32_t>(static_cast<std::uint32_t>(delta_time_int)
                                                         << static_cast<std::uint32_t>(shift)));
}

} // namespace

// What staticInit constructed is the members; the frames and courses the packages' sky_scene
// names are made as it first loads.
// nocedit 0x005299f0
// nocedit 0x00529a80
CMoon::CMoon(const SMoonOwners &owners)
    : owners_(owners), moon_(owners.dosio), bat_model_(owners.dosio),
      cloud_texture_(owners.dosio, owners.screen, owners.special),
      backdrop_(owners.dosio, owners.screen, owners.special) {}

bool CMoon::isFigureScene() const {
    const std::optional<std::string> &style = owners_.content.front_end.title_backdrop;
    if (style == kFigureSceneBackdrop) {
        return true;
    }
    requireFrontEndStyle("title backdrop", style, {kSkySceneBackdrop});
    return false;
}

const engine::SSkyScene &CMoon::getSky() const {
    if (!owners_.content.sky_scene) {
        common::displayErrorAndQuit("No package gives the sky_scene title backdrop's look");
    }
    return *owners_.content.sky_scene;
}

const engine::SFigureScene &CMoon::getFigure() const {
    if (!owners_.content.figure_scene) {
        common::displayErrorAndQuit("No package gives the figure_scene title backdrop's look");
    }
    return *owners_.content.figure_scene;
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
    if (isFigureScene()) {
        return;
    }
    const engine::SSkyScene &sky = getSky();
    rotation_phase_ = static_cast<float>(sky.start_phase);
    bats_.assign(static_cast<std::size_t>(sky.bat_count), SBat{});
    for (SBat &bat : bats_) {
        scatterBat(bat);
    }
    bats_enabled_ = false;
}

void CMoon::load() {
    if (isFigureScene()) {
        loadFigure();
        return;
    }
    const engine::SSkyScene &sky = getSky();
    if (owners_.game.head_of_horror_cheat == sky.cheat_code) {
        moon_.load(sky.cheat_model);
        owners_.game.head_of_horror_cheat = 0;
    } else {
        moon_.load(sky.model);
    }
    bat_model_.load(sky.bat_model);
    cloud_texture_.load(sky.cloud_image, sky.cloud_size, sky.cloud_size);
    loadFrames(sky.frame_prefix, sky.frame_digits, sky.frame_count, sky.frame_width,
               sky.frame_height);
    is_loaded_ = true;
    while (bat_courses_.size() < sky.bat_courses.size()) {
        bat_courses_.emplace_back(owners_.dosio);
    }
    for (std::size_t i = 0; i < bat_courses_.size(); ++i) {
        bat_courses_[i].load(sky.bat_courses[i]);
    }
}

void CMoon::loadFrames(std::string_view prefix, int digits, int count, int width, int height) {
    while (std::cmp_less(animation_textures_.size(), count)) {
        animation_textures_.emplace_back(owners_.dosio, owners_.screen, owners_.special);
    }
    for (std::size_t i = 0; i < animation_textures_.size(); ++i) {
        animation_textures_[i].load(std::format("{}{:0{}}", prefix, i, digits), width, height);
    }
}

// The cheat model takes the first model's place, and the rest stay unloaded, drawing nothing. The
// original also loaded the sky's cloud, which this style never draws.
// bw1 0x00521c50
void CMoon::loadFigure() {
    const engine::SFigureScene &figure = getFigure();
    while (figures_.size() < figure.models.size()) {
        figures_.push_back(std::make_unique<CKeyFramedModel>(owners_.dosio));
        // The original's counters start at 1.
        figure_frames_.push_back(1);
    }
    if (owners_.game.head_of_horror_cheat == figure.cheat_code) {
        figures_.front()->load(figure.cheat_model);
        owners_.game.head_of_horror_cheat = 0;
    } else {
        for (std::size_t i = 0; i < figure.models.size(); ++i) {
            figures_[i]->load(figure.models[i].file);
        }
    }
    backdrop_.load(figure.backdrop, kFrontEndLayoutWidth, kFrontEndHeight);
    loadFrames(figure.frame_prefix, figure.frame_digits, figure.frame_count, figure.frame_width,
               figure.frame_height);
    is_loaded_ = true;
}

// Each bat starts up to a course's length before its course, so they arrive one by one.
void CMoon::scatterBat(SBat &bat) {
    bat.course_index = owners_.crt_random.rand() % static_cast<int>(bat_courses_.size());
    const auto length =
        static_cast<float>(bat_courses_[static_cast<std::size_t>(bat.course_index)].getLength());
    bat.course_position = -owners_.actor.getRandomFloatFromRange(0.0F, length);
    bat.animation_frame =
        owners_.actor.getRandomFloatFromRange(0.0F, static_cast<float>(bat_model_.getFrameCount()));
    const auto scatter = static_cast<float>(getSky().bat_scatter);
    bat.random_offset.x = owners_.actor.getRandomFloatFromRange(-scatter, scatter);
    bat.random_offset.y = owners_.actor.getRandomFloatFromRange(-scatter, scatter);
    bat.random_offset.z = owners_.actor.getRandomFloatFromRange(-scatter, scatter);
}

// nocedit 0x00529ce0
void CMoon::free() {
    if (is_loaded_) {
        cloud_texture_.free();
        backdrop_.free();
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
    for (const std::unique_ptr<CKeyFramedModel> &figure : figures_) {
        figure->free();
    }
}

// The phase, the timer and the frames are compared before they are rounded to float, as the x87
// holds them.
// nocedit 0x00529d60
void CMoon::update(float delta_time) {
    if (isFigureScene()) {
        updateFigure(delta_time);
        return;
    }
    const engine::SSkyScene &sky = getSky();
    const CExtendedFloat step(delta_time);
    const CExtendedFloat phase =
        (step * CExtendedFloat(sky.turn_per_second)) + CExtendedFloat(rotation_phase_);
    rotation_phase_ = phase.toFloat();
    if (phase > CExtendedFloat(sky.rest_phase)) {
        rotation_phase_ = static_cast<float>(sky.rest_phase);
        bats_enabled_ = true;
    }
    const CExtendedFloat timer =
        (step * CExtendedFloat(sky.frame_rate)) + CExtendedFloat(animation_timer_);
    animation_timer_ = timer.toFloat();
    if (timer >= CExtendedFloat(sky.frame_wrap)) {
        animation_timer_ =
            (CExtendedFloat(animation_timer_) + CExtendedFloat(-sky.frame_wrap)).toFloat();
    }
    const int delta_time_int = owners_.game.getDeltaTimeInt();
    cloud_scroll_x_ = scrollBy(cloud_scroll_x_, delta_time_int, sky.cloud_shift_x);
    cloud_scroll_y_ = scrollBy(cloud_scroll_y_, delta_time_int, sky.cloud_shift_y);
    if (!bats_enabled_) {
        return;
    }
    for (SBat &bat : bats_) {
        advanceBat(bat, step);
    }
}

void CMoon::advanceBat(SBat &bat, const CExtendedFloat &step) {
    const engine::SSkyScene &sky = getSky();
    bat.course_position =
        ((step * CExtendedFloat(sky.bat_speed)) + CExtendedFloat(bat.course_position)).toFloat();
    const auto length =
        static_cast<float>(bat_courses_[static_cast<std::size_t>(bat.course_index)].getLength());
    if (bat.course_position >= length) {
        bat.course_position =
            (CExtendedFloat(bat.course_position) + CExtendedFloat(-length)).toFloat();
    }
    const auto frames = static_cast<float>(bat_model_.getFrameCount());
    const CExtendedFloat frame =
        (step * CExtendedFloat(sky.bat_animation_speed)) + CExtendedFloat(bat.animation_frame);
    bat.animation_frame = frame.toFloat();
    if (frame >= CExtendedFloat(frames)) {
        bat.animation_frame =
            (CExtendedFloat(bat.animation_frame) + CExtendedFloat(-frames)).toFloat();
    }
}

// The title's timer alone; the original also scrolled the cloud this style never draws.
// bw1 0x00521dd0
void CMoon::updateFigure(float delta_time) {
    const engine::SFigureScene &figure = getFigure();
    const CExtendedFloat timer = (CExtendedFloat(delta_time) * CExtendedFloat(figure.frame_rate)) +
                                 CExtendedFloat(animation_timer_);
    animation_timer_ = timer.toFloat();
    if (timer >= CExtendedFloat(figure.frame_wrap)) {
        animation_timer_ =
            (CExtendedFloat(animation_timer_) + CExtendedFloat(-figure.frame_wrap)).toFloat();
    }
}

// A NaN timer counts as the first half, as the original's unordered compare does. figure_scene's
// half is the whole wrap, so its glow never flickers (bw1 0x005220b0).
// nocedit 0x0052a3f0
int CMoon::isAnimationFirstHalf() const {
    const double half = isFigureScene() ? getFigure().frame_wrap : getSky().frame_wrap / 2;
    return animation_timer_ >= half ? 0 : 1;
}

} // namespace nocturne::core

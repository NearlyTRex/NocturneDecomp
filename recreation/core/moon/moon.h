#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/course/course.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/fwd.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <optional>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What the moon loads from and draws with.
struct SMoonOwners {
    const engine::CDosIo &dosio;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    engine::C3d &three_d;
    engine::CDemonRenderer &renderer;
    CDemonSet &set;
    CGame &game;
    CActor &actor;
    common::CWatcomRandom &crt_random;
    // Its Upscaler, which the title's animation is enlarged as.
    const platform::IDisplay &display;
    // The packages' content, whose sky_scene gives what the backdrop draws.
    const engine::SGameContent &content;
};

// The menu's title backdrop, in the style the packages' [front_end] names. sky_scene: the moon
// turning into place, bats flying their courses across it once it has, two layers of cloud
// drifting over, and the title's animation on top. figure_scene: a still picture with animated
// models before a fixed camera, and the title's animation on top. tiled_scroll: a picture tiled
// and scrolling, a fading picture over it and an overlay on top.
class CMoon {
public:
    explicit CMoon(const SMoonOwners &owners);
    ~CMoon();
    CMoon(const CMoon &) = delete;
    CMoon &operator=(const CMoon &) = delete;

    // Loads what it draws the first time, then sends the moon back to the start of its turn and
    // scatters the bats along their courses.
    void init();
    void free();
    // delta_time is in seconds; the clouds move by the game's own frame time.
    void update(float delta_time);
    void render();
    void renderJoystickCalibration();
    [[nodiscard]] int isAnimationFirstHalf() const;

private:
    struct SBat {
        int course_index = 0;
        // Frames along the course; a bat waits off its course while this is negative.
        float course_position = 0.0F;
        float animation_frame = 0.0F;
        common::CVector3f random_offset;
    };

    enum class EStyle : std::uint8_t { Sky, Figure, Tiled };

    // The style the packages name; any style but the three is fatal.
    [[nodiscard]] EStyle getStyle() const;
    [[nodiscard]] bool isFigureScene() const;
    // The packages' values for the style; without them, fatal.
    [[nodiscard]] const engine::SSkyScene &getSky() const;
    [[nodiscard]] const engine::SFigureScene &getFigure() const;
    [[nodiscard]] const engine::STiledScroll &getTiled() const;
    void load();
    void loadFigure();
    void loadTiled();
    void renderTiled();
    // The steps of a style that steps per_second times a second due in delta_time, the time left
    // over kept for the next.
    [[nodiscard]] int takeSteps(float delta_time, int per_second);
    // tiled_scroll's tiles and hand's alpha moved on by delta_time.
    void moveTiled(float delta_time);
    // One of figure_scene's steps: each model's frame.
    void stepFigureModels();
    void loadFrames(std::string_view prefix, int digits, int count, int width, int height);
    void updateFigure(float delta_time);
    void renderFigure();
    // How the 3D was put where the layout is on the screen, so the scene stands on what the
    // layout draws: not at all, the screen being the layout; by the hardware renderer's pass over
    // the layout's 640x480 viewport; or, in software, by a viewport the layout's size and place.
    enum class ELayoutScene : std::uint8_t { Screen, Overlay, Viewport };
    [[nodiscard]] ELayoutScene beginLayoutScene(const SPictureArea &picture);
    void endLayoutScene(ELayoutScene placed);
    void scatterBat(SBat &bat);
    void advanceBat(SBat &bat, const common::CExtendedFloat &step);
    // How much wider than 4:3 the 3D is projected, once the pass that stretches the layout's
    // 640x480 viewport over the screen is begun; nothing when the screen is that viewport.
    [[nodiscard]] std::optional<float> beginWideScene();
    void endWideScene();
    void renderMoon(float projection_scale);
    void renderBats();
    void renderBat(const SBat &bat);
    void renderClouds();

    SMoonOwners owners_;
    bool is_loaded_ = false;
    // The moon's turn, from the scene's start phase to where it rests.
    float rotation_phase_ = 0.0F;
    CKeyFramedModel moon_;
    CKeyFramedModel bat_model_;
    engine::CAlphaBitmap cloud_texture_;
    std::vector<engine::CAlphaBitmap> animation_textures_;
    std::vector<CCourse> bat_courses_;
    std::vector<SBat> bats_;
    bool bats_enabled_ = false;
    // Animation frames, wrapping at the scene's frame_wrap.
    float animation_timer_ = 0.0F;
    // 16.16 texels.
    std::int32_t cloud_scroll_x_ = 0;
    std::int32_t cloud_scroll_y_ = 0;
    // figure_scene's picture, its models and the frame each is at.
    engine::CAlphaBitmap backdrop_;
    std::vector<std::unique_ptr<CKeyFramedModel>> figures_;
    std::vector<int> figure_frames_;
    // tiled_scroll's pictures (the tile is the backdrop's), where its tiles are and its hand's
    // alpha, and which way that is going.
    engine::CAlphaBitmap hand_;
    engine::CAlphaBitmap overlay_;
    // Layout pixels and alpha, kept whole and fractional so they move smoothly.
    std::array<double, 2> tile_columns_{};
    std::array<double, 2> tile_rows_{};
    double hand_alpha_ = 0.0;
    bool hand_rising_ = false;
    // Steps of a second since figure_scene's last step.
    float step_time_ = 0.0F;
};

} // namespace nocturne::core

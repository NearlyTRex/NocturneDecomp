#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/course/course.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/fwd.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
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
};

// The menu's backdrop: the moon turning into place, bats flying their courses across it once it
// has, two layers of cloud drifting over, and the title's animation on top.
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

    static constexpr std::size_t kBatCount = 30;
    static constexpr std::size_t kAnimationFrameCount = 30;

    void load();
    void scatterBat(SBat &bat);
    void advanceBat(SBat &bat, const common::CExtendedFloat &step);
    void renderMoon();
    void renderBats();
    void renderBat(const SBat &bat);
    void renderClouds();

    SMoonOwners owners_;
    bool is_loaded_ = false;
    // The moon's turn, from 0.25 at the start to 0.58 where it stops.
    float rotation_phase_ = 0.0F;
    CKeyFramedModel moon_;
    CKeyFramedModel bat_model_;
    engine::CAlphaBitmap cloud_texture_;
    std::vector<engine::CAlphaBitmap> animation_textures_;
    std::vector<CCourse> bat_courses_;
    std::array<SBat, kBatCount> bats_{};
    bool bats_enabled_ = false;
    // Animation frames, 12 a second, wrapping at 60.
    float animation_timer_ = 0.0F;
    // 16.16 texels.
    std::int32_t cloud_scroll_x_ = 0;
    std::int32_t cloud_scroll_y_ = 0;
};

} // namespace nocturne::core

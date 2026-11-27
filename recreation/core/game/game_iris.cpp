#include "common/math/extendedfloat.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/script/script.h"
#include "engine/2d/2d.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "platform/display.h"

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

constexpr int kScreenFixedOne = 0x10000;
// The iris widens by this much of the screen's height for each delta unit.
constexpr double kIrisStepScale = 256.0;
constexpr double kIrisStepDivisor = 31457280.0;
constexpr int kTrueColorDepth = 32;
constexpr int kBlack = 0;

[[nodiscard]] CExtendedFloat load(float value) {
    return CExtendedFloat(static_cast<double>(value));
}

} // namespace

// nocedit 0x004e0920
// bw1 0x004d6030
// bw2 0x004bb240
// bw3 0x004bd620
void CGame::beginFadeIn(CDemonActor *focus, CDemonCamera &camera) {
    iris_fade_ = EIrisFade::Starting;
    iris_center_ = {.x = owners_.screen.getWindowWidth() / 2,
                    .y = owners_.screen.getWindowHeight() / 2};
    iris_radius_ = 0.0F;
    iris_black_frames_ = 0;
    calculateIrisFadeCenter(focus, camera);
}

// nocedit 0x004e0960
// bw1 0x004d6070
// bw2 0x004bb280
// bw3 0x004bd660
void CGame::beginFadeOut(CDemonActor *focus, CDemonCamera &camera) {
    iris_fade_ = EIrisFade::Closing;
    iris_center_ = {.x = owners_.screen.getWindowWidth() / 2,
                    .y = owners_.screen.getWindowHeight() / 2};
    iris_radius_ = static_cast<float>(owners_.screen.getWindowWidth());
    calculateIrisFadeCenter(focus, camera);
}

// The original scaled a point of the camera's 640x480 space to a taller screen as the renderer
// stretches the scene; here it lands where a pillarboxed or panned picture shows it too.
// nocedit 0x004e09a0
// bw1 0x004d60b0
// bw2 0x004bb2c0
// bw3 0x004bd6a0
void CGame::calculateIrisFadeCenter(CDemonActor *focus, CDemonCamera &camera) {
    if (focus == nullptr) {
        return;
    }
    CBoundingBox3D box;
    focus->getBoundingBox(&box);
    common::CVector3f middle{.x = (box.min.x + box.max.x) * 0.5F,
                             .y = (box.min.y + box.max.y) * 0.5F,
                             .z = (box.min.z + box.max.z) * 0.5F};
    common::CVector3f world;
    focus->localToWorldPoint(&world, &middle);
    common::CVector3i point = world.toFixed8();
    common::CVector3i screen_point;
    camera.worldToScreenWithFrustumCull(&point, &screen_point);
    if (screen_point.z == 0) {
        return;
    }
    iris_center_ = common::getScenePointOnScreen(
        owners_.display.getWidescreen(),
        {.width = owners_.screen.getWindowWidth(), .height = owners_.screen.getWindowHeight()},
        {.x = screen_point.x / kScreenFixedOne, .y = screen_point.y / kScreenFixedOne});
}

// Each step is worked as the x87 did: its divisor kept as a float, the rest at full precision
// until the radius is stored.
// nocedit 0x004e09c0
// bw1 0x004d60e0
// bw2 0x004bb2f0
// bw3 0x004bd6d0
void CGame::updateFadeTransition() {
    const auto divisor = static_cast<float>(kIrisStepDivisor /
                                            static_cast<double>(owners_.screen.getWindowHeight()));
    const CExtendedFloat step =
        (CExtendedFloat(static_cast<double>(delta_time_int_)) * CExtendedFloat(kIrisStepScale)) /
        load(divisor);
    switch (iris_fade_) {
    case EIrisFade::Idle:
        return;
    case EIrisFade::Starting:
        ++iris_black_frames_;
        if (iris_black_frames_ >= getIrisContent().black_frames) {
            iris_fade_ = EIrisFade::Opening;
        }
        return;
    case EIrisFade::Opening:
        iris_radius_ = (load(iris_radius_) + step).toFloat();
        if (iris_radius_ > static_cast<float>(owners_.screen.getWindowWidth())) {
            iris_fade_ = EIrisFade::Idle;
        }
        return;
    case EIrisFade::Closing:
        iris_radius_ = (load(iris_radius_) - step).toFloat();
        if (iris_radius_ < 0.0F) {
            iris_radius_ = 0.0F;
            iris_fade_ = EIrisFade::Closed;
        }
        return;
    default:
        iris_fade_ = EIrisFade::Black;
        return;
    }
}

EIrisFade CGame::getIrisFade() const {
    return iris_fade_;
}

const engine::SGameContent &CGame::getContent() const {
    return owners_.content;
}

engine::SIris CGame::getIrisContent() const {
    return owners_.content.iris.value_or(engine::SIris{});
}

// An opening iris keeps the centre it began with. The original re-centred it every frame too, so
// one that began while its actor was off the screen jumped onto him part-way, reading as the
// fade starting over (the decomp's AUTHENTIC_IRIS_FADE); a closing one still follows him. At 16
// bits the original left the disc's outside as it was. BW2's tinted the outside red instead of
// blacking it, but nothing in BW2 begins an iris.
// deferred: BW1-3's iris left undrawn while the field notes show, with CFieldNotes
// deferred: BW2's screen black while its alpha fade is full, with CGame's alpha fade
// nocedit 0x004e0aa0
// bw1 0x004d61e0
// bw2 0x004bb3d0
// bw3 0x004bd7d0
void CGame::renderIrisFade(const SGameSessionOwners &session) {
    if (iris_fade_ == EIrisFade::Idle) {
        return;
    }
    const bool disc = (iris_fade_ == EIrisFade::Opening || iris_fade_ == EIrisFade::Closing) &&
                      iris_radius_ >= 1.0F;
    if (!disc) {
        owners_.two_d.fillRectColor(0, 0, owners_.screen.getWindowWidth() - 1,
                                    owners_.screen.getWindowHeight() - 1, kBlack);
        return;
    }
    if (iris_fade_ == EIrisFade::Closing) {
        calculateIrisFadeCenter(session.script.getFocusActor(), session.camera);
    }
    const double radius = iris_radius_;
    maskOutsideIris(static_cast<int>(std::lround(radius * radius)));
}

void CGame::maskOutsideIris(int threshold) {
    engine::IScreenDevice &screen = owners_.screen;
    const std::span<void *> rows = screen.getScreenRows();
    const auto width = static_cast<std::size_t>(screen.getWindowWidth());
    const bool true_colour = screen.getBitsPerPixel() == kTrueColorDepth;
    for (int y = 0; y < screen.getWindowHeight(); ++y) {
        const int dy = iris_center_.y - y;
        void *row = rows[static_cast<std::size_t>(y)];
        const std::span<std::uint32_t> wide(static_cast<std::uint32_t *>(row),
                                            true_colour ? width : 0);
        const std::span<std::uint16_t> narrow(static_cast<std::uint16_t *>(row),
                                              true_colour ? 0 : width);
        for (std::size_t x = 0; x < width; ++x) {
            const int dx = iris_center_.x - static_cast<int>(x);
            if ((dy * dy) + (dx * dx) <= threshold) {
                continue;
            }
            if (true_colour) {
                wide[x] = kBlack;
            } else {
                narrow[x] = kBlack;
            }
        }
    }
}

} // namespace nocturne::core

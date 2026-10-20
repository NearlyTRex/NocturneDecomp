#pragma once

#include "common/random/watcomrandom.h"
#include "common/video/framebuffer.h"
#include "core/actor/actor.h"
#include "core/game/game.h"
#include "core/moon/moon.h"
#include "core/set/demonset.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/moonfiles.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// A moon drawing through the renderer fixture onto a 640x480 screen, with what it loads on disk:
// a one-square moon and head, a two-frame bat, three ten-frame courses a hundred units ahead, a
// cloud of texel ramps and thirty title frames.
class CMoonFixture : public engine::CDemonRendererFixture {
protected:
    static constexpr int kWidth = 640;
    static constexpr int kHeight = 480;

    CMoonFixture() {
        using ::testing::_;
        using ::testing::Return;
        for (std::size_t y = 0; y < rows_.size(); ++y) {
            rows_[y] = &pixels_[y * kWidth];
            z_rows_[y] = &depths_[y * kWidth];
        }
        two_d_.setupViewportAndClipping(0, 0, kWidth - 1, kHeight - 1);
        channels_ = {.red = common::getChannelLayout(0xff0000U),
                     .green = common::getChannelLayout(0xff00U),
                     .blue = common::getChannelLayout(0xffU)};
        ON_CALL(screen_, getWindowWidth()).WillByDefault(Return(kWidth));
        ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(kHeight));
        ON_CALL(screen_, getBitsPerPixel()).WillByDefault([this] { return bits_per_pixel_; });
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(z_rows_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(::testing::ReturnRef(masks_));
        ON_CALL(renderer_, drawPolyList(_, _, _, _))
            .WillByDefault([this](platform::SRenderVertex *,
                                  const platform::SMRGLPrimitiveQuad *const *, int, int) {
                ++lists_;
                return 1;
            });
        givenMoonFiles(given_file_);
    }

    void givenCourses(int length) {
        givenMoonCourses(given_file_, length);
    }

    void givenImage(const std::string &name, const std::string &raw) {
        givenGreyImage(given_file_, name, raw);
    }

    std::uint32_t pixel(int x, int y) const {
        return pixels_[(static_cast<std::size_t>(y) * kWidth) + static_cast<std::size_t>(x)];
    }

    GivenFile given_file_ = [this](const std::string &name, const std::string &contents) {
        givenFile(name, contents);
    };
    int bits_per_pixel_ = 32;
    std::vector<std::uint32_t> pixels_ = std::vector<std::uint32_t>(std::size_t{kWidth} * kHeight);
    std::vector<std::uint32_t> depths_ = std::vector<std::uint32_t>(std::size_t{kWidth} * kHeight);
    std::array<void *, kHeight> rows_{};
    std::array<std::uint32_t *, kHeight> z_rows_{};
    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint16_t, 256> palette16_{};
    engine::SColorMasks masks_;
    int lists_ = 0;
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_random_;
    CActor actor_{game_, crt_random_};
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    CMoon moon_{SMoonOwners{.dosio = dosio_,
                            .screen = screen_,
                            .special = special_,
                            .three_d = three_d_,
                            .renderer = demon_renderer_,
                            .set = set_,
                            .game = game_,
                            .actor = actor_,
                            .crt_random = crt_random_}};
};

} // namespace nocturne::core

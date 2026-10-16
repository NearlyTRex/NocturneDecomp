#pragma once

#include "common/random/watcomrandom.h"
#include "common/video/framebuffer.h"
#include "core/actor/actor.h"
#include "core/game/game.h"
#include "core/moon/moon.h"
#include "core/set/demonset.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
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
        givenCourses(10);
        givenModel("moon.kfm", 1);
        givenModel("taylor_head.kfm", 1);
        givenModel("menubat.kfm", 2);
        givenFile("art\\a.raw", std::string(std::size_t{32} * 32, '\x01'));
        givenImage("menucld2", cloudTexels());
        for (int i = 0; i < 30; ++i) {
            givenImage(std::format("noc{:05}", i),
                       std::string(std::size_t{640} * 278, static_cast<char>(i)));
        }
    }

    // A one-square model of the given frames; each frame is the same square.
    void givenModel(const std::string &name, int frames) {
        std::string corners;
        for (int i = 0; i < frames; ++i) {
            corners += "0,0,2048\n512,0,2048\n512,512,2048\n0,512,2048\n";
        }
        givenFile("models\\" + name, std::format("/\n5\n;\n4,1,1,1,{}\n;\n0\n;\n{};\n"
                                                 "0,3, 0,0,0, 2,0,0, 1,0,0\n;\na.raw\n;\n4,1\n",
                                                 frames, corners));
    }

    // Three courses of the given length, each standing still a hundred units ahead.
    void givenCourses(int length) {
        std::string frames;
        for (int i = 0; i < length; ++i) {
            frames += "0,0,100, 1,0,0,0\r\n";
        }
        for (int i = 1; i <= 3; ++i) {
            givenFile(std::format("data\\menu{}.pth", i),
                      std::format("; course\r\n1\r\n; frames, loop\r\n{},1\r\n; frames\r\n{}",
                                  length, frames));
        }
    }

    // Each texel is its column, so the layers' scales and scroll show in the pixels.
    static std::string cloudTexels() {
        std::string texels;
        for (int u = 0; u < 256; ++u) {
            for (int v = 0; v < 256; ++v) {
                texels += static_cast<char>(v);
            }
        }
        return texels;
    }

    // name.raw and a palette whose entry i is i in every channel.
    void givenImage(const std::string &name, const std::string &raw) {
        std::string palette;
        for (int i = 0; i < 256; ++i) {
            palette.append(3, static_cast<char>(i));
        }
        givenFile("art\\" + name + ".raw", raw);
        givenFile("art\\" + name + ".act", palette);
    }

    std::uint32_t pixel(int x, int y) const {
        return pixels_[(static_cast<std::size_t>(y) * kWidth) + static_cast<std::size_t>(x)];
    }

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
    CDemonSet set_{demon_renderer_, matrix_, special_};
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

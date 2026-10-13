#pragma once

#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::engine {

// A bitmap over the pod fixture's disk, drawing on a 4x2 memory screen of the given depth.
class CAlphaBitmapFixture : public CPodFixture {
protected:
    static constexpr int kScreenWidth = 4;
    static constexpr int kScreenHeight = 2;
    // A 16-bit global alpha that leaves each pixel's own opacity as it is.
    static constexpr int kFullAlpha = 0xffff;
    static constexpr std::uint8_t kOpaque = 0xff;

    explicit CAlphaBitmapFixture(int bits_per_pixel = 32)
        : screen_(kScreenWidth, kScreenHeight, bits_per_pixel) {}

    // A palette whose entry i is (i, 2i, 3i), each wrapping at a byte.
    static std::string rampPalette() {
        std::string palette;
        for (int i = 0; i < 256; ++i) {
            palette += static_cast<char>(i);
            palette += static_cast<char>(i * 2);
            palette += static_cast<char>(i * 3);
        }
        return palette;
    }

    // name.raw and name.act, the opacity left to be derived.
    void givenImage(const std::string &name, const std::string &raw) {
        givenFile("art\\" + name + ".raw", raw);
        givenFile("art\\" + name + ".act", rampPalette());
    }

    CMemoryScreen screen_;
    ::testing::NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
    C3d three_d_;
    ::testing::NiceMock<platform::MockRenderer> renderer_;
    SCurrentTexture current_texture_;
    CSpecial special_{renderer_, screen_, two_d_, three_d_, current_texture_};
    CAlphaBitmap bitmap_{dosio_, screen_, special_};
};

} // namespace nocturne::engine

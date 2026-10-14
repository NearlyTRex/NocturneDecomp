#pragma once

#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/texture/texturecache.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <string>

namespace nocturne::engine {

// Texture files on the pod fixture's disk, for a cache drawing on a memory screen of the given
// depth.
class CTextureFixture : public CPodFixture {
protected:
    static constexpr int kScreenWidth = 4;
    static constexpr int kScreenHeight = 2;

    explicit CTextureFixture(int bits_per_pixel = 32)
        : screen_(kScreenWidth, kScreenHeight, bits_per_pixel) {
        ON_CALL(renderer_, init(::testing::_)).WillByDefault(::testing::Return(1));
        ON_CALL(renderer_, setVideoMode2).WillByDefault(::testing::Return(1));
        ON_CALL(renderer_, lockFrame()).WillByDefault(::testing::Return(1));
        ON_CALL(renderer_, unlockFrame()).WillByDefault(::testing::Return(1));
    }

    // name.raw, dimension squared texels each of the given value.
    void givenTexels(const std::string &stem, int dimension, char texel) {
        givenFile("art\\" + stem + ".raw",
                  std::string(static_cast<std::size_t>(dimension * dimension), texel));
    }

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

    void startRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.setResolutionAndColorTable(kScreenWidth, kScreenHeight, 32), 1);
    }

    CMemoryScreen screen_;
    ::testing::NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    ::testing::NiceMock<platform::MockRenderer> renderer_;
    SCurrentTexture current_texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    STextureOwners owners_{.dosio = dosio_,
                           .two_d = two_d_,
                           .screen = screen_,
                           .special = special_,
                           .current_texture = current_texture_};
};

} // namespace nocturne::engine

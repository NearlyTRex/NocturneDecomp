#pragma once

#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/prim/prim.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/texture/texture.h"
#include "engine/texture/texturecache.h"
#include "engine/zraster/zraster.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/twodfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {

// A CDemonRenderer over the software rasterisers and a mock hardware renderer, its geometry clip
// recording what it is asked to clip and handing back clipped_.
class CDemonRendererFixture : public C2dFixture {
protected:
    CDemonRendererFixture() {
        using ::testing::_;
        using ::testing::Return;
        using ::testing::ReturnRef;
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(screen_rows_)));
        ON_CALL(screen_, getColorTable16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(color_table16_)));
        ON_CALL(screen_, getColorChannels()).WillByDefault(ReturnRef(channels_));
        ON_CALL(renderer_, init(_)).WillByDefault(Return(1));
        ON_CALL(renderer_, setVideoMode2(_, _, _, _)).WillByDefault(Return(1));
        ON_CALL(renderer_, lockFrame()).WillByDefault(Return(1));
        ON_CALL(renderer_, unlockFrame()).WillByDefault(Return(1));
    }

    void startRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.setResolutionAndColorTable(4, 1, 32), 1);
    }

    std::vector<platform::SRenderVertex> vertex_buffer_ = std::vector<platform::SRenderVertex>(8);
    std::vector<std::vector<int>> geometry_clips_;
    std::vector<platform::SRenderVertex> clipped_;
    std::array<std::uint32_t, 4> screen_row_{};
    std::array<void *, 1> screen_rows_{screen_row_.data()};
    std::array<std::uint16_t, 256> color_table16_{};
    SColorChannels channels_;
    ::testing::NiceMock<platform::MockRenderer> renderer_;
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    SCurrentTexture texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, texture_};
    CPrim prim_{special_, two_d_, three_d_, texture_};
    CZRaster zraster_{special_, two_d_, three_d_, texture_};
    STextureOwners texture_owners_{.dosio = dosio_,
                                   .two_d = two_d_,
                                   .screen = screen_,
                                   .special = special_,
                                   .current_texture = texture_};
    CTexture textures_{texture_owners_};
    CDemonRenderer demon_renderer_{
        matrix_,
        two_d_,
        three_d_,
        vertex_buffer_,
        special_,
        prim_,
        zraster_,
        texture_,
        textures_,
        screen_,
        [this](std::span<const platform::SRenderVertex>, std::span<const int> vertex_indices,
               std::uint32_t, std::vector<platform::SRenderVertex> &clipped) {
            geometry_clips_.emplace_back(vertex_indices.begin(), vertex_indices.end());
            clipped = clipped_;
        }};
};

} // namespace nocturne::engine

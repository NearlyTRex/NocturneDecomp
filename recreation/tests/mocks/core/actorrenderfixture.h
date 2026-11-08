#pragma once

#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "core/actor/actorrenderowners.h"
#include "core/actor/demonactor.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {

// What an actor draws itself with, as a set over a fixture's renderer hands it out, looking down z
// from the origin, unturned, over 8 by 8 pixels and depths that hide nothing.
class CActorRenderFixture : public engine::CDemonRendererFixture {
protected:
    static constexpr int kPixels = 8;
    static constexpr auto kSize = static_cast<std::size_t>(kPixels);
    // Depths every polygon is level with or in front of, and one in front of every polygon.
    static constexpr std::uint32_t kFarthest = 0;
    static constexpr std::uint32_t kNearest = 0x7fffffff;
    static constexpr std::size_t kLastCorner = 7;
    static constexpr int kUntested = -1;

    CActorRenderFixture() {
        constexpr int kOne = 0x10000;
        two_d_.setupViewportAndClipping(0, 0, kPixels - 1, kPixels - 1);
        common::CMatrix3x3i unturned;
        unturned.m = {{{.x = kOne}, {.y = kOne}, {.z = kOne}}};
        matrix_.setTransformMatrix(unturned);
        for (std::size_t row = 0; row < kSize; ++row) {
            pixel_rows_.at(row) = pixels_.data() + (row * kSize);
            depth_rows_.at(row) = depths_.data() + (row * kSize);
        }
        ON_CALL(screen_, getScreenRows())
            .WillByDefault(::testing::Return(std::span<void *>(pixel_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(::testing::Return(std::span<std::uint32_t *>(depth_rows_)));
        depths_.fill(kFarthest);
    }

    void hideEverything() {
        depths_.fill(kNearest);
    }

    // A box tested since the mark has its last corner projected over it.
    void markBoxUntested() {
        vertex_buffer_[kLastCorner].projected_vertex.transformed_z = kUntested;
    }

    [[nodiscard]] bool boxTested() const {
        return vertex_buffer_[kLastCorner].projected_vertex.transformed_z != kUntested;
    }

    // A unit in front of the eye, so a box a unit across from the actor's place covers pixels the
    // profiled depth test samples.
    static void placeInView(CDemonActor &actor) {
        actor.setLocation({.position = {.x = -0.5F, .y = -0.5F, .z = 1.0F}, .area_id = 0});
    }

    std::array<std::uint32_t, kSize * kSize> pixels_{};
    std::array<std::uint32_t, kSize * kSize> depths_{};
    std::array<void *, kSize> pixel_rows_{};
    std::array<std::uint32_t *, kSize> depth_rows_{};
    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
    SActorRenderOwners render_owners_{.renderer = demon_renderer_,
                                      .three_d = three_d_,
                                      .special = special_,
                                      .set = set_,
                                      .camera_tables = set_parts_.tables,
                                      .events = set_parts_.events};
};

} // namespace nocturne::core

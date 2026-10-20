#pragma once

#include "engine/2d/2d.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <string>

namespace nocturne::engine {

// A C2d on a 30x24 screen in memory at the parameter's depth, every pixel colour 9 and the clip
// the whole screen.
class C2dTextFixture : public CPodFixture, public ::testing::WithParamInterface<int> {
protected:
    static constexpr int kWidth = 30;
    static constexpr int kHeight = 24;
    static constexpr int kUntouched = 9;
    static constexpr int kInk = 0xf8;

    C2dTextFixture() {
        screen_.fill(drawn(kUntouched));
        two_d_.setupViewportAndClipping(0, 0, kWidth - 1, kHeight - 1);
    }

    // What colour index i draws as at this depth.
    [[nodiscard]] static std::uint32_t drawn(int index) {
        const auto i = static_cast<std::size_t>(index);
        switch (GetParam()) {
        case 16:
            return CMemoryScreen::pack16(i, i, i);
        case 32:
            return static_cast<std::uint32_t>((i << 16U) | (i << 8U) | i);
        default:
            return static_cast<std::uint32_t>(index);
        }
    }

    // The area's rows top down: '#' for the font's ink, '.' for index 0, '~' for untouched.
    [[nodiscard]] std::string picture(int left, int top, int width, int height) const {
        std::string rows;
        for (int y = top; y < top + height; ++y) {
            if (!rows.empty()) {
                rows += '\n';
            }
            for (int x = left; x < left + width; ++x) {
                const std::uint32_t pixel = screen_.pixel(x, y);
                rows += pixel == drawn(kInk) ? '#' : pixel == drawn(0) ? '.' : '~';
            }
        }
        return rows;
    }

    [[nodiscard]] bool hasInk(int left, int top, int right, int bottom) const {
        return picture(left, top, right - left + 1, bottom - top + 1).find('#') !=
               std::string::npos;
    }

    [[nodiscard]] bool isUntouched() const {
        return picture(0, 0, kWidth, kHeight).find_first_not_of("~\n") == std::string::npos;
    }

    CMemoryScreen screen_{kWidth, kHeight, GetParam()};
    ::testing::NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
};

} // namespace nocturne::engine

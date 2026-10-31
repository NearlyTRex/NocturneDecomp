#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A grid of light levels, 0 to kMaxLevel, size wide and count tall.
class CDemonFilter {
public:
    static constexpr std::uint8_t kMaxLevel = 0x3f;

    CDemonFilter();
    CDemonFilter(int size, int count);
    ~CDemonFilter();

    // art\filename: a square grid 64 to 256 wide, a byte a level at four times its scale. Fatal
    // when the file is missing or isn't such a grid.
    void load(const engine::CDosIo &dosio, std::string_view filename);
    // A spot of light falling off from init_value at the centre to nothing at the edge. With
    // flags clear the grid is made afresh; with flags set the levels already in it are scaled.
    void init(float init_value, int flags);

    [[nodiscard]] int getSize() const;
    [[nodiscard]] int getCount() const;
    [[nodiscard]] std::span<const std::uint8_t> getData() const;
    // The file it was loaded from, or "unnamed".
    [[nodiscard]] const std::string &getName() const;

private:
    void allocMemory();
    void freeMemory();

    int size_;
    int count_;
    std::vector<std::uint8_t> data_buffer_;
    std::string name_ = "unnamed";
};

} // namespace nocturne::core

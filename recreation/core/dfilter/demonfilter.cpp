#include "core/dfilter/demonfilter.h"

#include <algorithm>
#include <cmath>
#include <cstddef>

namespace nocturne::core {
namespace {

constexpr int kDefaultSize = 0x40;
// A fresh spot is its falloff times a quarter of 256.
constexpr double kFreshScale = 256.0 * 0.25;

// Chopped toward zero as the original rounds, then held to a level. The original kept only the
// low byte before clamping, so a level of 256 or more wrapped.
std::uint8_t toLevel(double value) {
    return static_cast<std::uint8_t>(
        std::clamp(static_cast<int>(value), 0, static_cast<int>(CDemonFilter::kMaxLevel)));
}

} // namespace

// nocedit 0x004701f0
CDemonFilter::CDemonFilter() : CDemonFilter(kDefaultSize, kDefaultSize) {}

CDemonFilter::CDemonFilter(int size, int count) : size_(size), count_(count) {}

// nocedit 0x00470240
CDemonFilter::~CDemonFilter() = default;

// nocedit 0x00470260
void CDemonFilter::allocMemory() {
    freeMemory();
    data_buffer_.assign(static_cast<std::size_t>(size_) * static_cast<std::size_t>(count_), 0);
}

// nocedit 0x004702c0
void CDemonFilter::freeMemory() {
    data_buffer_.clear();
}

// A filter never filled has nothing to scale; the original wrote through a null buffer.
// nocedit 0x004705a0
void CDemonFilter::init(float init_value, int flags) {
    if (flags == 0) {
        allocMemory();
    } else if (data_buffer_.empty()) {
        return;
    }
    const int half_size = size_ / 2;
    const int half_count = count_ / 2;
    std::size_t i = 0;
    for (int y = 0; y < count_; ++y) {
        for (int x = 0; x < size_; ++x, ++i) {
            const auto dx = static_cast<double>(half_size - x);
            const auto dy = static_cast<double>(half_count - y);
            const float distance =
                std::min(static_cast<float>(std::sqrt((dx * dx) + (dy * dy)) / half_size), 1.0F);
            const float value = (1.0F - distance) * init_value;
            data_buffer_[i] = flags == 0 ? toLevel(value * kFreshScale)
                                         : toLevel(static_cast<double>(data_buffer_[i]) * value);
        }
    }
}

int CDemonFilter::getSize() const {
    return size_;
}

int CDemonFilter::getCount() const {
    return count_;
}

std::span<const std::uint8_t> CDemonFilter::getData() const {
    return data_buffer_;
}

} // namespace nocturne::core

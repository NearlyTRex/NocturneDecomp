#include "engine/matrix/matrix.h"

#include <cmath>
#include <cstddef>

namespace nocturne::engine {
namespace {

// The original's pi, truncated.
constexpr double kPi = 3.1415926535;
constexpr double kStep = 1.0 / 128.0;
constexpr double kFixedOne = 65536.0;

// The entry below the angle plus the fraction of the way to the next, divided toward zero.
int interpolate(const std::array<int, 257> &table, int angle) {
    const auto index = static_cast<std::size_t>((angle >> 8) & 0xff);
    const int low = table[index];
    return low + (((table[index + 1] - low) * (angle & 0xff)) / 256);
}

} // namespace

CMatrix::CMatrix() {
    initializeTrigTables();
}

// nocedit 0x0050c530
void CMatrix::initializeTrigTables() {
    for (std::size_t i = 0; i < sin_table_.size(); ++i) {
        const double angle = static_cast<double>(i) * kPi * kStep;
        sin_table_[i] = static_cast<int>(std::trunc(std::sin(angle) * kFixedOne));
        cos_table_[i] = static_cast<int>(std::trunc(std::cos(angle) * kFixedOne));
    }
}

// nocedit 0x0050c5c0
int CMatrix::interpolatedSin(int angle) const {
    return interpolate(sin_table_, angle);
}

// nocedit 0x0050c600
int CMatrix::interpolatedCos(int angle) const {
    return interpolate(cos_table_, angle);
}

} // namespace nocturne::engine

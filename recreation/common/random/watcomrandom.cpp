#include "common/random/watcomrandom.h"

namespace nocturne::common {

int CWatcomRandom::rand() {
    seed_ = (seed_ * 0x41c64e6dU) + 0x3039U;
    return static_cast<int>((seed_ >> 16U) & kRandMax);
}

void CWatcomRandom::srand(std::uint32_t seed) {
    seed_ = seed;
}

} // namespace nocturne::common

#pragma once

#include <cstdint>

namespace nocturne::common {

// The Watcom CRT's rand and srand: a 32-bit LCG seeded with 1, giving 15 bits a draw. The game's
// 1/32767 scales assume that range, and a seed the game hands srand replays the CRT's sequence.
class CWatcomRandom {
public:
    static constexpr int kRandMax = 0x7fff;

    // 0 to kRandMax.
    int rand();
    void srand(std::uint32_t seed);

private:
    std::uint32_t seed_ = 1;
};

} // namespace nocturne::common

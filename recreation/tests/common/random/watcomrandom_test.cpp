#include "common/random/watcomrandom.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

// Values from the CRT's rand at 0x005feb5c: seed * 0x41c64e6d + 0x3039, bits 16 to 30.
TEST(CWatcomRandom, StartsFromSeedOne) {
    CWatcomRandom random;
    EXPECT_EQ(random.rand(), 16838);
    EXPECT_EQ(random.rand(), 5758);
    EXPECT_EQ(random.rand(), 10113);
}

TEST(CWatcomRandom, SrandRestartsTheSequence) {
    CWatcomRandom random;
    random.rand();
    random.srand(1);
    EXPECT_EQ(random.rand(), 16838);
    random.srand(0);
    EXPECT_EQ(random.rand(), 0);
    EXPECT_EQ(random.rand(), 21468);
}

TEST(CWatcomRandom, DropsTheTopBit) {
    CWatcomRandom random;
    // The next state is 0xffff0000.
    random.srand(0x1112a683U);
    EXPECT_EQ(random.rand(), CWatcomRandom::kRandMax);
}

} // namespace
} // namespace nocturne::common

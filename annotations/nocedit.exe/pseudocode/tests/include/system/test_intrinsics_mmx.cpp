// The portable MMX operations in system/intrinsics.h, which every non-x86 build
// renders with. On x86 each is checked against the instruction itself; on every
// host the results over a fixed input set must hash to the values the x86 run
// recorded, so a port that has no MMX to compare against still checks them.

#include "nocturne_test.h"

#include "system/intrinsics.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {

#define MMX_BINARY_OPS(X)                                                      \
    X(paddb) X(paddw) X(paddd) X(paddsb) X(paddsw) X(paddusb) X(paddusw)       \
    X(psubb) X(psubw) X(psubd) X(psubsb) X(psubsw) X(psubusb) X(psubusw)       \
    X(pmullw) X(pmulhw) X(pmaddwd) X(pand) X(pandn) X(por) X(pxor)             \
    X(pcmpeqb) X(pcmpeqw) X(pcmpeqd) X(pcmpgtb) X(pcmpgtw) X(pcmpgtd)          \
    X(packsswb) X(packssdw) X(packuswb)                                        \
    X(punpckhbw) X(punpckhwd) X(punpckhdq) X(punpcklbw) X(punpcklwd) X(punpckldq)

#define MMX_SHIFT_OPS(X)                                                       \
    X(psllw) X(pslld) X(psllq) X(psrlw) X(psrld) X(psrlq) X(psraw) X(psrad)

constexpr int kRandomInputs = 4096;

// Lane boundaries that random words almost never hit: every saturation and
// sign edge for 8, 16 and 32-bit lanes.
constexpr uint64_t kEdges[] = {
    0x0000000000000000ULL, 0xffffffffffffffffULL, 0x8080808080808080ULL,
    0x7f7f7f7f7f7f7f7fULL, 0x8000800080008000ULL, 0x7fff7fff7fff7fffULL,
    0x8000000080000000ULL, 0x7fffffff7fffffffULL, 0x0101010101010101ULL,
    0x00ff00ff00ff00ffULL, 0xff00ff00ff00ff00ULL, 0x0001000100010001ULL,
};
constexpr int kEdgeCount = sizeof(kEdges) / sizeof(kEdges[0]);

uint64_t splitmix(uint64_t &state) {
    uint64_t z = (state += 0x9e3779b97f4a7c15ULL);
    z = (z ^ (z >> 30)) * 0xbf58476d1ce4e5b9ULL;
    z = (z ^ (z >> 27)) * 0x94d049bb133111ebULL;
    return z ^ (z >> 31);
}

// The i-th input word: the edges first, then a fixed pseudo-random stream.
uint64_t input(int i) {
    if (i < kEdgeCount) return kEdges[i];
    uint64_t state = static_cast<uint64_t>(i);
    return splitmix(state);
}

uint64_t fnv(uint64_t hash, uint64_t value) {
    for (int i = 0; i < 8; ++i) {
        hash ^= (value >> (8 * i)) & 0xff;
        hash *= 0x100000001b3ULL;
    }
    return hash;
}

constexpr uint64_t kFnvBasis = 0xcbf29ce484222325ULL;

// Every edge against every edge, then random pairs.
template <typename Op>
uint64_t digest_binary(Op op) {
    uint64_t hash = kFnvBasis;
    for (int i = 0; i < kEdgeCount; ++i)
        for (int j = 0; j < kEdgeCount; ++j) hash = fnv(hash, op(kEdges[i], kEdges[j]));
    for (int i = 0; i < kRandomInputs; ++i)
        hash = fnv(hash, op(input(kEdgeCount + 2 * i), input(kEdgeCount + 2 * i + 1)));
    return hash;
}

// Every count from -1 past the widest lane, on every edge and some random words.
template <typename Op>
uint64_t digest_shift(Op op) {
    uint64_t hash = kFnvBasis;
    for (int i = 0; i < kEdgeCount + 64; ++i)
        for (int count = -1; count <= 70; ++count) hash = fnv(hash, op(input(i), count));
    return hash;
}

struct Expected {
    const char *name;
    uint64_t digest;
};

// Recorded from the hardware instructions on x86_64.
constexpr Expected kExpected[] = {
    {"paddb", 0x1ea8a2dca472a4abULL},
    {"paddw", 0x9b5f755a2abf7ff3ULL},
    {"paddd", 0x39e62905410689e8ULL},
    {"paddsb", 0x90f2095f8ad019b8ULL},
    {"paddsw", 0x864e09e2b25e9100ULL},
    {"paddusb", 0xdc1bea32dadfa73cULL},
    {"paddusw", 0x88e14bfc58e4b172ULL},
    {"psubb", 0xabce5a5ff2262dd7ULL},
    {"psubw", 0xa696a135ccaf2f1aULL},
    {"psubd", 0x3aa6752b501bde1cULL},
    {"psubsb", 0xfc01315f272e5ca8ULL},
    {"psubsw", 0x0f857aeea7e98c0cULL},
    {"psubusb", 0xe543d173809757f6ULL},
    {"psubusw", 0xbcc0b59e020a8dfdULL},
    {"pmullw", 0x0b49342cf1d44607ULL},
    {"pmulhw", 0x044ae702e8db4ea9ULL},
    {"pmaddwd", 0x2980853efde8f360ULL},
    {"pand", 0x98fa5c8c16e0e38aULL},
    {"pandn", 0x1f84d00b73a66de6ULL},
    {"por", 0xc70c7fdac5d5c99aULL},
    {"pxor", 0x5dea09fabeec3d6dULL},
    {"pcmpeqb", 0x3bde09afdcb02490ULL},
    {"pcmpeqw", 0x84b9de5f6a4320a5ULL},
    {"pcmpeqd", 0x922efdc7043622c5ULL},
    {"pcmpgtb", 0xb95ae93c6672a9a5ULL},
    {"pcmpgtw", 0x1e9d7973c07229c7ULL},
    {"pcmpgtd", 0xf47801527722f5e5ULL},
    {"packsswb", 0x20b80a1e2220a140ULL},
    {"packssdw", 0x8dba388a63e3aa71ULL},
    {"packuswb", 0xa04908e1f4530f7bULL},
    {"punpckhbw", 0xe65318fde843ae57ULL},
    {"punpckhwd", 0x660340d07d37232bULL},
    {"punpckhdq", 0x793f7b7336fb340bULL},
    {"punpcklbw", 0xe1594e8b5f28d78fULL},
    {"punpcklwd", 0x795dc945cfacf20fULL},
    {"punpckldq", 0xd41e1a7bf640e2dbULL},
    {"psllw", 0x3b794803fb1babb8ULL},
    {"pslld", 0xc88a55f1a109183cULL},
    {"psllq", 0x72ce8336c04ad284ULL},
    {"psrlw", 0xefbdf3d4012704baULL},
    {"psrld", 0x3bebf3e8c8e81e50ULL},
    {"psrlq", 0x29deeae3161f040cULL},
    {"psraw", 0x500dca322367e17aULL},
    {"psrad", 0xd80c2032caa4c210ULL},
};

uint64_t expected(const char *name) {
    for (const Expected &e : kExpected)
        if (std::strcmp(e.name, name) == 0) return e.digest;
    return 0;
}

}  // namespace

#define CHECK_PORTABLE_BINARY(name)                                             \
    {                                                                           \
        uint64_t digest = digest_binary(                                        \
            [](uint64_t a, uint64_t b) { return nocturne_mmx_##name(a, b); });  \
        CHECK_EQ_AT(digest, expected(#name), #name);                            \
    }

#define CHECK_PORTABLE_SHIFT(name)                                              \
    {                                                                           \
        uint64_t digest = digest_shift(                                         \
            [](uint64_t a, int n) { return nocturne_mmx_##name(a, n); });       \
        CHECK_EQ_AT(digest, expected(#name), #name);                            \
    }

NOCTURNE_TEST(portable_mmx_matches_recorded_hardware_results) {
    MMX_BINARY_OPS(CHECK_PORTABLE_BINARY)
    MMX_SHIFT_OPS(CHECK_PORTABLE_SHIFT)
}

#ifdef __MMX__

#define CHECK_NATIVE_BINARY(name)                                               \
    for (int i = 0; i < kEdgeCount + kRandomInputs; ++i)                        \
        for (int j : {i, i + 1, (i * 7) % (kEdgeCount + kRandomInputs)}) {      \
            uint64_t a = input(i), b = input(j);                                \
            CHECK_EQ_AT(nocturne_mmx_##name(a, b), (uint64_t)name(a, b), #name); \
        }

#define CHECK_NATIVE_SHIFT(name)                                                \
    for (int i = 0; i < kEdgeCount + 64; ++i)                                   \
        for (int count = -1; count <= 70; ++count) {                            \
            uint64_t a = input(i);                                              \
            CHECK_EQ_AT(nocturne_mmx_##name(a, count), (uint64_t)name(a, count), #name); \
        }

NOCTURNE_TEST(portable_mmx_matches_the_instructions) {
    MMX_BINARY_OPS(CHECK_NATIVE_BINARY)
    MMX_SHIFT_OPS(CHECK_NATIVE_SHIFT)
    emms();
}

// Prints the table above from the instructions, for when an op is added.
NOCTURNE_TEST(print_hardware_digests) {
    if (!std::getenv("NOCTURNE_PRINT_MMX_DIGESTS")) return;
#define PRINT_BINARY(name)                                                      \
    std::printf("    {\"%s\", 0x%016llxULL},\n", #name, (unsigned long long)digest_binary( \
        [](uint64_t a, uint64_t b) { return (uint64_t)name(a, b); }));
#define PRINT_SHIFT(name)                                                       \
    std::printf("    {\"%s\", 0x%016llxULL},\n", #name, (unsigned long long)digest_shift( \
        [](uint64_t a, int n) { return (uint64_t)name(a, n); }));
    MMX_BINARY_OPS(PRINT_BINARY)
    MMX_SHIFT_OPS(PRINT_SHIFT)
    emms();
}

#endif  // __MMX__

NOCTURNE_TEST_MAIN()

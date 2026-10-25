// =============================================================================
// FNV-1a — the published 32-bit values
// =============================================================================
//
// The netplay sync check compares hashes taken on two machines, so the hash has
// to be the standard one, byte for byte, and not merely a consistent one.

#include "core/fnv1a.h"
#include "nocturne_test.h"

#include <cstring>

namespace {

uint32_t of(const char *text) {
    return nocturne_fnv1a(NOCTURNE_FNV1A_BASIS, text, (int)std::strlen(text));
}

} // namespace

NOCTURNE_TEST(it_gives_the_reference_values) {
    CHECK_EQ(of(""), 0x811c9dc5u);
    CHECK_EQ(of("a"), 0xe40c292cu);
    CHECK_EQ(of("foobar"), 0xbf9cf968u);
}

// Hashing in pieces is hashing the whole, which is what lets a caller fold in a
// value at a time.
NOCTURNE_TEST(a_hash_continues_where_it_left_off) {
    const uint32_t first = nocturne_fnv1a(NOCTURNE_FNV1A_BASIS, "foo", 3);
    CHECK_EQ(nocturne_fnv1a(first, "bar", 3), of("foobar"));
    uint32_t stepped = NOCTURNE_FNV1A_BASIS;
    for (const char *p = "foobar"; *p; ++p)
        stepped = nocturne_fnv1a_step(stepped, (unsigned char)*p);
    CHECK_EQ(stepped, of("foobar"));
}

NOCTURNE_TEST_MAIN()

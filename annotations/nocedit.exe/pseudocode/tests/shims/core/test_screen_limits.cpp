// =============================================================================
// SCREEN LIMITS — the scanline and span tables are as large as their bounds
// =============================================================================
//
// The software rasterisers bound a screen by GAME_SCREEN_MAX_HEIGHT and fill
// the span reciprocals to GAME_RECIPROCAL_TABLE_SIZE: equates Ghidra holds at
// the binary's values and the generator emits raised (EQUATE_VALUE_OVERRIDES in
// pseudocode/headers.py), sizing the tables by the same names
// (GLOBAL_TYPE_OVERRIDES in pseudocode/globals.py).
// These hold the tables to those bounds, and the bounds to a 3840x2160 screen.

#include "nocturne.h"
#include "nocturne_test.h"

namespace {

template <typename T, size_t N>
constexpr size_t length(T (&)[N]) {
    return N;
}

const int kLargestWidth = 3840;
const int kLargestHeight = 2160;

static_assert(length(g_ScreenBufferArray) == GAME_SCREEN_MAX_HEIGHT, "scanline table");
static_assert(length(g_ZBufferScanlineArray) == GAME_SCREEN_MAX_HEIGHT, "depth table");
static_assert(length(g_ZBufferScanlineArrayBackup) == GAME_SCREEN_MAX_HEIGHT, "depth backup table");
static_assert(length(g_SavedScreenBufferArray) == GAME_SCREEN_MAX_HEIGHT, "saved scanline table");
static_assert(length(g_BackgroundSavedScreenBufferArray) == GAME_SCREEN_MAX_HEIGHT,
              "background scanline table");
static_assert(length(g_ReciprocalLookupTable) == GAME_RECIPROCAL_TABLE_SIZE, "reciprocal table");

} // namespace

// Every line of the largest screen has a scanline, and a span its full width,
// read at its width plus one, lands inside the reciprocal table.
NOCTURNE_TEST(the_largest_screen_fits_the_tables) {
    CHECK(kLargestHeight <= GAME_SCREEN_MAX_HEIGHT);
    CHECK(kLargestWidth + 1 < GAME_RECIPROCAL_TABLE_SIZE);
}

NOCTURNE_TEST_MAIN()

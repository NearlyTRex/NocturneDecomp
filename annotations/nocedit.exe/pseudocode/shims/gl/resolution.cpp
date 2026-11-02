// =============================================================================
// RESOLUTION LIST — implementation
// =============================================================================
// See resolution.h for what the shipped selector could reach and why this
// exists.

#include "gl/resolution.h"

#include <cstdio>
#include <cstdlib>

namespace {

struct Mode {
    int width;
    int height;
};

// Ascending by width, then by height. Every mode the shipped labels already
// knew about is here — including 400x300, which the shipped chain could
// describe but never select — plus 1600x1200, which was in g_ResolutionTable
// all along with no way to choose it, and the wider modes gl/widescreen.h
// frames the scene for. Past 1024 pixels wide each 16:9 mode has a 4:3 one at
// its height. Every width is a multiple of 16, which clearScreen's 32-byte rows
// need, and none is past GAME_SCREEN_MAX_HEIGHT lines or
// GAME_RECIPROCAL_TABLE_SIZE - 2 pixels, what the engine's scanline and span
// tables are sized for (research/18).
const Mode kModes[] = {
    {320, 240},   {400, 300},   {512, 384},   {640, 480},   {800, 600},   {1024, 768},
    {1200, 900},  {1280, 720},  {1280, 1024}, {1440, 1080}, {1600, 900},  {1600, 1200},
    {1920, 1080}, {1920, 1440}, {2560, 1440}, {2880, 2160}, {3840, 2160},
};

const int kModeCount = (int)(sizeof(kModes) / sizeof(kModes[0]));

bool allowed(int index, int max_height) {
    return max_height <= 0 || kModes[index].height <= max_height;
}

// Index of an exact width/height match the ceiling allows, or -1.
int index_of(int width, int height, int max_height) {
    for (int i = 0; i < kModeCount; ++i) {
        if (kModes[i].width == width && kModes[i].height == height && allowed(i, max_height)) {
            return i;
        }
    }
    return -1;
}

// The allowed mode nearest by height, then by width; the first of two as near.
// The smallest mode when the ceiling allows none.
int nearest(int width, int height, int max_height) {
    int best = 0;
    int best_dh = -1;
    int best_dw = -1;
    for (int i = 0; i < kModeCount; ++i) {
        if (!allowed(i, max_height)) {
            continue;
        }
        const int dh = std::abs(kModes[i].height - height);
        const int dw = std::abs(kModes[i].width - width);
        if (best_dh < 0 || dh < best_dh || (dh == best_dh && dw < best_dw)) {
            best = i;
            best_dh = dh;
            best_dw = dw;
        }
    }
    return best;
}

} // namespace

void nocturne_resolution_step(int current_width, int current_height, int step, int max_height,
                              int *out_width, int *out_height) {
    int index = index_of(current_width, current_height, max_height);
    if (index < 0) {
        // Not one of ours — an old INI, the 400x300 the shipped chain could land
        // on but never leave cleanly, or one above the ceiling. Snap to the
        // nearest rather than stepping, so one keypress does something sensible
        // instead of dropping to the smallest mode.
        index = nearest(current_width, current_height, max_height);
    } else {
        // The next allowed mode, wrapping at both ends the way the shipped chain
        // wrapped from its smallest mode back to the largest the card would
        // allow. The current mode is allowed, so this always finds one.
        const int direction = step < 0 ? -1 : 1;
        do {
            index = (index + direction + kModeCount) % kModeCount;
        } while (!allowed(index, max_height));
    }

    *out_width = kModes[index].width;
    *out_height = kModes[index].height;
}

int nocturne_resolution_is_wide(int width, int height) {
    return width * 3 > height * 4;
}

const char *nocturne_resolution_label(int width, int height) {
    static char label[64];
    std::snprintf(label, sizeof(label), "Resolution : %dx%d%s", width, height,
                  nocturne_resolution_is_wide(width, height) ? " (wide)" : "");
    return label;
}

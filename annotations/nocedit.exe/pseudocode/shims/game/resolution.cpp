// =============================================================================
// RESOLUTION LIST — implementation
// =============================================================================
// See resolution.h for what the shipped selector could reach and why this
// exists.

#include "game/resolution.h"

#include <cstdio>

namespace {

struct Mode { int width; int height; };

// Ascending by height, which is what makes the stepping monotonic. Every mode
// the shipped labels already knew about is here — including 400x300, which the
// shipped chain could describe but never select — plus 1600x1200, which was in
// g_ResolutionTable all along with no way to choose it.
const Mode kModes[] = {
    { 320,  240 },
    { 400,  300 },
    { 512,  384 },
    { 640,  480 },
    { 800,  600 },
    { 1024, 768 },
    { 1280, 1024 },
    { 1600, 1200 },
};

const int kModeCount = (int)(sizeof(kModes) / sizeof(kModes[0]));

} // namespace

int nocturne_resolution_count(void) {
    return kModeCount;
}

int nocturne_resolution_at(int index, int *width, int *height) {
    if (index < 0 || index >= kModeCount) { return 0; }
    if (width) { *width = kModes[index].width; }
    if (height) { *height = kModes[index].height; }
    return 1;
}

int nocturne_resolution_index_of(int width, int height) {
    for (int i = 0; i < kModeCount; ++i) {
        if (kModes[i].width == width && kModes[i].height == height) { return i; }
    }
    return -1;
}

int nocturne_resolution_step(int current_width, int current_height, int step,
                             int max_height, int *out_width, int *out_height) {
    int index;
    int last;

    if (kModeCount < 1) { return 0; }

    // The largest mode the caller will take. Everything past it is unreachable
    // as far as the stepping is concerned, so it is not a mode the selector can
    // land on even for one frame.
    last = kModeCount - 1;
    if (max_height > 0) {
        while (last > 0 && kModes[last].height > max_height) { --last; }
    }

    index = nocturne_resolution_index_of(current_width, current_height);
    if (index < 0) {
        // Not one of ours — an old INI, or the 400x300 the shipped chain could
        // land on but never leave cleanly. Snap to the nearest by height rather
        // than stepping, so one keypress does something sensible instead of
        // dropping to the smallest mode.
        int best = 0;
        int best_delta = -1;
        for (int i = 0; i <= last; ++i) {
            int delta = kModes[i].height - current_height;
            if (delta < 0) { delta = -delta; }
            if (best_delta < 0 || delta < best_delta) {
                best_delta = delta;
                best = i;
            }
        }
        index = best;
    }
    else if (index > last) {
        // In the table but above the ceiling, which an INI can arrange. Snap
        // into range, the same way an unknown mode does.
        index = last;
    }
    else {
        index = index + (step < 0 ? -1 : 1);
        // Wrap at both ends, the way the shipped chain wrapped from its
        // smallest mode back to the largest the card would allow.
        if (index < 0) { index = last; }
        if (index > last) { index = 0; }
    }

    if (out_width) { *out_width = kModes[index].width; }
    if (out_height) { *out_height = kModes[index].height; }
    return 1;
}

const char *nocturne_resolution_label(int width, int height) {
    static char label[64];
    std::snprintf(label, sizeof(label), "Resolution : %dx%d", width, height);
    return label;
}

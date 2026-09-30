// =============================================================================
// SCRIPTED WALKS SLOW TO TURN — see walk_turn.h
// =============================================================================

#include "game/walk_turn.h"

namespace {

const float kFullSpeedError = 0.5235988f;  // 30 degrees
const float kStopError      = 1.5707964f;  // 90 degrees

} // namespace

extern "C" float nocturne_walk_turn_scale(int scripted, float heading_error) {
    if (scripted == 0) {
        return 1.0f;
    }
    const float error = heading_error < 0.0f ? -heading_error : heading_error;
    if (error <= kFullSpeedError) {
        return 1.0f;
    }
    if (error >= kStopError) {
        return 0.0f;
    }
    return (kStopError - error) / (kStopError - kFullSpeedError);
}

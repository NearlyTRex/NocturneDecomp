// =============================================================================
// LOOPING PLATFORMS NOT DRAWN ON THEIR WAY BACK — see platform_loop.h
// =============================================================================

#include "game/platform_loop.h"

#include "core/ascii_case.h"

namespace {

// EPlatformStateType's moving states.
const int kMovingToEnd = 3;
const int kMovingToStart = 4;

// The condition CEventList::evaluateCondition always holds.
const char kAlways[] = "true";

} // namespace

extern "C" int nocturne_platform_loop_return(int state, const char *to_start_event,
                                             const char *to_end_event, float travel_time_to_start,
                                             float travel_time_to_end) {
    if (!nocturne_ascii_iequals(to_start_event, kAlways) ||
        !nocturne_ascii_iequals(to_end_event, kAlways))
        return 0;
    if (state == kMovingToStart)
        return travel_time_to_start < travel_time_to_end;
    if (state == kMovingToEnd)
        return travel_time_to_end < travel_time_to_start;
    return 0;
}

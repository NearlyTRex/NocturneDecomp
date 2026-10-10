// =============================================================================
// A SCRIPT'S CAMERA HOLD RUNS OUT UNDER THE GOGGLES — implementation
// =============================================================================

#include "game/goggles_camera_hold.h"
#include "nocturne.h"

extern "C" void nocturne_goggles_camera_hold_tick(CDemonSet *set, float delta_time) {
    if (set == nullptr || set->camera_switch_cooldown <= 0.0f) {
        return;
    }
    set->camera_switch_cooldown = set->camera_switch_cooldown - delta_time;
    if (set->camera_switch_cooldown <= 0.0f) {
        set->camera_switch_cooldown = 0.0f;
    }
}

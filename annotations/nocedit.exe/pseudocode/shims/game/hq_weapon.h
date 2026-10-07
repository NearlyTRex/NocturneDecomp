#pragma once

// =============================================================================
// HQ WEAPON — no drawing a weapon at headquarters
// =============================================================================
//
// The HQ missions (HQ-ACT1 .. HQ-ACT5, every mission whose root name starts
// "HQ-") keep the player unarmed from their scripts' idle loops:
//
//     if (isweapondrawn($))
//         holsterweapon($, true)
//
// so any draw is undone a script step later. Refusing the draw and flashlight
// requests at the input instead means the weapon never comes out at all.
//
// Filtered where CGame::playerControls builds the local player's input, before
// netplay sends it, so host and guest both drop the request and both machines
// simulate the same input. Gated by NOCTURNE_AUTHENTIC_FLASHLIGHT_DRAW.

struct SPlayerInput;

#ifdef __cplusplus
extern "C" {
#endif

// Clears the draw and flashlight requests from `input` in an HQ mission.
void nocturne_hq_filter_input(struct SPlayerInput *input);

#ifdef __cplusplus
}
#endif

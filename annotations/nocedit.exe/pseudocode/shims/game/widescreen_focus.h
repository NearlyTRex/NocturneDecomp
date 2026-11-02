#pragma once

// =============================================================================
// WIDESCREEN FOCUS — where in the scene the pan-and-scan crop should look
// =============================================================================
//
// An addition, not a reconstruction: the game side of gl/widescreen.h. Once per
// rendered scene, before the camera composites it, the script's focus actor —
// the one the virtual director frames — is projected through the scene camera
// the way CGame's iris fade finds its centre: the middle of its bounding box,
// through CDemonCamera::worldToScreenWithFrustumCull. Its height, the camera,
// whether the letterbox is up and the frame time go to the crop, with the
// player's look: under camera movement on a pad, the right stick's vertical
// (game/movement.h gives it to the view rather than to pointing), which the
// crop ignores while a cutscene's letterbox is up.
//
// Reached from CDemonSet::renderScene, gated there on NOCTURNE_AUTHENTIC_MENU.

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_widescreen_note_scene(void);

#ifdef __cplusplus
}
#endif

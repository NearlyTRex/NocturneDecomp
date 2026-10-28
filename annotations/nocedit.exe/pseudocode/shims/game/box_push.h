#pragma once

// =============================================================================
// BOX PUSH — the scrape of a pushed box, each time it moves
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_PUSH_SOUND, which carries the reasoning. Reached
// from where a push moves its box (CStranger::processFrame and
// CGabriella::process, at CBoxActor::resolveRayPush).

#ifdef __cplusplus
extern "C" {
#endif

struct CBoxActor;

// The shove now moving `box`: plays its push sound again when the last one
// has finished, so every shove of a long push is heard and none is cut off or
// doubled.
void nocturne_box_push_sound(struct CBoxActor *box);

#ifdef __cplusplus
}
#endif

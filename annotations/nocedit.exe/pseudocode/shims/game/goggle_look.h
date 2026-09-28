#pragma once

// =============================================================================
// GOGGLE LOOK FOR EVERY HERO
// =============================================================================
//
// CDemonSet::renderGogglesView builds the goggle camera from the local hero's
// "Bip01 Head" bone, whatever the class, but only CStranger pitches that bone
// from look input (CStranger::updateProceduralAnimation). The other eight heroes
// — reachable as netplay guests — get a goggle view pinned to the horizon.
//
// This supplies the pitch for them, at CStranger's rate and limits. It is
// camera-only and kept out of the actor: goggles_active is one machine's state,
// and anything it gated in the sim would desync lockstep netplay.
//
// Gated by NOCTURNE_AUTHENTIC_GOGGLE_LOOK at the call sites.

#ifdef __cplusplus
extern "C" {
#endif

struct CHero;

// Extra goggle-camera pitch, in radians, for `hero` this frame: look input
// integrated over `delta_time`, frozen once the hero is dead. Zero for a
// CStranger, whose head bone already carries its pitch — except empty-handed
// in a network game, where CStranger::autoAimAtThreat keeps it level.
float nocturne_goggle_look_pitch(struct CHero *hero, float delta_time);

// Level the view again. Called whenever the goggles are toggled.
void nocturne_goggle_look_reset(void);

#ifdef __cplusplus
}
#endif

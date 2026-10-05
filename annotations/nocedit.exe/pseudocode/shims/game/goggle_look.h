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
// THE HEAD IS LEVEL
//
// With the goggles on, CStranger::updateProceduralAnimation sets his head
// bone's model-space rotation to his aim pitch alone, so his idle and turn
// animations never move the view. The other heroes' heads keep their
// animation, and their goggle view sways with every idle, swings with every
// step, and points where the head does (Gabriella's idle head is turned 13
// degrees). Their goggle camera is built from the head bone's matrix with the
// rotation replaced by a level one and its position kept - what CStranger's
// pinned head gives, since a bone's model matrix takes its rotation from that
// bone alone and its position from its parents. Their look pitch is applied
// on top, as before.
//
// Gated by NOCTURNE_AUTHENTIC_GOGGLE_LOOK at the call sites.

#ifdef __cplusplus
extern "C" {
#endif

struct CHero;
struct CMatrix3x4f;
struct CDemonSet;

// CGame::runGameSession skips CDemonSet::evaluateVirtualDirector while the
// goggles are on, and only the director counts down a script's timed camera
// hold (switchCamera(name, seconds) through CDemonSet::setPendingCamera). A
// hold set with the goggles on therefore waited, whole, for the goggles to come
// off, and the view then showed that camera for its full time: CASTLE1.SCR's
// ghoul spook, switchcamera(cas2, 3), cut a player who had walked on to cas2 for
// three seconds. In a network game the script runs on every machine, so a spook
// one player set off did this to the other. Each frame the director is skipped
// for the goggles, this counts the hold down by `delta_time` as the director
// would, stopping at 0. An untimed hold (1e10 s) is unaffected in practice.
// Gated by NOCTURNE_AUTHENTIC_GOGGLES_CAMERA_HOLD.
void nocturne_goggles_camera_hold_tick(struct CDemonSet *set, float delta_time);

// The matrix the goggle camera is built from, given `hero`'s head bone matrix:
// `head` for a CStranger, which levels its own head; for any other class,
// `level` filled with a level rotation at the head bone's scale and position.
struct CMatrix3x4f *nocturne_goggle_head_matrix(struct CHero *hero, struct CMatrix3x4f *head,
                                                struct CMatrix3x4f *level);

// Once per sim frame, from CGame::process: integrates the local hero's look
// input over `delta_time` while the goggles are on, frozen once the hero is
// dead. Per sim frame rather than per render, so a netplay guest that applies
// several frames per render still turns at full speed.
void nocturne_goggle_look_tick(float delta_time);

// Extra goggle-camera pitch, in radians, for `hero`. Zero for a CStranger,
// whose head bone already carries its pitch — except empty-handed in a network
// game, where CStranger::autoAimAtThreat keeps it level.
float nocturne_goggle_look_pitch(struct CHero *hero);

// Level the view again. Called whenever the goggles are toggled.
void nocturne_goggle_look_reset(void);

#ifdef __cplusplus
}
#endif

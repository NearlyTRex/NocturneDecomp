#pragma once

// =============================================================================
// A PLAYER SVETLANA CAN BE GRABBED
// =============================================================================
//
// CSvetlana::getGrabbed is `return 0`: she refuses every grab, though
// SVETLANA.SKL has GETGRABBED and PUSHOFF and CSvetlana::process handles
// grabbed_by like every other class. That keeps the ACT1 escort from being
// carried off, and is kept for her as an NPC. A player Svetlana is grabbed
// through CHero::getGrabbed like the rest, and breaks out the way they do
// (hero_grab.h). g_HeroActors is the same set on every machine, so this is a
// lockstep test.
//
// Gated on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;
struct CDemonActor;

#ifdef __cplusplus
extern "C" {
#endif

// CSvetlana::getGrabbed's body. Returns what the vtable slot returns: 1 when
// the grab took.
int nocturne_svetlana_get_grabbed(struct CHero *svetlana, struct CDemonActor *grabber,
                                  int grab_type);

#ifdef __cplusplus
}
#endif

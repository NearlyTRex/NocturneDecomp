#pragma once

// =============================================================================
// REFERENCES TO A DELETED ACTOR
// =============================================================================
//
// The other half of NOCTURNE_AUTHENTIC_ACTOR_DELETE. deleteActor already clears
// what the heroes hold - weapon in hand, both carry hands, the selected weapon
// and item - and this clears what the sound mixer holds.
//
// A positional sound does not copy the emitter's position; it keeps a pointer to
// it. CDemonActor::playSound passes &actor->location.position straight through
// CSound::playActorSound into the slot's options, and CSfxSlot::updateBound-
// PositionAndVelocity re-reads it on every mix. Nothing unbinds it when the
// emitter is deleted, so the mixer keeps dereferencing a freed actor - and it
// does so on the audio thread, which is what makes it show up as a
// heap-use-after-free with a free on T0 and the read on T10:
//
//   CLightGun::process binds "cre-charge.wav" to &base.base.location.position
//   CDemonMission::process -> removeActor -> deleteActor -> free
//   audio thread: pollAndMixSfx -> CSfxSlot::compute -> updateBound... -> boom
//
// The shipped binary survived it the same way it survived every other stale
// actor pointer: Watcom's allocator left the freed bytes readable, so the mixer
// went on reading the last position the actor ever had.
//
// SO THAT IS WHAT THIS RESTORES, RATHER THAN KILLING THE SOUND. The slot's
// options already hold the last sampled position, because the mixer copies it in
// every pass. Clearing the format field back to "static" leaves that value in
// place and stops the re-read, so the sound finishes where the actor last was -
// audibly what the original did, without the dangling dereference. Killing the
// slot instead would cut off a death cry or a gunshot from an actor that is
// removed in the same frame it fired, which the original never did.
//
// Everything here takes the sound mutex through lockSound/unlockSound, the way
// killSfxByName does: the mixer runs on its own thread and CSfxSlot's own
// operations assert that the lock is held.

// This header is reached from shim_config.h, which nocturne.h includes ahead of
// the generated type headers, so the actor type is named rather than defined.
struct CDemonActor;

#ifdef __cplusplus
extern "C" {
#endif

// Unbinds every sfx slot that tracks a field of `actor`, so nothing re-reads the
// actor after it is freed. Matches a slot whose position/velocity source is the
// actor's own location, and any slot the actor started (playSfxInternal records
// the emitter in userdata[0]) - the latter covers a sound bound to some other
// field of the same actor. A no-op when no slot refers to it.
void nocturne_actor_delete_unbind_sounds(struct CDemonActor *actor);

#ifdef __cplusplus
}
#endif

#pragma once

// =============================================================================
// SCRIPTED WALKS SLOW TO TURN
// =============================================================================
//
// CCharacter::walkToPoint steers like a tank: every step moves the character
// forward along its facing at full walk speed while it turns toward the path
// heading, capped at turn_speed. At a doorway the heading swings and the
// character arcs into the frame before it has turned.
//
// This scales the forward step by how far the facing is off the heading: full
// speed up to 30 degrees, falling linearly to a stop at 90. Scripted walks only
// (a walk_to_target or door_target set), so enemy pursuit is unchanged. Plain
// arithmetic, no libm, so every platform in a netplay session agrees.
//
// Gated by NOCTURNE_AUTHENTIC_WALK_TURN at the call site.

#ifdef __cplusplus
extern "C" {
#endif

// Factor in [0, 1] for the forward step. `heading_error` is the path heading
// minus the facing, in radians, already normalised to [-pi, pi]. Returns 1 when
// `scripted` is zero.
float nocturne_walk_turn_scale(int scripted, float heading_error);

#ifdef __cplusplus
}
#endif

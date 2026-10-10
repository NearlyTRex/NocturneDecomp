#pragma once

// =============================================================================
// PER-FRAME HERO ADDITIONS
// =============================================================================
//
// The one call each non-Stranger hero class makes from its process, once
// CCharacter::process accepts the frame. Which additions apply to which class
// is decided here rather than at each class's call site:
//
//   death check   every class that can reach zero hit points (hero_death.h)
//   health items  every class (hero_items.h)
//   cold breath   the classes whose process never calls
//                 CCharacter::processSmoking, except Moloch (hero_breath.h)
//   regeneration  Moloch (hero_moloch.h)
//
// Class-specific per-frame work that has to sit at a particular point in a
// class's process (Gabriella's held weapon, the Colonel's pistol) stays at
// its own call site.
//
// Gated at the call sites on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_hero_frame(struct CHero *hero, float delta_time);

#ifdef __cplusplus
}
#endif

#pragma once

// =============================================================================
// MELEE HELPERS FOR THE HERO ADDITIONS
// =============================================================================
//
// The pieces Gabriella's kick, the Colonel's push-off and Moloch's claws share:
// which characters a blow may land on, how far one is from the hero, where a
// bone is in the world, and the damage record a blow deals. Each caller keeps
// its own reach, cone and damage figures.

struct CCharacter;
struct CDemonActor;
struct CVector3f;

// Gabriella's grab-escape kick, signal 6 in CGabriella::processMotionEvents.
#define NOCTURNE_HERO_ESCAPE_KICK_MIN 10.0f
#define NOCTURNE_HERO_ESCAPE_KICK_MAX 15.0f

#ifdef __cplusplus
extern "C" {
#endif

// 1 when `target` is in the active set's character list. A hit remembered
// across frames checks this before touching the target again.
int nocturne_hero_in_set(struct CCharacter *target);

// 1 when `object` can be thrown: CDemonActor::getAllowedMeleeAttackTypes
// reports bit 4, as CStranger's throw tests.
int nocturne_hero_is_throwable(struct CDemonActor *object);

// 1 for a living enemy in the world: created, above zero hit points, a
// CEnemy, and not a player hero.
int nocturne_hero_melee_target(struct CCharacter *target);

// `target`'s position in `self`'s frame, into `local`, and its horizontal
// distance from `self` to the edge of its collision cylinder, so a broad enemy
// is reached as early as a narrow one.
float nocturne_hero_melee_edge_distance(struct CDemonActor *self, struct CCharacter *target,
                                        struct CVector3f *local);

// `bone_name`'s cached position on `self`, in the world. 0 when the skeleton
// has no such bone.
int nocturne_hero_bone_world(struct CCharacter *self, const char *bone_name,
                             struct CVector3f *world);

// Deals `amount` of DAMAGE_TYPE_MELEE from `self` to `target` through the
// target's processDamage, with `from` as the impact point. Returns the damage
// processDamage let through.
float nocturne_hero_melee_hit(struct CCharacter *self, struct CCharacter *target,
                              const struct CVector3f *from, float amount);

#ifdef __cplusplus
}
#endif

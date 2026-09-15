#pragma once

// =============================================================================
// NETPLAY — FRIENDLY FIRE
// =============================================================================
//
// An addition, not a reconstruction. The shipped damage path has no notion of
// sides: SDamageInfo carries an attacker and a wielder, and nothing anywhere
// asks whether either of them is on the victim's team, because in the game as
// shipped there was only ever one hero. Put two in the same world and every
// weapon in the game works on both of them.
//
// That is a poor default for a co-op session - a guest can end the host's run
// with one shot, deliberately or by standing in front of them - so by default
// a hero's damage does not land on another hero.
//
// WHAT COUNTS AS COMING FROM A HERO
//
// CDemonActor::fillAttackDamageInfo sets attacker to the actor doing the damage
// and wielder to whatever getCarrier returns for it, so a pistol shot arrives
// as attacker=the weapon, wielder=the hero holding it, while a punch arrives as
// attacker=the character. Either field naming a hero means a hero caused it.
//
// Note this makes Scat's Baron friendly too: CBaron registers with
// g_CHeroClassInfo as its parent, so the summon is a CHero and its damage is
// blocked against other heroes the same way its summoner's would be.
//
// HOW IT BLOCKS
//
// By zeroing damage_amount, which is the idiom the classes already use - each
// hero's processDamage opens by zeroing it for invincibility, god mode and
// CGame::allow_damage_flag. Zeroing is what the shared CCharacter::processDamage
// needs: it subtracts hit points from the struct, so an early return in the base
// would not stop the health loss.
//
// A hero's own processDamage answers the block differently. Zeroing alone would
// leave the rest of the override running, and each of them sets an
// invincibility_timer unconditionally a few lines below the block - 2.0s for the
// Stranger, 3.0s for Svetlana and the Ice Pick, 0.5s for the others. A teammate
// tapping a hero every couple of seconds would keep them genuinely invulnerable
// to enemies. So an override returns as soon as the block reports, which is the
// shape of its own invincibility gate two lines down. Nothing is skipped by
// that return: the flinch, the pain sound and the inventory-timer reset below it
// are already guarded on the damage being positive.
//
// THE ATTACKER'S OWN EFFECTS ARE A SEPARATE QUESTION
//
// Zeroing silences the victim, not the weapon. CMelee::playAttackHitEffects
// spawns the blood spurt and plays its hit sound on the strength of the victim
// being a CCharacter - it never reads damage_amount - so a blocked hit still
// lands with a wet thud and a spray of blood.
//
// CDemonActor::processMeleeHit is inconsistent about this in the shipped
// binary. Its actor-scan branch (a swing) guards both the blood burst and the
// effects call on `0.0 < damage_amount`; its raycast branch (a thrust) calls
// processDamage and playAttackHitEffects back to back with no test between them
// - 0040aa20 and 0040aa3a. The raycast branch asks the predicate below instead,
// which keeps the answer inside this flag's remit: a plain damage test there
// would equally strip the blood from a god-mode or invincibility hit, which the
// shipped game does show.
//
// Deterministic by construction: it depends only on the two actors' classes and
// a compile-time flag, which every machine agrees on, so the lockstep
// simulation stays in step whichever way the flag is set.

struct CCharacter;
struct SDamageInfo;

#ifdef __cplusplus
extern "C" {
#endif

// Whether this hit is one hero damaging another in a network game. Reads only
// the two actors' classes, so it answers the same after the damage has been
// zeroed — which is what lets the attacker's effects ask about a hit the
// victim has already refused.
//
// Zero outside a network game, zero when the victim or the source is not a
// hero, and zero when NOCTURNE_AUTHENTIC_FRIENDLY_FIRE is 1.
int nocturne_net_friendly_fire_blocked(struct CCharacter *victim,
                                       struct SDamageInfo *damage_info);

// The above, and zeroes damage_info->damage_amount when it answers yes. Reports
// whether it did, and a caller in a hero's own processDamage should return on
// that — see the note above. A hit already carrying no damage is not blocked.
// Call at the top of a hero's processDamage, beside the god-mode test.
int nocturne_net_friendly_fire_block(struct CCharacter *victim,
                                     struct SDamageInfo *damage_info);

#ifdef __cplusplus
}
#endif

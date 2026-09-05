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
// CGame::allow_damage_flag. Zeroing rather than returning early matters: the
// hero overrides subtract hit points themselves before delegating to
// CCharacter::processDamage, so an early return in the shared base would not
// stop the health loss, and the flinch and blood reactions still read the
// struct afterwards.
//
// Deterministic by construction: it depends only on the two actors' classes and
// a compile-time flag, which every machine agrees on, so the lockstep
// simulation stays in step whichever way the flag is set.

struct CCharacter;
struct SDamageInfo;

#ifdef __cplusplus
extern "C" {
#endif

// Zeroes damage_info->damage_amount when this hit is one hero damaging another
// in a network game, and reports whether it did.
//
// Does nothing outside a network game, nothing when the victim or the source is
// not a hero, and nothing when NOCTURNE_AUTHENTIC_FRIENDLY_FIRE is 1. Call at
// the top of a hero's processDamage, beside the god-mode test.
int nocturne_net_friendly_fire_block(struct CCharacter *victim,
                                     struct SDamageInfo *damage_info);

#ifdef __cplusplus
}
#endif

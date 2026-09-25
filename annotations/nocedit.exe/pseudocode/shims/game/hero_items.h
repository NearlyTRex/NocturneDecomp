#pragma once

// =============================================================================
// HEALTH ITEMS FOR THE CLASSES THAT ARE NOT THE STRANGER
// =============================================================================
//
// An addition, not a reconstruction. Three pieces of health handling exist in
// CStranger and nowhere else:
//
//   use           CStranger::processFrame sends use_item to
//                 CHero::tryUseSelectedItem. CGabriella and CIcePick spend
//                 use_item on pickups and throws; the other classes never read it.
//   auto-use      CStranger::processDamage spends an item on a killing blow when
//                 autoUseHealth is set. No other processDamage reads the option.
//   health bar    CStranger::processDamage and CGabriella::processDamage restart
//                 the inventory display timer that draws the bar. The rest do not.
//
// The timer also has to run down, and only CStranger, CScat and CIcePick call
// CInventory::updateInventory. For the others a started timer never expires,
// so the ticking is supplied here too.
//
// Only the heroes in g_HeroActors are touched. That set is identical on every
// machine, so a network game stays in lockstep, and an NPC of the same class
// (a companion Svetlana) keeps its shipped behaviour.
//
// Gated at the call sites on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;
struct SDamageInfo;

#ifdef __cplusplus
extern "C" {
#endif

// Once per frame from the hero's process, after CCharacter::process accepts the
// frame. A use_item press with a health item selected spends the item and is
// consumed, so the class's own use_item branch does not also fire. Any other
// selection leaves the press to the class.
void nocturne_hero_items_process(struct CHero *hero);

// From the hero's processDamage, straight after it stores the new hit_points.
// Applies auto-use under CStranger's test and restarts the display timer when
// damage landed. Returns hit_points afterwards, so the caller's death test sees
// a rescue.
float nocturne_hero_items_damage_taken(struct CHero *hero, struct SDamageInfo *damage_info);

#ifdef __cplusplus
}
#endif

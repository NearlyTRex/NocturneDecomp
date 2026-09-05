// =============================================================================
// HERO DEFAULT WEAPON — implementation
// =============================================================================
//
// See hero_weapon.h for what this is, and for why it runs from
// CDemonMission::createOneHero rather than from the hero constructors.

#include "game/hero_weapon.h"
#include "nocturne.h"

// What to do with the CGun that CHero::ctor left in the slot.
enum {
    HERO_WEAPON_KEEP,     // the class already ends up with the right weapon
    HERO_WEAPON_MELEE,    // swap it for a melee weapon carrying the named model
    HERO_WEAPON_NONE,     // drop it; this class attacks with nothing
    HERO_WEAPON_RENAME    // keep the weapon, give it the named model
};

typedef struct SHeroWeapon {
    int         action;
    const char *item_model_name;
    // Add a pistol as a *second* weapon, in a network game only. The class has
    // to be able to hold one for this to mean anything - see hero_add_pistol.
    int         net_extra_gun;
} SHeroWeapon;

// One row per EHeroType, in enum order. The models are ITEMLIST.TXT rows, so
// the weapon slot reads the name and description beside them.
static const SHeroWeapon k_hero_weapon[] = {
    // Gabriella has a weapon fire path of her own and the shipped CGun suits it.
    { HERO_WEAPON_KEEP,   (const char *)0x0,  0 },  // HERO_TYPE_GABRIELLA
    // Blades on her wrists; CSvetlana::performBladeAttack strikes from the hand
    // bones with its own damage and never reads the inventory. "Bladed Weapon".
    { HERO_WEAPON_MELEE,  "tort1.kfm",        0 },  // HERO_TYPE_SVETLANA
    // The pistol is his. Everything in CStranger is built around it.
    { HERO_WEAPON_KEEP,   (const char *)0x0,  0 },  // HERO_TYPE_STRANGER
    // CScat::ctor already replaced the pistol with a CBaronWeapon, which fires
    // by summoning Baron Samedi. CBaronWeapon::ctor sets no model name, so the
    // slot has nothing to look up; "Scat's Magic Powder" is described in
    // ITEMLIST.TXT as a component of the spell that summons him. He is also the
    // one hero here who can hold a real weapon as well.
    { HERO_WEAPON_RENAME, "a2s2-pouch.kfm",   1 },  // HERO_TYPE_SCAT
    // Not offered by the lobby, and CBaron attacks with his hands regardless.
    { HERO_WEAPON_KEEP,   (const char *)0x0,  0 },  // HERO_TYPE_BARON
    // CIcePick::performMeleeAttack, also from the hand bones. "Bladed Weapon".
    { HERO_WEAPON_MELEE,  "tort2.kfm",        0 },  // HERO_TYPE_ICEPICK
    // Punches: CHaystack::checkMeleeHit is driven from the L and R Hand bones.
    { HERO_WEAPON_NONE,   (const char *)0x0,  0 },  // HERO_TYPE_HAYSTACK
    // No attack at all - his fire button reaches the interaction set and the
    // struggle-out-of-a-grab state, and sets no attack state anywhere.
    { HERO_WEAPON_NONE,   (const char *)0x0,  0 },  // HERO_TYPE_COLONEL
    // No attack either; CMoloch::process reads walk, backup and draw, and draw
    // starts the morph. The amulet is his sigil rather than a weapon, which is
    // the honest thing for the slot to name when there is nothing to fire.
    { HERO_WEAPON_MELEE,  "AMULET.KFM",       0 },  // HERO_TYPE_MOLOCH
};

#define HERO_WEAPON_COUNT ((int)(sizeof(k_hero_weapon) / sizeof(k_hero_weapon[0])))

// Indexed by EHeroType, so it has to end where the enum does - the same guard
// net_hero.h's name table carries, for the same reason.
static_assert(HERO_WEAPON_COUNT == HERO_TYPE_MOLOCH + 1,
              "k_hero_weapon must cover every EHeroType");

// CInventory::initialize clears the list first, deleting what it holds (see
// CInventory::clear -> removeItem with preserve_items == 0), so running it here
// discards the CHero pistol rather than stacking a second weapon on top of it.
// CScat::createDefaultWeapon already does exactly this.
static CInventory *hero_reset_inventory(CHero *hero)
{
    CInventory *inventory;

    inventory = &hero->inventory;
    core_inv_cpp_CInventory_initialize_FUN_004fd190(inventory);
    return inventory;
}

static void hero_install_melee(CHero *hero, const char *item_model_name)
{
    CInventory *inventory;
    CDemonActor *actor_ptr;
    CWeapon *weapon;

    inventory = hero_reset_inventory(hero);

    // CShovel rather than CMelee, and the difference is not cosmetic.
    // CInventory::addItem has a CMelee-specific branch that takes the item out
    // of the world through the mission's deferred delete queue
    // (markActorToDelete(..., 0)); every other weapon falls through to the tail,
    // which unlinks immediately with removeActorFromList. CShovel is a sibling
    // of CMelee - both derive straight from CWeapon, see their staticInit - and
    // carries the same WEAPON_TYPE_MELEE and the same inert ballistics, but
    // takes the immediate path, so nothing is left queued against a mission
    // that has not started processing. removeActorFromList searches the list
    // before unlinking, so it is a no-op for an actor that was never in the
    // world, which this one never is.
    //
    // Nothing below touches a subclass field, so the CWeapon view is the whole
    // of it; the two steps are the ones CHero::createDefaultWeapon takes for
    // its CGun.
    actor_ptr = core_actor_cpp_createActorByName_FUN_0040c430((char *)"CShovel");
    weapon = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (actor_ptr, g_CWeaponClassInfo.name_hash);
    if (weapon == (CWeapon *)0x0) {
        // The hero keeps an empty slot rather than the pistol. Losing the
        // weapon is not worth quitting the process over.
        return;
    }

    strcpy(weapon->base.actor_name, "Your_weapon");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&weapon->model, (char *)item_model_name);

    // show_tutorial_message = 0: this is the hero being built, not a pickup, and
    // the message path draws "You've found : ..." across the screen.
    core_inv_cpp_CInventory_addItem_FUN_004fd600(inventory, (CDemonActor *)weapon, 0);
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (inventory, (CDemonActor *)0x0, 5, 1);
}

static void hero_rename_weapon(CHero *hero, const char *item_model_name)
{
    CWeapon *weapon;

    weapon = hero->inventory.selected_weapon;
    if (weapon == (CWeapon *)0x0) {
        return;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&weapon->model, (char *)item_model_name);
}

// What the extra pistol is loaded with, and what it is put back to after every
// shot. One constant so the reserve and the top-up cannot drift apart.
#define HERO_EXTRA_GUN_AMMO 100

static int hero_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE));
}

// A second weapon, added beside whatever the hero already holds.
//
// Only worth doing for a class whose fire path can actually drive one, and
// CScat's can: it fires whatever weapon_actor is
// (`weapon_actor->isReadyToFire()` then `->fire()`), and the WEAPON_TYPE_BARON
// test after it only chooses the motion state. CScat::updateWeaponState has a
// complete non-Baron branch, updateWeaponAttachment attaches a non-Baron weapon
// to a hand, renderOpaque expects layer action 2 for one - which is what
// getWeaponHoldType returns for a pistol - and his constructor registers the
// draw chain that reaches it: draw_stand2coatPocket then
// draw_coatPocket2aimPistols, both of which SCAT.SKL carries.
//
// What he does not have is a gun stance or a recoil motion; fstance/slumpwalk/
// slumpbackup are the Baron's, and CScat::isWeaponReady only reports ready for
// the Baron. So he holds the pistol in the aim pose and walks normally. That is
// the ceiling without authoring animation, and it is why this stays a second
// weapon rather than becoming his default.
//
// The selection is deliberately left alone. CInventory::addItem's tail selects
// the new weapon only when nothing is selected yet, and the Baron already is,
// so he still starts a mission summoning and reaches the pistol by cycling
// weapons - which nocturne_net_weapon_request already keeps in step across
// machines.
static void hero_add_pistol(CHero *hero)
{
    CDemonActor *actor_ptr;
    CWeapon *weapon;

    actor_ptr = core_actor_cpp_createActorByName_FUN_0040c430((char *)"CGun");
    weapon = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (actor_ptr, g_CWeaponClassInfo.name_hash);
    if (weapon == (CWeapon *)0x0) {
        return;
    }
    strcpy(weapon->base.actor_name, "Your_weapon");
    weapon->ammo_count = HERO_EXTRA_GUN_AMMO;
    core_inv_cpp_CInventory_addItem_FUN_004fd600
              (&hero->inventory, (CDemonActor *)weapon, 0);
}

extern "C" void nocturne_hero_reload_extra_gun(CHero *hero, CWeapon *weapon)
{
    if (hero == (CHero *)0x0 || weapon == (CWeapon *)0x0) {
        return;
    }
    if (hero_is_network_game() == 0) {
        return;
    }
    // Only the pistol handed out above. The Baron summon reaches this too and
    // must not be touched - it has no ammunition concept at all, and the HUD is
    // told not to draw one for it.
    if (weapon->weapon_type != WEAPON_TYPE_GUN) {
        return;
    }
    // CWeapon::fire is the single decrement in the engine - `if (ammo_count > 0)
    // { ammo_count--; return 1; }` - so putting the count back straight after
    // the shot is the whole of it. The HUD samples ammo_count once a frame and
    // therefore never sees it move, and the count can never reach the zero that
    // makes CGun::fire play the dry click.
    weapon->ammo_count = HERO_EXTRA_GUN_AMMO;
}

extern "C" void nocturne_hero_default_weapon(CHero *hero, int hero_type)
{
    const SHeroWeapon *entry;

    if (hero == (CHero *)0x0 || hero_type < 0 || hero_type >= HERO_WEAPON_COUNT) {
        return;
    }
    entry = &k_hero_weapon[hero_type];

    switch (entry->action) {
    case HERO_WEAPON_MELEE:
        hero_install_melee(hero, entry->item_model_name);
        break;
    case HERO_WEAPON_NONE:
        // The clear inside initialize is the whole operation: it leaves
        // selected_weapon null, the same state CInventory::initialize leaves any
        // empty inventory in, so every reader already handles it.
        hero_reset_inventory(hero);
        break;
    case HERO_WEAPON_RENAME:
        hero_rename_weapon(hero, entry->item_model_name);
        break;
    default:
        break;
    }

    // After the action, so it is added beside the weapon chosen above rather
    // than being wiped by the initialize inside it.
    if (entry->net_extra_gun != 0 && hero_is_network_game() != 0) {
        hero_add_pistol(hero);
    }
}

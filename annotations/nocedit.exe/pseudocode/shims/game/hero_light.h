#pragma once

// =============================================================================
// PER-HERO FLASHLIGHT, GOGGLES AND BATTERY
// =============================================================================
//
// The shipped game has one of each: g_CGamePtr->flashlight_active,
// g_CGamePtr->goggles_active, g_CDemonLightInstance (the beam) and
// g_WeaponCoronaGlobe (the lens glow). With more than one hero that breaks in
// three ways:
//
//   switch   CStranger::processFrame toggles flashlight_active from its own
//            light input and clears it whenever its weapon cannot carry a
//            light; drawWeapon clears it on every holster. A second Stranger
//            without a light-capable weapon cleared the first one's light
//            every frame.
//   beam     CWeapon::process lights only the local hero's weapon, so nobody
//            sees another player's flashlight.
//   battery  CInventory::updateInventory drains every hero's battery off the
//            two globals, i.e. off whatever the local player is doing.
//
// Here each hero gets its own switch, beam, glow and goggles flag. The local
// hero's are still the globals, so the HUD, the goggles view and the sound
// listener that read them are unchanged.
//
// The flashlight switch is driven by the hero's synced input, so every machine
// holds the same value for every hero. The goggles are toggled from the local
// keyboard, outside the sim, so the local state is broadcast through the
// net_weapon.h request channel and each machine applies it on the same frame.
// Battery charge is not simulation state (nothing in the sim reads it), but it
// sets the beam's brightness, so it is kept in step the same way.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call sites.

#ifdef __cplusplus
extern "C" {
#endif

struct CHero;
struct CDemonActor;
struct CDemonLight;
struct CDemonGlobe;

// The flashlight switch belonging to `hero`. A Stranger that is not a player
// hero gets a scratch slot nobody reads.
int *nocturne_hero_flashlight(struct CHero *hero);

// Whether `carrier` is a player hero with its flashlight on.
int nocturne_hero_flashlight_lit(struct CDemonActor *carrier);

// The beam and lens glow for a player hero: the globals for the local hero, an
// instance of its own for any other.
struct CDemonLight *nocturne_hero_light(struct CHero *hero);
struct CDemonGlobe *nocturne_hero_corona(struct CHero *hero);

// Whether `hero` is wearing goggles, for its battery. Outside a network game
// this is goggles_active for the local hero and 0 for anyone else.
int nocturne_hero_goggles(struct CHero *hero);

// Applies a goggles state received through net_weapon.h.
void nocturne_hero_goggles_set(struct CHero *hero, int on);

// Once per sim frame, from CGame::process: broadcasts the local goggles state
// whenever it changes, whatever changed it (the key, a death, a cutscene).
void nocturne_hero_goggles_publish(void);

// Forget every hero's goggles and what was last published. Called from
// nocturne_net_weapon_reset, which drops any request still in flight.
void nocturne_hero_goggles_reset(void);

// CDemonSet::addDynamicLight is about to quit on "Too many dynamic lights!".
// Another hero's beam is decoration, so it gives way: returns 0 to drop
// `light` if it is one, or evicts one already in the list and returns 1.
// Returns 1 without changing anything if there is nothing to give way.
int nocturne_hero_light_make_room(struct CDemonLight *light);

// Switch every non-local flashlight off. Call where flashlight_active is reset.
void nocturne_hero_light_reset(void);

#ifdef __cplusplus
}
#endif

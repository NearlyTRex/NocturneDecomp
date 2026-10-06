#pragma once

// =============================================================================
// GUN-MOUNTED FLASHLIGHT FOR HEROES WITHOUT ONE
// =============================================================================
//
// The Stranger's flashlight is mounted on his gun. CStranger::processFrame
// reads the light button and flips the hero's flashlight switch, and
// CWeapon::process lights the beam at the muzzle of any can_attach_light
// weapon whose carrier's switch is on (game/hero_light.h holds a switch, beam
// and corona per hero). No other hero class reads the light button for a gun,
// so a guest playing a hero that holds a light-capable gun - Gabriella's guns,
// Scat's and the Colonel's network pistols - has the beam but no switch.
// Gabriella's own light is a CLightActor carried in her left hand, which no
// shipped mission places or gives her; a hero carrying one keeps that instead.
//
// This supplies the switch for the classes listed in gun_flashlight.cpp, with
// the Stranger's rules: the light button toggles it while the selected weapon
// can take a light, and switching it on with the weapon away draws the weapon
// through the class's own draw handling, by raising the frame's draw input.
// Holstering, or a selected weapon that cannot take a light, switches it off,
// with the click when it was lit. Adding a hero class is one row in the table.
//
// It runs on the synced input as a sim frame applies it, before the heroes
// process, so every machine flips the same switches on the same frame.
//
// Gated by NOCTURNE_AUTHENTIC_HERO_ACTIONS; reached from
// CNetGame::applySimFrameHistory.

#ifdef __cplusplus
extern "C" {
#endif

// Applies the light button for every player hero whose class is in the table.
// Call after the frame's input has been copied into g_HeroActors.
void nocturne_gun_flashlight_apply_inputs(void);

#ifdef __cplusplus
}
#endif

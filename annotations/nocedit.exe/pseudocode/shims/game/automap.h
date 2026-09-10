#pragma once

// =============================================================================
// AUTOMAP — a Doom-style line map that fills in as the player walks
// =============================================================================
//
// Neither shipped binary had a map. Gated by NOCTURNE_AUTHENTIC_AUTOMAP; every
// entry point below is a no-op when that is 1, so the call sites need no #if of
// their own beyond the one that draws.
//
// The design, the measured numbers behind it, and the extraction rules that
// look right and are not, are in research/20-automap/README.md. The short
// version, because getting any of these wrong produces a map that looks
// plausible and lies:
//
//   * Geometry is CDemonRaytrace::cube_data, NOT cube_list (the .GEO import
//     path, null at runtime) and NOT the flat triangle_list (build/save only).
//     A triangle holds POINTERS into its own cube's vertex buffer, and is
//     duplicated into every cube it straddles.
//
//   * Walls are dominant_axis != 1. Free, and accurate.
//
//   * The height filter bands EDGES by their own height. Banding whole
//     triangles fails in both directions: by overlap it drags whole storeys in
//     through stair shafts and draws phantom rooms inside the room you are
//     standing in; by centre it deletes the cliff you are standing on top of,
//     whose centre is far below your feet.
//
//   * The band is asymmetric and one storey tall, because the player's position
//     is at his feet.
//
//   * Reveal is per 3D cell. Two dimensions would let a tower walked at the top
//     uncover the hall beneath it.
//
// Input is one bindable action, which reaches keyboard and gamepad at once: the
// pad shim writes its codes into the same g_KeyboardState the keyboard uses, so
// a binding is just a code and does not care which device produced it.

#ifdef __cplusplus
extern "C" {
#endif

// ---- lifecycle --------------------------------------------------------------

// Rebuild from the raytrace grid. Call after a set's geometry is resident;
// clears the reveal, since a new level's cells mean nothing to the old one.
void nocturne_automap_reset(void);

// Once per frame, before rendering: reveals cells around the player, tracks the
// completion percentage, and services the map's own input while it is open.
void nocturne_automap_update(void);

// Non-zero while the map is on screen.
int nocturne_automap_active(void);

// Non-zero only while the map has taken the movement controls, which is pan
// mode alone. The default with the map open is to follow the player while he
// keeps walking -- a map you have to stand still to read is a worse map -- so
// this is what a control path should gate on, not nocturne_automap_active().
int nocturne_automap_owns_controls(void);

// Draw. Only meaningful when nocturne_automap_active(); costs nothing otherwise.
void nocturne_automap_render(void);

// ---- input ------------------------------------------------------------------

// The input code bound to opening the map, and its storage. Exposed as a
// pointer because the Customize Keys screen collects bindings as int* into
// g_CustomKeyPointers, and this one lives here rather than in CGame so that
// adding it needs no change to a Ghidra-generated struct.
int *nocturne_automap_key_binding(void);

// The name the Customize Keys screen shows for it, already localized. Not
// const: the engine's string type is plain char *, and the binding table copies
// straight out of it.
char *nocturne_automap_key_label(void);

// The player's preferred zoom, as a percentage, for the ini to carry between
// sessions. The map opens centred on the player but at whatever this holds:
// where he is, is the question he is asking; how far out he likes to see is a
// preference and should survive.
int *nocturne_automap_zoom_setting(void);

// ---- persistence ------------------------------------------------------------
//
// Written as a trailing block, after the save's last section. A reader that
// does not know about it never reaches it: parsing in CGame::loadGame is
// sequential and bounded, the final section (Game stats) is one fixed-length
// line, and the version gate is a minimum with no upper bound. So no version
// bump is needed and older builds load new saves unharmed.

// Append the current level's reveal. Safe to call with no map data.
void nocturne_automap_save(void *file);

// Read a trailing block if one is present. EOF means "no map data", which is
// also what a save written before this feature looks like.
void nocturne_automap_load(void *file);

// ---- state ------------------------------------------------------------------

// Explored fraction of the level, 0..100, measured against cubes that hold
// geometry rather than all cubes -- most of a grid is empty air, and a
// percentage against it would never move.
int nocturne_automap_explored_percent(void);

#ifdef __cplusplus
}
#endif

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
//   * Wall lines are coloured by material, from CDemonCube::ground_type_memory
//     -- a uchar[triangle_count] holding one EGroundType per triangle. Colour
//     the LINES, not the cells beneath them: a fill reads as a second layer to
//     look through rather than as information about the drawing.
//
//   * Doors follow the fog, characters follow line of sight. A door that has
//     been seen is a fact about the level and is worth remembering, and its
//     colour says whether the player can currently get through it. A character
//     moves, so remembering where one was seen would draw an x-ray of the
//     level's population rather than a map.
//
//   * A door has two locks. allowed_sides refuses the player from the wrong
//     side and is the commoner one; key_mask is checked only after that passes.
//     Colouring by key_mask alone leaves most locked doors reading as open.
//
//   * A sight ray must stop SHORT of the character it is asking about.
//     testLineOcclusion raycasts against every actor, so a ray ending on a
//     character is occluded by that character and nothing ever draws.
//
//   * Hero is a CLASS, not the party: CMoloch, CHaystack and the rest derive
//     from CHero and are placed in levels as ordinary actors. Skipping the
//     class in the actor-list pass loses all of them. g_HeroActors is swept
//     afterwards only to top up party slots the list missed, since it is
//     filtered by location.area_id and is not guaranteed to hold them.
//
//   * Colour alone does not separate a hero from a character at map scale.
//     Heroes carry a halo ring as well, and the three marker sizes are chosen
//     to keep the player the most prominent thing on his own map.
//
// Input is one bindable action, which reaches keyboard and gamepad at once: the
// pad shim writes its codes into the same g_KeyboardState the keyboard uses, so
// a binding is just a code and does not care which device produced it. Once the
// map is up it takes the controls outright -- left stick pans, right stick
// zooms, and the hero stands still -- because it is a screen rather than an
// overlay. Sticks are read as analogue through nocturne_gamepad_axes; the
// movement and zoom key bindings do the same job for a keyboard.

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

// Non-zero while the map has the movement controls, which is whenever it is
// open. The map is a screen of its own rather than an overlay: it paints out
// the frame, the hero does not move, and the sticks drive the map instead.
int nocturne_automap_owns_controls(void);

// Offer the map a cancel press (Escape, or whatever else means "back"). Returns
// non-zero when the map took it, which it does whenever it is open -- closing
// itself and leaving the press consumed.
//
// The point is that the two screens are exclusive. Without this, Escape reaches
// the in-mission menu while the map is up and the pick list is built on top of
// the map, and the map would only notice on the next frame through the
// g_ModalDialogActive test in nocturne_automap_update. One press should mean
// one screen: the map closes, and a second press opens the menu.
int nocturne_automap_handle_cancel(void);

// Non-zero while the world should not advance -- the "pause" half of being a
// separate screen. NOT simply the same as being open: in a network game the
// simulation is lockstep and every machine must keep stepping, so one player
// reading his map cannot be allowed to stop it. The policy lives here so the
// call site is a single test.
int nocturne_automap_freezes_world(void);

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

// Seed the map binding with its keyboard default, so Restore Defaults reaches
// it like every other action. It has to be asked for separately because the
// binding lives here rather than in the contiguous key_walk..key_next_ammo run
// inside CGame that the generic default and reseed paths iterate; without this
// the map is the one action Restore Defaults leaves on the previous device's
// code.
//
// Called alongside CGame's own keyboard defaults. A pad overrides it afterwards
// through nocturne_automap_key_binding(), the same order CGame's fields are
// written in, and keeps the pad code in the pad shim where the rest of them are.
void nocturne_automap_apply_default_binding(void);

// Opening the map is the ONLY binding the map adds. Pan and zoom borrow the
// movement bindings instead of taking virtual ones, and the map screen prints
// which -- a control the player already knows, relabelled for the duration,
// beats a pair of entries in Customize Keys that only mean anything on one
// screen. It also keeps the binding table from overflowing: g_CustomKeyNames is
// [30][40] and configureCustomKeyBindings refuses a 31st, so the map has
// exactly one row to spend.
//
//   pan   key_walk / key_backup, key_strafe_left / key_strafe_right
//   zoom  key_point_up / key_point_down
//
// Split that way because of what those bindings are on a pad: the left stick
// is walk/backup and strafe, the right stick is turn and look. Taking the two
// halves of the left stick for pan and look for zoom gives exactly "left stick
// pans, right stick zooms" with no binding serving both. key_left / key_right
// are deliberately unused -- they are the right stick's other axis, and reading
// them for pan is what made the two sticks overlap.

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

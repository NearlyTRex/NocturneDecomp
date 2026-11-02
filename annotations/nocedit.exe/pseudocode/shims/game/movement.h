#pragma once

// =============================================================================
// MOVEMENT — tank controls, or movement relative to the camera
// =============================================================================
//
// An addition, not a reconstruction. Gated by NOCTURNE_AUTHENTIC_MENU, whose
// Control Options page sets it. The shipped game has one scheme: forward and
// back move along the hero's facing, left and right turn him. Camera movement
// reads the four directions — Forward, Back, Turn left and Turn right, or the
// left stick — as directions on the screen instead: the hero turns to face
// the way pressed and walks there.
//
// It is written entirely in terms of the controls SPlayerInput already
// carries, after CGame::playerControls has read them and before they are
// sent to a network game, so every hero class reads it the way it reads the
// keyboard and a remote machine replays it unchanged. The turn is the yaw from
// the hero to the direction, taken the way CCharacter::processWalking turns to
// a door (CDemonActor::worldToLocalPoint, convertDirectionVectorToEulerAngles)
// and divided by the turn rate the hero class set this frame, capped; the hero
// walks once he faces within a quarter turn, and runs at full stick or with
// Run, as the pad's analogue path decides.
//
// The screen's directions are the scene camera's, flattened onto the ground.
// They are taken when a direction is first held and kept while it is held
// unchanged, so a camera cut mid-stride does not turn the hero round.
//
// On a pad the right stick does not steer the hero: its vertical looks with
// the view (game/widescreen_focus.h) and its horizontal does nothing. Point up
// and down keep their bindings.
//
// Held Strafe on gives the shipped controls back for as long as it is held, and
// the goggles for as long as they are on, so the hero can aim and look
// through them himself.
// A hero on a ladder, pushing, or held has no turn of his own there: the
// direction becomes Forward when it points within 60 degrees of his facing,
// Back within 60 of behind, and nothing in between.
//
// The scheme lives in [Control] movement of system\nocturne.ini, is read on
// first use and cached.

struct CGame;
struct SPlayerInput;

#ifdef __cplusplus
extern "C" {
#endif

// The values are what [Control] movement stores.
enum { NOCTURNE_MOVEMENT_TANK = 0, NOCTURNE_MOVEMENT_CAMERA = 1, NOCTURNE_MOVEMENT_COUNT = 2 };

// The stored scheme; Tank when the INI does not name one, and always under
// NOCTURNE_AUTHENTIC_MENU=1.
int nocturne_movement_get(void);

// Steps the scheme by `step`, wrapping, and saves it. Returns the new scheme.
int nocturne_movement_cycle(int step);

// "Tank" or "Camera".
const char *nocturne_movement_name(int mode);

// Rewrites the local player's controls for camera movement. Called once a
// frame, after the control type has filled `input`.
void nocturne_movement_apply(struct CGame *game, struct SPlayerInput *input);

#ifdef __cplusplus
}
#endif

// =============================================================================
// MOVEMENT — implementation
// =============================================================================
//
// See movement.h, and NOCTURNE_AUTHENTIC_MENU in config/shim_config_authentic.h.

#include "game/movement.h"

#include "core/ini_setting.h"
#include "nocturne.h"

#include <cmath>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

// Beside the pad's tuning.
const char kIniSection[] = "Control";
const char kModeKey[] = "movement";

const float kPi = 3.14159265f;

// Within this of the direction the hero walks as he turns; further off he
// turns where he stands first.
const float kWalkWithin = kPi / 2.0f;

// Where he cannot turn, Forward within this of his facing and Back within this
// of behind him.
const float kAlongWithin = kPi / 3.0f;

// The fastest turn asked for, in SPlayerInput's units: four times the
// keyboard's full turn.
const float kFastestTurn = 1.0f;

// How far the held direction may move, as a sum of its two components, and
// still be the same direction for keeping the screen's axes across a cut.
const float kSameDirection = 0.2f;

int s_mode = NOCTURNE_MOVEMENT_TANK;
bool s_mode_loaded = false;

// Whether the last frame's controls were rewritten here, which the first frame
// that is not has to undo.
bool s_rewriting = false;

// The screen's axes on the ground, and the direction they were taken for.
bool s_have_axes = false;
float s_held_x = 0.0f;
float s_held_y = 0.0f;
float s_right_x = 0.0f;
float s_right_z = 0.0f;
float s_ahead_x = 0.0f;
float s_ahead_z = 0.0f;

int clamp_mode(int mode) {
    if ((unsigned)mode >= (unsigned)NOCTURNE_MOVEMENT_COUNT)
        return NOCTURNE_MOVEMENT_TANK;
    return mode;
}

bool held(int code) {
    return g_KeyboardState[code] != '\0';
}

// A binding held as a direction to move in. The right stick is the view's, so
// a binding on one of its four codes — the pad's default Turn left and right
// are — moves nothing.
bool held_direction(int code) {
    if (code >= NOCTURNE_PAD_RSTICK_UP && code <= NOCTURNE_PAD_RSTICK_RIGHT)
        return false;
    return held(code);
}

// Hands the controls back: Forward and Back as their keys hold them, which the
// shipped path only rewrites when a key changes, and no turn left over to
// carry on.
void hand_back(CGame *game, SPlayerInput *input) {
    s_have_axes = false;
    if (!s_rewriting)
        return;
    s_rewriting = false;
    (input->action_state).walk = held(game->key_walk) ? 1 : 0;
    (input->action_state).backup = held(game->key_backup) ? 1 : 0;
    input->turn_speed = 0.0f;
}

// Scales (x, z) to unit length; false when it has none to scale.
bool normalise(float *x, float *z) {
    const float length = std::sqrt(*x * *x + *z * *z);
    if (length <= 0.0f)
        return false;
    *x /= length;
    *z /= length;
    return true;
}

// The screen's right and up, flattened onto the ground, from the scene
// camera's matrix. Its columns are the camera's axes in the world, which
// worldToScreenWithFrustumCull projects through the cached half extents; their
// signs say which way each axis runs on the screen. Ahead is up the screen and
// into it together, so it is still there from a camera looking straight down
// or straight across.
bool camera_axes() {
    const CVector3i *m = g_CDemonCameraInstance.source_matrix.m;
    const SProjectionParams &p = g_CDemonCameraInstance.cached_projection;
    const float across = (p.half_width_fixed < 0) ? -1.0f : 1.0f;
    const float up = (p.neg_half_height_fixed > 0) ? -1.0f : 1.0f;
    float right_x = across * (float)m[0].x;
    float right_z = across * (float)m[2].x;
    float ahead_x = (float)m[0].z + up * (float)m[0].y;
    float ahead_z = (float)m[2].z + up * (float)m[2].y;
    if (!normalise(&right_x, &right_z) || !normalise(&ahead_x, &ahead_z))
        return false;
    s_right_x = right_x;
    s_right_z = right_z;
    s_ahead_x = ahead_x;
    s_ahead_z = ahead_z;
    return true;
}

// The direction held, x to the right and y up the screen; the left stick's
// when the pad's is deflected, the four bindings' otherwise. `stick` says
// which.
void direction(CGame *game, float *x, float *y, bool *stick) {
    *stick = false;
    if (game->game_control == CONTROL_MODE_GAMEPAD) {
        float move_x = 0.0f, move_y = 0.0f;
        nocturne_gamepad_axes(&move_x, &move_y, nullptr, nullptr, nullptr, nullptr);
        if (move_x != 0.0f || move_y != 0.0f) {
            *x = move_x;
            *y = -move_y;
            *stick = true;
            return;
        }
    }
    *x = (float)held_direction(game->key_right) - (float)held_direction(game->key_left);
    *y = (float)held_direction(game->key_walk) - (float)held_direction(game->key_backup);
}

// On a ladder, pushing or held: places where the hero's turn is not his own.
bool cannot_turn(CHero *hero) {
    if ((hero->base).grabbed_by != nullptr || hero->pushed_object != nullptr ||
        hero->ladder_to_climb != nullptr)
        return true;
    CDemonActor *actor = &(hero->base).base;
    return core_actor_cpp_castToClassHash_FUN_0040c790(actor, g_CStrangerClassInfo.name_hash) !=
               nullptr &&
           ((CStranger *)hero)->ladder_to_descend != nullptr;
}

// The yaw from the hero's facing to the world direction (x, z), as
// CCharacter::processWalking turns to a door.
float yaw_to(CHero *hero, float x, float z) {
    CDemonActor *actor = &(hero->base).base;
    CVector3f toward = {(actor->location).position.x + x, (actor->location).position.y,
                        (actor->location).position.z + z};
    CVector3f local;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(actor, &local, &toward);
    CVector3f angles;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&angles, &local);
    return angles.y;
}

} // namespace

extern "C" int nocturne_movement_get(void) {
    if (!s_mode_loaded) {
        s_mode = clamp_mode(nocturne_ini_get_int(kIniSection, kModeKey, NOCTURNE_MOVEMENT_TANK));
        s_mode_loaded = true;
    }
    return s_mode;
}

extern "C" int nocturne_movement_cycle(int step) {
    s_mode = nocturne_ini_cycle(nocturne_movement_get(), step, NOCTURNE_MOVEMENT_COUNT);
    nocturne_ini_set_int(kIniSection, kModeKey, s_mode);
    return s_mode;
}

extern "C" const char *nocturne_movement_name(int mode) {
    static const char *const kNames[NOCTURNE_MOVEMENT_COUNT] = {"Tank", "Camera"};
    return kNames[clamp_mode(mode)];
}

extern "C" void nocturne_movement_apply(CGame *game, SPlayerInput *input) {
    if (nocturne_movement_get() != NOCTURNE_MOVEMENT_CAMERA) {
        hand_back(game, input);
        return;
    }
    // The map has already emptied the controls; there is nothing to hand back.
    if (nocturne_automap_owns_controls()) {
        s_rewriting = false;
        s_have_axes = false;
        return;
    }
    // Through the goggles the hero aims and looks himself, as shipped.
    if (game->goggles_active != 0) {
        hand_back(game, input);
        return;
    }
    // The right stick does not steer the hero: its vertical looks with the view
    // (game/widescreen_focus.h), and its horizontal does nothing. Point up and
    // down keep their bindings.
    if (game->game_control == CONTROL_MODE_GAMEPAD) {
        float look_x = 0.0f, look_y = 0.0f;
        nocturne_gamepad_axes(nullptr, nullptr, &look_x, &look_y, nullptr, nullptr);
        if (look_y != 0.0f)
            input->look_up_down_speed = 0.0f;
        if (look_x != 0.0f)
            input->turn_speed = 0.0f;
    }
    CHero *hero = g_HeroActors[g_LocalHeroIndex];
    if (hero == nullptr || held(game->key_strafe) ||
        (*(((hero->base).base.vtable._uc)->_uc).getDeathState)(&hero->base) != DEATH_STATE_ALIVE) {
        hand_back(game, input);
        return;
    }

    float x = 0.0f, y = 0.0f;
    bool stick = false;
    direction(game, &x, &y, &stick);
    const float tilt = std::sqrt(x * x + y * y);
    if (tilt <= 0.0f) {
        hand_back(game, input);
        return;
    }
    x /= tilt;
    y /= tilt;
    if (!s_have_axes || std::fabs(x - s_held_x) + std::fabs(y - s_held_y) > kSameDirection) {
        if (!camera_axes()) {
            hand_back(game, input);
            return;
        }
        s_have_axes = true;
        s_held_x = x;
        s_held_y = y;
    }

    const float yaw = yaw_to(hero, x * s_right_x + y * s_ahead_x, x * s_right_z + y * s_ahead_z);
    SPlayerActionState &actions = input->action_state;
    actions.walk = 0;
    actions.backup = 0;
    input->strafe_speed = 0.0f;
    input->turn_speed = 0.0f;
    if (cannot_turn(hero)) {
        if (std::fabs(yaw) < kAlongWithin)
            actions.walk = 1;
        else if (std::fabs(yaw) > kPi - kAlongWithin)
            actions.backup = 1;
    } else {
        // The turn rate the hero's class set on its last frame.
        const float rate = (hero->base).turn_speed;
        float turn = (rate > 0.0f) ? yaw / rate : 0.0f;
        if (turn > kFastestTurn)
            turn = kFastestTurn;
        else if (turn < -kFastestTurn)
            turn = -kFastestTurn;
        input->turn_speed = turn;
        actions.walk = (std::fabs(yaw) < kWalkWithin) ? 1 : 0;
    }
    if (stick) {
        // As the pad's analogue path picks: full tilt runs, Run inverts it.
        int run = (tilt >= NOCTURNE_PAD_WALK_THRESHOLD) ? 1 : 0;
        if (held(game->key_run))
            run = !run;
        actions.run = run;
    }
    s_rewriting = true;
}

#else

extern "C" int nocturne_movement_get(void) {
    return NOCTURNE_MOVEMENT_TANK;
}
extern "C" int nocturne_movement_cycle(int) {
    return NOCTURNE_MOVEMENT_TANK;
}
extern "C" const char *nocturne_movement_name(int) {
    return "Tank";
}
extern "C" void nocturne_movement_apply(CGame *, SPlayerInput *) {}

#endif // !NOCTURNE_AUTHENTIC_MENU

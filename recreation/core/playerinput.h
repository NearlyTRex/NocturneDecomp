#pragma once

namespace nocturne::core {

// The buttons a hero acts on. Walk, back up and fire hold until their key changes; use, light,
// draw and jump are set only on the frame their key changes.
struct SPlayerActionState {
    bool walk = false;
    bool backup = false;
    bool run = false;
    bool fire = false;
    bool use_item = false;
    bool light = false;
    bool draw = false;
    bool jump = false;
};

// A player's controls for a frame: the buttons, and how fast the hero strafes, turns and looks up
// or down, each from -1 to 1, negative leftwards and upwards.
struct SPlayerInput {
    SPlayerActionState action_state;
    float strafe_speed = 0.0F;
    float turn_speed = 0.0F;
    float look_up_down_speed = 0.0F;
};

} // namespace nocturne::core

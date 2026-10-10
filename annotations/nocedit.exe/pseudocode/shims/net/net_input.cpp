#include "net/net_input.h"
#include "shim_config.h"
#include "nocturne.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

namespace {

enum { kUseItem, kLight, kDraw, kJump, kPulseCount };

// A count that moves backwards, or further than any human presses inside one
// ack, belongs to a different player: CNetGame::swapPlayerData reorders the
// table. Adopt it without pulsing.
#define INPUT_MAX_STEP 16

int s_local_count[kPulseCount];
int s_delivered[NOCTURNE_HERO_SLOTS][kPulseCount];

int *pulse_field(SPlayerInput *input, int field)
{
    switch (field) {
    case kUseItem: return &(input->action_state).use_item;
    case kLight:   return &(input->action_state).light;
    case kDraw:    return &(input->action_state).draw;
    default:       return &(input->action_state).jump;
    }
}

} // namespace

extern "C" void nocturne_net_input_note_local(const SPlayerInput *controls)
{
    int field;

    if ((controls == (const SPlayerInput *)0x0) || (nocturne_net_session_is_guest() == 0)) {
        return;
    }
    for (field = 0; field < kPulseCount; field++) {
        if (*pulse_field((SPlayerInput *)controls, field) != 0) {
            s_local_count[field] = s_local_count[field] + 1;
        }
    }
}

extern "C" void nocturne_net_input_encode(SPlayerInput *outgoing)
{
    int field;

    for (field = 0; field < kPulseCount; field++) {
        *pulse_field(outgoing, field) = s_local_count[field];
    }
}

extern "C" void nocturne_net_input_decode(int player, SPlayerInput *input)
{
    int field;

    if ((player < 0) || (NOCTURNE_HERO_SLOTS <= player)) {
        return;
    }
    for (field = 0; field < kPulseCount; field++) {
        int *value = pulse_field(input, field);
        int  ahead = *value - s_delivered[player][field];

        if ((ahead < 0) || (INPUT_MAX_STEP < ahead)) {
            s_delivered[player][field] = *value;
            ahead = 0;
        }
        if (0 < ahead) {
            s_delivered[player][field] = s_delivered[player][field] + 1;
            *value = 1;
        }
        else {
            *value = 0;
        }
    }
}

extern "C" void nocturne_net_input_reset(void)
{
    std::memset(s_local_count, 0, sizeof(s_local_count));
    std::memset(s_delivered, 0, sizeof(s_delivered));
}

#else

extern "C" void nocturne_net_input_note_local(const SPlayerInput *) {}
extern "C" void nocturne_net_input_encode(SPlayerInput *) {}
extern "C" void nocturne_net_input_decode(int, SPlayerInput *) {}
extern "C" void nocturne_net_input_reset(void) {}

#endif

// =============================================================================
// A PLAYER SVETLANA CAN BE GRABBED — implementation
// =============================================================================

#include "game/hero_svetlana.h"
#include "nocturne.h"

extern "C" int nocturne_svetlana_get_grabbed(CHero *svetlana, CDemonActor *grabber,
                                             int grab_type)
{
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
    if (nocturne_hero_is_player(svetlana) != 0) {
        return core_hero_cpp_CHero_getGrabbed_FUN_004f28d0(svetlana, grabber, grab_type);
    }
#else
    (void)svetlana;
    (void)grabber;
    (void)grab_type;
#endif
    return 0;
}

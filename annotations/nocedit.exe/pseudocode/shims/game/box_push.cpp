// =============================================================================
// BOX PUSH — implementation
// =============================================================================
//
// See box_push.h, and NOCTURNE_AUTHENTIC_PUSH_SOUND in
// config/shim_config_authentic.h.

#include "game/box_push.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_PUSH_SOUND

extern "C" void nocturne_box_push_sound(CBoxActor *box) {
    if (sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(box->push_sfx_handle) != 0)
        return;
    // As CHero::tryPushNearbyBox starts it, so stopPushingBox still ends it.
    box->push_sfx_handle = (*box->base.vtable._ub->playAmbientSound)(&box->base, box->push_sound);
}

#endif // !NOCTURNE_AUTHENTIC_PUSH_SOUND

// =============================================================================
// SOUND SUPPORT — see sound_support.h
// =============================================================================

#include "sound_support.h"

#include "nocturne.h"

namespace sound_support {

int muted = 0;

} // namespace sound_support

int __cdecl sound_sndmain_cpp_isSoundMuted_FUN_005a96b0(void) {
    return sound_support::muted;
}

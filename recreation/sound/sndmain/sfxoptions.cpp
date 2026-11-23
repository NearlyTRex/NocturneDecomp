#include "sound/sndmain/sfxoptions.h"

namespace nocturne::sound {

// reset's values are the member initialisers.
// nocedit 0x005add70
CSfxOptions::CSfxOptions() = default;

// Every field but the flags, which the original leaves as they were.
// nocedit 0x005a8830
// bw1 0x005726e0
// bw2 0x00550070
// bw3 0x00555bf0
void CSfxOptions::reset() {
    const std::uint32_t kept_flags = flags;
    *this = CSfxOptions();
    flags = kept_flags;
}

} // namespace nocturne::sound

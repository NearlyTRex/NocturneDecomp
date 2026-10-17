#include "sound/sndmain/sfxoptions.h"

namespace nocturne::sound {

// reset's values are the member initialisers.
// nocedit 0x005add70
CSfxOptions::CSfxOptions() = default;

// Every field but the flags, which the original leaves as they were.
// nocedit 0x005a8830
void CSfxOptions::reset() {
    const std::uint32_t kept_flags = flags;
    *this = CSfxOptions();
    flags = kept_flags;
}

} // namespace nocturne::sound

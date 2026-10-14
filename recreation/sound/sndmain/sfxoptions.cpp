#include "sound/sndmain/sfxoptions.h"

namespace nocturne::sound {

// reset's values are the member initialisers.
// nocedit 0x005add70
CSfxOptions::CSfxOptions() = default;

// nocedit 0x005a8830
void CSfxOptions::reset() {
    *this = CSfxOptions();
}

} // namespace nocturne::sound

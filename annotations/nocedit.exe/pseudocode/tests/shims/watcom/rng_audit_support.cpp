// =============================================================================
// RNG AUDIT SUPPORT — where rand() reports its draws, stood in for
// =============================================================================
//
// crt.cpp's rand() tells the netplay RNG funnel about every draw. The funnel
// wants the game's globals; this counts the reports instead.

#include "rng_audit_support.h"

namespace rng_audit_support {

int raw_draws = 0;

} // namespace rng_audit_support

extern "C" void nocturne_rng_note_raw_draw(void) {
    ++rng_audit_support::raw_draws;
}

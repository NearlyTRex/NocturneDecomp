#include "core/game/game.h"
#include "core/menu/graphicoptionspage.h"
#include "core/menu/menu.h"

namespace nocturne::core {

// The original also listed the subtitles and the rating, which the enhanced game moves to
// Gameplay, and pinned the 3dfx cards before the Banshee, the i740 and the Riva 128 to 640x480 at
// 16 bits; no renderer here reports those cards.
// deferred: the upscaler and its sharpness lines, after the depth (the decomp's upscaler.h),
//   with the upscaler
// nocedit 0x00510c80
void CMenu::configureGraphicsOptions() {
    owners_.game.saveClockTime();
    CGraphicOptionsPage page(*this, owners_);
    runPage(page);
}

} // namespace nocturne::core

#include "core/game/game.h"
#include "core/menu/displayoptionspage.h"
#include "core/menu/menu.h"

namespace nocturne::core {

// The enhanced game's: the original's one Graphics screen also held the resolution and the
// calibration, which this page takes with the window and display settings.
void CMenu::configureDisplayOptions() {
    owners_.game.saveClockTime();
    CDisplayOptionsPage page(*this, owners_);
    runPage(page);
}

} // namespace nocturne::core

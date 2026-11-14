#include "core/menu/screenmodepage.h"

#include "core/dfont/dfont.h"
#include "core/frontend.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/2d/2d.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "support/newmsg/newmsg.h"

#include <string>
#include <string_view>

namespace nocturne::core {

CScreenModePage::CScreenModePage(CMenu &menu, const SMenuOwners &owners)
    : CMenuPage(menu), owners_(owners) {}

// The original held the software renderer to 640x480 here, after drawing the frame.
void CScreenModePage::beforeSwap() {
    CGame &game = owners_.game;
    if (!getHighResolutionAllowed() && game.game_pixy > kSoftwareMaxHeight) {
        game.game_pixx = kSoftwareMaxWidth;
        game.game_pixy = kSoftwareMaxHeight;
    }
}

// A resolution changed by a line, or held above, sizes the window straight away; and outside a
// mission, which sets its own mode as it loads, the front end takes the mode it now calls for,
// a new resolution or acceleration turned on or off.
EMenuOutcome CScreenModePage::endFrame() {
    const CGame &game = owners_.game;
    if (game.game_pixx != width_ || game.game_pixy != height_) {
        owners_.display.setWindowSize(game.game_pixx, game.game_pixy);
    }
    if (!getMenu().getInMission()) {
        applyFrontEndMode();
    }
    return CMenuPage::endFrame();
}

// A mode the screen refuses leaves the one it has. The front end draws in software, as at
// startup, so the hardware renderer only follows the new size when it is already in use.
void CScreenModePage::applyFrontEndMode() {
    const CGame &game = owners_.game;
    engine::IScreenDevice &screen = owners_.screen;
    const common::SExtent mode =
        getFrontEndMode(game.game_pixx, game.game_pixy, owners_.special.getUseDirect3D());
    if (mode.width == screen.getWindowWidth() && mode.height == screen.getWindowHeight()) {
        return;
    }
    if (screen.setScreenResolution(mode.width, mode.height, screen.getBitsPerPixel())) {
        if (owners_.special.getUseExternalRenderer()) {
            owners_.two_d.resetGraphicsSystem();
        }
        owners_.fonts.setOsFontScale(
            getFrontEndLayout(screen.getWindowWidth(), screen.getWindowHeight()).scale);
    }
}

void CScreenModePage::recordResolution() {
    width_ = owners_.game.game_pixx;
    height_ = owners_.game.game_pixy;
}

std::string CScreenModePage::localize(std::string_view key) const {
    return std::string(owners_.messages.getLocalizedString(key));
}

bool CScreenModePage::getHighResolutionAllowed() const {
    return owners_.special.getUseDirect3D();
}

const SMenuOwners &CScreenModePage::getOwners() const {
    return owners_;
}

} // namespace nocturne::core

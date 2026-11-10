#include "core/menu/screenmodepage.h"

#include "core/game/game.h"
#include "core/menu/menu.h"
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

// A resolution changed by a line, or held above, sizes the window straight away.
EMenuOutcome CScreenModePage::endFrame() {
    const CGame &game = owners_.game;
    if (game.game_pixx != width_ || game.game_pixy != height_) {
        owners_.display.setWindowSize(game.game_pixx, game.game_pixy);
    }
    return CMenuPage::endFrame();
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

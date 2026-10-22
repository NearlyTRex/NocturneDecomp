#include "core/actor/notported.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kQuitResult = 99;
constexpr int kWindowTooSmallResult = 1;
constexpr int kSmallestWindowHeight = 480;
// The largest game resolution the software renderer takes.
constexpr int kSoftwareGameWidth = 640;
constexpr int kSoftwareGameHeight = 480;
constexpr int kItemsTop = 250;

constexpr std::array<std::string_view, 4> kItems{"S T A R T", "O P T I O N S", "L O A D",
                                                 "Q U I T"};
constexpr int kStartChoice = 0;
constexpr int kOptionsChoice = 1;
constexpr int kLoadChoice = 2;
constexpr int kQuitChoice = 3;

} // namespace

// START, OPTIONS and LOAD quit until the screens they lead to are ported. Closing the window
// quits the menu as Cancel does, which retail's never looked for.
// deferred: loading the flame and blur bitmaps, with their readers
// deferred: choosing a chapter from START, its debug modes picked by the shift and control keys,
//   then starting the moon and music again, with CGame::showChapterSelect
// deferred: the options from OPTIONS, with showOptionsScreen
// deferred: loading a saved game from LOAD, then starting the moon and music again, with
//   CGame::loadGame
// deferred: the developer tools on Ctrl+D or Ctrl+L, with showDeveloperToolsMenu
// deferred: dropping a press of F with a control key held, with the game's hotkeys
// deferred: the enhanced game's menu (PLAY's single-player menu with its continue, MULTIPLAYER
//   and its hotkeys, attract movies when idle, its menu font, the window sized to the game's
//   resolution and the items centred), with the enhanced front end
// nocedit 0x00512f40
int CMenu::showMainGameMenu() {
    if (owners_.screen.getWindowHeight() < kSmallestWindowHeight) {
        return kWindowTooSmallResult;
    }
    if (!owners_.special.getUseDirect3D() && owners_.game.game_pixy > kSoftwareGameHeight) {
        owners_.game.game_pixy = kSoftwareGameHeight;
        owners_.game.game_pixx = kSoftwareGameWidth;
    }
    owners_.two_d.clearInputAndWait();
    owners_.textures.clearTextureCache();
    int selected_index = 0;
    moon_.init();
    bool first_frame = true;
    owners_.game.saveClockTime();
    int result = 0;
    while (true) {
        owners_.game.updateDT();
        moon_.update(owners_.game.getDeltaTimeFloat());
        moon_.render();
        std::vector<std::string> items;
        items.reserve(kItems.size());
        for (const std::string_view item : kItems) {
            items.emplace_back(owners_.messages.getLocalizedString(item));
        }
        const int choice = renderMenuAndGetChoice(items, selected_index, kItemsTop, std::nullopt);
        if (first_frame) {
            owners_.special.clearScreen();
        }
        owners_.screen.swapBuffers();
        switch (choice) {
        case kStartChoice:
            quitNotPorted("CGame", "showChapterSelect");
        case kOptionsChoice:
            quitNotPorted("CMenu", "showOptionsScreen");
        case kLoadChoice:
            quitNotPorted("CGame", "loadGame");
        case kQuitChoice:
            result = kQuitResult;
            break;
        default:
            break;
        }
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Cancel) ||
            owners_.raw_input.getInputDisabled()) {
            result = kQuitResult;
        }
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::ToggleMute)) {
            owners_.sound_main.setSoundMuted(!owners_.sound_main.isSoundMuted());
            owners_.sound.configure();
        }
        if (first_frame) {
            first_frame = false;
            owners_.sound.configure();
            owners_.two_d.clearInputAndWait();
        }
        if (result != 0) {
            owners_.sound.reset();
            moon_.free();
            return result;
        }
    }
}

} // namespace nocturne::core

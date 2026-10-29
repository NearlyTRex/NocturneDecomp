#include "core/actor/notported.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "core/menu/menupage.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "platform/display.h"
#include "shape/edittool/editortools.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kQuitResult = 99;
constexpr int kWindowTooSmallResult = 1;
constexpr int kSmallestWindowHeight = 480;
// The largest game resolution the software renderer takes.
constexpr int kSoftwareGameWidth = 640;
constexpr int kSoftwareGameHeight = 480;

enum class EMainLine : std::uint8_t {
    Play,
    Multiplayer,
    Options,
    Quit,
};

constexpr std::array<std::pair<EMainLine, std::string_view>, 4> kMainLines{{
    {EMainLine::Play, "P L A Y"},
    {EMainLine::Multiplayer, "M U L T I P L A Y E R"},
    {EMainLine::Options, "O P T I O N S"},
    {EMainLine::Quit, "Q U I T"},
}};

constexpr std::array<std::string_view, 3> kPlayItems{"C O N T I N U E", "S T A R T", "L O A D"};
constexpr int kContinueItem = 0;
constexpr int kStartItem = 1;
constexpr int kLoadItem = 2;

constexpr std::array<std::string_view, 2> kMultiplayerItems{"H O S T   G A M E",
                                                            "J O I N   G A M E"};
constexpr int kHostItem = 0;

} // namespace

// The front end's first screen. The window takes the game's resolution each frame, so one picked
// under Options applies on the way back.
class CMenu::CMainMenuPage final : public CMenuPage {
public:
    CMainMenuPage(CMenu &menu, const SMenuOwners &owners) : CMenuPage(menu), owners_(owners) {}

    void beginFrame() override {
        owners_.display.setWindowSize(owners_.game.game_pixx, owners_.game.game_pixy);
    }

    void build(std::vector<SMenuLine> &lines) override {
        for (const auto &[line, key] : kMainLines) {
            lines.push_back({.id = std::to_underlying(line),
                             .text = std::string(owners_.messages.getLocalizedString(key))});
        }
    }

    // The first frame is shown black.
    void beforeSwap() override {
        if (first_frame_) {
            owners_.special.clearScreen();
        }
    }

    // QUIT, the last line, leaves at the end of the frame, after the hotkeys.
    EMenuOutcome choose(int id, EMenuStep /*step*/) override {
        switch (static_cast<EMainLine>(id)) {
        case EMainLine::Play:
            getMenu().showPlayMenu();
            break;
        case EMainLine::Multiplayer:
            getMenu().showMultiplayerMenu();
            break;
        case EMainLine::Options:
            getMenu().showOptionsScreen(0);
            owners_.two_d.clearInputAndWait();
            break;
        default:
            quit_ = true;
            break;
        }
        return EMenuOutcome::Stay;
    }

    // The music starts once the first frame is up.
    EMenuOutcome endFrame() override {
        if (getMenu().takeMenuCancel()) {
            quit_ = true;
        }
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::ToggleMute)) {
            owners_.sound_main.setSoundMuted(!owners_.sound_main.isSoundMuted());
            owners_.sound.configure();
        }
        if (first_frame_) {
            first_frame_ = false;
            owners_.sound.configure();
            owners_.two_d.clearInputAndWait();
        }
        return quit_ ? EMenuOutcome::Leave : EMenuOutcome::Stay;
    }

private:
    const SMenuOwners &owners_;
    bool first_frame_ = true;
    bool quit_ = false;
};

// Chosen with a press of its item.
class CMenu::CSubmenuPage final : public CMenuPage {
public:
    CSubmenuPage(CMenu &menu, const support::CNewMsg &messages,
                 std::span<const std::string_view> items)
        : CMenuPage(menu), messages_(messages), items_(items) {}

    void build(std::vector<SMenuLine> &lines) override {
        for (std::size_t i = 0; i < items_.size(); ++i) {
            lines.push_back({.id = static_cast<int>(i),
                             .text = std::string(messages_.getLocalizedString(items_[i]))});
        }
    }

    EMenuOutcome choose(int id, EMenuStep /*step*/) override {
        chosen_ = id;
        return EMenuOutcome::Leave;
    }

    [[nodiscard]] std::optional<int> getChosen() const {
        return chosen_;
    }

private:
    const support::CNewMsg &messages_;
    std::span<const std::string_view> items_;
    std::optional<int> chosen_;
};

// The enhanced game's: PLAY, MULTIPLAYER, OPTIONS and QUIT, the dialogs in the Menu text font.
// PLAY's items and MULTIPLAYER's quit until the screens they lead to are ported. Closing the window
// quits the menu as Cancel does, which retail's never looked for.
// deferred: loading the flame and blur bitmaps, with their readers
// deferred: choosing a chapter from PLAY's START, its debug modes picked by the shift and control
//   keys, then starting the moon and music again, with CGame::showChapterSelect
// deferred: loading a saved game from PLAY's LOAD, then starting the moon and music again, with
//   CGame::loadGame
// deferred: resuming the newest save from PLAY's CONTINUE, or showing "No files found" without
//   one, then starting the moon and music again, with the save slots and CGame::loadGame
// deferred: hosting or joining from MULTIPLAYER, or with Ctrl+H or Ctrl+J, the music reset
//   around the session, with hostNetworkGame and joinNetworkGame
// deferred: the developer tools on Ctrl+D or Ctrl+L, with showDeveloperToolsMenu
// deferred: dropping a press of F with a control key held, with the game's hotkeys
// deferred: no QUIT, and Cancel quitting nothing, where the platform ends the app itself (the
//   decomp's NOCTURNE_PLATFORM_NO_QUIT), with a platform that does
// deferred: an attract movie, one of NOC1 to NOC4.AVI that nothing in the original plays, at the
//   end of a pass of the splash music with the main menu on screen, after a short silence, then
//   the music restarted with reset and configure; a pass ending under a submenu or dialog is
//   skipped (the decomp's attract.h nocturne_attract_tick), with the attract movies
// nocedit 0x00512f40
int CMenu::showMainGameMenu() {
    if (owners_.screen.getWindowHeight() < kSmallestWindowHeight) {
        return kWindowTooSmallResult;
    }
    owners_.editor_tools.setEditorFont(owners_.fonts.getMenuFont());
    if (!owners_.special.getUseDirect3D() && owners_.game.game_pixy > kSoftwareGameHeight) {
        owners_.game.game_pixy = kSoftwareGameHeight;
        owners_.game.game_pixx = kSoftwareGameWidth;
    }
    owners_.two_d.clearInputAndWait();
    owners_.textures.clearTextureCache();
    moon_.init();
    owners_.game.saveClockTime();
    CMainMenuPage page(*this, owners_);
    runPage(page);
    owners_.sound.reset();
    moon_.free();
    return kQuitResult;
}

void CMenu::showPlayMenu() {
    switch (showSubmenu(kPlayItems).value_or(-1)) {
    case kContinueItem:
    case kLoadItem:
        quitNotPorted("CGame", "loadGame");
    case kStartItem:
        quitNotPorted("CGame", "showChapterSelect");
    default:
        break;
    }
}

void CMenu::showMultiplayerMenu() {
    const std::optional<int> chosen = showSubmenu(kMultiplayerItems);
    if (chosen) {
        quitNotPorted("core", *chosen == kHostItem ? "hostNetworkGame" : "joinNetworkGame");
    }
    owners_.two_d.clearInputAndWait();
}

// The press that opened it may still be down.
std::optional<int> CMenu::showSubmenu(std::span<const std::string_view> items) {
    owners_.two_d.clearInputAndWait();
    CSubmenuPage page(*this, owners_.messages, items);
    runPage(page);
    return page.getChosen();
}

} // namespace nocturne::core

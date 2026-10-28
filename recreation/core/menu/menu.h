#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/moon/moon.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"
#include "sound/fwd.h"
#include "support/fwd.h"

#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {

// What the menu screens draw with, read keys from and play their music through.
struct SMenuOwners {
    const engine::CDosIo &dosio;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    engine::C2d &two_d;
    engine::C3d &three_d;
    engine::IRawInput &raw_input;
    engine::CMenuInput &menu_input;
    const CDFont &fonts;
    const support::CNewMsg &messages;
    engine::CDemonRenderer &renderer;
    CDemonSet &set;
    CGame &game;
    CActor &actor;
    common::CWatcomRandom &crt_random;
    engine::CTexture &textures;
    CSound &sound;
    sound::CSndMain &sound_main;
    platform::IDisplay &display;
    shape::CEditorTools &editor_tools;
    // The line naming this build, drawn at the foot of every menu.
    std::string_view build_version;
};

// The menu screens' state: the moon behind them, and what the last menu frame read from the keys.
class CMenu {
public:
    explicit CMenu(const SMenuOwners &owners);

    int calibrateGamepad();
    // Four steps for setting the monitor up over art/brightness, then a last screen, each shown
    // until a key is typed.
    void showCalibrationTest();
    void showOptionsScreen(int initialize_systems);
    // The main menu over the moon, with its music, until QUIT, Cancel or the window closing: 99.
    // A window under 480 rows shows nothing: 1.
    int showMainGameMenu();
    char *getKeyDisplayName(engine::EInputCodeType key_code);
    // Draws the items down the left of the screen under the title, the selected one glowing,
    // with the copyright and the build's line, then moves the selection up and down. Confirm
    // chooses the selected item, and so do left and right on one whose text has a colon; the
    // result is the item chosen, or -1.
    int renderMenuAndGetChoice(std::span<const std::string> items, int &selected_index,
                               int y_position, std::optional<std::string_view> title);

    // Draws the page over the moon each frame and passes it the presses, until it leaves.
    void runPage(CMenuPage &page);
    // Whether Cancel was pressed, taking the press, or the window is closing.
    [[nodiscard]] bool takeMenuCancel();

    [[nodiscard]] CMoon &getMoon();
    // Whether the last menu frame moved the selection.
    [[nodiscard]] bool getMenuInputHappened() const;
    // Whether the last choice was left rather than right on an item with a colon.
    [[nodiscard]] bool getMenuLeftRightPressed() const;

private:
    class CMainMenuPage;
    class CSubmenuPage;

    // PLAY's Continue, Start and Load.
    void showPlayMenu();
    // MULTIPLAYER's Host and Join.
    void showMultiplayerMenu();
    // An untitled page of the localized items from the main menu's top: the item chosen, or
    // nothing for Cancel.
    [[nodiscard]] std::optional<int> showSubmenu(std::span<const std::string_view> items);
    void drawMenuBackdrop();
    // `top`, raised where `rows` lines of the theme font would run off the window, and never
    // above it.
    [[nodiscard]] int fitMenuTop(int top, int rows) const;
    void showCalibrationTestPattern(engine::CAlphaBitmap &bitmap, std::string_view message_text);
    // The selected item: five faint copies jittered about it, then the item over them.
    void drawGlowingItem(engine::CBitFont &font, std::string_view item, int y);
    void drawFooter();
    // The choice the menu actions make this frame, or -1.
    int readMenuActions(std::span<const std::string> items, int &selected_index);

    SMenuOwners owners_;
    CMoon moon_;
    bool menu_input_happened_ = false;
    bool menu_left_right_pressed_ = false;
};

} // namespace nocturne::core

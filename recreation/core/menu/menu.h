#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/moon/moon.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "platform/mrgltexturebasic.h"
#include "shape/fwd.h"
#include "sound/fwd.h"
#include "support/fwd.h"

#include <array>
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
    CDFont &fonts;
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
    // Where Options saves the settings as it closes.
    engine::CIni &ini;
    const SIniDataOwners &ini_owners;
    const shape::SPickListOwners &pick_list;
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
    // Options over the moon until Cancel, then the settings saved. From a mission's pause menu,
    // initialize_systems is set and the menu's music and moon run only while it is up; from the
    // main menu both are running already.
    void showOptionsScreen(int initialize_systems);
    // The main menu over the moon, with its music, until QUIT, Cancel or the window closing: 99.
    // A window under 480 rows shows nothing: 1.
    int showMainGameMenu();
    // The name a binding shows: the mouse's and the joystick's by what they are, the keys by
    // getKeyName.
    [[nodiscard]] std::string getKeyDisplayName(engine::EInputCodeType key_code) const;
    // Whether the game's control type has the device behind the code: the keyboard alone, or
    // with the mouse, or with the joystick.
    [[nodiscard]] bool isKeyCodeValidForMode(engine::EInputCodeType key_code) const;
    // Each action with what it is bound to, Restore defaults first. An action opens a list of
    // its codes and Add binding, where Delete removes one. Leaving puts the defaults back if any
    // code doesn't suit the control type.
    void configureCustomKeyBindings();
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
    // Sound Options' backdrop: a bar of flame up from the foot of the screen for each band of
    // what plays, the left channel's on the left.
    void drawAudioSpectrum();
    // A bar from 0.25 to 4 across a window, set by the pointer's x or the left and right
    // actions; Confirm or a click keeps it, Cancel leaves the setting as it was.
    void adjustMouseSensitivity(int &sensitivity_value, std::string_view window_title);

    [[nodiscard]] CMoon &getMoon();
    // Whether the last menu frame moved the selection.
    [[nodiscard]] bool getMenuInputHappened() const;
    // Whether the last choice was left rather than right on an item with a colon.
    [[nodiscard]] bool getMenuLeftRightPressed() const;

private:
    class CMainMenuPage;
    class CSubmenuPage;
    class COptionsPage;

    static constexpr int kNoCodeHeld = -1;
    static constexpr int kSeveralCodesHeld = -2;

    void showGameplayOptions();
    void configureGraphicsOptions();
    void configureSoundOptions();
    void configureCustomKeys();
    // The codes of one action, as a list with Add binding after them, until Cancel.
    void editActionBindings(EGameAction action, std::string_view label);
    // The one code next pressed, after any held are let go; nothing for Escape while they are
    // held, or for the window closing.
    [[nodiscard]] std::optional<engine::EInputCodeType> captureKeyCode(std::string_view label);
    // The one code held, kNoCodeHeld for none and kSeveralCodesHeld for more.
    [[nodiscard]] int getHeldKeyCode() const;
    // The defaults back, with an error, if any code doesn't suit the control type.
    void validateBindings();
    // 32 pixels wide on x_center, rising from y_top to twice height_half above it.
    void renderAudioSpectrumBar(int x_center, int y_top, int height_half);
    // The flame frame a bar at x_center shows now.
    [[nodiscard]] int getAudioSpectrumFrame(int x_center) const;
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
    // Which flame frame the bars show, in 16.16; it runs through eight a third of a second.
    int audio_visualization_counter_ = 0;
    std::array<platform::SMRGLTextureBasic, 8> audio_spectrum_textures_{{
        {.texture_name = "F0100.RAW"},
        {.texture_name = "F0300.RAW"},
        {.texture_name = "F0500.RAW"},
        {.texture_name = "F0700.RAW"},
        {.texture_name = "F0900.RAW"},
        {.texture_name = "F1100.RAW"},
        {.texture_name = "F1300.RAW"},
        {.texture_name = "F1500.RAW"},
    }};
};

} // namespace nocturne::core

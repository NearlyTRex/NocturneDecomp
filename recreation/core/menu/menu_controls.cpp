#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/menu/controloptionspage.h"
#include "core/menu/menu.h"
#include "engine/2d/2d.h"
#include "engine/font/bitfont.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"

#include <algorithm>
#include <cstdint>
#include <string_view>

namespace nocturne::core {
namespace {

// 0.25 to 4, in 16.16; an arrow moves it by a little over a hundredth.
constexpr int kLeastSensitivity = 0x4000;
constexpr int kMostSensitivity = 0x40000;
constexpr int kSensitivitySpan = kMostSensitivity - kLeastSensitivity;
constexpr int kSensitivityStep = 700;
// Three quarters of the screen wide.
constexpr int kSliderWidthShare = 3;
constexpr int kSliderWidthParts = 4;
constexpr int kSliderHeight = 0x2c;
constexpr int kBarColor = 4;
constexpr int kTroughColor = 0;
constexpr int kBorderColor = 0xff;
constexpr int kTextColor = 0xff;
constexpr int kTextShadow = 0;
constexpr int kTextHeightChar = 'A';
constexpr double kFixedOne = 65536.0;

// Where along `span` pixels a sensitivity sits.
int toSliderOffset(int sensitivity, int span) {
    return static_cast<int>(std::int64_t{span} * (sensitivity - kLeastSensitivity) /
                            kSensitivitySpan);
}

} // namespace

// The original's lines were the control type, the bindings, always run, aiming, auto health, the
// sensitivities, and the mouse's inversion or the gamepad's calibration.
// deferred: the gamepad's deadzone, turn and look speeds and look inversion lines, before
//   Calibrate (the decomp's pad_tuning.h), with the gamepad layer
// deferred: calibrating the gamepad from Calibrate, or on Cancel for one nobody has centred,
//   with calibrateGamepad
// deferred: the key bindings from Customize Keys, with configureCustomKeyBindings
// nocedit 0x00511890
void CMenu::configureCustomKeys() {
    owners_.game.saveClockTime();
    CControlOptionsPage page(*this, owners_);
    runPage(page);
}

// The original moved the OS cursor to the setting's place on the bar first; the enhanced game
// never moves it, so the setting follows the pointer only once the pointer moves. A closing
// window cancels it, as it ends every wait for input.
// nocedit 0x005107c0
void CMenu::adjustMouseSensitivity(int &sensitivity_value, std::string_view window_title) {
    const int screen_width = owners_.screen.getWindowWidth();
    owners_.editor_tools.createCenteredModal((screen_width * kSliderWidthShare) / kSliderWidthParts,
                                             kSliderHeight, window_title, 0);
    sensitivity_value = std::clamp(sensitivity_value, kLeastSensitivity, kMostSensitivity);
    int value = sensitivity_value;
    owners_.two_d.clearInputAndWait();
    const engine::IRawInput &input = owners_.raw_input;
    int last_mouse_x = input.getMouseX();
    while (true) {
        owners_.editor_tools.paintCurrentWindow();
        if (input.getMouseX() != last_mouse_x) {
            last_mouse_x = input.getMouseX();
            value = static_cast<int>(std::int64_t{last_mouse_x} * kSensitivitySpan /
                                     (screen_width - 1)) +
                    kLeastSensitivity;
        }
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Left)) {
            value -= kSensitivityStep;
        }
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Right)) {
            value += kSensitivityStep;
        }
        value = std::clamp(value, kLeastSensitivity, kMostSensitivity);
        const engine::SClipRect clip = owners_.two_d.getClipRect();
        const int left = clip.left + 1;
        const int top = clip.top + 1;
        const int right = clip.right - 1;
        const int bottom = clip.bottom - 1;
        owners_.two_d.fillRectWithBorder(left, top, right, bottom, kTroughColor, kBorderColor);
        owners_.two_d.fillRectColor(left, top, left + toSliderOffset(value, right - left), bottom,
                                    kBarColor);
        engine::CBitFont &font = *owners_.editor_tools.getEditorFont();
        font.drawTextCenterInBoundsF(
            clip.left, clip.right,
            (clip.bottom + clip.top - font.getCharHeight(kTextHeightChar)) / 2, kTextColor,
            kTextShadow, "{:4.2f}", value / kFixedOne);
        owners_.screen.swapBuffers();
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Cancel) ||
            input.getInputDisabled()) {
            break;
        }
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Confirm) ||
            owners_.pick_list.keys.getAndClearKeyState(engine::EInputCodeType::DIM_LBUTTON) != 0) {
            sensitivity_value = value;
            break;
        }
    }
    owners_.editor_tools.restoreWindowAndCleanup();
}

} // namespace nocturne::core

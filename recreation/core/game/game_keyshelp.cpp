#include "core/dfont/dfont.h"
#include "core/frontend.h"
#include "core/game/controlbindings.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/game/keynames.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/uiscale.h"
#include "engine/keys/inputcodetype.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <cmath>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr int kFullAlpha = 0xffff;
// Palette index 7, with no shadow.
constexpr int kHelpColor = 7;
// The line and column are measured on this glyph.
constexpr int kMeasureChar = 'X';
// The text starts this many lines down and columns in; a column ends within kBottomLines of the
// screen's bottom, and the next starts kNextColumnTop lines down.
constexpr int kTopLines = 4;
constexpr int kLeftColumns = 4;
constexpr int kBottomLines = 4;
constexpr int kNextColumnTop = 6;
constexpr int kColumnsAcross = 3;

struct SHelpHotkey {
    EGameAction action;
    std::string_view label;
};

// The original's F1, F2, F3, F5, F6 and F9; Escape after them is the pause menu's own.
constexpr auto kHelpHotkeys = std::to_array<SHelpHotkey>({
    {.action = EGameAction::KeysHelp, .label = "keys_help_toggle"},
    {.action = EGameAction::SaveGame, .label = "keys_help_save"},
    {.action = EGameAction::LoadGame, .label = "keys_help_restore"},
    {.action = EGameAction::Mute, .label = "keys_help_mute"},
    {.action = EGameAction::QuickSave, .label = "keys_help_quick_save"},
    {.action = EGameAction::QuickLoad, .label = "keys_help_quick_load"},
});

} // namespace

// The game's hotkeys, then its bindings rows, each "keys = what it does", down from the top left
// in columns a third of the screen apart. The original named fixed keys and each action's one
// code; each line now names the action's chords as the bindings page does, the rows and their
// names are the game's, and the text keeps its share of a taller screen. BW1's and BW3's help
// listed the rows in an order of its own.
// nocedit 0x004d89d0
// bw1 0x004ccc40
// bw2 0x004b3c50
// bw3 0x004b51e0
void CGame::showCustomizableKeys(const SGameSessionOwners &session) {
    owners_.three_d.setRenderAlpha(kFullAlpha);
    engine::CBitFont &font = *owners_.fonts.getThemeFont();
    const int width = owners_.screen.getWindowWidth();
    const int height = owners_.screen.getWindowHeight();
    const float scale = engine::getUiTextScale(height);
    const int line = font.getCharHeightScaled(kMeasureChar, scale);
    const auto column =
        static_cast<int>(std::lround(static_cast<float>(font.getCharWidth(kMeasureChar)) * scale));
    int x = column * kLeftColumns;
    int y = line * kTopLines;
    const auto draw = [&](std::string_view text) {
        font.drawTextScaled(text, x, y, kHelpColor, engine::CBitFont::kNoShadow, scale);
        y += line;
        if (y > height - (line * kBottomLines)) {
            y = line * kNextColumnTop;
            x += width / kColumnsAcross;
        }
    };
    const auto label = [&](std::string_view id) {
        return getLabel(owners_.content, session.messages, id);
    };
    const SKeyNameOwners names{.gamepad = owners_.gamepad, .messages = session.messages};
    const auto drawBinding = [&](EGameAction action, std::string_view name) {
        draw(std::format("{} = {}", getBindingNames(names, controls.getBindings(action)), name));
    };
    draw(label("keys_help_title"));
    y += line;
    for (const SHelpHotkey &hotkey : kHelpHotkeys) {
        drawBinding(hotkey.action, label(hotkey.label));
    }
    draw(std::format("{} = {}", getKeyDisplayName(names, engine::EInputCodeType::DIK_ESCAPE),
                     label("keys_help_pause")));
    y += line;
    for (const engine::SBindingRowSpec &row : getControls().bindings) {
        const EGameAction action = requirePlayAction(row.action, "A keys help row");
        if (action == EGameAction::Run && always_run != 0) {
            drawBinding(action, label("bindings_walk"));
        } else {
            drawBinding(action, session.messages.getLocalizedString(row.help.value_or(row.label)));
        }
    }
}

} // namespace nocturne::core

#include "core/menu/gameplaypage.h"

#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "engine/screendevice.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class EGameplayLine : std::uint8_t {
    AlwaysRun,
    Aiming,
    AutoHealth,
    Subtitles,
    TextFont,
    MenuText,
    Rating,
};

// By EAimMode.
constexpr std::array<std::string_view, 3> kAimingLabels{"Aiming : Auto", "Aiming : Kindof auto",
                                                        "Aiming : Manual"};
// By EOsFontChoice and EMenuFontChoice.
constexpr std::array<std::string_view, 3> kTextFontNames{"Auto", "Bitmap", "System"};
constexpr std::array<std::string_view, 2> kMenuFontNames{"Large", "Small"};
// A window this short keeps the font its dialogs have.
constexpr int kTallestFixedFontWindow = 240;

// One on or back, wrapping.
template <typename TChoice, std::size_t Count>
TChoice stepChoice(TChoice choice, EMenuStep step) {
    constexpr int kCount = static_cast<int>(Count);
    const int next = (std::to_underlying(choice) + std::to_underlying(step) + kCount) % kCount;
    return static_cast<TChoice>(next);
}

int toggle(int flag) {
    return flag == 0 ? 1 : 0;
}

void add(std::vector<SMenuLine> &lines, EGameplayLine line, std::string text) {
    lines.push_back({.id = std::to_underlying(line), .text = std::move(text)});
}

} // namespace

CGameplayPage::CGameplayPage(CMenu &menu, const SMenuOwners &owners)
    : CMenuPage(menu), owners_(owners) {}

std::optional<std::string> CGameplayPage::title() {
    return localize("Gameplay");
}

void CGameplayPage::build(std::vector<SMenuLine> &lines) {
    const CGame &game = owners_.game;
    add(lines, EGameplayLine::AlwaysRun,
        localize(game.always_run != 0 ? "Always run : ON" : "Always run : OFF"));
    add(lines, EGameplayLine::Aiming,
        localize(kAimingLabels.at(std::to_underlying(game.aim_mode))));
    add(lines, EGameplayLine::AutoHealth,
        localize(game.auto_use_health != 0 ? "Auto use health : On" : "Auto use health : Off"));
    add(lines, EGameplayLine::Subtitles,
        localize(game.subtitle_mode != 0 ? "Subtitles : On" : "Subtitles : Off"));
    add(lines, EGameplayLine::TextFont,
        std::format("Text font : {}",
                    kTextFontNames.at(std::to_underlying(owners_.fonts.getOsFontChoice()))));
    add(lines, EGameplayLine::MenuText,
        std::format("Menu text : {}",
                    kMenuFontNames.at(std::to_underlying(owners_.fonts.getMenuFontChoice()))));
    if (game.quimby_flag == 0) {
        add(lines, EGameplayLine::Rating,
            localize(game.nudity_flag != 0 ? "Rating: Mature" : "Rating: Teen"));
    }
}

EMenuOutcome CGameplayPage::choose(int id, EMenuStep step) {
    CGame &game = owners_.game;
    switch (static_cast<EGameplayLine>(id)) {
    case EGameplayLine::AlwaysRun:
        game.always_run = toggle(game.always_run);
        break;
    case EGameplayLine::Aiming:
        game.aim_mode = game.aim_mode == EAimMode::AIM_MODE_AUTO ? EAimMode::AIM_MODE_MANUAL
                                                                 : EAimMode::AIM_MODE_AUTO;
        break;
    case EGameplayLine::AutoHealth:
        game.auto_use_health = toggle(game.auto_use_health);
        break;
    case EGameplayLine::Subtitles:
        game.subtitle_mode = toggle(game.subtitle_mode);
        break;
    case EGameplayLine::TextFont:
        owners_.fonts.setOsFontChoice(stepChoice<EOsFontChoice, kTextFontNames.size()>(
            owners_.fonts.getOsFontChoice(), step));
        break;
    case EGameplayLine::MenuText:
        stepMenuFont(step);
        break;
    default:
        swapRating();
        break;
    }
    return EMenuOutcome::Stay;
}

std::string CGameplayPage::localize(std::string_view key) const {
    return std::string(owners_.messages.getLocalizedString(key));
}

void CGameplayPage::stepMenuFont(EMenuStep step) {
    owners_.fonts.setMenuFontChoice(stepChoice<EMenuFontChoice, kMenuFontNames.size()>(
        owners_.fonts.getMenuFontChoice(), step));
    if (owners_.screen.getWindowHeight() > kTallestFixedFontWindow) {
        owners_.editor_tools.setEditorFont(owners_.fonts.getMenuFont());
    }
}

void CGameplayPage::swapRating() {
    CGame &game = owners_.game;
    const int mature = game.nudity_flag == 0 ? 1 : 0;
    game.nudity_flag = mature;
    game.blood_flag = mature;
    game.foul_language_flag = mature;
}

} // namespace nocturne::core

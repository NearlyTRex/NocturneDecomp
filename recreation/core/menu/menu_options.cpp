#include "core/actor/notported.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/menu/gameplaypage.h"
#include "core/menu/menu.h"
#include "core/menu/menupage.h"
#include "core/sound/sound.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <cstdint>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class EOptionsLine : std::uint8_t {
    Gameplay,
    Graphic,
    Sound,
    Control,
    Cheats,
    Credits,
};

constexpr std::array<std::pair<EOptionsLine, std::string_view>, 6> kOptionsLines{{
    {EOptionsLine::Gameplay, "Gameplay options"},
    {EOptionsLine::Graphic, "Graphic options"},
    {EOptionsLine::Sound, "Sound options"},
    {EOptionsLine::Control, "Control options"},
    {EOptionsLine::Cheats, "Cheats"},
    {EOptionsLine::Credits, "Credits"},
}};

} // namespace

// The enhanced game's: Gameplay first, Cheats, and Credits last.
class CMenu::COptionsPage final : public CMenuPage {
public:
    COptionsPage(CMenu &menu, const SMenuOwners &owners) : CMenuPage(menu), owners_(owners) {}

    std::optional<std::string> title() override {
        return std::string(owners_.messages.getLocalizedString("Option Menu"));
    }

    // Whoever is playing, Options shows the Stranger's controls.
    void build(std::vector<SMenuLine> &lines) override {
        owners_.game.hero_number = EHeroType::HERO_TYPE_STRANGER;
        for (const auto &[line, key] : kOptionsLines) {
            lines.push_back({.id = std::to_underlying(line),
                             .text = std::string(owners_.messages.getLocalizedString(key))});
        }
    }

    // Credits, the last line.
    EMenuOutcome choose(int id, EMenuStep /*step*/) override {
        switch (static_cast<EOptionsLine>(id)) {
        case EOptionsLine::Gameplay:
            getMenu().showGameplayOptions();
            break;
        case EOptionsLine::Graphic:
            getMenu().configureGraphicsOptions();
            break;
        case EOptionsLine::Sound:
            getMenu().configureSoundOptions();
            break;
        case EOptionsLine::Control:
            configureControls();
            break;
        case EOptionsLine::Cheats:
            quitNotPorted("CMenu", "showCheatsMenu");
        default:
            owners_.game.rollCredits();
            owners_.sound.configure();
            break;
        }
        return EMenuOutcome::Stay;
    }

private:
    // A control type left changed goes on to its bindings.
    void configureControls() {
        const EControlMode before = owners_.game.game_control;
        getMenu().configureCustomKeys();
        if (owners_.game.game_control != before) {
            getMenu().configureCustomKeyBindings();
        }
    }

    const SMenuOwners &owners_;
};

// The original's lines were Graphic, Sound and Control options, and Credits, and it left on
// Escape alone, not on the window closing.
// deferred: the cheats, which nothing in the original lists (the decomp's cheats.h
//   nocturne_cheats_menu), with the cheats menu
// nocedit 0x00512d30
void CMenu::showOptionsScreen(int initialize_systems) {
    if (initialize_systems != 0) {
        owners_.sound.configure();
        moon_.init();
    }
    owners_.game.saveClockTime();
    COptionsPage page(*this, owners_);
    runPage(page);
    if (initialize_systems != 0) {
        moon_.free();
        owners_.sound.reset();
    }
    writeIniData(owners_.ini, owners_.ini_owners);
}

void CMenu::showGameplayOptions() {
    owners_.game.saveClockTime();
    CGameplayPage page(*this, owners_);
    runPage(page);
}

} // namespace nocturne::core

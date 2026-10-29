#pragma once

#include "core/fwd.h"
#include "core/menu/menupage.h"

#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// The enhanced game's Gameplay options: the settings that are neither display nor device, moved
// from the Graphics and Control Options of the original so that each page fits under the logo.
// Always run, aiming, auto health, subtitles, the text and menu fonts, and the rating.
class CGameplayPage final : public CMenuPage {
public:
    CGameplayPage(CMenu &menu, const SMenuOwners &owners);

    [[nodiscard]] std::optional<std::string> title() override;
    // A build that can never show more has no rating line.
    void build(std::vector<SMenuLine> &lines) override;
    EMenuOutcome choose(int id, EMenuStep step) override;

private:
    [[nodiscard]] std::string localize(std::string_view key) const;
    // The text font takes effect from the next launch; the menu text at once.
    void stepMenuFont(EMenuStep step);
    // Teen and Mature: the three flags move together.
    void swapRating();

    const SMenuOwners &owners_;
};

} // namespace nocturne::core

#pragma once

#include "core/fwd.h"
#include "core/menu/screenmodepage.h"

#include <optional>
#include <string>
#include <vector>

namespace nocturne::core {

// Graphic Options: the original's halo, acceleration, card and depth, with the enhanced game's
// upscaler and anti-aliasing. The picture settings apply from the next frame; the resolution and
// the window are Display Options'.
class CGraphicOptionsPage final : public CScreenModePage {
public:
    CGraphicOptionsPage(CMenu &menu, const SMenuOwners &owners);

    [[nodiscard]] std::optional<std::string> title() override;
    void build(std::vector<SMenuLine> &lines) override;
    EMenuOutcome choose(int id, EMenuStep step) override;

private:
    [[nodiscard]] std::string getApiText() const;
    [[nodiscard]] std::string getCardText() const;
    // The renderer's cards, none while it isn't loaded. The original started on the first card
    // only as it opened, when the INI's was gone; this does whenever the list loses it.
    void listCards();
    void stepHalo(EMenuStep step);
    void toggleAcceleration();
    void stepCard();
    void stepUpscaler(EMenuStep step);
    void stepSharpness(EMenuStep step);
    void stepAntialias(EMenuStep step);

    std::vector<std::string> driver_names_;
    std::vector<std::string> card_names_;
};

} // namespace nocturne::core

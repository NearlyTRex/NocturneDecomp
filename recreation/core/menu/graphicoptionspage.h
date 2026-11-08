#pragma once

#include "core/fwd.h"
#include "core/menu/menupage.h"

#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// Graphic Options: the original's resolution, halo, acceleration, card, depth and calibration,
// with the enhanced game's window mode, widescreen framing, upscaler and anti-aliasing. A new
// resolution resizes the window at once; the picture settings apply from the next frame.
class CGraphicOptionsPage final : public CMenuPage {
public:
    CGraphicOptionsPage(CMenu &menu, const SMenuOwners &owners);

    [[nodiscard]] std::optional<std::string> title() override;
    void build(std::vector<SMenuLine> &lines) override;
    void beforeSwap() override;
    EMenuOutcome choose(int id, EMenuStep step) override;
    EMenuOutcome endFrame() override;

private:
    [[nodiscard]] std::string localize(std::string_view key) const;
    // Only the hardware renderer goes above 480 rows.
    [[nodiscard]] bool getHighResolutionAllowed() const;
    [[nodiscard]] std::string getApiText() const;
    [[nodiscard]] std::string getCardText() const;
    // The renderer's cards, none while it isn't loaded. The original started on the first card
    // only as it opened, when the INI's was gone; this does whenever the list loses it.
    void listCards();
    void stepResolution(EMenuStep step);
    void stepWindowMode(EMenuStep step);
    void stepWidescreen(EMenuStep step);
    void stepHalo(EMenuStep step);
    void toggleAcceleration();
    void stepCard();
    void stepUpscaler(EMenuStep step);
    void stepSharpness(EMenuStep step);
    void stepAntialias(EMenuStep step);

    const SMenuOwners &owners_;
    std::vector<std::string> driver_names_;
    std::vector<std::string> card_names_;
    // The resolution this frame was built at.
    int width_ = 0;
    int height_ = 0;
};

} // namespace nocturne::core

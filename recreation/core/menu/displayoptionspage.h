#pragma once

#include "core/fwd.h"
#include "core/menu/screenmodepage.h"
#include "platform/displaymodes.h"

#include <optional>
#include <string>
#include <vector>

namespace nocturne::core {

// Display Options: the original's resolution and calibration, with the enhanced game's window
// mode, display, full screen size and refresh rate, vertical sync and widescreen framing. The
// resolutions offered are those the display can show.
class CDisplayOptionsPage final : public CScreenModePage {
public:
    CDisplayOptionsPage(CMenu &menu, const SMenuOwners &owners);

    [[nodiscard]] std::optional<std::string> title() override;
    void build(std::vector<SMenuLine> &lines) override;
    EMenuOutcome choose(int id, EMenuStep step) override;

private:
    void stepResolution(EMenuStep step);
    void stepWindowMode(EMenuStep step);
    // The display the setting names, the primary when it names none; null when none are listed.
    [[nodiscard]] const platform::SDisplayInfo *
    getChosenDisplay(const std::vector<platform::SDisplayInfo> &displays) const;
    [[nodiscard]] std::string
    getDisplayText(const std::vector<platform::SDisplayInfo> &displays) const;
    void stepDisplay(EMenuStep step);
    void stepFullscreenSize(EMenuStep step);
    void stepRefreshRate(EMenuStep step);
    void stepWidescreen(EMenuStep step);
};

} // namespace nocturne::core

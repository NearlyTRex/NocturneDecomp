#pragma once

#include "core/fwd.h"
#include "core/menu/menupage.h"

#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// Control Options as the enhanced game has it: the control type, the key bindings, the mouse's
// sensitivity and inversion, and for a gamepad its calibration. Always run, aiming and auto
// health moved to the Gameplay options.
class CControlOptionsPage final : public CMenuPage {
public:
    CControlOptionsPage(CMenu &menu, const SMenuOwners &owners);

    [[nodiscard]] std::optional<std::string> title() override;
    void build(std::vector<SMenuLine> &lines) override;
    EMenuOutcome choose(int id, EMenuStep step) override;
    // Cancel leaves, but a gamepad nobody has centred is calibrated first.
    EMenuOutcome endFrame() override;

private:
    [[nodiscard]] std::string localize(std::string_view key) const;
    [[nodiscard]] std::string getSensitivityText(std::string_view label, int sensitivity) const;
    // Either way, wrapping, with the new type's default bindings.
    void stepControlType(EMenuStep step);

    const SMenuOwners &owners_;
};

} // namespace nocturne::core

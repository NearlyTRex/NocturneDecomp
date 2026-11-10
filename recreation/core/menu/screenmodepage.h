#pragma once

#include "core/fwd.h"
#include "core/menu/menupage.h"

#include <string>
#include <string_view>

namespace nocturne::core {

// A page whose lines can change the resolution: Display Options picks it, and Graphic Options'
// acceleration bounds it. The software renderer is held to 640x480 after each frame is drawn, as
// the original's one Graphics screen did, and a resolution changed either way sizes the window
// at once.
class CScreenModePage : public CMenuPage {
public:
    CScreenModePage(CMenu &menu, const SMenuOwners &owners);

    void beforeSwap() override;
    EMenuOutcome endFrame() override;

protected:
    // The software renderer's largest.
    static constexpr int kSoftwareMaxWidth = 640;
    static constexpr int kSoftwareMaxHeight = 480;

    // The resolution this frame is built at, which endFrame compares against.
    void recordResolution();
    [[nodiscard]] std::string localize(std::string_view key) const;
    // Only the hardware renderer goes above 480 rows.
    [[nodiscard]] bool getHighResolutionAllowed() const;
    [[nodiscard]] const SMenuOwners &getOwners() const;

private:
    const SMenuOwners &owners_;
    int width_ = 0;
    int height_ = 0;
};

} // namespace nocturne::core

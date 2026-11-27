#pragma once

#include "common/video/presentation.h"
#include "core/fwd.h"

namespace nocturne::core {

// The item panels' layout, shared by their text and their pictures.

// The scene camera's pixels laid onto the HUD's frame at its height.
[[nodiscard]] float getCameraScale(const SInventoryHud &hud);

// A panel's size in the camera's pixels: as tall as the inventory, halved on a small screen; the
// quick view a square, the description view the inventory's own width.
struct SPanelSize {
    int width = 0;
    int height = 0;
};
[[nodiscard]] SPanelSize getPanelSize(const SInventoryHud &hud, bool small, bool detail_view);

// The panel's box on the screen, where the game's [hud.inventory] places it: by default the
// camera's space's bottom-right corner, as the original drew the panels in the camera's corner.
[[nodiscard]] common::SViewport getPanelBox(const SInventoryHud &hud, SPanelSize size);

} // namespace nocturne::core

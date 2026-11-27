#include "core/inv/inventorylayout.h"

#include "common/video/presentation.h"
#include "core/dcamera/demoncamera.h"
#include "core/hudlayout.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "engine/package/gamecontent.h"

namespace nocturne::core {

float getCameraScale(const SInventoryHud &hud) {
    return static_cast<float>(hud.frame.height) /
           static_cast<float>(hud.camera.getFramebufferHeight());
}

SPanelSize getPanelSize(const SInventoryHud &hud, bool small, bool detail_view) {
    const int height = small ? hud.assets.getHeight() / 2 : hud.assets.getHeight();
    return {.width = detail_view ? hud.assets.getWidth() : height, .height = height};
}

common::SViewport getPanelBox(const SInventoryHud &hud, SPanelSize size) {
    return placeHudBox(hud.frame,
                       hud.content.inventory_panel.value_or(engine::SInventoryPanel{}).place,
                       size.width, size.height, getCameraScale(hud));
}

} // namespace nocturne::core

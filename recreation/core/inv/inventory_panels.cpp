#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "common/text/ascii.h"
#include "common/video/presentation.h"
#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/hudlayout.h"
#include "core/inv/inv.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "core/inv/inventorylayout.h"
#include "core/rect.h"
#include "core/set/demonset.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/renderer.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <numbers>
#include <optional>
#include <span>
#include <string_view>

namespace nocturne::core {
namespace {

// The model sizes and insets from the panel's corner, in the camera's pixels, at full size and
// halved.
constexpr int kWeaponModelSize = 0x50;
constexpr int kWeaponModelInset = 8;
constexpr int kItemModelSize = 0x40;
constexpr int kItemModelInset = 0x10;
// The weapon turns side on.
constexpr float kWeaponSpin = 1.5707964F;
// The background's alpha against the panel's.
constexpr int kBackgroundShare = 2;
constexpr int kBackgroundWhole = 3;

// The panels' light: its strength along each axis, turning about y a quarter of the frame's time
// a frame, and the ambient light it adds.
constexpr int kPanelLight = 0x482b;
constexpr int kLightTurnDivisor = 4;
constexpr int kPanelAmbient = 32000;
constexpr float kPanelProjection = 36.0F;
// The camera stands this many times the model's largest half-extent back; a gun, twice that.
constexpr double kDefaultDistance = 2.0;
constexpr double kGunDistance = 4.0;
constexpr double kDegreesPerHalfTurn = 180.0;
// Nearly opaque is drawn as opaque, without texture capture.
constexpr int kOpaqueEnough = 65000;
constexpr int kFadingFlags =
    static_cast<int>(common::kRenderTextured | common::kRenderBlend | common::kRenderSmooth |
                     common::kRenderSourceAlpha | common::kRenderDepthTest |
                     common::kRenderDepthWrite | common::kRenderVertexColor);
constexpr int kModelsOwnFlags = -1;

// A background's corner: on the screen in 16.16, a depth, and its place in the panel texture in
// 8.24.
constexpr int kScreenShift = 16;
constexpr int kBackgroundDepth = 0x1000;
constexpr int kBackgroundFlags =
    static_cast<int>(common::kRenderTextured | common::kRenderBlend | common::kRenderSourceAlpha |
                     common::kRenderDepthWrite);
struct STexelRect {
    int left;
    int top;
    int right;
    int bottom;
};
// The quick view's square and the description view's wide strip.
constexpr STexelRect kWeaponBackgroundTexels{
    .left = 0, .top = 0xa00000, .right = 0x600000, .bottom = 0x1000000};
constexpr STexelRect kItemBackgroundTexels{
    .left = 0, .top = 0, .right = 0xf00000, .bottom = 0x600000};

void drawPanelBackground(const SInventoryHud &hud, const SInventoryPanelOwners &owners,
                         const CRect &rect, int alpha, const STexelRect &texels) {
    engine::CDemonRenderer &renderer = owners.renderer;
    renderer.captureTexture(hud.assets.getPanelTexture());
    static_cast<void>(renderer.setRenderAlpha(alpha));
    const std::span<platform::SRenderVertex> vertices = renderer.getVertexBuffer();
    const auto place = [&vertices](std::size_t corner, int x, int y, int u, int v) {
        platform::SRenderVertex &vertex = vertices[corner];
        vertex.projected_vertex.screen_x = x << kScreenShift;
        vertex.projected_vertex.screen_y = y << kScreenShift;
        vertex.projected_vertex.transformed_z = kBackgroundDepth;
        vertex.u = u;
        vertex.v = v;
    };
    place(0, rect.x_min, rect.y_min, texels.left, texels.top);
    place(1, rect.x_max, rect.y_min, texels.right, texels.top);
    place(2, rect.x_max, rect.y_max, texels.right, texels.bottom);
    place(3, rect.x_min, rect.y_max, texels.left, texels.bottom);
    renderer.renderTexturedDirect({.surface_normal = {}, .vertex_indices = {0, 1, 2, 3}},
                                  kBackgroundFlags);
    owners.camera.pushRect(rect);
}

// The game's view of the model, matched in either case; none when it gives none.
const engine::SInventoryItemView *findItemView(const engine::SGameContent &content,
                                               std::string_view model_name) {
    const auto found = std::ranges::find_if(
        content.inventory_views, [model_name](const engine::SInventoryItemView &view) {
            return common::equalsIgnoringAsciiCase(view.id, model_name);
        });
    return found == content.inventory_views.end() ? nullptr : &*found;
}

// The largest of the model's first frame's half-extents.
float getHalfExtent(const CBoundingBox3D &bounds) {
    return std::max({(bounds.max.x - bounds.min.x) * 0.5F, (bounds.max.y - bounds.min.y) * 0.5F,
                     (bounds.max.z - bounds.min.z) * 0.5F});
}

} // namespace

// The original drew the panels in the corner of the window's pixels; the camera's space is laid
// onto the box [hud.inventory] places the panels' text in, as the decomp's HUD draws them, or,
// without the hardware renderer's overlay, the panels are drawn at the box's own pixels. The
// original drew only the local hero's.
// nocedit 0x00500370
void CInventory::renderSelectedItems(const SInventoryHud &hud,
                                     const SInventoryPanelOwners &owners) {
    if (hud.letterbox_up) {
        return;
    }
    if (hud.assets.getScreenHeight() != hud.screen.getWindowHeight()) {
        hud.assets.loadAssets();
    }
    const bool weapon = selected_weapon_ != nullptr && weapon_highlight_timer_ > 0.0F;
    const bool item = selected_item_ != nullptr && item_highlight_timer_ > 0.0F;
    if (!weapon && !item) {
        return;
    }
    const bool small = hasSmallPanels(hud);
    const SPanelSize size = getPanelSize(hud, small, detail_view_);
    const common::SViewport box = getPanelBox(hud, size);
    const float scale = getCameraScale(hud);
    const int right = hud.camera.getFramebufferWidth();
    const int bottom = hud.camera.getFramebufferHeight();
    const bool overlay = hud.special.beginOverlay(
        {.scale_x = scale,
         .scale_y = scale,
         .offset_x = static_cast<float>(box.x) - (static_cast<float>(right - size.width) * scale),
         .offset_y =
             static_cast<float>(box.y) - (static_cast<float>(bottom - size.height) * scale)});
    const std::array<int, 2> corner =
        overlay
            ? std::array{right, bottom}
            : std::array{
                  static_cast<int>(std::lround(static_cast<float>(box.x + box.width) / scale)),
                  static_cast<int>(std::lround(static_cast<float>(box.y + box.height) / scale))};
    const int halve = small ? 2 : 1;
    if (weapon) {
        renderPanel(hud, owners, *selected_weapon_,
                    {.size = kWeaponModelSize / halve, .inset = kWeaponModelInset / halve},
                    kWeaponSpin, weapon_highlight_timer_, corner);
    }
    if (item) {
        renderPanel(hud, owners, *selected_item_,
                    {.size = kItemModelSize / halve, .inset = kItemModelInset / halve}, 0.0F,
                    item_highlight_timer_, corner);
    }
    if (overlay) {
        hud.special.endOverlay();
    }
}

// The quick view's background is the weapon's, the description view's the item's, whichever
// panel it is.
void CInventory::renderPanel(const SInventoryHud &hud, const SInventoryPanelOwners &owners,
                             CDemonActor &item, const SPanelModel &model, float spin, float timer,
                             std::array<int, 2> corner) {
    const auto [right, bottom] = corner;
    const SPanelSize size = getPanelSize(hud, hasSmallPanels(hud), detail_view_);
    const int alpha = getFadeAlpha(timer);
    const CRect rect{.x_min = right - size.width,
                     .x_max = right - 1,
                     .y_min = bottom - size.height,
                     .y_max = bottom - 1};
    const int background_alpha = (alpha * kBackgroundShare) / kBackgroundWhole;
    if (detail_view_) {
        drawItemIconBackground(hud, owners, rect, background_alpha);
    } else {
        drawWeaponIconBackground(hud, owners, rect, background_alpha);
    }
    renderItemModel(hud, owners, item, right - model.size - model.inset,
                    bottom - model.size - model.inset, model.size, spin, alpha);
}

// nocedit 0x00500050
void CInventory::drawWeaponIconBackground(const SInventoryHud &hud,
                                          const SInventoryPanelOwners &owners, const CRect &rect,
                                          int alpha) {
    drawPanelBackground(hud, owners, rect, alpha, kWeaponBackgroundTexels);
}

// nocedit 0x005001e0
void CInventory::drawItemIconBackground(const SInventoryHud &hud,
                                        const SInventoryPanelOwners &owners, const CRect &rect,
                                        int alpha) {
    drawPanelBackground(hud, owners, rect, alpha, kItemBackgroundTexels);
}

// The model's view comes from the game's [[hud.inventory.view]], each value it leaves out from
// the item's class: a gun stands twice as far back. The original turned its two axes' models by
// their names here, as Nocturne's manifest now does. The set's light is put back after, where
// the original left the panels' light on the set.
// deferred: switching the set to quick lighting for the model and back again, with
//   setRenderingMode
// deferred: a key stood up a quarter turn about x and twice as far back, with CKeyActor's model
// nocedit 0x004fee00
void CInventory::renderItemModel(const SInventoryHud &hud, const SInventoryPanelOwners &owners,
                                 CDemonActor &item, int x, int y, int size, float spin, int alpha) {
    CDemonSet &set = owners.set;
    engine::CDemonRenderer &renderer = owners.renderer;
    const common::CVector3i light_direction = set.getLightDirection();
    const int ambient = set.getAmbientBaseQuick();
    panel_light_angle_ =
        common::wrappingAdd(panel_light_angle_, owners.delta_time / kLightTurnDivisor);
    set.setLightDirection(
        {.x = common::fixedMultiply(owners.matrix.interpolatedSin(panel_light_angle_), kPanelLight),
         .y = -kPanelLight,
         .z = common::fixedMultiply(owners.matrix.interpolatedCos(panel_light_angle_),
                                    kPanelLight)});
    set.setAmbientBaseQuick(kPanelAmbient);
    renderer.pushViewport(x, y, size, size);
    CKeyFramedModelInstance &model = getItemModel(item);
    const CBoundingBox3D &bounds = model.getModelPtr().getFrameBounds().front();
    const engine::SInventoryItemView *view = findItemView(hud.content, model.getModelName());
    const auto distance = static_cast<float>(
        (view != nullptr ? view->distance : std::nullopt)
            .value_or(isOfClass(&item, "CGun") ? kGunDistance : kDefaultDistance));
    renderer.setCameraOriginFromScaledPoint(
        {.x = 0.0F, .y = 0.0F, .z = -getHalfExtent(bounds) * distance});
    renderer.setProjectionScale(kPanelProjection);
    renderer.setupSceneRendering({});
    renderer.processCameraRelativeVertex({});
    owners.camera_tables.perspective_reciprocal = 0;
    // A view's angle in radians; none turns the model by the class's own, 0.
    const auto turn = [view](std::optional<double> engine::SInventoryItemView::*axis) {
        return static_cast<float>((view != nullptr ? view->*axis : std::nullopt).value_or(0.0) *
                                  std::numbers::pi / kDegreesPerHalfTurn);
    };
    const common::CVector3f turned{.x = turn(&engine::SInventoryItemView::turn_x),
                                   .y = spin + turn(&engine::SInventoryItemView::turn_y),
                                   .z = turn(&engine::SInventoryItemView::turn_z)};
    const common::CVector3f centre{.x = (bounds.min.x + bounds.max.x) * -0.5F,
                                   .y = (bounds.min.y + bounds.max.y) * -0.5F,
                                   .z = (bounds.min.z + bounds.max.z) * -0.5F};
    renderer.applyScaledTransform(turned, nullptr);
    renderer.applyScaledTransform({}, &centre);
    if (alpha < kOpaqueEnough) {
        static_cast<void>(renderer.setRenderAlpha(alpha));
        renderer.setTextureCaptureMode(true);
        model.prepareForRendering(0.0F, kFadingFlags, renderer, set);
        renderer.processCapturedFaces();
    } else {
        model.prepareForRendering(0.0F, kModelsOwnFlags, renderer, set);
    }
    renderer.matrixPop();
    renderer.matrixPop();
    renderer.popViewport();
    set.setLightDirection(light_direction);
    set.setAmbientBaseQuick(ambient);
}

} // namespace nocturne::core

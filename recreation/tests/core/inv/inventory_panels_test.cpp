#include "common/math/vector3i.h"
#include "core/gun/gun.h"
#include "core/health/healthitem.h"
#include "core/inv/inv.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "core/set/demonset.h"
#include "engine/package/gamecontent.h"
#include "platform/renderer.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/inventoryhudfixture.h"
#include "tests/mocks/core/moonfiles.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using platform::SRenderVertex;
using ::testing::_;
using ::testing::AllOf;
using ::testing::Field;
using ::testing::FloatEq;

// The panels' background and the model's faces as the hardware renderer is handed them.
struct SHardwarePolygon {
    std::vector<SRenderVertex> corners;
    int render_flags = 0;
};

constexpr int kBackgroundFlags = 0xa3;
constexpr int kFadingFlags = 0x2e7;

template <int Width, int Height>
class CInventoryPanelsTest : public CInventoryHudFixture<Width, Height> {
protected:
    using Fixture = CInventoryHudFixture<Width, Height>;

    CInventoryPanelsTest() {
        givenMoonModel([this](const std::string &name,
                              const std::string &contents) { this->givenFile(name, contents); },
                       "med.kfm", 1);
        this->givenFile("art\\a.raw", std::string(std::size_t{32} * 32, '\x01'));
        this->givenFile("art\\INV3D.RAW", std::string(std::size_t{256} * 256, '\x02'));
        this->item_model_.load("med.kfm");
        ON_CALL(this->renderer_, drawPolygon2(_, _, _))
            .WillByDefault([this](SRenderVertex **corners, int count, int render_flags) {
                SHardwarePolygon &drawn = drawn_.emplace_back();
                drawn.render_flags = render_flags;
                for (int i = 0; i < count; ++i) {
                    drawn.corners.push_back(*corners[i]);
                }
                return 1;
            });
        ON_CALL(this->renderer_, drawPolyList(_, _, _, _))
            .WillByDefault([this](SRenderVertex *, const platform::SMRGLPrimitiveQuad *const *,
                                  int count, int) {
                listed_ += static_cast<std::size_t>(count);
                return 1;
            });
    }

    // A medkit held, its panel up.
    void showMedkit() {
        Fixture::hold(std::make_unique<CHealthItem>(this->actor_), "Medkit",
                      Fixture::healthFields(1, 50.0F));
        Fixture::load(-1);
        this->inventory_.selectItem(1);
        precacheHeld();
    }

    // The Stranger's pistol held, its panel up.
    void showPistol() {
        Fixture::hold(std::make_unique<CGun>(this->actor_), "Your_weapon",
                      Fixture::weaponFields("gat.kfm", 20, 0));
        Fixture::load(0);
        this->inventory_.resetWeaponSwitchTimers(false);
        precacheHeld();
    }

    void precacheHeld() {
        for (const std::unique_ptr<CDemonActor> &item : this->inventory_.getItems()) {
            static_cast<void>(getItemModel(*item).preCache());
        }
    }

    // Drawn through the hardware renderer, whose overlay pass is open when overlay.
    void renderPanels(bool overlay = true) {
        this->special_.setUseExternalRenderer(true);
        ON_CALL(this->renderer_, beginOverlay(_)).WillByDefault(::testing::Return(overlay));
        SInventoryHud hud = this->hud();
        this->inventory_.renderSelectedItems(SInventoryHud{.assets = hud.assets,
                                                           .fonts = hud.fonts,
                                                           .messages = hud.messages,
                                                           .screen = hud.screen,
                                                           .two_d = hud.two_d,
                                                           .special = this->special_,
                                                           .content = hud.content,
                                                           .camera = hud.camera,
                                                           .hero = hud.hero,
                                                           .frame = hud.frame,
                                                           .letterbox_up = hud.letterbox_up},
                                             {.renderer = this->demon_renderer_,
                                              .set = this->set_,
                                              .camera = this->session_.camera,
                                              .camera_tables = this->set_parts_.tables,
                                              .matrix = this->matrix_,
                                              .delta_time = delta_time_});
    }

    [[nodiscard]] std::vector<SHardwarePolygon> backgrounds() const {
        std::vector<SHardwarePolygon> found;
        for (const SHardwarePolygon &drawn : drawn_) {
            if (drawn.render_flags == kBackgroundFlags) {
                found.push_back(drawn);
            }
        }
        return found;
    }

    [[nodiscard]] std::size_t facesDrawnWith(int render_flags) const {
        return static_cast<std::size_t>(
            std::ranges::count(drawn_, render_flags, &SHardwarePolygon::render_flags));
    }

    // The model's faces drawn opaque, with its own flags, one by one or as a list.
    [[nodiscard]] std::size_t opaqueFaces() const {
        return drawn_.size() - facesDrawnWith(kBackgroundFlags) - facesDrawnWith(kFadingFlags) +
               listed_;
    }

    std::vector<SHardwarePolygon> drawn_;
    std::size_t listed_ = 0;
    int delta_time_ = 0;
};

using CInventoryPanels480Test = CInventoryPanelsTest<640, 480>;
using CInventoryPanels360Test = CInventoryPanelsTest<480, 360>;

// The corner's screen place, whole pixels.
::testing::Matcher<const SRenderVertex &> isAt(int x, int y) {
    return AllOf(Field(&SRenderVertex::projected_vertex,
                       AllOf(Field(&platform::SProjectedVertex::screen_x, x << 16),
                             Field(&platform::SProjectedVertex::screen_y, y << 16))));
}

// The quick view's background fills the camera's bottom-right 96 pixels square, from the panel
// texture's square, at two thirds of the panel's alpha, the overlay laying the camera onto the
// frame as it is; the model is drawn opaque with its own flags.
TEST_F(CInventoryPanels480Test, TheQuickViewFillsTheCameraCorner) {
    showMedkit();
    EXPECT_CALL(renderer_,
                beginOverlay(AllOf(Field(&platform::SOverlayPlacement::scale_x, FloatEq(1.0F)),
                                   Field(&platform::SOverlayPlacement::offset_x, FloatEq(0.0F)),
                                   Field(&platform::SOverlayPlacement::offset_y, FloatEq(0.0F)))))
        .WillOnce(::testing::Return(true));
    EXPECT_CALL(renderer_, endOverlay());
    renderPanels();
    const std::vector<SHardwarePolygon> drawn = backgrounds();
    ASSERT_EQ(drawn.size(), 1U);
    EXPECT_THAT(drawn[0].corners, ::testing::ElementsAre(isAt(544, 384), isAt(639, 384),
                                                         isAt(639, 479), isAt(544, 479)));
    EXPECT_EQ(drawn[0].corners[0].v, 0xa00000);
    EXPECT_EQ(drawn[0].corners[2].u, 0x600000);
    EXPECT_GT(opaqueFaces(), 0U);
    EXPECT_EQ(facesDrawnWith(kFadingFlags), 0U);
}

// In its last second the panel fades, the model's faces kept and drawn nearest first.
TEST_F(CInventoryPanels480Test, AFadingPanelsModelIsDrawnThroughCapture) {
    showMedkit();
    inventory_.updateInventory(CInventory::kDisplaySeconds - 0.5F);
    renderPanels();
    EXPECT_EQ(opaqueFaces(), 0U);
    EXPECT_GT(facesDrawnWith(kFadingFlags), 0U);
}

// The description view's background is the inventory's full width, from the texture's strip.
TEST_F(CInventoryPanels480Test, TheDescriptionViewIsTheInventorysWidth) {
    showMedkit();
    inventory_.toggleDetailView();
    renderPanels();
    const std::vector<SHardwarePolygon> drawn = backgrounds();
    ASSERT_EQ(drawn.size(), 1U);
    EXPECT_THAT(drawn[0].corners[0], isAt(640 - 0xd0, 384));
    EXPECT_EQ(drawn[0].corners[2].u, 0xf00000);
    EXPECT_EQ(drawn[0].corners[2].v, 0x600000);
}

// Where [hud.inventory] places the panels, the overlay lays the camera's corner onto that box.
TEST_F(CInventoryPanels480Test, TheOverlayLaysTheCornerOntoThePlacedBox) {
    game_parts_.getContent().inventory_panel =
        engine::SInventoryPanel{.place = {.anchor = engine::EHudAnchor::TopLeft, .x = 10, .y = 20}};
    showMedkit();
    EXPECT_CALL(renderer_, beginOverlay(AllOf(
                               Field(&platform::SOverlayPlacement::offset_x, FloatEq(-534.0F)),
                               Field(&platform::SOverlayPlacement::offset_y, FloatEq(-364.0F)))))
        .WillOnce(::testing::Return(true));
    renderPanels();
}

// Without the overlay the panels are drawn at the placed box's own pixels.
TEST_F(CInventoryPanels480Test, WithoutTheOverlayThePanelsAreDrawnInTheBox) {
    game_parts_.getContent().inventory_panel =
        engine::SInventoryPanel{.place = {.anchor = engine::EHudAnchor::TopLeft, .x = 10, .y = 20}};
    showMedkit();
    EXPECT_CALL(renderer_, endOverlay()).Times(0);
    renderPanels(false);
    const std::vector<SHardwarePolygon> drawn = backgrounds();
    ASSERT_EQ(drawn.size(), 1U);
    EXPECT_THAT(drawn[0].corners[0], isAt(10, 20));
}

// Below 384 lines the panels and models are halved.
TEST_F(CInventoryPanels360Test, ASmallScreenHalvesThePanels) {
    showMedkit();
    renderPanels();
    const std::vector<SHardwarePolygon> drawn = backgrounds();
    ASSERT_EQ(drawn.size(), 1U);
    EXPECT_THAT(drawn[0].corners[0], isAt(480 - 48, 360 - 48));
}

// Nothing is drawn with no panel up, or while the letterbox is.
TEST_F(CInventoryPanels480Test, NothingIsDrawnWithoutAPanelOrUnderTheLetterbox) {
    showMedkit();
    inventory_.updateInventory(CInventory::kDisplaySeconds);
    EXPECT_CALL(renderer_, beginOverlay(_)).Times(0);
    renderPanels();
    inventory_.selectItem(1);
    letterbox_up_ = true;
    renderPanels();
    EXPECT_TRUE(drawn_.empty());
}

// The set's light turns with the frame's time while the model is drawn, and is put back after.
TEST_F(CInventoryPanels480Test, TheSetsLightIsPutBack) {
    showMedkit();
    set_.setLightDirection({.x = 1, .y = 2, .z = 3});
    set_.setAmbientBaseQuick(5);
    delta_time_ = 0x10000;
    renderPanels();
    EXPECT_EQ(set_.getLightDirection(), (common::CVector3i{.x = 1, .y = 2, .z = 3}));
    EXPECT_EQ(set_.getAmbientBaseQuick(), 5);
}

// A view of its own turns the model edge on, so none of its faces is drawn.
TEST_F(CInventoryPanels480Test, AModelsViewTurnsIt) {
    game_parts_.getContent().inventory_views = {
        {.id = "lamp.kfm", .turn_x = 45.0, .turn_y = {}, .turn_z = {}, .distance = {}},
        {.id = "MED.KFM", .turn_x = 0.0, .turn_y = 90.0, .turn_z = {}, .distance = 8.0}};
    showMedkit();
    renderPanels();
    EXPECT_EQ(opaqueFaces(), 0U);
}

// A weapon held while its panel is put away draws only the item's.
TEST_F(CInventoryPanels480Test, AWeaponPutAwayDrawsOnlyTheItemsPanel) {
    hold(std::make_unique<CGun>(actor_), "Your_weapon", weaponFields("gat.kfm", 20, 0));
    hold(std::make_unique<CHealthItem>(actor_), "Medkit", healthFields(1, 50.0F));
    load(0);
    inventory_.selectItem(1);
    precacheHeld();
    renderPanels();
    EXPECT_EQ(backgrounds().size(), 1U);
}

// The weapon's panel turns its model side on, a gun standing twice as far back.
TEST_F(CInventoryPanels480Test, TheWeaponsPanelIsDrawnToo) {
    showPistol();
    renderPanels();
    EXPECT_EQ(backgrounds().size(), 1U);
}

} // namespace
} // namespace nocturne::core

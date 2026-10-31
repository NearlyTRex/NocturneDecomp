#include "core/inv/inventoryassets.h"

#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/game/game.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/dosio/dosio.h"
#include "engine/screendevice.h"

#include <array>
#include <cstddef>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// The battery's size, the health bars', and an ammunition icon's side.
constexpr int kBatteryWidth = 0x10;
constexpr int kBatteryHeight = 0x20;
constexpr int kHealthBarWidth = 0x1b;
constexpr int kHealthBarHeight = 0x40;
constexpr int kIconSide = 0x18;
// Below this many lines most of the pictures are drawn at half size.
constexpr int kFullSizeLines = 0x180;
constexpr int kHalf = 2;
constexpr std::size_t kBitmapCount = 14;

// Sizes that stand for the inventory's width and height, as invsize.txt gives them.
constexpr int kInventoryWidth = -1;
constexpr int kInventoryHeight = -2;

// A picture, the size it is read at, and whether a small screen halves it.
struct SBitmapFile {
    std::string_view name;
    int width = kInventoryWidth;
    int height = kInventoryHeight;
    bool halved = false;
};

constexpr std::array<SBitmapFile, kBitmapCount> kBitmapFiles = {{
    {.name = "invback", .halved = false},
    {.name = "invback2", .width = kInventoryHeight, .halved = true},
    {.name = "weapback", .halved = false},
    {.name = "weapback2", .width = kInventoryHeight, .halved = true},
    {.name = "battery", .width = kBatteryWidth, .height = kBatteryHeight, .halved = false},
    {.name = "hbar1", .width = kHealthBarWidth, .height = kHealthBarHeight, .halved = true},
    {.name = "hbar2", .width = kHealthBarWidth, .height = kHealthBarHeight, .halved = true},
    {.name = "tommyclip24x24", .width = kIconSide, .height = kIconSide, .halved = true},
    {.name = "bullet24x24", .width = kIconSide, .height = kIconSide, .halved = true},
    {.name = "lithium24x24", .width = kIconSide, .height = kIconSide, .halved = true},
    {.name = "mercurybullet24x24", .width = kIconSide, .height = kIconSide, .halved = true},
    {.name = "shotshell24x24", .width = kIconSide, .height = kIconSide, .halved = true},
    {.name = "silverbullet24x24", .width = kIconSide, .height = kIconSide, .halved = true},
    {.name = "holybullet24x24", .width = kIconSide, .height = kIconSide, .halved = true},
}};

} // namespace

CInventoryAssets::CInventoryAssets(const SInventoryAssetsOwners &owners) : owners_(owners) {
    bitmaps_.reserve(kBitmapCount);
    for (std::size_t i = 0; i < kBitmapCount; ++i) {
        bitmaps_.emplace_back(owners.dosio, owners.screen, owners.special);
    }
}

// The square ends are read as tall as the inventory is, on both sides.
// nocedit 0x004fd220
void CInventoryAssets::load() {
    screen_height_ = owners_.screen.getWindowHeight();
    if (const std::optional<std::string> size = owners_.dosio.readFile("data", "invsize.txt")) {
        common::CTextScanner scanner(*size);
        common::scanFormat(scanner, "%d,%d\n", width_, height_);
    }
    const bool halve = owners_.game.game_pixy < kFullSizeLines;
    const auto size = [this](int given) {
        if (given == kInventoryWidth) {
            return width_;
        }
        return given == kInventoryHeight ? height_ : given;
    };
    for (std::size_t i = 0; i < kBitmapCount; ++i) {
        const SBitmapFile &file = kBitmapFiles.at(i);
        engine::CAlphaBitmap &bitmap = bitmaps_.at(i);
        bitmap.load(file.name, size(file.width), size(file.height));
        if (halve && file.halved) {
            bitmap.scale(kHalf, kHalf);
        }
    }
    loadItems();
}

// Each a line of three quoted strings; the first line that isn't ends the list. The original's
// list held 100 and ran past them.
// nocedit 0x004fcfe0
void CInventoryAssets::loadItems() {
    items_.clear();
    const std::optional<std::string> list = owners_.dosio.readFile("", "itemlist.txt");
    if (!list) {
        return;
    }
    common::CTextScanner scanner(*list);
    while (!scanner.atEnd()) {
        SInventoryItemInfo item;
        if (common::scanFormat(scanner, "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n", item.model_name,
                               item.display_name, item.description) != 3) {
            break;
        }
        items_.push_back(item);
    }
}

int CInventoryAssets::getScreenHeight() const {
    return screen_height_;
}

int CInventoryAssets::getWidth() const {
    return width_;
}

int CInventoryAssets::getHeight() const {
    return height_;
}

const engine::CAlphaBitmap &CInventoryAssets::getBitmap(EInventoryBitmap bitmap) const {
    return bitmaps_.at(static_cast<std::size_t>(bitmap));
}

std::span<const SInventoryItemInfo> CInventoryAssets::getItems() const {
    return items_;
}

} // namespace nocturne::core

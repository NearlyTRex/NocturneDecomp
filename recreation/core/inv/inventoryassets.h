#pragma once

#include "core/fwd.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/fwd.h"

#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// What the inventory's pictures are read from and drawn on, and the game whose resolution says
// how large they are drawn.
struct SInventoryAssetsOwners {
    const engine::CDosIo &dosio;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    const CGame &game;
};

// The inventory's pictures: the inventory's and the weapons' backgrounds and the square ends
// drawn after them, the battery, the two health bar pictures, and the ammunition icons.
enum class EInventoryBitmap : std::uint8_t {
    kInventoryBackground,
    kInventoryBackgroundEnd,
    kWeaponBackground,
    kWeaponBackgroundEnd,
    kBattery,
    kHealthBar1,
    kHealthBar2,
    kTommyClip,
    kBullet,
    kLithium,
    kMercuryBullet,
    kShotShell,
    kSilverBullet,
    kHolyBullet,
};

// An item the inventory can hold: its model, and the name and description it is shown with.
struct SInventoryItemInfo {
    std::string model_name;
    std::string display_name;
    std::string description;

    bool operator==(const SInventoryItemInfo &) const = default;
};

// The inventory's pictures and the items the game knows of.
class CInventoryAssets {
public:
    // The inventory's size where data\invsize.txt doesn't give it.
    static constexpr int kDefaultWidth = 0xd0;
    static constexpr int kDefaultHeight = 0x60;

    explicit CInventoryAssets(const SInventoryAssetsOwners &owners);

    // Reads the inventory's size, its pictures, most halved below 384 lines, and itemlist.txt's
    // items. A missing picture is fatal; a missing size or item list leaves the defaults or none.
    void load();

    // The window's height as the inventory was loaded.
    [[nodiscard]] int getScreenHeight() const;
    [[nodiscard]] int getWidth() const;
    [[nodiscard]] int getHeight() const;
    [[nodiscard]] const engine::CAlphaBitmap &getBitmap(EInventoryBitmap bitmap) const;
    [[nodiscard]] std::span<const SInventoryItemInfo> getItems() const;

private:
    void loadItems();

    SInventoryAssetsOwners owners_;
    int screen_height_ = 0;
    int width_ = kDefaultWidth;
    int height_ = kDefaultHeight;
    std::vector<engine::CAlphaBitmap> bitmaps_;
    std::vector<SInventoryItemInfo> items_;
};

} // namespace nocturne::core

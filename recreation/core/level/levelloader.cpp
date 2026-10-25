#include "core/level/levelloader.h"

#include "common/random/watcomrandom.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"

#include <array>
#include <cstddef>
#include <utility>

namespace nocturne::core {
namespace {

constexpr int kPictureWidth = 640;
constexpr int kPictureHeight = 480;
constexpr int kOpaque = 0xffff;
constexpr int kPictureWindowSize = 90;
// The corner window the moon is given without a picture.
constexpr int kCornerX = 447;
constexpr int kCornerSize = 192;
constexpr int kRandomPictures = 3;
constexpr CColor3i kWhite{.r = 0xff00, .g = 0xff00, .b = 0xff00};

} // namespace

// What staticInit constructed is the members.
// nocedit 0x00503d80
CLevelLoader::CLevelLoader(const SLevelLoaderOwners &owners)
    : owners_(owners), moon_(owners.dosio), glow_texture_{.texture_name = "MOONGLOW.RAW"} {}

// The original also set a version field that nothing reads, and a full-screen viewport that is
// only read with a window.
// nocedit 0x00503dc0
void CLevelLoader::show(int total_frames, bool use_custom_viewport, int image_variant) {
    static constexpr std::array<SPicture, 4> kPictures = {{
        {.name = "load1", .x = 120, .y = 130, .color = {.r = 0x8200, .g = 0xc800, .b = 0xf400}},
        {.name = "load2", .x = 484, .y = 66, .color = {.r = 0x8200, .g = 0xbd00, .b = 0xff00}},
        {.name = "load3", .x = 159, .y = 1, .color = {.r = 0x9e00, .g = 0xe100, .b = 0xff00}},
        {.name = "load4", .x = 379, .y = 68, .color = {.r = 0x6b00, .g = 0x9a00, .b = 0xff00}},
    }};
    enabled_ = true;
    current_frame_ = 0;
    total_frames_ = total_frames;
    use_custom_viewport_ = use_custom_viewport;
    if (use_custom_viewport) {
        viewport_x_ = kCornerX;
        viewport_y_ = 0;
        viewport_width_ = kCornerSize;
        viewport_height_ = kCornerSize;
    } else {
        owners_.special.clearScreen();
    }
    color_ = kWhite;
    moon_.load("moon.kfm");
    owners_.renderer.captureTexture(glow_texture_);
    if (image_variant == kRandomImage && !use_custom_viewport) {
        image_variant = owners_.crt_random.rand() % kRandomPictures;
    }
    if (image_variant < 0 || std::cmp_greater_equal(image_variant, kPictures.size())) {
        return;
    }
    const SPicture &picture = kPictures[static_cast<std::size_t>(image_variant)];
    engine::CAlphaBitmap bitmap(owners_.dosio, owners_.screen, owners_.special);
    bitmap.load(picture.name, kPictureWidth, kPictureHeight);
    bitmap.display(0, 0, kOpaque);
    use_custom_viewport_ = true;
    viewport_x_ = picture.x;
    viewport_y_ = picture.y;
    viewport_width_ = kPictureWindowSize;
    viewport_height_ = kPictureWindowSize;
    color_ = picture.color;
}

} // namespace nocturne::core

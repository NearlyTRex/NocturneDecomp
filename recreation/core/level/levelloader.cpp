#include "core/level/levelloader.h"

#include "common/random/watcomrandom.h"
#include "core/frontend.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"

#include <cstddef>
#include <format>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kPictureWidth = 640;
constexpr int kPictureHeight = 480;
constexpr int kOpaque = 0xffff;
constexpr int kPictureWindowSize = 90;
// The corner window the moon is given without a picture.
constexpr int kCornerX = 447;
constexpr int kCornerSize = 192;
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
    // The 640x480 layout, centred on a wider screen.
    const int left = getFrontEndLeft(owners_.screen.getWindowWidth());
    enabled_ = true;
    current_frame_ = 0;
    total_frames_ = total_frames;
    use_custom_viewport_ = use_custom_viewport;
    if (use_custom_viewport) {
        viewport_x_ = left + kCornerX;
        viewport_y_ = 0;
        viewport_width_ = kCornerSize;
        viewport_height_ = kCornerSize;
    } else {
        owners_.special.clearScreen();
    }
    color_ = kWhite;
    moon_.load("moon.kfm");
    owners_.renderer.captureTexture(glow_texture_);
    const std::vector<engine::SLoadingPicture> &pictures = owners_.content.loading;
    if (image_variant == kRandomImage && !use_custom_viewport) {
        image_variant = pickRandomPicture();
    }
    if (image_variant < 0 || std::cmp_greater_equal(image_variant, pictures.size())) {
        return;
    }
    const engine::SLoadingPicture &picture = pictures[static_cast<std::size_t>(image_variant)];
    engine::CAlphaBitmap bitmap(owners_.dosio, owners_.screen, owners_.special);
    bitmap.load(picture.id, kPictureWidth, kPictureHeight);
    bitmap.display(left, 0, kOpaque);
    if (!picture.moon) {
        return;
    }
    use_custom_viewport_ = true;
    viewport_x_ = left + picture.moon->x;
    viewport_y_ = picture.moon->y;
    viewport_width_ = kPictureWindowSize;
    viewport_height_ = kPictureWindowSize;
    color_ = {.r = picture.moon->tint[0], .g = picture.moon->tint[1], .b = picture.moon->tint[2]};
}

// The original picked one of its first three pictures; the pool is those marked random.
int CLevelLoader::pickRandomPicture() {
    std::vector<int> pool;
    const std::vector<engine::SLoadingPicture> &pictures = owners_.content.loading;
    for (std::size_t i = 0; i < pictures.size(); ++i) {
        if (pictures[i].random) {
            pool.push_back(static_cast<int>(i));
        }
    }
    if (pool.empty()) {
        return kNoImage;
    }
    return pool[static_cast<std::size_t>(owners_.crt_random.rand()) % pool.size()];
}

// nocedit 0x00504720
void CLevelLoader::cleanup() {
    enabled_ = false;
    owners_.console.printf(std::format("gLevelIndicator: Used {} calls\n", current_frame_));
    moon_.free();
}

} // namespace nocturne::core

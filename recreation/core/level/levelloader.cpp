#include "core/level/levelloader.h"

#include "common/error/error.h"
#include "common/random/watcomrandom.h"
#include "core/frontend.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/display.h"

#include <cstddef>
#include <format>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kPictureWidth = 640;
constexpr int kPictureHeight = 480;
constexpr int kOpaque = 0xffff;

} // namespace

// What staticInit constructed is the members; the glow's texture is named as the moon shows.
// nocedit 0x00503d80
CLevelLoader::CLevelLoader(const SLevelLoaderOwners &owners)
    : owners_(owners), moon_(owners.dosio), icon_(owners.dosio, owners.screen, owners.special) {}

CLevelLoader::EIndicator CLevelLoader::getIndicator() const {
    const std::string_view style = requireFrontEndStyle(
        "loading indicator", owners_.content.front_end.loading_indicator,
        {kMoonLoadingIndicator, kProgressBarLoadingIndicator, kIconLoadingIndicator});
    if (style == kProgressBarLoadingIndicator) {
        return EIndicator::ProgressBar;
    }
    return style == kIconLoadingIndicator ? EIndicator::Icon : EIndicator::Moon;
}

const engine::SIconIndicator &CLevelLoader::getIconIndicator() const {
    if (!owners_.content.icon_indicator) {
        common::displayErrorAndQuit("No package gives the icon loading indicator's look");
    }
    return *owners_.content.icon_indicator;
}

const engine::SMoonIndicator &CLevelLoader::getMoonIndicator() const {
    if (!owners_.content.moon_indicator) {
        common::displayErrorAndQuit("No package gives the moon loading indicator's look");
    }
    return *owners_.content.moon_indicator;
}

const engine::SProgressBarIndicator &CLevelLoader::getProgressBarIndicator() const {
    if (!owners_.content.progress_bar_indicator) {
        common::displayErrorAndQuit("No package gives the progress_bar loading indicator's look");
    }
    return *owners_.content.progress_bar_indicator;
}

// The original also set a version field that nothing reads, and a full-screen viewport that is
// only read with a window. BW2's progress bar loaded the moon and set its window but never drew
// it; a window still keeps the status line off the screen. BW3's icon takes its own count of
// updates and, with always_random, a random picture whatever it was given, and loads the
// picture's icon.
// bw3 0x004dfc50
// nocedit 0x00503dc0
void CLevelLoader::show(int total_frames, bool use_custom_viewport, int image_variant) {
    // The 640x480 layout, as the screen shows it.
    const SFrontEndLayout layout =
        getFrontEndLayout(owners_.screen.getWindowWidth(), owners_.screen.getWindowHeight());
    const EIndicator indicator = getIndicator();
    const bool moon = indicator == EIndicator::Moon;
    enabled_ = true;
    current_frame_ = 0;
    total_frames_ = total_frames;
    use_custom_viewport_ = use_custom_viewport;
    has_icon_ = false;
    if (!use_custom_viewport) {
        owners_.special.clearScreen();
    }
    bool always_random = false;
    if (indicator == EIndicator::Icon) {
        const engine::SIconIndicator &icon = getIconIndicator();
        total_frames_ = icon.frames;
        always_random = icon.always_random;
    } else if (moon) {
        const engine::SMoonIndicator &look = getMoonIndicator();
        if (use_custom_viewport) {
            viewport_x_ = layout.getX(look.corner_x);
            viewport_y_ = layout.getY(look.corner_y);
            viewport_width_ = layout.getLength(look.corner_size);
            viewport_height_ = layout.getLength(look.corner_size);
        }
        color_ = {.r = look.default_tint[0], .g = look.default_tint[1], .b = look.default_tint[2]};
        moon_.load(look.model);
        if (glow_texture_.texture_name != look.glow_texture) {
            glow_texture_ = {.texture_name = look.glow_texture};
        }
        owners_.renderer.captureTexture(glow_texture_);
    } else {
        // Fatal now, rather than at the first update, without the bar's look.
        static_cast<void>(getProgressBarIndicator());
    }
    const std::vector<engine::SLoadingPicture> &pictures = owners_.content.loading;
    if (always_random || (image_variant == kRandomImage && !use_custom_viewport)) {
        image_variant = pickRandomPicture();
    }
    if (image_variant < 0 || std::cmp_greater_equal(image_variant, pictures.size())) {
        return;
    }
    const engine::SLoadingPicture &picture = pictures[static_cast<std::size_t>(image_variant)];
    engine::CAlphaBitmap bitmap(owners_.dosio, owners_.screen, owners_.special);
    bitmap.load(picture.id, kPictureWidth, kPictureHeight);
    const SPictureArea area = getPictureArea(owners_.screen.getWindowWidth(),
                                             owners_.screen.getWindowHeight(), picture.fit);
    displayInPicture(bitmap, area,
                     {.x = 0, .y = 0, .width = kPictureWidth, .height = kPictureHeight}, kOpaque,
                     owners_.display.getUpscaler());
    if (indicator == EIndicator::Icon && !picture.icon.empty()) {
        const engine::SIconIndicator &icon = getIconIndicator();
        icon_.load(picture.icon, icon.width, icon.height);
        has_icon_ = true;
        icon_picture_ = area;
    }
    if (!picture.moon) {
        return;
    }
    // The moon's window stays square, at its point on the picture.
    use_custom_viewport_ = true;
    if (!moon) {
        return;
    }
    const engine::SMoonIndicator &look = getMoonIndicator();
    viewport_x_ = area.getX(picture.moon->x);
    viewport_y_ = area.getY(picture.moon->y);
    viewport_width_ = area.getHeight(look.window_size);
    viewport_height_ = area.getHeight(look.window_size);
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

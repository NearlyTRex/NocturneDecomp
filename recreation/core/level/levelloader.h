#pragma once

#include "common/fwd.h"
#include "core/color3i.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/fwd.h"
#include "core/loadingscreen.h"
#include "engine/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <string_view>

namespace nocturne::core {

// What the loading screen loads from and draws with.
struct SLevelLoaderOwners {
    const engine::CDosIo &dosio;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    engine::C2d &two_d;
    const engine::CMatrix &matrix;
    engine::CDemonRenderer &renderer;
    CDemonSet &set;
    const CDFont &fonts;
    common::CWatcomRandom &crt_random;
};

// The loading screen: the moon, lit by a light that swings round it as loading goes on, behind
// a glow that fades in, either over the whole screen or in a window of its own, with a line of
// status text under it when it has the screen.
class CLevelLoader : public ILoadingScreen {
public:
    // show's image_variant for one of the first three pictures, picked at random.
    static constexpr int kRandomImage = -1;

    explicit CLevelLoader(const SLevelLoaderOwners &owners);

    void reset();
    // Starts a loading screen that is done after total_frames updates. The moon has the cleared
    // screen to itself, or a window in the top-right corner when use_custom_viewport is set.
    // image_variant 0 to 3 draws that picture instead and puts the moon in its window;
    // kRandomImage picks one when the moon would have had the screen.
    void show(int total_frames, bool use_custom_viewport, int image_variant);
    // Without a window the step's text is centred in a black box near the bottom.
    void update(std::string_view text, bool clear_screen) override;
    void cleanup();

private:
    struct SPicture {
        std::string_view name;
        // Where the moon goes in it, and its colour.
        int x = 0;
        int y = 0;
        CColor3i color;
    };

    void renderMoon();
    void renderGlow();
    void drawStatus(std::string_view text, int window_width, int window_height);

    SLevelLoaderOwners owners_;
    CKeyFramedModel moon_;
    platform::SMRGLTextureBasic glow_texture_;
    bool enabled_ = false;
    int current_frame_ = 0;
    int total_frames_ = 0;
    bool use_custom_viewport_ = false;
    int viewport_x_ = 0;
    int viewport_y_ = 0;
    int viewport_width_ = 0;
    int viewport_height_ = 0;
    // The moon's and the glow's colour, each channel 0 to 0xff00.
    CColor3i color_;
};

} // namespace nocturne::core

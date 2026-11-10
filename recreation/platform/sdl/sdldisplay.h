#pragma once

#include "common/video/framebuffer.h"
#include "common/video/presentation.h"
#include "platform/display.h"
#include "platform/fwd.h"
#include "platform/gl/glapi.h"
#include "platform/gl/glframepresenter.h"
#include "platform/gl/glquad.h"
#include "platform/gl/glupscaler.h"
#include "platform/lograte.h"
#include "platform/upscaler.h"

#include <cstdint>
#include <memory>
#include <optional>
#include <vector>

struct SDL_GLContextState;
using SDL_DisplayID = std::uint32_t;

namespace nocturne::platform::sdl {

class CSdlWindow;

// Owns the window's OpenGL 3.3 core context, which the hardware renderer shares. Each present
// uploads the frame to a texture, draws it as one letterboxed quad through the upscaler and
// swaps; a hardware frame is drawn the same way from the renderer's scene.
class CSdlDisplay final : public IDisplay, public gl::IGlFramePresenter {
public:
    CSdlDisplay(CSdlWindow &window, ILog &log);
    ~CSdlDisplay() override;
    CSdlDisplay(const CSdlDisplay &) = delete;
    CSdlDisplay &operator=(const CSdlDisplay &) = delete;

    [[nodiscard]] bool setDisplayMode(int width, int height, int bits_per_pixel) override;
    [[nodiscard]] common::SPixelFormat getPixelFormat() override;
    void setPalette(std::span<const std::uint8_t, 768> rgb) override;
    void present(std::span<const std::byte> pixels, int pitch) override;
    void setWindowMode(EWindowMode mode) override;
    [[nodiscard]] EWindowMode getWindowMode() const override;
    void setWindowSize(int width, int height) override;
    void setDisplayIndex(int index) override;
    [[nodiscard]] int getDisplayIndex() const override;
    void setFullscreenSize(EFullscreenSize size) override;
    [[nodiscard]] EFullscreenSize getFullscreenSize() const override;
    void setRefreshRate(int hertz) override;
    [[nodiscard]] int getRefreshRate() const override;
    void setVsync(bool on) override;
    [[nodiscard]] bool getVsync() const override;
    [[nodiscard]] std::vector<SDisplayInfo> getDisplays() const override;
    void setUpscaler(EUpscaler upscaler) override;
    [[nodiscard]] EUpscaler getUpscaler() const override;
    void setUpscalerSharpness(int percent) override;
    [[nodiscard]] int getUpscalerSharpness() const override;
    void setAntialias(EAntialias antialias) override;
    [[nodiscard]] EAntialias getAntialias() const override;
    void setWidescreen(common::EWidescreen widescreen) override;
    [[nodiscard]] common::EWidescreen getWidescreen() const override;
    void presentScene(GLuint texture, int width, int height) override;
    [[nodiscard]] std::optional<common::SSceneReframe> getSceneReframe(int width,
                                                                       int height) const override;

    // The context's GL, for the hardware renderer to draw with.
    [[nodiscard]] const gl::SGlApi &getGlApi() const;

private:
    struct SContextDeleter {
        void operator()(SDL_GLContextState *context) const;
    };

    // The chosen display's id, or the window's when SDL lists none.
    [[nodiscard]] SDL_DisplayID getDisplayId() const;
    void applyWindowMode();
    void applyWindowSize();
    void applyExclusiveMode();
    void applyVsync() const;
    void placeOnDisplay();
    void drawFrame(GLuint texture, common::SExtent frame, gl::EQuadRows rows);

    CSdlWindow &window_;
    ILog &log_;
    CLogRate unconverted_rate_{4, 300};
    std::unique_ptr<SDL_GLContextState, SContextDeleter> context_;
    gl::SGlApi gl_;
    // Built once the context is current.
    std::unique_ptr<gl::CGlQuad> quad_;
    std::unique_ptr<gl::CGlUpscaler> upscaler_;
    GLuint texture_ = 0;
    common::CFrameConverter converter_;
    common::EPixelLayout layout_ = common::EPixelLayout::Indexed8;
    common::SExtent logical_;
    // The player's windowed size; empty until chosen, when the first mode's size stands in.
    common::SExtent window_size_;
    EWindowMode window_mode_ = EWindowMode::Windowed;
    int display_index_ = 0;
    EFullscreenSize fullscreen_size_ = EFullscreenSize::Game;
    int refresh_rate_ = kRefreshRateAuto;
    bool vsync_ = true;
    EUpscaler upscaler_mode_ = EUpscaler::Standard;
    int upscaler_sharpness_ = kUpscalerSharpnessDefault;
    EAntialias antialias_ = EAntialias::Off;
    common::EWidescreen widescreen_ = common::EWidescreen::PanAndScan;
};

} // namespace nocturne::platform::sdl

#pragma once

#include "common/video/framebuffer.h"
#include "common/video/presentation.h"
#include "platform/display.h"
#include "platform/sdl/glapi.h"

#include <memory>

struct SDL_GLContextState;

namespace nocturne::platform::sdl {

class CSdlWindow;

// Owns the window's OpenGL 3.3 core context, which the hardware renderer shares. Each present
// uploads the frame to a texture, draws it as one letterboxed quad and swaps.
class CSdlDisplay final : public IDisplay {
public:
    explicit CSdlDisplay(CSdlWindow &window);
    ~CSdlDisplay() override;
    CSdlDisplay(const CSdlDisplay &) = delete;
    CSdlDisplay &operator=(const CSdlDisplay &) = delete;

    [[nodiscard]] bool setDisplayMode(int width, int height, int bits_per_pixel) override;
    [[nodiscard]] common::SPixelFormat getPixelFormat() override;
    void setPalette(std::span<const std::uint8_t, 768> rgb) override;
    void present(std::span<const std::byte> pixels, int pitch) override;
    void setWindowMode(EWindowMode mode) override;
    void setWindowSize(int width, int height) override;

private:
    struct SContextDeleter {
        void operator()(SDL_GLContextState *context) const;
    };

    void buildQuad();
    void applyWindowSize();
    void drawFrame();

    CSdlWindow &window_;
    std::unique_ptr<SDL_GLContextState, SContextDeleter> context_;
    SGlApi gl_;
    GLuint program_ = 0;
    GLuint vertex_buffer_ = 0;
    GLuint vertex_array_ = 0;
    GLuint texture_ = 0;
    common::CFrameConverter converter_;
    common::EPixelLayout layout_ = common::EPixelLayout::Indexed8;
    common::SExtent logical_;
    // The player's windowed size; empty until chosen, when the first mode's size stands in.
    common::SExtent window_size_;
    EWindowMode window_mode_ = EWindowMode::Windowed;
};

} // namespace nocturne::platform::sdl

#include "engine/special/special.h"

#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/screendevice.h"
#include "engine/texture/currenttexture.h"
#include "platform/renderer.h"

#include <algorithm>
#include <cstddef>
#include <cstring>
#include <span>
#include <utility>

namespace nocturne::engine {
namespace {

// The hardware renderer has no 8-bit mode; an 8-bit game mode gets 16 bits from it.
constexpr int kMinimumRendererDepth = 16;

std::size_t getRowBytes(const IScreenDevice &screen) {
    return static_cast<std::size_t>((screen.getWindowWidth() * screen.getBitsPerPixel()) / 8);
}

} // namespace

CSpecial::CSpecial(platform::IRenderer &renderer, IScreenDevice &screen, const C2d &two_d,
                   const CMatrix &matrix, const C3d &three_d, SCurrentTexture &current_texture)
    : renderer_(renderer), screen_(screen), two_d_(two_d), matrix_(matrix), three_d_(three_d),
      current_texture_(current_texture) {}

bool CSpecial::getUseDirect3D() const {
    return use_direct3d_;
}

void CSpecial::setUseDirect3D(bool use_direct3d) {
    use_direct3d_ = use_direct3d;
}

bool CSpecial::getUseExternalRenderer() const {
    return use_external_renderer_;
}

int CSpecial::getCurrentGraphicsBoard() const {
    return current_graphics_board_;
}

void CSpecial::setCurrentGraphicsBoard(int board) {
    current_graphics_board_ = board;
}

// The original cleared in 32-byte strides, past the end of a row that isn't a whole number of
// them, and cleared one row of a zero-height mode.
// nocedit 0x005b3e70
void CSpecial::clearScreen() {
    if (use_external_renderer_) {
        clear();
        return;
    }
    const std::size_t row_bytes = getRowBytes(screen_);
    const std::span<void *> rows = screen_.getScreenRows();
    for (int y = 0; y < screen_.getWindowHeight(); ++y) {
        std::memset(rows[static_cast<std::size_t>(y)], 0, row_bytes);
    }
}

// The original cleared in 16-pixel strides from the clip's top row, past the last row's end when
// the rows didn't fill a whole stride, and one stride of an empty clip.
// nocedit 0x005b3ed4
void CSpecial::clearZBufferNative() {
    const SClipRect clip = two_d_.getClipRect();
    const auto width = static_cast<std::size_t>(screen_.getWindowWidth());
    const std::span<std::uint32_t *> rows = screen_.getZBufferRows();
    for (int y = clip.top; y <= clip.bottom; ++y) {
        std::fill_n(rows[static_cast<std::size_t>(y)], width, 0U);
    }
}

// Loading the renderer DLL and binding its entry points is the adapter's; what stays is the
// game's switch and the state it shares. The original also shared the editor's drawing colour,
// which the game never sets.
// deferred: sharing the light level, with the scene camera's fog setup
// deferred: sharing the rendering quality, with 3d.c's setRenderingQuality
// nocedit 0x005b6750
int CSpecial::loadExternalRenderer() {
    if (!use_direct3d_) {
        return 0;
    }
    loaded_ = true;
    fillBridge();
    if (renderer_.init(&bridge_) == 0) {
        // The original left the renderer marked loaded, so the next mode set used it uninitialised.
        loaded_ = false;
        use_direct3d_ = false;
        return 0;
    }
    selectCard(card_index_);
    return 1;
}

// A field left null reads as unshared, and the renderer takes its default.
void CSpecial::fillBridge() {
    bridge_ = {};
    SColorChannels &channels = screen_.getColorChannels();
    bridge_.red_bit_position = &channels.red.bit_position;
    bridge_.red_scale_factor = &channels.red.scale_factor;
    bridge_.red_dither_shift = &channels.red.dither_shift;
    bridge_.green_bit_position = &channels.green.bit_position;
    bridge_.green_scale_factor = &channels.green.scale_factor;
    bridge_.green_dither_shift = &channels.green.dither_shift;
    bridge_.blue_bit_position = &channels.blue.bit_position;
    bridge_.blue_scale_factor = &channels.blue.scale_factor;
    bridge_.blue_dither_shift = &channels.blue.dither_shift;
    bridge_.blend_mode = &three_d_.getBlendMode();
    bridge_.current_alpha = &three_d_.getCurrentAlphaValue();
    bridge_.texture_dimension = &current_texture_.dimension;
    bridge_.full_screen_quad_depth = &kFullScreenQuadDepth;
    bridge_.system_initialized = &kSystemInitialized;
    bridge_.processor_type = &processor_type_;
}

// nocedit 0x005b7340
int CSpecial::selectTextureFromPalette(platform::SMRGLTextureBasic &texture,
                                       std::span<std::uint8_t> palette) {
    return passCurrentTexture(&platform::IRenderer::selectTexture, texture, palette);
}

// nocedit 0x005b7380
int CSpecial::updateTextureFromPalette(platform::SMRGLTextureBasic &texture,
                                       std::span<std::uint8_t> palette) {
    return passCurrentTexture(&platform::IRenderer::updateTexture, texture, palette);
}

int CSpecial::passCurrentTexture(TextureEntry entry, platform::SMRGLTextureBasic &texture,
                                 std::span<std::uint8_t> palette) {
    if (!use_external_renderer_) {
        return 0;
    }
    const std::span<std::uint8_t> opacity = current_texture_.opacity;
    return (renderer_.*entry)(&texture, current_texture_.dimension, current_texture_.data.data(),
                              palette.data(), opacity.empty() ? nullptr : opacity.data());
}

// While locked, the rows are the renderer's image, in its depth.
// nocedit 0x005b7210
int CSpecial::lockFrame() {
    if (!use_external_renderer_ || renderer_.lockFrame() == 0) {
        return 0;
    }
    saved_bits_per_pixel_ = screen_.getBitsPerPixel();
    frame_locked_ = true;
    screen_.setBitsPerPixel(external_bits_per_pixel_);
    return 1;
}

// The lock flag stays set: it marks a frame drawn into the renderer's image, which the present
// then doesn't copy again.
// nocedit 0x005b7250
int CSpecial::unlockFrame() {
    if (!use_external_renderer_) {
        return 0;
    }
    screen_.setBitsPerPixel(saved_bits_per_pixel_);
    return renderer_.unlockFrame();
}

// The original also wrote a test pixel through the locked frame, into a result nothing read.
// nocedit 0x005b7460
int CSpecial::setResolutionAndColorTable(int width, int height, int bits_per_pixel) {
    bits_per_pixel = std::max(bits_per_pixel, kMinimumRendererDepth);
    if (!loaded_ && loadExternalRenderer() == 0) {
        return 0;
    }
    const std::span<void *> rows = screen_.getScreenRows();
    if (height < 0 || static_cast<std::size_t>(height) > rows.size() ||
        renderer_.setVideoMode2(width, height, bits_per_pixel, rows.data()) == 0) {
        use_external_renderer_ = false;
        return 0;
    }
    renderer_.setColorTable16(two_d_.getSourcePaletteData().data(),
                              screen_.getColorTable16().data());
    screen_.convertPaletteToDirectColor();
    renderer_.setFogColor(fog_red_, fog_green_, fog_blue_);
    use_external_renderer_ = true;
    external_bits_per_pixel_ = bits_per_pixel;
    lockFrame();
    unlockFrame();
    return 1;
}

// nocedit 0x005b75e0
int CSpecial::drawPolygon(std::span<platform::SRenderVertex> vertices, int render_flags) {
    if (!use_external_renderer_) {
        return 0;
    }
    return renderer_.drawPolygon(vertices.data(), static_cast<int>(vertices.size()), render_flags);
}

// nocedit 0x005b7610
int CSpecial::drawPolygon2(std::span<platform::SRenderVertex *> vertices, int render_flags) {
    if (!use_external_renderer_) {
        return 0;
    }
    return renderer_.drawPolygon2(vertices.data(), static_cast<int>(vertices.size()), render_flags);
}

// The original drew each polygon through drawPolygon2 for a renderer without a list entry; every
// renderer here has one.
// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x005b7640
int CSpecial::drawPolyList(platform::SRenderVertex *vertex_buffer,
                           std::span<const platform::SMRGLPrimitiveQuad *const> polygons,
                           int render_flags) {
    if (!use_external_renderer_) {
        return 0;
    }
    return renderer_.drawPolyList(vertex_buffer, polygons.data(), static_cast<int>(polygons.size()),
                                  render_flags);
}

// nocedit 0x005b7a30
int CSpecial::clear() {
    if (!use_external_renderer_) {
        return 0;
    }
    return renderer_.clear();
}

// Software drawing since the last present goes into the renderer's image first. The renderer
// usually points the rows at that image already, so the copy may run a row onto itself.
// The original's skip_buffer_copy parameter, which skipped the copy, is not in retail.
// nocedit 0x005b7c30
void CSpecial::presentToExternalRenderer() {
    if (!use_external_renderer_) {
        return;
    }
    if (!frame_locked_) {
        const std::size_t row_bytes = getRowBytes(screen_);
        const std::span<void *> rows = screen_.getScreenRows();
        const auto *source = static_cast<const std::byte *>(rows[0]);
        screen_.openScreenDevice();
        lockFrame();
        for (std::size_t y = 0; std::cmp_less(y, screen_.getWindowHeight()); ++y) {
            std::memmove(rows[y], source + (y * row_bytes), row_bytes);
        }
        unlockFrame();
        screen_.closeScreenDevice();
    }
    frame_locked_ = false;
    renderer_.toggle();
}

// nocedit 0x005b7d90
int CSpecial::selectCard(int card_index) {
    if (!loaded_) {
        return 0;
    }
    return renderer_.selectCard(card_index);
}

} // namespace nocturne::engine

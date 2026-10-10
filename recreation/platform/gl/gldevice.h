#pragma once

#include "common/render/polygonbatch.h"
#include "common/video/framebuffer.h"
#include "platform/gl/glapi.h"
#include "platform/gl/glmasterdepth.h"
#include "platform/gl/glpipeline.h"
#include "platform/gl/glquad.h"
#include "platform/gl/glscenetarget.h"
#include "platform/gl/gltexturecache.h"

#include <cstddef>
#include <span>
#include <vector>

namespace nocturne::platform::gl {

class IGlFramePresenter;

// The hardware frame and the CPU image the engine shares with it. Geometry renders into the
// persistent scene target; the engine then locks the frame, draws its 2D over the same pixels
// through its row array, and unlocks, which puts the composite back in the target.
class CGlDevice {
public:
    // Above 480 lines the engine composites into a buffer of this fixed size instead of the
    // frame, and hands it over to be stretched.
    static constexpr int kHoldWidth = 640;
    static constexpr int kHoldHeight = 480;
    // Indices are 16-bit; half the addressable vertices is past any run sharing one state.
    static constexpr std::size_t kBatchVertices = 32768;
    static constexpr std::size_t kBatchIndices = 98304;

    CGlDevice(const SGlApi &gl, IGlFramePresenter &presenter);

    // 16 or 32 bits per pixel. The engine keeps addressing the frame through scanlines, which
    // is pointed at its rows. False for another depth or a target GL cannot complete.
    [[nodiscard]] bool setMode(int width, int height, int bits_per_pixel,
                               std::span<void *> scanlines);
    [[nodiscard]] int getWidth() const;
    [[nodiscard]] int getHeight() const;
    // Zero until a mode is set.
    [[nodiscard]] int getBitsPerPixel() const;

    // Geometry is taken only inside a scene, and a scene only once a mode is set.
    [[nodiscard]] bool beginScene();
    [[nodiscard]] bool endScene();
    [[nodiscard]] bool isInScene() const;

    // Where the draw entry points add polygons; flush draws them.
    [[nodiscard]] common::CPolygonBatch &getBatch();
    void flush();
    [[nodiscard]] CGlPipeline &getPipeline();
    [[nodiscard]] CGlTextureCache &getTextures();
    // Nests, so a pass inside a pass leaves the outer one standing.
    void beginReflectionPass();
    void endReflectionPass();
    // Binds for the draws that follow, sampled as the last applied state asks.
    void bindTexture(GLuint texture);

    // Reads the target into the frame image if anything was drawn since the two last agreed.
    // An open scene ends first, so its geometry has landed.
    [[nodiscard]] bool lockFrame();
    [[nodiscard]] bool unlockFrame();
    [[nodiscard]] bool isFrameLocked() const;
    // Points the engine's rows at the hold buffer, and back at the frame on unlock, which
    // stretches the hold buffer over the target.
    [[nodiscard]] bool lockHoldBuffer();
    [[nodiscard]] bool unlockHoldBuffer();

    // Colour only; the engine often keeps depth across a colour clear.
    void clearColor();
    void clearDepth();
    void clearDepthBox(const SDepthRect &rect);
    [[nodiscard]] bool saveDepth(int slot);
    [[nodiscard]] bool restoreDepth(int slot, const SDepthRect &rect);

    void present();

private:
    void finishScene();
    // After the device itself drew with GL: neither the pipeline nor the texture binding is
    // what the caches say.
    void invalidate();
    void pointEngineAt(std::span<void *const> rows);
    [[nodiscard]] bool hasMode() const;

    const SGlApi &gl_;
    IGlFramePresenter &presenter_;
    CGlQuad quad_;
    CGlPipeline pipeline_;
    CGlTextureCache textures_;
    CGlSceneTarget scene_;
    CGlMasterDepth depth_;
    common::CPolygonBatch batch_;
    common::EPixelLayout layout_ = common::EPixelLayout::Bgra8888;
    int width_ = 0;
    int height_ = 0;
    int pitch_ = 0;
    std::vector<std::byte> image_;
    std::vector<void *> rows_;
    std::vector<std::byte> hold_;
    std::vector<void *> hold_rows_;
    std::span<void *> engine_rows_;
    bool in_scene_ = false;
    bool frame_locked_ = false;
    // The target holds drawing the frame image lacks. Reading back without it would erase the
    // 2D the engine drew into the image since the last unlock, and a screen with no 3D, the
    // pause menu among them, would never appear.
    bool target_ahead_ = false;
    int reflection_depth_ = 0;
};

} // namespace nocturne::platform::gl

#pragma once

#include "platform/fwd.h"
#include "platform/gl/glapi.h"

#include <array>

namespace nocturne::platform::gl {

// Top-down pixels, right and bottom exclusive.
struct SDepthRect {
    int left = 0;
    int top = 0;
    int right = 0;
    int bottom = 0;
};

// Depth kept aside in numbered slots. The engine renders the static world once, saves its
// depth, and restores the region that moved on the frames that follow instead of clearing.
class CGlMasterDepth {
public:
    // The engine takes its slot count from the INI, and the shipped configuration asks for
    // fewer.
    static constexpr int kSlots = 8;

    CGlMasterDepth(const SGlApi &gl, ILog &log);
    ~CGlMasterDepth();
    CGlMasterDepth(const CGlMasterDepth &) = delete;
    CGlMasterDepth &operator=(const CGlMasterDepth &) = delete;

    // The scene framebuffer's whole depth into the slot. Leaves the scene bound.
    [[nodiscard]] bool save(int slot, GLuint scene, int width, int height);
    // A saved slot's depth over the scene's in rect; scene_height turns it bottom-up. An empty
    // rect is nothing to do, which the engine asks for when nothing moved. Leaves the scene
    // bound.
    [[nodiscard]] bool restore(int slot, GLuint scene, const SDepthRect &rect, int scene_height);
    // The scene's whole depth set aside across an overlay pass, and put back after it. Kept
    // apart from the slots, so nothing the engine saves or restores reaches it. Each leaves the
    // scene bound.
    [[nodiscard]] bool hold(GLuint scene, int width, int height);
    [[nodiscard]] bool giveBack(GLuint scene, int width, int height);

private:
    struct SSlot {
        GLuint framebuffer = 0;
        GLuint depth = 0;
        int width = 0;
        int height = 0;
    };

    // Made, or remade at a new size. False when GL cannot complete it.
    [[nodiscard]] bool prepare(SSlot &saved, GLuint scene, int width, int height);
    // The whole depth from one framebuffer to the other, then the scene bound.
    void copy(GLuint from, GLuint to, GLuint scene, int width, int height) const;
    void destroy(SSlot &slot) const;

    const SGlApi &gl_;
    ILog &log_;
    std::array<SSlot, kSlots> slots_{};
    SSlot held_;
};

} // namespace nocturne::platform::gl

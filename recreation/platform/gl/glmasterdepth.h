#pragma once

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

    explicit CGlMasterDepth(const SGlApi &gl);
    ~CGlMasterDepth();
    CGlMasterDepth(const CGlMasterDepth &) = delete;
    CGlMasterDepth &operator=(const CGlMasterDepth &) = delete;

    // The scene framebuffer's whole depth into the slot. Leaves the scene bound.
    [[nodiscard]] bool save(int slot, GLuint scene, int width, int height);
    // A saved slot's depth over the scene's in rect; scene_height turns it bottom-up. An empty
    // rect is nothing to do, which the engine asks for when nothing moved. Leaves the scene
    // bound.
    [[nodiscard]] bool restore(int slot, GLuint scene, const SDepthRect &rect, int scene_height);

private:
    struct SSlot {
        GLuint framebuffer = 0;
        GLuint depth = 0;
        int width = 0;
        int height = 0;
    };

    [[nodiscard]] SSlot *prepare(int slot, GLuint scene, int width, int height);
    void destroy(SSlot &slot) const;

    const SGlApi &gl_;
    std::array<SSlot, kSlots> slots_{};
};

} // namespace nocturne::platform::gl

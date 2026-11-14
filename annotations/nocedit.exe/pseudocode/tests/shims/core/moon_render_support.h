#pragma once

// =============================================================================
// MOON RENDER SUPPORT — what the moon backdrop is drawn through
// =============================================================================
//
// The renderer, set, models, courses and the front end's layout and scene,
// stood in for and recording what they were asked in the order they were asked
// it; a framebuffer of 32-bit cells; the set, the bats and the cloud texture
// as the game's globals. reset() puts it back.

#include "nocturne.h"

#include <string>
#include <vector>

namespace moon_render_support {

// One model drawn, and the set's lighting when it was.
struct Model {
    const CKeyFramedModel *model;
    int frame;
    int flags;
    CVector3i light;
    int ambient;
    int rendering_mode;
};

struct Stand {
    std::vector<std::string> calls;       // each routine reached, in order
    std::vector<Model> models;            // prepareForRender
    std::vector<float> fields_of_view;    // setProjectionScale
    std::vector<CVector3f> vertices;      // processCameraRelativeVertex
    std::vector<float> bat_yaws;          // applyScaledTransform's euler.y
    std::vector<int> flat_colours;        // setFlatColor's light scale
    std::vector<int> blend_modes;         // setBlendMode
    std::vector<int> logos;               // nocturne_layout_display: frame, x, y and alpha
    float widened = 1.0f;                 // what nocturne_menu_scene_begin multiplies by
    NocturneLayout layout = {1.0f, 0, 0}; // nocturne_layout

    void reset();
};

extern Stand stand;

// A framebuffer `width` x `height` at `bits` per pixel, every cell `fill`.
void screen(int width, int height, int bits, unsigned fill);
unsigned pixel(int x, int y);

} // namespace moon_render_support

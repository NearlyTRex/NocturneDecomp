#pragma once

namespace nocturne::platform {

// Addresses of engine state the renderer reads as it draws, and of the colour-table description
// it fills in. The values behind them keep changing; a null member is state the engine did not
// share.
struct CExternalRendererBridge {
    // Written by setColorTable16, for the engine's 2D in the frame's pixel format.
    int *red_bit_position = nullptr;
    int *red_scale_factor = nullptr;
    int *red_dither_shift = nullptr;
    int *green_bit_position = nullptr;
    int *green_scale_factor = nullptr;
    int *green_dither_shift = nullptr;
    int *blue_bit_position = nullptr;
    int *blue_scale_factor = nullptr;
    int *blue_dither_shift = nullptr;
    // 0 blends against the destination, 1 adds to it.
    int *blend_mode = nullptr;
    // A light level, 8.8 biased by one unit.
    int *current_lighting = nullptr;
    // 0..255.
    int *current_alpha = nullptr;
    // Its low byte is the palette index a flat untextured draw takes its colour from.
    int *console_text_color = nullptr;
    // The size the engine is working the selected texture at.
    int *texture_dimension = nullptr;
    // The draw distance depth is normalised against.
    int *full_screen_quad_depth = nullptr;
    // Read as the bilinear filtering switch.
    int *system_initialized = nullptr;
    // 0 puts depth on the reciprocal curve.
    int *processor_type = nullptr;
    // Read as the mipmapping switch.
    int *rendering_quality = nullptr;
};

} // namespace nocturne::platform

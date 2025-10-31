// CORRECTED SMRGLModelBounds Structure
// Based on assembly analysis of engine_model.c_getMRGLBounds_FUN_00528140
//
// Analysis Summary:
// - Function copies 13 dwords (52 bytes) from ESP+0xB8 to output
// - Original struct had min/max in wrong order
// - scale_factor was misidentified (actually radius_scaled)
// - Last 3 fields are: radius_scaled, extent_x, extent_y, extent_z
//
// Assembly evidence:
//   Line 401: ESP+0xB8 = max_x_scaled
//   Line 410: ESP+0xBC = max_y_scaled
//   Line 416: ESP+0xC0 = max_z_scaled
//   Line 378: ESP+0xC4 = min_x_scaled
//   Line 387: ESP+0xC8 = min_y_scaled
//   Line 393: ESP+0xCC = min_z_scaled
//   Line 454: ESP+0xD0 = center_x_scaled
//   Line 468: ESP+0xD4 = center_y_scaled
//   Line 480: ESP+0xD8 = center_z_scaled
//   Line 584: ESP+0xDC = radius_scaled (from SQRT of squared extents)
//   Line 487/500: ESP+0xE0 = extent_x (max absolute value on X axis)
//   Line 510/525: ESP+0xE4 = extent_y (max absolute value on Y axis)
//   Line 534/548: ESP+0xE8 = extent_z (max absolute value on Z axis)
//
// Note: scale_factor (ESP+0x134) is used during calculation but NOT stored in output!
//       It equals (0x7FFFFFFF / vertex_count) * 2
//       All scaled values are computed by: value * scale_factor >> 16

#pragma once

// Structure: SMRGLModelBounds
// Size: 0x34 (52 bytes)
// Purpose: Bounding box information for MRGL models in scaled integer coordinates
typedef struct SMRGLModelBounds {
    int max_x_scaled;    // 0x00 - Maximum X coordinate (scaled)
    int max_y_scaled;    // 0x04 - Maximum Y coordinate (scaled)
    int max_z_scaled;    // 0x08 - Maximum Z coordinate (scaled)
    int min_x_scaled;    // 0x0C - Minimum X coordinate (scaled)
    int min_y_scaled;    // 0x10 - Minimum Y coordinate (scaled)
    int min_z_scaled;    // 0x14 - Minimum Z coordinate (scaled)
    int center_x_scaled; // 0x18 - Center X coordinate (scaled)
    int center_y_scaled; // 0x1C - Center Y coordinate (scaled)
    int center_z_scaled; // 0x20 - Center Z coordinate (scaled)
    int radius_scaled;   // 0x24 - Bounding sphere radius (scaled)
    int extent_x;        // 0x28 - Half-width along X axis (always positive)
    int extent_y;        // 0x2C - Half-width along Y axis (always positive)
    int extent_z;        // 0x30 - Half-width along Z axis (always positive)
} SMRGLModelBounds;

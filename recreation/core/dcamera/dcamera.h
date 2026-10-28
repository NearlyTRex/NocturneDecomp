#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

void initializeCoronaBuffers();
void renderCoronaDepthScanline(int scanline_y, engine::SSoftwareEdge *right,
                               engine::SSoftwareEdge *left);
void renderVolumetricLightScanline(int scanline_y, engine::SSoftwareEdge *right,
                                   engine::SSoftwareEdge *left);
void renderFlatColorScanline(int scanline_y, engine::SSoftwareEdge *right,
                             engine::SSoftwareEdge *left);
// From a .SET file of the version; files before 26 had no temperature, and get 50.
void loadCameraFog(SFog &fog, common::CTextScanner &scanner, int file_version);

} // namespace nocturne::core

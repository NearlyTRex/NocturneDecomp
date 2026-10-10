#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstdio>

namespace nocturne::core {

void staticInit();
void initializeCoronaBuffers();
void renderCoronaDepthScanline(int scanline_y, engine::SSoftwareEdge *right,
                               engine::SSoftwareEdge *left);
void renderVolumetricLightScanline(int scanline_y, engine::SSoftwareEdge *right,
                                   engine::SSoftwareEdge *left);
void renderFlatColorScanline(int scanline_y, engine::SSoftwareEdge *right,
                             engine::SSoftwareEdge *left);
void loadCameraFog(SFog *fog, std::FILE *file_handle, int file_version);

} // namespace nocturne::core

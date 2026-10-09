#pragma once

#include "common/fwd.h"

namespace nocturne::engine {

void setAmbientLightLevel(int light_level);
void setDirectionalLightVector(int dir_x, int dir_y, int dir_z);
int calculateLighting(int normal_x, int normal_y, int normal_z);
void calculateAndStoreVertexLight(int vertex_index, common::CVector3i *vertex_position);

} // namespace nocturne::engine

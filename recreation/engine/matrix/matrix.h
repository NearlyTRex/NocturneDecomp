#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"

namespace nocturne::engine {

void initializeTrigTables();
void doNothing();
int interpolatedSin(int angle);
int interpolatedCos(int angle);
void invertTransformMatrix();
void transformToCache(int cacheIndex, common::CVector3i *inputPoint);
void projectCachedPoint(int cacheIndex);
void projectTransformedPoint(SProjectedVertex *point);
void projectCachedPointUnchecked(int cache_index);
void matrixPushAndTransform(int rot_x, int rot_y, int rot_z, int translate_x, int translate_y,
                            int translate_z);
void matrixPush();
void pop();
common::CVector3i *normalizeVector3DFixed(common::CVector3i *input_vector,
                                          common::CVector3i *output_vector);
common::CVector3i *normalizeVector3DFloat(common::CVector3i *input_vector,
                                          common::CVector3i *output_vector);
void setCameraOrigin(int x, int y, int z);
void setCameraRotation(int pitch, int yaw, int roll);
void getCameraOrigin(common::CVector3i *output);
void getCameraRotation(common::CVector3i *output);
void pushViewport(int x, int y, int width, int height);
void popViewport();

} // namespace nocturne::engine

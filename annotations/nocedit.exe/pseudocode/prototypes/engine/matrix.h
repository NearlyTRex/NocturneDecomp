#pragma once

// Function prototypes for engine/matrix.cpp
// Generated from Ghidra function signatures

// Original: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
void initializeTrigTables(void);

// Original: engine_matrix.c_doNothing_FUN_0050c5b0
// Address: 0050c5b0
void doNothing(void);

// Original: engine_matrix.c_interpolatedSin_FUN_0050c5c0
// Address: 0050c5c0
int interpolatedSin(ushort angle);

// Original: engine_matrix.c_interpolatedCos_FUN_0050c600
// Address: 0050c600
int interpolatedCos(ushort angle);

// Original: engine_matrix.c_invertTransformMatrix_FUN_0050c640
// Address: 0050c640
void invertTransformMatrix(void);

// Original: engine_matrix.c_buildRotationMatrix_FUN_0050c920
// Address: 0050c920
void buildRotationMatrix(ushort pitch, ushort yaw, ushort roll);

// Original: engine_matrix.c_transformWorldToView_FUN_0050cc40
// Address: 0050cc40
void transformWorldToView(int * input_coords, int * output_coords);

// Original: engine_matrix.c_calculateTransformedZ_FUN_0050cd10
// Address: 0050cd10
int calculateTransformedZ(int * input_coords);

// Original: engine_matrix.c_transformToCache_FUN_0050cd70
// Address: 0050cd70
void transformToCache(int cacheIndex, CVector3i * inputPoint);

// Original: engine_matrix.c_projectCachedPoint_FUN_0050cda0
// Address: 0050cda0
void projectCachedPoint(int cacheIndex);

// Original: engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
// Address: 0050cdc0
void projectTransformedPoint(SProjectedVertex * point);

// Original: engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
// Address: 0050ce60
void projectCachedPointUnchecked(int cacheIndex);

// Original: engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
// Address: 0050cee0
void matrixPushAndTransform(ushort rotX, ushort rotY, ushort rotZ, int translateX, int translateY, int translateZ);

// Original: engine_matrix.c_matrixPush_FUN_0050d620
// Address: 0050d620
void matrixPush(void);

// Original: engine_matrix.c_pop_FUN_0050d720
// Address: 0050d720
void pop(void);

// Original: engine_matrix.c_calculate3DDistance_FUN_0050d830
// Address: 0050d830
int calculate3DDistance(int x1, int y1, int z1, int x2, int y2, int z2);

// Original: engine_matrix.c_integerSquareRoot_FUN_0050d890
// Address: 0050d890
int integerSquareRoot(int value);

// Original: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
// Address: 0050d970
void normalizeVector3DFixed(CVector3i vector);

// Original: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
// Address: 0050d9f0
CVector3i * normalizeVector3DFloat(CVector3i * inputVector);

// Original: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
// Address: 0050dad0
int vectorLength3DToInt(CVector3i * vector_ptr);

// Original: engine_matrix.c_matrixPushAndTransform_FUN_0050db00
// Address: 0050db00
void matrixPushAndTransform(int rotation_x, int rotation_y, int rotation_z);

// Original: engine_matrix.c_setCameraOrigin_FUN_0050e270
// Address: 0050e270
void setCameraOrigin(int x, int y, int z);

// Original: engine_matrix.c_setCameraRotation_FUN_0050e290
// Address: 0050e290
void setCameraRotation(ushort pitch, ushort yaw, ushort roll);

// Original: engine_matrix.c_getCameraOrigin_FUN_0050e2c0
// Address: 0050e2c0
void getCameraOrigin(CVector3i * output);

// Original: engine_matrix.c_getCameraRotation_FUN_0050e2f0
// Address: 0050e2f0
void getCameraRotation(CVector3i * output);

// Original: engine_matrix.c_pushViewport_FUN_0050e320
// Address: 0050e320
void pushViewport(int x, int y, int width, int height);

// Original: engine_matrix.c_popViewport_FUN_0050e480
// Address: 0050e480
void popViewport(CDemonRenderer * this_ptr);

// Original: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
int projectToScreen(int input_value);

// Original: engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640
// Address: 0050e640
void pushMatrixRelativeOffset(int offset_x, int offset_y, int offset_z);

// Original: engine_matrix.c_popMatrixRelativeOffset_FUN_0050e6f0
// Address: 0050e6f0
void popMatrixRelativeOffset(void);

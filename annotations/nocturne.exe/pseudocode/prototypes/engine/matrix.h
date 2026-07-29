#pragma once

// Function prototypes for engine/matrix.cpp
// Generated from Ghidra function signatures

// Original: engine_matrix.c_initializeTrigTables_FUN_004cc9d0
// Address: 004cc9d0
void __cdecl initializeTrigTables(void);

// Original: engine_matrix.c_FUN_004cca50
// Address: 004cca50
void __cdecl FUN_004cca50(void);

// Original: engine_matrix.c_interpolatedSin_FUN_004cca60
// Address: 004cca60
int __cdecl interpolatedSin(int angle);

// Original: engine_matrix.c_interpolatedCos_FUN_004ccaa0
// Address: 004ccaa0
int __cdecl interpolatedCos(int angle);

// Original: engine_matrix.c_invertTransformMatrix_FUN_004ccae0
// Address: 004ccae0
void __cdecl invertTransformMatrix(void);

// Original: engine_matrix.c_buildRotationMatrix_FUN_004ccdc0
// Address: 004ccdc0
void __cdecl buildRotationMatrix(int pitch,int yaw,int roll);

// Original: engine_matrix.c_transformWorldToView_FUN_004cd0e0
// Address: 004cd0e0
void transformWorldToView(int *param_1);

// Original: engine_matrix.c_calculateTransformedZ_FUN_004cd1b0
// Address: 004cd1b0
int __cdecl calculateTransformedZ(int *input_coords);

// Original: engine_matrix.c_transformToCache_FUN_004cd210
// Address: 004cd210
void __cdecl transformToCache(int cacheIndex,CVector3i *inputPoint);

// Original: engine_matrix.c_projectCachedPoint_FUN_004cd240
// Address: 004cd240
void __cdecl projectCachedPoint(int cacheIndex);

// Original: engine_matrix.c_projectTransformedPoint_FUN_004cd260
// Address: 004cd260
void __cdecl projectTransformedPoint(SProjectedVertex *point);

// Original: engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
// Address: 004cd300
void __cdecl projectCachedPointUnchecked(int cache_index);

// Original: engine_matrix.c_matrixPushAndTransform_FUN_004cd380
// Address: 004cd380
void __cdecl matrixPushAndTransform(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z);

// Original: engine_matrix.c_matrixPush_FUN_004cdac0
// Address: 004cdac0
void __cdecl matrixPush(void);

// Original: engine_matrix.c_pop_FUN_004cdbc0
// Address: 004cdbc0
void __cdecl pop(void);

// Original: engine_matrix.c_calculate3DDistance_FUN_004cdcd0
// Address: 004cdcd0
int __cdecl calculate3DDistance(int x1,int y1,int z1,int x2,int y2,int z2);

// Original: engine_matrix.c_integerSquareRoot_FUN_004cdd30
// Address: 004cdd30
int __cdecl integerSquareRoot(int value);

// Original: engine_matrix.c_normalizeVector3DFixed_FUN_004cde10
// Address: 004cde10
void normalizeVector3DFixed(int *param_1);

// Original: engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
// Address: 004cde90
int * normalizeVector3DFloat(int *param_1);

// Original: engine_matrix.c_vectorLength3DToInt_FUN_004cdf70
// Address: 004cdf70
int __cdecl vectorLength3DToInt(CVector3i *vector_ptr);

// Original: engine_matrix.c_FUN_004cdfa0
// Address: 004cdfa0
void FUN_004cdfa0(int param_1,undefined4 param_2,int param_3);

// Original: engine_matrix.c_setCameraOrigin_FUN_004ce710
// Address: 004ce710
void __cdecl setCameraOrigin(int x,int y,int z);

// Original: engine_matrix.c_setCameraRotation_FUN_004ce730
// Address: 004ce730
void __cdecl setCameraRotation(int pitch,int yaw,int roll);

// Original: engine_matrix.c_getCameraOrigin_FUN_004ce760
// Address: 004ce760
void __esi getCameraOrigin(CVector3i *output);

// Original: engine_matrix.c_getCameraRotation_FUN_004ce790
// Address: 004ce790
void __esi getCameraRotation(CVector3i *output);

// Original: engine_matrix.c_pushViewport_FUN_004ce7c0
// Address: 004ce7c0
void __cdecl pushViewport(int x,int y,int width,int height);

// Original: engine_matrix.c_popViewport_FUN_004ce920
// Address: 004ce920
void __cdecl popViewport(void);

// Original: engine_matrix.c_projectToScreen_FUN_004cea50
// Address: 004cea50
int __cdecl projectToScreen(int input_value);

// Original: engine_matrix.c_FUN_004ceae0
// Address: 004ceae0
void FUN_004ceae0(int param_1,int param_2,int param_3);

// Original: engine_matrix.c_FUN_004ceb90
// Address: 004ceb90
void FUN_004ceb90(void);

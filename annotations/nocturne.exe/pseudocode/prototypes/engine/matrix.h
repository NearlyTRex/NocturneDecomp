#pragma once

// Function prototypes for engine/matrix.cpp
// Generated from Ghidra function signatures

// Original: engine_matrix.c_initializeTrigTables_FUN_004cc9d0
// Address: 004cc9d0
undefined8 __cdecl initializeTrigTables(void);

// Original: engine_matrix.c_interpolatedSin_FUN_004cca60
// Address: 004cca60
int __cdecl interpolatedSin(uint param_1);

// Original: engine_matrix.c_interpolatedCos_FUN_004ccaa0
// Address: 004ccaa0
int interpolatedCos(uint param_1);

// Original: engine_matrix.c_invertTransformMatrix_FUN_004ccae0
// Address: 004ccae0
void __cdecl invertTransformMatrix(void);

// Original: engine_matrix.c_buildRotationMatrix_FUN_004ccdc0
// Address: 004ccdc0
void __cdecl buildRotationMatrix(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_matrix.c_transformWorldToView_FUN_004cd0e0
// Address: 004cd0e0
void transformWorldToView(int *param_1);

// Original: engine_matrix.c_transformToCache_FUN_004cd210
// Address: 004cd210
void __cdecl transformToCache(int param_1,undefined4 param_2);

// Original: engine_matrix.c_projectCachedPoint_FUN_004cd240
// Address: 004cd240
void __cdecl projectCachedPoint(int param_1);

// Original: engine_matrix.c_projectTransformedPoint_FUN_004cd260
// Address: 004cd260
void __cdecl projectTransformedPoint(int *param_1);

// Original: engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
// Address: 004cd300
void __cdecl projectCachedPointUnchecked(int param_1);

// Original: engine_matrix.c_matrixPushAndTransform_FUN_004cd380
// Address: 004cd380
void __cdecl matrixPushAndTransform(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_matrix.c_matrixPush_FUN_004cdac0
// Address: 004cdac0
void __cdecl matrixPush(void);

// Original: engine_matrix.c_pop_FUN_004cdbc0
// Address: 004cdbc0
void __cdecl pop(void);

// Original: engine_matrix.c_calculate3DDistance_FUN_004cdcd0
// Address: 004cdcd0
int calculate3DDistance(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
// Address: 004cde90
int * normalizeVector3DFloat(int *param_1);

// Original: engine_matrix.c_setCameraOrigin_FUN_004ce710
// Address: 004ce710
void __cdecl setCameraOrigin(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_matrix.c_setCameraRotation_FUN_004ce730
// Address: 004ce730
void __cdecl setCameraRotation(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_matrix.c_getCameraOrigin_FUN_004ce760
// Address: 004ce760
undefined1 * __esi getCameraOrigin(undefined4 *param_1);

// Original: engine_matrix.c_getCameraRotation_FUN_004ce790
// Address: 004ce790
undefined1 * __esi getCameraRotation(undefined4 *param_1);

// Original: engine_matrix.c_pushViewport_FUN_004ce7c0
// Address: 004ce7c0
void __cdecl pushViewport(int param_1,int param_2,int param_3,int param_4);

// Original: engine_matrix.c_popViewport_FUN_004ce920
// Address: 004ce920
void __cdecl popViewport(void);

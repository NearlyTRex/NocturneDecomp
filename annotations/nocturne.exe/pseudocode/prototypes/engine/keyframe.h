#pragma once

// Function prototypes for engine/keyframe.cpp
// Generated from Ghidra function signatures

// Original: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760
// Address: 004c3760
void __cdecl calculatePackedSurfaceNormal(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture);

// Original: engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
// Address: 004c3920
void __cdecl calculateSurfaceNormal(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture);

// Original: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0
// Address: 004c3aa0
void __cdecl loadAndInterpolateKeyframes(SMRGLKeyframeModel *keyframe_model);

// Original: engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90
// Address: 004c3c90
SMRGLKeyframeModel * interpolateCubicKeyframes(SMRGLKeyframeModel *param_1);

// Original: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004c4080
// Address: 004c4080
void recomputeKeyFrameNormals(SMRGLPrimitiveTriangle *param_1);

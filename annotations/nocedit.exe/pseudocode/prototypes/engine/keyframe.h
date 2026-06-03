#pragma once

// Function prototypes for engine/keyframe.cpp
// Generated from Ghidra function signatures

// Original: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// Address: 00501a00
void __cdecl calculatePackedSurfaceNormal(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture);

// Original: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
// Address: 00501bc0
void __cdecl calculateSurfaceNormal(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture);

// Original: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
// Address: 00501d40
void __cdecl loadAndInterpolateKeyframes(SMRGLKeyframeModel *keyframe_model);

// Original: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
SMRGLHeaderExtended * __cdecl interpolateCubicKeyframes(SMRGLKeyframeModel *keyframe_model);

// Original: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
// Address: 00502320
void __cdecl recomputeKeyFrameNormals(SMRGLPrimitiveTriangle *primitive_list);

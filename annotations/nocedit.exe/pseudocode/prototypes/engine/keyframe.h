#pragma once

// Function prototypes for engine/keyframe.cpp
// Generated from Ghidra function signatures

// Original: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// Address: 00501a00
void calculatePackedSurfaceNormal(CVector3i * vertex_data, SSurfacePackedNormal * data);

// Original: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
// Address: 00501bc0
void calculateSurfaceNormal(CVector3i * vertex_data, SSurfaceNormal * output);

// Original: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
// Address: 00501d40
void loadAndInterpolateKeyframes(SMRGLKeyframeModel * keyframe_model);

// Original: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
SMRGLHeaderExtended * interpolateCubicKeyframes(SMRGLHeaderExtended * header);

// Original: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
// Address: 00502320
void recomputeKeyFrameNormals(void);

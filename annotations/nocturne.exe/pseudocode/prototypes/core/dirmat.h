#pragma once

// Function prototypes for core/dirmat.cpp
// Generated from Ghidra function signatures

// Original: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
// Address: 0044d7a0
void __cdecl CMatrix3x3f::buildRotationMatrix(float *param_1,float *param_2);

// Original: core_dirmat.cpp_CMatrix3x3f_invert_FUN_0044d880
// Address: 0044d880
void CMatrix3x3f::invert(float *param_1);

// Original: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
// Address: 0044da40
float * CMatrix3x3f::transformVector(float *param_1,float *param_2,float *param_3);

// Original: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
// Address: 0044daa0
float * CMatrix3x3f::transformVectorTranspose(float *param_1,float *param_2,float *param_3);

// Original: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
// Address: 0044dbd0
float * CMatrix3x3f::getEulerAngles(float *param_1,float *param_2);

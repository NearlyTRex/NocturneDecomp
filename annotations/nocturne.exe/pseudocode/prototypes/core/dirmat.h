#pragma once

// Function prototypes for core/dirmat.cpp
// Generated from Ghidra function signatures

// Original: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
// Address: 0044d7a0
void __cdecl CMatrix3x3f::buildRotationMatrix(CMatrix3x3f *this_ptr,CVector3f *euler_angles);

// Original: core_dirmat.cpp_CMatrix3x3f_invert_FUN_0044d880
// Address: 0044d880
void __cdecl CMatrix3x3f::invert(CMatrix3x3f *this_ptr);

// Original: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
// Address: 0044da40
CVector3f * __cdecl CMatrix3x3f::transformVector(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input);

// Original: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
// Address: 0044daa0
CVector3f * __cdecl CMatrix3x3f::transformVectorTranspose(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input);

// Original: core_dirmat.cpp_FUN_0044db00
// Address: 0044db00
float FUN_0044db00(void);

// Original: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
// Address: 0044dbd0
CVector3f * __cdecl CMatrix3x3f::getEulerAngles(CMatrix3x3f *this_ptr,CVector3f *euler_angles);

// Original: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_0044dfb0
// Address: 0044dfb0
void CMatrix3x3f::multiply(float *param_1,float *param_2);

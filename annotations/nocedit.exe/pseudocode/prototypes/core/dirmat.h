#pragma once

// Function prototypes for core/dirmat.cpp
// Generated from Ghidra function signatures

// Original: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
// Address: 00471d30
void __cdecl CMatrix3x3f::buildRotationMatrix(CMatrix3x3f *this_ptr,CVector3f *euler_angles);

// Original: core_dirmat.cpp_CMatrix3x3f_invert_FUN_00471e10
// Address: 00471e10
void __cdecl CMatrix3x3f::invert(CMatrix3x3f *this_ptr);

// Original: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
// Address: 00471fd0
CVector3f * __cdecl CMatrix3x3f::transformVector(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input);

// Original: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
// Address: 00472030
CVector3f * __cdecl CMatrix3x3f::transformVectorTranspose(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input);

// Original: core_dirmat.cpp_angleFromSinCos_FUN_00472090
// Address: 00472090
float __cdecl angleFromSinCos(double y,double x);

// Original: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
// Address: 00472160
CVector3f * __cdecl CMatrix3x3f::getEulerAngles(CMatrix3x3f *this_ptr,CVector3f *euler_angles);

// Original: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
// Address: 00472540
CMatrix3x3f * __stack2_esi CMatrix3x3f::multiply(CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b,CMatrix3x3f *matrix_out);

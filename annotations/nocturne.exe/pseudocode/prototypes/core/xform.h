#pragma once

// Function prototypes for core/xform.cpp
// Generated from Ghidra function signatures

// Original: core_xform.cpp_transformVector3x4_FUN_0055a8b0
// Address: 0055a8b0
float * __cdecl transformVector3x4(float *param_1,float *param_2,float *param_3);

// Original: core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
// Address: 0055a910
float * __cdecl transformVector3x4InPlace(float *param_1,float *param_2);

// Original: core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
// Address: 0055aa00
void multiplyMatrix3x4(float *param_1,float *param_2);

// Original: core_xform.cpp_FUN_0055abb0
// Address: 0055abb0
undefined4 * FUN_0055abb0(undefined4 *param_1,undefined4 param_2);

// Original: core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0
// Address: 0055abf0
void setIdentityMatrix3x4(undefined4 *param_1);

// Original: core_xform.cpp_setRotationScaleIdentity_FUN_0055ac80
// Address: 0055ac80
void __cdecl setRotationScaleIdentity(undefined4 *param_1);

// Original: core_xform.cpp_normalizeMatrix_FUN_0055acd0
// Address: 0055acd0
void normalizeMatrix(float *param_1);

// Original: core_xform.cpp_clearTranslation_FUN_0055ae60
// Address: 0055ae60
void clearTranslation(int param_1);

// Original: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
// Address: 0055ae80
void __cdecl buildMatrixFromEulerAndPosition(float *param_1,float *param_2,float *param_3);

// Original: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
// Address: 0055afb0
void buildMatrixFromEulerAndPositionDirect(float *param_1,float *param_2,float *param_3);

// Original: core_xform.cpp_matrixToEulerAngles_FUN_0055b180
// Address: 0055b180
float * __cdecl matrixToEulerAngles(float *param_1,float *param_2);

// Original: core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0
// Address: 0055b6c0
float * __cdecl matrixToEulerAnglesZYX(float *param_1,float *param_2);

// Original: core_xform.cpp_getTranslation_FUN_0055bc00
// Address: 0055bc00
void __cdecl getTranslation(int param_1,undefined4 *param_2);

// Original: core_xform.cpp_determinant_FUN_0055bcb0
// Address: 0055bcb0
double __cdecl determinant(float *param_1);

// Original: core_xform.cpp_inverse_FUN_0055bd00
// Address: 0055bd00
float * inverse(float *param_1);

// Original: core_xform.cpp_computeOrthogonalityError_FUN_0055bf50
// Address: 0055bf50
float computeOrthogonalityError(float *param_1);

// Original: core_xform.cpp_buildRotationX_FUN_0055c730
// Address: 0055c730
void buildRotationX(float param_1);

// Original: core_xform.cpp_buildRotationY_FUN_0055c7b0
// Address: 0055c7b0
void buildRotationY(float param_1);

// Original: core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0
// Address: 0055c9d0
void buildXFlipMatrix(float param_1);

// Original: core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
// Address: 0055ca90
undefined4 * __stack_esi buildZFlipMatrix(float param_1,undefined4 *param_2);

// Original: core_xform.cpp_lerpMatrix3x4_FUN_0055cc30
// Address: 0055cc30
void lerpMatrix3x4(undefined4 *param_1,undefined4 *param_2,float param_3);

// Original: core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
// Address: 0055cd70
void __cdecl quaternionToMatrix3x3(float *param_1,float *param_2);

// Original: core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0
// Address: 0055ced0
void quaternionToMatrix3x4(undefined4 param_1);

// Original: core_xform.cpp_matrixToQuaternion_FUN_0055cf10
// Address: 0055cf10
void matrixToQuaternion(float *param_1);

// Original: core_xform.cpp_FUN_0055d0d0
// Address: 0055d0d0
void FUN_0055d0d0(float *param_1);

// Original: core_xform.cpp_setIdentityQuaternion_FUN_0055d110
// Address: 0055d110
void setIdentityQuaternion(undefined4 *param_1);

// Original: core_xform.cpp_multiplyQuaternion_FUN_0055d130
// Address: 0055d130
void multiplyQuaternion(float *param_1,float *param_2);

// Original: core_xform.cpp_quaternionToAxisAngle_FUN_0055d220
// Address: 0055d220
void quaternionToAxisAngle(float *param_1,float *param_2,float *param_3);

// Original: core_xform.cpp_slerpQuaternion_FUN_0055d2d0
// Address: 0055d2d0
float * slerpQuaternion(float *param_1,float *param_2,float param_3);

// Original: core_xform.cpp_FUN_0055d4a0
// Address: 0055d4a0
void FUN_0055d4a0(float param_1);

// Original: core_xform.cpp_FUN_0055d4e0
// Address: 0055d4e0
void FUN_0055d4e0(float param_1);

// Original: core_xform.cpp_FUN_0055d520
// Address: 0055d520
void FUN_0055d520(float param_1);

// Original: core_xform.cpp_FUN_0055d560
// Address: 0055d560
void FUN_0055d560(float param_1,float *param_2);

// Original: core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
// Address: 0055d5b0
undefined4 __cdecl quaternionToEulerAngles(undefined4 param_1,undefined4 param_2);

// Original: core_xform.cpp_FUN_0055d5e0
// Address: 0055d5e0
undefined4 FUN_0055d5e0(undefined4 param_1,undefined4 param_2);

// Original: core_xform.cpp_FUN_0055d610
// Address: 0055d610
void FUN_0055d610(undefined4 param_1);

// Original: core_xform.cpp_FUN_0055d660
// Address: 0055d660
void FUN_0055d660(undefined4 param_1);

// Original: core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0
// Address: 0055d6b0
void __cdecl clipInterpolateRightPlane(int *param_1,int *param_2,int *param_3);

// Original: core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770
// Address: 0055d770
void __cdecl clipInterpolateLeftPlane(int *param_1,int *param_2,int *param_3);

// Original: core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830
// Address: 0055d830
void __cdecl clipInterpolateTopPlane(int *param_1,int *param_2,int *param_3);

// Original: core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
// Address: 0055d8f0
void __cdecl clipInterpolateBottomPlane(int *param_1,int *param_2,int *param_3);

// Original: core_xform.cpp_clipPolygonStage2_FUN_0055db30
// Address: 0055db30
void clipPolygonStage2(void);

// Original: core_xform.cpp_FUN_0055de20
// Address: 0055de20
void FUN_0055de20(void);

// Original: core_xform.cpp_transformAndClipGeometry_FUN_0055e040
// Address: 0055e040
int * transformAndClipGeometry(uint param_1,int *param_2);

#pragma once

// Function prototypes for core/xform.cpp
// Generated from Ghidra function signatures

// Original: core_xform.cpp_transformVector3x4_FUN_0055a8b0
// Address: 0055a8b0
CVector3f * __cdecl transformVector3x4(CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix);

// Original: core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
// Address: 0055a910
CVector3f * __cdecl transformVector3x4InPlace(CVector3f *input_output_vector,CMatrix3x4f *matrix);

// Original: core_xform.cpp_transformVector3x3_FUN_0055a9a0
// Address: 0055a9a0
float * transformVector3x3(void);

// Original: core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
// Address: 0055aa00
void multiplyMatrix3x4(float *param_1,float *param_2);

// Original: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_0055abb0
// Address: 0055abb0
undefined4 * multiplyMatrix3x4InPlace(undefined4 *param_1,undefined4 param_2);

// Original: core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0
// Address: 0055abf0
void setIdentityMatrix3x4(undefined4 *param_1);

// Original: core_xform.cpp_setRotationScaleIdentity_FUN_0055ac80
// Address: 0055ac80
void __cdecl setRotationScaleIdentity(CMatrix3x4f *matrix);

// Original: core_xform.cpp_normalizeMatrix_FUN_0055acd0
// Address: 0055acd0
void normalizeMatrix(float *param_1);

// Original: core_xform.cpp_clearTranslation_FUN_0055ae60
// Address: 0055ae60
void clearTranslation(int param_1);

// Original: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
// Address: 0055ae80
void __cdecl buildMatrixFromEulerAndPosition(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles);

// Original: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
// Address: 0055afb0
void buildMatrixFromEulerAndPositionDirect(float *param_1,float *param_2,float *param_3);

// Original: core_xform.cpp_FUN_0055b0b0
// Address: 0055b0b0
float FUN_0055b0b0(void);

// Original: core_xform.cpp_matrixToEulerAngles_FUN_0055b180
// Address: 0055b180
CVector3f * __cdecl matrixToEulerAngles(CMatrix3x4f *matrix_in,CVector3f *euler_out);

// Original: core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0
// Address: 0055b6c0
CVector3f * __cdecl matrixToEulerAnglesZYX(CMatrix3x4f *matrix_ptr,CVector3f *euler_out);

// Original: core_xform.cpp_getTranslation_FUN_0055bc00
// Address: 0055bc00
CVector3f * __cdecl getTranslation(CMatrix3x4f *matrix_in,CVector3f *vector_out);

// Original: core_xform.cpp_invertAndGetTranslation_FUN_0055bc30
// Address: 0055bc30
CVector3f * invertAndGetTranslation(undefined4 param_1,CVector3f *param_2);

// Original: core_xform.cpp_inverseInPlace_FUN_0055bc80
// Address: 0055bc80
void inverseInPlace(void);

// Original: core_xform.cpp_determinant_FUN_0055bcb0
// Address: 0055bcb0
double __cdecl determinant(CMatrix3x4f *matrix);

// Original: core_xform.cpp_inverse_FUN_0055bd00
// Address: 0055bd00
float * inverse(CMatrix3x4f *param_1);

// Original: core_xform.cpp_computeOrthogonalityError_FUN_0055bf50
// Address: 0055bf50
float computeOrthogonalityError(float *param_1);

// Original: core_xform.cpp_orthonormalizeMatrix3x3_FUN_0055c180
// Address: 0055c180
void orthonormalizeMatrix3x3(float *param_1,int param_2);

// Original: core_xform.cpp_hasNegativeDeterminant_FUN_0055c6d0
// Address: 0055c6d0
bool hasNegativeDeterminant(void);

// Original: core_xform.cpp_buildRotationX_FUN_0055c730
// Address: 0055c730
void buildRotationX(float param_1);

// Original: core_xform.cpp_buildRotationY_FUN_0055c7b0
// Address: 0055c7b0
void buildRotationY(float param_1);

// Original: core_xform.cpp_buildRotationZ_FUN_0055c830
// Address: 0055c830
void buildRotationZ(float param_1);

// Original: core_xform.cpp_buildTranslationMatrix_FUN_0055c8b0
// Address: 0055c8b0
void buildTranslationMatrix(undefined4 *param_1);

// Original: core_xform.cpp_buildUniformScaleMatrix_FUN_0055c910
// Address: 0055c910
void buildUniformScaleMatrix(void);

// Original: core_xform.cpp_buildScaleMatrix_FUN_0055c970
// Address: 0055c970
void buildScaleMatrix(undefined4 *param_1);

// Original: core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0
// Address: 0055c9d0
void buildXFlipMatrix(float param_1);

// Original: core_xform.cpp_buildYFlipMatrix_FUN_0055ca30
// Address: 0055ca30
void buildYFlipMatrix(float param_1);

// Original: core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
// Address: 0055ca90
undefined4 * __stack_esi buildZFlipMatrix(float param_1,undefined4 *param_2);

// Original: core_xform.cpp_buildMirrorTransform_FUN_0055caf0
// Address: 0055caf0
void buildMirrorTransform(float *param_1,float param_2);

// Original: core_xform.cpp_lerpMatrix3x4_FUN_0055cc30
// Address: 0055cc30
void lerpMatrix3x4(CMatrix3x4f *param_1,CMatrix3x4f *param_2,float param_3);

// Original: core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
// Address: 0055cd70
CQuaternion4f * __cdecl quaternionToMatrix3x3(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in);

// Original: core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0
// Address: 0055ced0
void quaternionToMatrix3x4(CQuaternion4f *param_1);

// Original: core_xform.cpp_matrixToQuaternion_FUN_0055cf10
// Address: 0055cf10
void matrixToQuaternion(float *param_1);

// Original: core_xform.cpp_negateFirstComponent_FUN_0055d0d0
// Address: 0055d0d0
CQuaternion4f * __stack_esi negateFirstComponent(CQuaternion4f *vector_in,CQuaternion4f *vector_out);

// Original: core_xform.cpp_setIdentityQuaternion_FUN_0055d110
// Address: 0055d110
void setIdentityQuaternion(undefined4 *param_1);

// Original: core_xform.cpp_multiplyQuaternion_FUN_0055d130
// Address: 0055d130
void multiplyQuaternion(float *param_1,float *param_2);

// Original: core_xform.cpp_multiplyQuaternionInPlace_FUN_0055d1f0
// Address: 0055d1f0
undefined4 * multiplyQuaternionInPlace(undefined4 *param_1,undefined4 param_2);

// Original: core_xform.cpp_quaternionToAxisAngle_FUN_0055d220
// Address: 0055d220
void quaternionToAxisAngle(float *param_1,float *param_2,float *param_3);

// Original: core_xform.cpp_slerpQuaternion_FUN_0055d2d0
// Address: 0055d2d0
float * slerpQuaternion(float *param_1,float *param_2,float param_3);

// Original: core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0
// Address: 0055d4a0
CQuaternion4f * __stack_esi quaternionFromAngleX(float angle_radians,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0
// Address: 0055d4e0
void quaternionFromAngleY(float param_1);

// Original: core_xform.cpp_quaternionFromAngleZ_FUN_0055d520
// Address: 0055d520
CQuaternion4f * __stack_esi quaternionFromAngleZ(float angle_radians,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionFromAxisAngle_FUN_0055d560
// Address: 0055d560
void quaternionFromAxisAngle(float param_1,float *param_2);

// Original: core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
// Address: 0055d5b0
CVector3f * __cdecl quaternionToEulerAngles(CVector3f *out_euler,CQuaternion4f *quat_in);

// Original: core_xform.cpp_FUN_0055d5e0
// Address: 0055d5e0
CVector3f * FUN_0055d5e0(CVector3f *param_1,CQuaternion4f *param_2);

// Original: core_xform.cpp_eulerToQuaternion_FUN_0055d610
// Address: 0055d610
void eulerToQuaternion(undefined4 param_1);

// Original: core_xform.cpp_FUN_0055d660
// Address: 0055d660
void FUN_0055d660(CVector3f *param_1);

// Original: core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0
// Address: 0055d6b0
void __cdecl clipInterpolateRightPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770
// Address: 0055d770
void __cdecl clipInterpolateLeftPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830
// Address: 0055d830
void __cdecl clipInterpolateTopPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
// Address: 0055d8f0
void __cdecl clipInterpolateBottomPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipPolygonStage1_FUN_0055d9c0
// Address: 0055d9c0
void clipPolygonStage1(void);

// Original: core_xform.cpp_clipPolygonStage2_FUN_0055db30
// Address: 0055db30
void clipPolygonStage2(void);

// Original: core_xform.cpp_clipPolygonStage3_FUN_0055dcb0
// Address: 0055dcb0
void clipPolygonStage3(void);

// Original: core_xform.cpp_FUN_0055de20
// Address: 0055de20
void FUN_0055de20(void);

// Original: core_xform.cpp_FUN_0055de8e
// Address: 0055de8e
void FUN_0055de8e(void);

// Original: core_xform.cpp_FUN_0055df19
// Address: 0055df19
void FUN_0055df19(void);

// Original: core_xform.cpp_FUN_0055df90
// Address: 0055df90
void FUN_0055df90(void);

// Original: core_xform.cpp_transformAndClipGeometry_FUN_0055e040
// Address: 0055e040
void transformAndClipGeometry(uint param_1,int *param_2);

#pragma once

// Function prototypes for core/xform.cpp
// Generated from Ghidra function signatures

// Original: core_xform.cpp_transformVector3x4_FUN_005f4dc0
// Address: 005f4dc0
CVector3f * __cdecl transformVector3x4(CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix);

// Original: core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
// Address: 005f4e20
CVector3f * __cdecl transformVector3x4InPlace(CVector3f *input_output_vector,CMatrix3x4f *matrix);

// Original: core_xform.cpp_transformVector3x3_FUN_005f4eb0
// Address: 005f4eb0
CVector3f * __cdecl transformVector3x3(CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector);

// Original: core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
// Address: 005f4f10
CMatrix3x4f * __stack2_esi multiplyMatrix3x4(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
// Address: 005f50c0
CMatrix3x4f * __cdecl multiplyMatrix3x4InPlace(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b);

// Original: core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
// Address: 005f5100
void __cdecl setIdentityMatrix3x4(CMatrix3x4f *matrix);

// Original: core_xform.cpp_somebodyWriteMe_FUN_005f5160
// Address: 005f5160
void __cdecl somebodyWriteMe(void);

// Original: core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
// Address: 005f5190
void __cdecl setRotationScaleIdentity(CMatrix3x4f *matrix);

// Original: core_xform.cpp_normalizeMatrix_FUN_005f51e0
// Address: 005f51e0
void __cdecl normalizeMatrix(CMatrix3x4f *matrix);

// Original: core_xform.cpp_clearTranslation_FUN_005f5370
// Address: 005f5370
void __cdecl clearTranslation(CMatrix3x4f *matrix);

// Original: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
// Address: 005f5390
void __cdecl buildMatrixFromEulerAndPosition(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles);

// Original: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
// Address: 005f54c0
void __cdecl buildMatrixFromEulerAndPositionDirect(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles);

// Original: core_xform.cpp_angleFromSinCos_FUN_005f55c0
// Address: 005f55c0
float __cdecl angleFromSinCos(double sin_value,double cos_value);

// Original: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
CVector3f * __cdecl matrixToEulerAngles(CMatrix3x4f *matrix_in,CVector3f *euler_out);

// Original: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// Address: 005f5bd0
CVector3f * __cdecl matrixToEulerAnglesZYX(CMatrix3x4f *matrix_ptr,CVector3f *euler_out);

// Original: core_xform.cpp_getTranslation_FUN_005f6110
// Address: 005f6110
CVector3f * __cdecl getTranslation(CMatrix3x4f *matrix_in,CVector3f *vector_out);

// Original: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// Address: 005f6140
CVector3f * __cdecl invertAndGetTranslation(CMatrix3x4f *matrix_in,CVector3f *vector_out);

// Original: core_xform.cpp_inverseInPlace_FUN_005f6190
// Address: 005f6190
void __cdecl inverseInPlace(CMatrix3x4f *matrix);

// Original: core_xform.cpp_determinant_FUN_005f61c0
// Address: 005f61c0
double __cdecl determinant(CMatrix3x4f *matrix);

// Original: core_xform.cpp_inverse_FUN_005f6210
// Address: 005f6210
CMatrix3x4f * __stack_esi inverse(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_computeOrthogonalityError_FUN_005f6460
// Address: 005f6460
float __cdecl computeOrthogonalityError(CMatrix3x4f *matrix);

// Original: core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
// Address: 005f6690
void __cdecl orthonormalizeMatrix3x3(CMatrix3x3f *matrix,int preserve_scale);

// Original: core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
// Address: 005f6be0
int __cdecl hasNegativeDeterminant(CMatrix3x4f *matrix);

// Original: core_xform.cpp_buildRotationX_FUN_005f6c40
// Address: 005f6c40
CMatrix3x4f * __stack_esi buildRotationX(float angle_radians,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildRotationY_FUN_005f6cc0
// Address: 005f6cc0
CMatrix3x4f * __stack_esi buildRotationY(float angle_radians,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildRotationZ_FUN_005f6d40
// Address: 005f6d40
CMatrix3x4f * __stack_esi buildRotationZ(float angle_radians,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
// Address: 005f6dc0
CMatrix3x4f * __stack_esi buildTranslationMatrix(CVector3f *translation,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20
// Address: 005f6e20
CMatrix3x4f * __stack_esi buildUniformScaleMatrix(float scale_factor,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildScaleMatrix_FUN_005f6e80
// Address: 005f6e80
CMatrix3x4f * __stack_esi buildScaleMatrix(CVector3f *scale_vector,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
// Address: 005f6ee0
CMatrix3x4f * __stack_esi buildXFlipMatrix(float x_offset,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildYFlipMatrix_FUN_005f6f40
// Address: 005f6f40
CMatrix3x4f * __stack_esi buildYFlipMatrix(float y_offset,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
// Address: 005f6fa0
CMatrix3x4f * __stack_esi buildZFlipMatrix(float z_offset,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// Address: 005f7000
CMatrix3x4f * __stack2_esi buildMirrorTransform(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
CMatrix3x4f * __stack3_esi lerpMatrix3x4(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
// Address: 005f7280
CQuaternion4f * __cdecl quaternionToMatrix3x3(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in);

// Original: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// Address: 005f73e0
CMatrix3x4f * __stack_esi quaternionToMatrix3x4(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out);

// Original: core_xform.cpp_matrixToQuaternion_FUN_005f7420
// Address: 005f7420
CQuaternion4f * __stack_esi matrixToQuaternion(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out);

// Original: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// Address: 005f75e0
CQuaternion4f * __stack_esi negateFirstComponent(CQuaternion4f *vector_in,CQuaternion4f *vector_out);

// Original: core_xform.cpp_setIdentityQuaternion_FUN_005f7620
// Address: 005f7620
void __cdecl setIdentityQuaternion(CQuaternion4f *quaternion);

// Original: core_xform.cpp_multiplyQuaternion_FUN_005f7640
// Address: 005f7640
CQuaternion4f * __stack2_esi multiplyQuaternion(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,CQuaternion4f *quat_out);

// Original: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
// Address: 005f7700
CQuaternion4f * __cdecl multiplyQuaternionInPlace(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr);

// Original: core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
// Address: 005f7730
void __cdecl quaternionToAxisAngle(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out);

// Original: core_xform.cpp_slerpQuaternion_FUN_005f77e0
// Address: 005f77e0
CQuaternion4f * __stack3_esi slerpQuaternion(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
// Address: 005f79b0
CQuaternion4f * __stack_esi quaternionFromAngleX(float angle_radians,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
// Address: 005f79f0
CQuaternion4f * __stack_esi quaternionFromAngleY(float angle_radians,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
// Address: 005f7a30
CQuaternion4f * __stack_esi quaternionFromAngleZ(float angle_radians,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
// Address: 005f7a70
CQuaternion4f * __stack2_esi quaternionFromAxisAngle(float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out);

// Original: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
// Address: 005f7ac0
CVector3f * __cdecl quaternionToEulerAngles(CVector3f *out_euler,CQuaternion4f *quat_in);

// Original: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0
// Address: 005f7af0
CVector3f * __cdecl quaternionToEulerAnglesZYX(CQuaternion4f *quat_in,CVector3f *vector_out);

// Original: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
// Address: 005f7b20
CQuaternion4f * __stack_esi eulerToQuaternion(CVector3f *euler_angles,CQuaternion4f *quat_out);

// Original: core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70
// Address: 005f7b70
CQuaternion4f * __stack_esi eulerToQuaternionIndirect(CVector3f *euler_angles,CQuaternion4f *quat_out);

// Original: core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
// Address: 005f7bc0
void __cdecl clipInterpolateRightPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
// Address: 005f7c80
void __cdecl clipInterpolateLeftPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
// Address: 005f7d40
void __cdecl clipInterpolateTopPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
// Address: 005f7e00
void __cdecl clipInterpolateBottomPlane(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);

// Original: core_xform.cpp_clipPolygonStage1_FUN_005f7ed0
// Address: 005f7ed0
void __cdecl clipPolygonStage1(void);

// Original: core_xform.cpp_clipPolygonStage2_FUN_005f8040
// Address: 005f8040
void __cdecl clipPolygonStage2(void);

// Original: core_xform.cpp_clipPolygonStage3_FUN_005f81c0
// Address: 005f81c0
void __cdecl clipPolygonStage3(void);

// Original: core_xform.cpp_clipPolygonStage4_FUN_005f8330
// Address: 005f8330
void __cdecl clipPolygonStage4(void);

// Original: core_xform.cpp_clampClippedVertices_FUN_005f84a0
// Address: 005f84a0
void __cdecl clampClippedVertices(void);

// Original: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
// Address: 005f8550
SRenderVertex * __cdecl transformAndClipGeometry(int vertex_count,int *vertex_indices);

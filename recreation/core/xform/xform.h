#pragma once

#include "core/fwd.h"

namespace nocturne::core {

CVector3f *transformVector3x4(CVector3f *output_vector, CVector3f *input_vector,
                              CMatrix3x4f *matrix);
CVector3f *transformVector3x4InPlace(CVector3f *input_output_vector, CMatrix3x4f *matrix);
CMatrix3x4f *multiplyMatrix3x4(CMatrix3x4f *matrix_a, CMatrix3x4f *matrix_b,
                               CMatrix3x4f *matrix_out);
void setIdentityMatrix3x4(CMatrix3x4f *matrix);
void setRotationScaleIdentity(CMatrix3x4f *matrix);
void clearTranslation(CMatrix3x4f *matrix);
void buildMatrixFromEulerAndPosition(CMatrix3x4f *output_matrix, CVector3f *position,
                                     CVector3f *euler_angles);
void buildMatrixFromEulerAndPositionDirect(CMatrix3x4f *output_matrix, CVector3f *position,
                                           CVector3f *euler_angles);
CVector3f *matrixToEulerAngles(CMatrix3x4f *matrix_in, CVector3f *euler_out);
CVector3f *matrixToEulerAnglesZYX(CMatrix3x4f *matrix_ptr, CVector3f *euler_out);
CVector3f *getTranslation(CMatrix3x4f *matrix_in, CVector3f *vector_out);
CMatrix3x4f *inverse(CMatrix3x4f *matrix_in, CMatrix3x4f *matrix_out);
CMatrix3x4f *buildRotationX(float angle_radians, CMatrix3x4f *matrix_out);
CMatrix3x4f *buildRotationY(float angle_radians, CMatrix3x4f *matrix_out);
CMatrix3x4f *buildXFlipMatrix(float x_offset, CMatrix3x4f *matrix_out);
CMatrix3x4f *buildZFlipMatrix(float z_offset, CMatrix3x4f *matrix_out);
CMatrix3x4f *lerpMatrix3x4(CMatrix3x4f *matrix_a, CMatrix3x4f *matrix_b, float t,
                           CMatrix3x4f *matrix_out);
CQuaternion4f *quaternionToMatrix3x3(CMatrix3x4f *matrix_out, CQuaternion4f *quat_in);
CMatrix3x4f *quaternionToMatrix3x4(CQuaternion4f *quat_in, CMatrix3x4f *matrix_out);
CQuaternion4f *negateFirstComponent(CQuaternion4f *vector_in, CQuaternion4f *vector_out);
void setIdentityQuaternion(CQuaternion4f *quaternion);
CQuaternion4f *multiplyQuaternion(CQuaternion4f *quat1_in, CQuaternion4f *quat2_in,
                                  CQuaternion4f *quat_out);
void quaternionToAxisAngle(CQuaternion4f *quat_in, float *angle_out, CVector3f *axis_out);
CQuaternion4f *slerpQuaternion(CQuaternion4f *quat1_in, CQuaternion4f *quat2_in, float t,
                               CQuaternion4f *quat_out);
CQuaternion4f *quaternionFromAngleX(float angle_radians, CQuaternion4f *quat_out);
CQuaternion4f *quaternionFromAngleY(float angle_radians, CQuaternion4f *quat_out);
CQuaternion4f *quaternionFromAngleZ(float angle_radians, CQuaternion4f *quat_out);
CQuaternion4f *quaternionFromAxisAngle(float angle_radians, CVector3f *axis_ptr,
                                       CQuaternion4f *quat_out);
CVector3f *quaternionToEulerAngles(CVector3f *out_euler, CQuaternion4f *quat_in);
CQuaternion4f *eulerToQuaternion(CVector3f *euler_angles, CQuaternion4f *quat_out);
void transformAndClipGeometry(int vertex_count, int *vertex_indices);

} // namespace nocturne::core

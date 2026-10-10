#pragma once

#include "common/fwd.h"

namespace nocturne::core {

common::CVector3f *transformVector3x4(common::CVector3f *output_vector,
                                      common::CVector3f *input_vector, common::CMatrix3x4f *matrix);
common::CVector3f *transformVector3x4InPlace(common::CVector3f *input_output_vector,
                                             common::CMatrix3x4f *matrix);
common::CMatrix3x4f *multiplyMatrix3x4(common::CMatrix3x4f *matrix_a, common::CMatrix3x4f *matrix_b,
                                       common::CMatrix3x4f *matrix_out);
void setIdentityMatrix3x4(common::CMatrix3x4f *matrix);
void setRotationScaleIdentity(common::CMatrix3x4f *matrix);
void clearTranslation(common::CMatrix3x4f *matrix);
void buildMatrixFromEulerAndPosition(common::CMatrix3x4f *output_matrix,
                                     common::CVector3f *position, common::CVector3f *euler_angles);
void buildMatrixFromEulerAndPositionDirect(common::CMatrix3x4f *output_matrix,
                                           common::CVector3f *position,
                                           common::CVector3f *euler_angles);
common::CVector3f *matrixToEulerAngles(common::CMatrix3x4f *matrix_in,
                                       common::CVector3f *euler_out);
common::CVector3f *matrixToEulerAnglesZYX(common::CMatrix3x4f *matrix_ptr,
                                          common::CVector3f *euler_out);
common::CVector3f *getTranslation(common::CMatrix3x4f *matrix_in, common::CVector3f *vector_out);
common::CMatrix3x4f *inverse(common::CMatrix3x4f *matrix_in, common::CMatrix3x4f *matrix_out);
common::CMatrix3x4f *buildRotationX(float angle_radians, common::CMatrix3x4f *matrix_out);
common::CMatrix3x4f *buildRotationY(float angle_radians, common::CMatrix3x4f *matrix_out);
common::CMatrix3x4f *buildXFlipMatrix(float x_offset, common::CMatrix3x4f *matrix_out);
common::CMatrix3x4f *buildZFlipMatrix(float z_offset, common::CMatrix3x4f *matrix_out);
common::CMatrix3x4f *lerpMatrix3x4(common::CMatrix3x4f *matrix_a, common::CMatrix3x4f *matrix_b,
                                   float t, common::CMatrix3x4f *matrix_out);
common::CQuaternion4f *quaternionToMatrix3x3(common::CMatrix3x4f *matrix_out,
                                             common::CQuaternion4f *quat_in);
common::CMatrix3x4f *quaternionToMatrix3x4(common::CQuaternion4f *quat_in,
                                           common::CMatrix3x4f *matrix_out);
common::CQuaternion4f *negateFirstComponent(common::CQuaternion4f *vector_in,
                                            common::CQuaternion4f *vector_out);
void setIdentityQuaternion(common::CQuaternion4f *quaternion);
common::CQuaternion4f *multiplyQuaternion(common::CQuaternion4f *quat1_in,
                                          common::CQuaternion4f *quat2_in,
                                          common::CQuaternion4f *quat_out);
void quaternionToAxisAngle(common::CQuaternion4f *quat_in, float *angle_out,
                           common::CVector3f *axis_out);
common::CQuaternion4f *slerpQuaternion(common::CQuaternion4f *quat1_in,
                                       common::CQuaternion4f *quat2_in, float t,
                                       common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAngleX(float angle_radians, common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAngleY(float angle_radians, common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAngleZ(float angle_radians, common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAxisAngle(float angle_radians, common::CVector3f *axis_ptr,
                                               common::CQuaternion4f *quat_out);
common::CVector3f *quaternionToEulerAngles(common::CVector3f *out_euler,
                                           common::CQuaternion4f *quat_in);
common::CQuaternion4f *eulerToQuaternion(common::CVector3f *euler_angles,
                                         common::CQuaternion4f *quat_out);
void transformAndClipGeometry(int vertex_count, int *vertex_indices);

} // namespace nocturne::core

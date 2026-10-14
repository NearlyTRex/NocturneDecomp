#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x4f.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "platform/fwd.h"

#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::core {

[[nodiscard]] common::CVector3f transformVector3x4(const common::CVector3f &input_vector,
                                                   const common::CMatrix3x4f &matrix);
common::CVector3f *transformVector3x4InPlace(common::CVector3f *input_output_vector,
                                             common::CMatrix3x4f *matrix);
common::CMatrix3x4f *multiplyMatrix3x4(common::CMatrix3x4f *matrix_a, common::CMatrix3x4f *matrix_b,
                                       common::CMatrix3x4f *matrix_out);
void setIdentityMatrix3x4(common::CMatrix3x4f *matrix);
void setRotationScaleIdentity(common::CMatrix3x4f *matrix);
void clearTranslation(common::CMatrix3x4f &matrix);
void buildMatrixFromEulerAndPosition(common::CMatrix3x4f *output_matrix,
                                     common::CVector3f *position, common::CVector3f *euler_angles);
void buildMatrixFromEulerAndPositionDirect(common::CMatrix3x4f *output_matrix,
                                           common::CVector3f *position,
                                           common::CVector3f *euler_angles);
// Angles in radians about x, y and z, read from the rotation with each row's scale taken out.
[[nodiscard]] common::CVector3f matrixToEulerAngles(const common::CMatrix3x4f &matrix_in);
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
// Writes the rotation and leaves the translation as it was. The quaternion need not be unit.
void quaternionToMatrix3x3(common::CMatrix3x4f &matrix_out, const common::CQuaternion4f &quat_in);
[[nodiscard]] common::CMatrix3x4f quaternionToMatrix3x4(const common::CQuaternion4f &quat_in);
common::CQuaternion4f *negateFirstComponent(common::CQuaternion4f *vector_in,
                                            common::CQuaternion4f *vector_out);
void setIdentityQuaternion(common::CQuaternion4f *quaternion);
common::CQuaternion4f *multiplyQuaternion(common::CQuaternion4f *quat1_in,
                                          common::CQuaternion4f *quat2_in,
                                          common::CQuaternion4f *quat_out);
void quaternionToAxisAngle(common::CQuaternion4f *quat_in, float *angle_out,
                           common::CVector3f *axis_out);
// The first at t of 0 or less, the second at 1 or more, along the shorter arc between.
[[nodiscard]] common::CQuaternion4f slerpQuaternion(const common::CQuaternion4f &quat1_in,
                                                    const common::CQuaternion4f &quat2_in, float t);
common::CQuaternion4f *quaternionFromAngleX(float angle_radians, common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAngleY(float angle_radians, common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAngleZ(float angle_radians, common::CQuaternion4f *quat_out);
common::CQuaternion4f *quaternionFromAxisAngle(float angle_radians, common::CVector3f *axis_ptr,
                                               common::CQuaternion4f *quat_out);
common::CVector3f *quaternionToEulerAngles(common::CVector3f *out_euler,
                                           common::CQuaternion4f *quat_in);
common::CQuaternion4f *eulerToQuaternion(common::CVector3f *euler_angles,
                                         common::CQuaternion4f *quat_out);
// Each writes the vertex where the edge from vertex_a, inside, to vertex_b, past the plane, meets
// it, and carries red along when the flags ask for smooth shading. Fields it does not carry keep
// what vertex_out held. Right clips at x equal to the depth, left at minus it, top at y equal to
// it, bottom at minus it.
void clipInterpolateRightPlane(const platform::SRenderVertex &vertex_a,
                               const platform::SRenderVertex &vertex_b, std::uint32_t render_flags,
                               platform::SRenderVertex &vertex_out);
void clipInterpolateLeftPlane(const platform::SRenderVertex &vertex_a,
                              const platform::SRenderVertex &vertex_b, std::uint32_t render_flags,
                              platform::SRenderVertex &vertex_out);
void clipInterpolateTopPlane(const platform::SRenderVertex &vertex_a,
                             const platform::SRenderVertex &vertex_b, std::uint32_t render_flags,
                             platform::SRenderVertex &vertex_out);
void clipInterpolateBottomPlane(const platform::SRenderVertex &vertex_a,
                                const platform::SRenderVertex &vertex_b, std::uint32_t render_flags,
                                platform::SRenderVertex &vertex_out);
// The polygon through the indexed vertices, clipped to the four sides of the view into clipped.
// One with no vertex outside the view is copied whole. Otherwise fewer than three left after a
// side gives none, and what is left has its points pulled onto the view.
void transformAndClipGeometry(std::span<const platform::SRenderVertex> vertices,
                              std::span<const int> vertex_indices, std::uint32_t render_flags,
                              std::vector<platform::SRenderVertex> &clipped);

} // namespace nocturne::core

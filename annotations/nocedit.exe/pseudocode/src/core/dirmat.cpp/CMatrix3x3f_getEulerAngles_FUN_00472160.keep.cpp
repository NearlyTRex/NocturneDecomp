// Name: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
// Address: 00472160
// MANUAL RECONSTRUCTION
// Address Range: [[00472160, 00472536]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  float sin_pitch;
  float cos_pitch;
  float inv_cos;
  bool gimbal_lock;

  sin_pitch = -this_ptr->m[1].z;

  if (sin_pitch <= -1.0f) {
    euler_angles->x = -1.5707964f;
    gimbal_lock = true;
  }
  else if (1.0f <= sin_pitch) {
    euler_angles->x = 1.5707964f;
    gimbal_lock = true;
  }
  else {
    euler_angles->x = (float)asin((float10)sin_pitch);
    cos_pitch = (float)SQRT((float10)1 - (float10)sin_pitch * (float10)sin_pitch);
    gimbal_lock = (cos_pitch <= 0.0f);
  }

  if (gimbal_lock) {
    euler_angles->z = 0.0f;
    euler_angles->y = core_dirmat_cpp_angleFromSinCos_FUN_00472090(
                        (double)-this_ptr->m[2].x, (double)this_ptr->m[0].x);
    return euler_angles;
  }

  inv_cos = 1.0f / cos_pitch;
  euler_angles->y = core_dirmat_cpp_angleFromSinCos_FUN_00472090(
                      (double)(this_ptr->m[0].z * inv_cos),
                      (double)(this_ptr->m[2].z * inv_cos));
  euler_angles->z = core_dirmat_cpp_angleFromSinCos_FUN_00472090(
                      (double)(this_ptr->m[1].x * inv_cos),
                      (double)(this_ptr->m[1].y * inv_cos));
  return euler_angles;
}

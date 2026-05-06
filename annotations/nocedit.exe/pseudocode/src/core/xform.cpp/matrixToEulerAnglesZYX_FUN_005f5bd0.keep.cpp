// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// Address: 005f5bd0
// MANUAL RECONSTRUCTION
// Address Range: [[005f5bd0, 005f610a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)

{
  float fVar1, fVar2, fVar3, fVar4, fVar7, fVar8;
  float10 fVar5, fVar6;
  double inv_a, inv_b, inv_c;
  double cos_x, inv_cos_x;
  bool gimbal_lock;

  // Row 0 inverse magnitude
  fVar1 = matrix_ptr->m[0].x;
  fVar2 = matrix_ptr->m[0].w;
  fVar3 = matrix_ptr->m[0].y;
  inv_a = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < inv_a) {
    inv_a = 1.0 / inv_a;
  }
  // Row 1 inverse magnitude
  fVar1 = matrix_ptr->m[1].x;
  fVar2 = matrix_ptr->m[1].w;
  fVar3 = matrix_ptr->m[1].y;
  inv_b = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < inv_b) {
    inv_b = 1.0 / inv_b;
  }
  // Row 2 inverse magnitude
  fVar4 = matrix_ptr->m[2].w;
  fVar7 = matrix_ptr->m[2].x;
  fVar8 = matrix_ptr->m[2].y;
  inv_c = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4);
  if (0.0 < inv_c) {
    inv_c = 1.0 / inv_c;
  }

  fVar4 = -matrix_ptr->m[2].x * (float)inv_c;

  if (fVar4 <= -1.0f) {
    euler_out->x = -1.5707964f;
    gimbal_lock = true;
  }
  else if (1.0f <= fVar4) {
    euler_out->x = 1.5707964f;
    gimbal_lock = true;
  }
  else {
    fVar5 = (float10)fVar4;
    fVar6 = asin(fVar5);
    euler_out->x = (float)fVar6;
    cos_x = (double)SQRT((float10)1 - fVar5 * fVar5);
    // Defensive pitch wrap; asin range is [-PI/2, PI/2] so this is a no-op
    // in practice — preserved for asm fidelity.
    if (fVar6 < (float10)-3.1415926535900001) {
      euler_out->x = euler_out->x + 6.283185f;
    }
    gimbal_lock = (cos_x <= 0.0);
  }

  if (gimbal_lock) {
    euler_out->z = 0.0f;
    euler_out->y = core_xform_cpp_angleFromSinCos_FUN_005f55c0(
                     -(double)matrix_ptr->m[0].y * inv_a,
                     (double)matrix_ptr->m[0].w * inv_a);
    return euler_out;
  }

  inv_cos_x = 1.0 / cos_x;
  euler_out->y = core_xform_cpp_angleFromSinCos_FUN_005f55c0(
                   (double)matrix_ptr->m[2].w * inv_c * inv_cos_x,
                   (double)matrix_ptr->m[2].y * inv_c * inv_cos_x);
  euler_out->z = core_xform_cpp_angleFromSinCos_FUN_005f55c0(
                   (double)matrix_ptr->m[0].x * inv_a * inv_cos_x,
                   (double)matrix_ptr->m[1].x * inv_b * inv_cos_x);
  return euler_out;
}

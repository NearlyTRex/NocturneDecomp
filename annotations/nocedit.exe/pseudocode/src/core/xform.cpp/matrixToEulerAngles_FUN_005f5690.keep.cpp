// Name: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
// MANUAL RECONSTRUCTION
// Address Range: [[005f5690, 005f5bca]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *matrix_in,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *matrix_in,CVector3f *euler_out)

{
  float fVar1, fVar2, fVar3, fVar4, fVar5, fVar8, fVar9;
  float10 fVar6, fVar7;
  double inv_a, inv_b, inv_c;
  double cos_x, inv_cos_x;
  bool gimbal_lock;

  // Row 0 inverse magnitude
  fVar1 = matrix_in->m[0].x;
  fVar2 = matrix_in->m[0].w;
  fVar3 = matrix_in->m[0].y;
  inv_a = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < inv_a) {
    inv_a = 1.0 / inv_a;
  }
  // Row 1 inverse magnitude
  fVar5 = matrix_in->m[1].w;
  fVar8 = matrix_in->m[1].x;
  fVar9 = matrix_in->m[1].y;
  inv_b = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
  if (0.0 < inv_b) {
    inv_b = 1.0 / inv_b;
  }
  // Row 2 inverse magnitude
  fVar5 = matrix_in->m[2].w;
  fVar8 = matrix_in->m[2].x;
  fVar4 = matrix_in->m[2].y;
  inv_c = (double)SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar5 * fVar5);
  if (0.0 < inv_c) {
    inv_c = 1.0 / inv_c;
  }

  fVar5 = -matrix_in->m[1].y * (float)inv_b;

  if (fVar5 <= -1.0f) {
    euler_out->x = -1.5707964f;
    gimbal_lock = true;
  }
  else if (1.0f <= fVar5) {
    euler_out->x = 1.5707964f;
    gimbal_lock = true;
  }
  else {
    fVar6 = (float10)fVar5;
    fVar7 = asin(fVar6);
    euler_out->x = (float)fVar7;
    cos_x = (double)SQRT((float10)1 - fVar6 * fVar6);
    // Defensive pitch wrap (asm 0x005f5897); asin range is [-PI/2, PI/2]
    // so this is a no-op in practice — preserved for asm fidelity.
    if (fVar7 < (float10)-3.1415926535900001) {
      euler_out->x = euler_out->x + 6.283185f;
    }
    gimbal_lock = (cos_x <= 0.0);
  }

  if (gimbal_lock) {
    euler_out->z = 0.0f;
    euler_out->y = core_xform_cpp_angleFromSinCos_FUN_005f55c0(
                     -(double)matrix_in->m[2].w * inv_c,
                     (double)matrix_in->m[0].w * inv_a);
    return euler_out;
  }

  inv_cos_x = 1.0 / cos_x;
  euler_out->y = core_xform_cpp_angleFromSinCos_FUN_005f55c0(
                   (double)matrix_in->m[0].y * inv_a * inv_cos_x,
                   (double)matrix_in->m[2].y * inv_c * inv_cos_x);
  euler_out->z = core_xform_cpp_angleFromSinCos_FUN_005f55c0(
                   (double)matrix_in->m[1].w * inv_b * inv_cos_x,
                   (double)matrix_in->m[1].x * inv_b * inv_cos_x);
  return euler_out;
}

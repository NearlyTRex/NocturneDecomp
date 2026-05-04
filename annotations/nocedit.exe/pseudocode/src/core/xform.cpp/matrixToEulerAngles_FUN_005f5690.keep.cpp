// Name: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
// MANUAL RECONSTRUCTION
// Address Range: [[005f5690, 005f5bca]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *matrix_in,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *matrix_in,CVector3f *euler_out)

{
  float fVar5;
  float fVar8;
  float fVar9;
  float10 fVar6;
  float10 fVar7;
  float10 fVar12;
  double dVar7;
  double inv_a;
  double inv_b;
  double inv_c;
  double cos_x;
  double inv_cos_x;
  double sin_y_term;
  double cos_y_term;
  double sin_z_term;
  double cos_z_term;
  float local_20;
  float local_18;
  float fVar3;
  float fVar4;
  float fVar1;
  float fVar2;

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
  if ((float)-1 < fVar5) {
    if ((double)fVar5 < 1.0) {
      fVar6 = (float10)fVar5;
      fVar7 = asin(fVar6);
      euler_out->x = (float)fVar7;
      cos_x = (double)SQRT((float10)1 - fVar6 * fVar6);
      if (fVar7 < (float10)-3.1415926535900001) {
        euler_out->x = euler_out->x + 6.283185f;
      }
      if (0.0 < cos_x) {
        inv_cos_x = 1.0 / cos_x;
        sin_y_term = (double)matrix_in->m[0].y * inv_a * inv_cos_x;
        cos_y_term = (double)matrix_in->m[2].y * inv_c * inv_cos_x;
        if ((0.70699999999999996 <= sin_y_term) ||
           (sin_y_term <= -0.70699999999999996)) {
          if (-1 < cos_y_term) {
            if (cos_y_term < 1.0) {
              dVar7 = acos(cos_y_term);
              local_18 = (float)dVar7;
            }
            else {
              local_18 = 0.0;
            }
          }
          else {
            local_18 = 3.1415927;
          }
          if (sin_y_term < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar12 = asin((float10)sin_y_term);
          local_18 = (float)fVar12;
          if (cos_y_term < 0.0) {
            local_18 = (float)3.1415926535900001 - local_18;
          }
        }
        if (local_18 < (float)-3.1415926535900001) {
          local_18 = local_18 + 6.283185f;
        }
        if ((float)3.1415926535900001 < local_18) {
          local_18 = local_18 + -6.283185f;
        }
        euler_out->y = local_18;
        sin_z_term = (double)matrix_in->m[1].w * inv_b * inv_cos_x;
        cos_z_term = (double)matrix_in->m[1].x * inv_b * inv_cos_x;
        if ((0.70699999999999996 <= sin_z_term) ||
           (sin_z_term <= -0.70699999999999996)) {
          if (-1 < cos_z_term) {
            if (cos_z_term < 1.0) {
              dVar7 = acos(cos_z_term);
              local_20 = (float)dVar7;
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (sin_z_term < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          fVar12 = asin((float10)sin_z_term);
          local_20 = (float)fVar12;
          if (cos_z_term < 0.0) {
            local_20 = (float)3.1415926535900001 - local_20;
          }
        }
        if (local_20 < (float)-3.1415926535900001) {
          local_20 = local_20 + 6.283185f;
        }
        if ((float)3.1415926535900001 < local_20) {
          local_20 = local_20 + -6.283185f;
        }
        euler_out->z = local_20;
        return euler_out;
      }
    }
    else {
      euler_out->x = 1.5707964;
    }
  }
  else {
    euler_out->x = -1.5707964;
  }
  // Singular case: cos_x == 0, only y is recoverable
  euler_out->z = 0.0;
  sin_y_term = -(double)matrix_in->m[2].w * inv_c;
  cos_y_term = (double)matrix_in->m[0].w * inv_a;
  if ((0.70699999999999996 <= sin_y_term) ||
     (sin_y_term <= -0.70699999999999996)) {
    if (-1 < cos_y_term) {
      if (cos_y_term < 1.0) {
        dVar7 = acos(cos_y_term);
        local_18 = (float)dVar7;
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (sin_y_term < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    fVar12 = asin((float10)sin_y_term);
    local_18 = (float)fVar12;
    if (cos_y_term < 0.0) {
      local_18 = (float)3.1415926535900001 - local_18;
    }
  }
  if (local_18 < (float)-3.1415926535900001) {
    local_18 = local_18 + 6.283185f;
  }
  if ((float)3.1415926535900001 < local_18) {
    local_18 = local_18 + -6.283185f;
  }
  euler_out->y = local_18;
  return euler_out;
}

// Name: core_xform.cpp_inverse_FUN_00592830
// Address: 00592830
// Address Range: [[00592830, 00592a59]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_00592830(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_00592830(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  double local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  local_3c = core_xform_cpp_determinant_FUN_005927e0(matrix_in);
  local_10 = (float)local_3c;
  if (ABS(local_10) == 0.0) {
    _DAT_01d046a0 = "..\\core\\xform.cpp";
    _DAT_01d046a4 = 0x23d;
    core_main_c_displayErrorAndQuit_FUN_004e4500("inverse() - Singular matrix");
  }
  local_14 = matrix_in->m[1].x * matrix_in->m[2].y - matrix_in->m[1].y * matrix_in->m[2].x;
  local_34 = -(matrix_in->m[1].w * matrix_in->m[2].y - matrix_in->m[1].y * matrix_in->m[2].w);
  local_10 = 1.0 / local_10;
  local_18 = matrix_in->m[1].w * matrix_in->m[2].x - matrix_in->m[1].x * matrix_in->m[2].w;
  local_30 = -(matrix_in->m[0].x * matrix_in->m[2].y - matrix_in->m[0].y * matrix_in->m[2].x);
  local_2c = matrix_in->m[0].w * matrix_in->m[2].y - matrix_in->m[0].y * matrix_in->m[2].w;
  local_28 = -(matrix_in->m[0].w * matrix_in->m[2].x - matrix_in->m[0].x * matrix_in->m[2].w);
  local_6c = local_14 * local_10;
  local_68 = local_30 * local_10;
  local_64 = (matrix_in->m[0].x * matrix_in->m[1].y - matrix_in->m[0].y * matrix_in->m[1].x) *
             local_10;
  local_5c = local_34 * local_10;
  local_1c = matrix_in->m[0].w * matrix_in->m[1].x - matrix_in->m[0].x * matrix_in->m[1].w;
  local_58 = local_2c * local_10;
  local_54 = -(matrix_in->m[0].w * matrix_in->m[1].y - matrix_in->m[0].y * matrix_in->m[1].w) *
             local_10;
  local_4c = local_18 * local_10;
  local_48 = local_28 * local_10;
  local_44 = local_1c * local_10;
  local_60 = -(matrix_in->m[2].z * local_64 +
              matrix_in->m[0].z * local_6c + matrix_in->m[1].z * local_68);
  local_50 = -(matrix_in->m[2].z * local_54 +
              matrix_in->m[1].z * local_58 + matrix_in->m[0].z * local_5c);
  local_40 = -(matrix_in->m[2].z * local_44 +
              matrix_in->m[1].z * local_48 + matrix_in->m[0].z * local_4c);
  pfVar2 = &local_6c;
  pCVar3 = matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return matrix_out;
}

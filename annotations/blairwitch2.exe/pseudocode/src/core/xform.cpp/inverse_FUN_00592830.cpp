// Name: core_xform.cpp_inverse_FUN_00592830
// Address: 00592830
// Address Range: [[00592830, 00592a59]]
// Convention: unknown
// Signature: void core_xform_cpp_inverse_FUN_00592830(CMatrix3x4f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_inverse_FUN_00592830(CMatrix3x4f *param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  byte bVar3;
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
  
  bVar3 = 0;
  local_3c = core_xform_cpp_determinant_FUN_005927e0(param_1);
  local_10 = (float)local_3c;
  if (ABS(local_10) == 0.0) {
    _DAT_01d046a0 = "..\\core\\xform.cpp";
    _DAT_01d046a4 = 0x23d;
    core_main_c_FUN_004e4500("inverse() - Singular matrix");
  }
  local_14 = param_1->m[1].x * param_1->m[2].y - param_1->m[1].y * param_1->m[2].x;
  local_34 = -(param_1->m[1].w * param_1->m[2].y - param_1->m[1].y * param_1->m[2].w);
  local_10 = 1.0 / local_10;
  local_18 = param_1->m[1].w * param_1->m[2].x - param_1->m[1].x * param_1->m[2].w;
  local_30 = -(param_1->m[0].x * param_1->m[2].y - param_1->m[0].y * param_1->m[2].x);
  local_2c = param_1->m[0].w * param_1->m[2].y - param_1->m[0].y * param_1->m[2].w;
  local_28 = -(param_1->m[0].w * param_1->m[2].x - param_1->m[0].x * param_1->m[2].w);
  local_6c = local_14 * local_10;
  local_68 = local_30 * local_10;
  local_64 = (param_1->m[0].x * param_1->m[1].y - param_1->m[0].y * param_1->m[1].x) * local_10;
  local_5c = local_34 * local_10;
  local_1c = param_1->m[0].w * param_1->m[1].x - param_1->m[0].x * param_1->m[1].w;
  local_58 = local_2c * local_10;
  local_54 = -(param_1->m[0].w * param_1->m[1].y - param_1->m[0].y * param_1->m[1].w) * local_10;
  local_4c = local_18 * local_10;
  local_48 = local_28 * local_10;
  local_44 = local_1c * local_10;
  local_60 = -(param_1->m[2].z * local_64 + param_1->m[0].z * local_6c + param_1->m[1].z * local_68)
  ;
  local_50 = -(param_1->m[2].z * local_54 + param_1->m[1].z * local_58 + param_1->m[0].z * local_5c)
  ;
  local_40 = -(param_1->m[2].z * local_44 + param_1->m[1].z * local_48 + param_1->m[0].z * local_4c)
  ;
  pfVar2 = &local_6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}

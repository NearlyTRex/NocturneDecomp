// Name: FUN_0055bd00
// Address: 0055bd00
// Address Range: [[0055bd00, 0055bf48]]
// Convention: unknown
// Signature: float * FUN_0055bd00(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0055bd00(float *param_1)

{
  int iVar1;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  double dVar5;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  bVar4 = 0;
  dVar5 = (double)FUN_0055bcb0(param_1);
  local_20 = dVar5;
  if ((((ulonglong)dVar5 & 0x7fffffff00000000) == 0) && (SUB84(__BITCAST_UINT64(dVar5),0) == 0)) {
    _DAT_01cc4800 = "..\\core\\xform.cpp";
    _DAT_01cc4804 = 0x23e;
    FUN_004c8440("inverse() - Singular matrix");
  }
  local_90 = param_1[5] * param_1[10] - param_1[6] * param_1[9];
  local_60 = (double)local_90;
  local_80 = -(param_1[4] * param_1[10] - param_1[6] * param_1[8]);
  local_28 = (double)local_80;
  dVar5 = 1.0 / dVar5;
  local_70 = param_1[4] * param_1[9] - param_1[5] * param_1[8];
  local_48 = (double)local_70;
  local_8c = -(param_1[1] * param_1[10] - param_1[2] * param_1[9]);
  local_58 = (double)local_8c;
  local_7c = *param_1 * param_1[10] - param_1[2] * param_1[8];
  local_50 = (double)local_7c;
  local_6c = -(*param_1 * param_1[9] - param_1[1] * param_1[8]);
  local_18 = (double)local_6c;
  local_90 = local_90 * (float)dVar5;
  local_8c = local_8c * (float)dVar5;
  local_88 = (param_1[1] * param_1[6] - param_1[2] * param_1[5]) * (float)dVar5;
  local_80 = local_80 * (float)dVar5;
  local_68 = *param_1 * param_1[5] - param_1[1] * param_1[4];
  local_30 = (double)local_68;
  local_7c = local_7c * (float)dVar5;
  local_78 = -(*param_1 * param_1[6] - param_1[2] * param_1[4]) * (float)dVar5;
  local_70 = local_70 * (float)dVar5;
  local_6c = local_6c * (float)dVar5;
  local_68 = local_68 * (float)dVar5;
  local_84 = -(param_1[0xb] * local_88 + param_1[3] * local_90 + param_1[7] * local_8c);
  local_74 = -(param_1[0xb] * local_78 + param_1[7] * local_7c + param_1[3] * local_80);
  local_64 = -(param_1[0xb] * local_68 + param_1[7] * local_6c + param_1[3] * local_70);
  pfVar2 = &local_90;
  pfVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  return unaff_ESI;
}

// Name: FUN_004df660
// Address: 004df660
// Address Range: [[004df660, 004df734]]
// Convention: unknown
// Signature: void FUN_004df660(int *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df660(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01cc4800 = "..\\core\\morph.cpp";
    _DAT_01cc4804 = 0x112;
    FUN_004c8440("CMorphModel::animate - invalid part index");
  }
  param_4 = param_4 + param_1[param_2 * 4 + 3];
  if (param_1[param_2 * 4 + 3] + param_1[param_2 * 4 + 1] < param_4 + param_5) {
    _DAT_01cc4800 = "..\\core\\morph.cpp";
    _DAT_01cc4804 = 0x119;
    FUN_004c8440("CMorphModel::animate - invalid vertex range");
  }
  iVar1 = 0;
  if (0 < param_5) {
    param_4 = param_4 * 0x10;
    do {
      iVar2 = param_1[0x16] + param_4;
      iVar1 = iVar1 + 1;
      *(float *)(iVar2 + 4) = (float)*param_3 * _DAT_005a0cc8;
      *(float *)(iVar2 + 8) = (float)param_3[1] * _DAT_005a0cc8;
      *(float *)(iVar2 + 0xc) = (float)param_3[2] * _DAT_005a0cc8;
      param_4 = param_4 + 0x10;
      param_3 = param_3 + 3;
    } while (iVar1 < param_5);
  }
  return;
}

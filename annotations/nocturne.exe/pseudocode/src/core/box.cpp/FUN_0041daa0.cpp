// Name: core_box.cpp_FUN_0041daa0
// Address: 0041daa0
// Address Range: [[0041daa0, 0041dbb7]]
// Convention: unknown
// Signature: void core_box_cpp_FUN_0041daa0(float *param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_box_cpp_FUN_0041daa0(float *param_1,int param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = 1;
  iVar6 = *param_3;
  iVar4 = param_3[1];
  local_20 = param_3[2];
  local_28 = iVar6;
  local_24 = iVar4;
  local_1c = local_20;
  if (1 < param_2) {
    do {
      iVar1 = param_3[3];
      iVar3 = iVar1;
      if ((local_28 <= iVar1) && (iVar3 = local_28, iVar6 < iVar1)) {
        iVar6 = iVar1;
      }
      local_28 = iVar3;
      iVar1 = param_3[4];
      iVar3 = iVar1;
      if ((local_24 <= iVar1) && (iVar3 = local_24, iVar4 < iVar1)) {
        iVar4 = iVar1;
      }
      local_24 = iVar3;
      iVar1 = param_3[5];
      iVar3 = iVar1;
      if ((local_20 <= iVar1) && (iVar3 = local_20, iVar4 < iVar1)) {
        local_1c = iVar1;
      }
      local_20 = iVar3;
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 3;
    } while (iVar5 < param_2);
  }
  fVar2 = (float)_DAT_005797d5;
  *param_1 = (float)local_28 * fVar2;
  param_1[1] = (float)local_24 * fVar2;
  param_1[3] = (float)iVar6 * fVar2;
  param_1[4] = (float)iVar4 * fVar2;
  param_1[2] = (float)local_20 * fVar2;
  param_1[5] = (float)local_1c * fVar2;
  return;
}

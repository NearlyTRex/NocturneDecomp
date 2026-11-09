// Name: unkafter_winrun.cpp_FUN_005b3c90
// Address: 005b3c90
// Address Range: [[005b3c90, 005b3d6e]]
// Convention: unknown
// Signature: float unkafter_winrun_cpp_FUN_005b3c90(int param_1,int *param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float unkafter_winrun_cpp_FUN_005b3c90(int param_1,int *param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (param_1 < *param_2) {
    *param_2 = param_1;
  }
  if (param_2[1] < param_1) {
    param_2[1] = param_1;
  }
  fVar3 = (param_3 + param_4) * (float)_DAT_005f9ec7;
  if (_DAT_02c9d294 != 0) {
    param_2[2] = param_1;
  }
  iVar1 = param_2[2];
  if (param_1 < iVar1) {
    iVar4 = *param_2;
    fVar2 = param_3;
    if (iVar1 <= iVar4) {
      return fVar3;
    }
  }
  else {
    iVar4 = param_2[1];
    fVar2 = param_4;
    if (iVar4 <= iVar1) {
      return fVar3;
    }
  }
  fVar2 = fVar2 + ((fVar3 - fVar2) * (float)(param_1 - iVar4)) / (float)(iVar1 - iVar4);
  if ((param_3 <= fVar2) && (param_3 = param_4, fVar2 <= param_4)) {
    return fVar2;
  }
  return param_3;
}

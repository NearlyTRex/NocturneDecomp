// Name: FUN_004015a0
// Address: 004015a0
// Address Range: [[004015a0, 00401673]]
// Convention: unknown
// Signature: void FUN_004015a0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004015a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 1;
  iVar2 = param_1;
  iVar1 = param_4;
  if (param_4 < param_2) {
    iVar2 = param_3;
    param_3 = param_1;
    iVar1 = param_2;
    param_2 = param_4;
  }
  iVar1 = iVar1 - param_2;
  param_3 = param_3 - iVar2;
  if (param_3 < 0) {
    param_3 = -param_3;
    local_20 = -1;
  }
  if (iVar1 < param_3) {
    local_18 = 0;
    iVar3 = iVar1 * 2 - param_3;
    if (-1 < param_3) {
      do {
        FUN_00401530(iVar2,param_2);
        if (0 < iVar3) {
          param_2 = param_2 + 1;
          iVar3 = iVar3 - param_3;
        }
        local_18 = local_18 + 1;
        iVar2 = iVar2 + local_20;
        iVar3 = iVar3 + iVar1;
      } while (local_18 <= param_3);
    }
  }
  else {
    local_1c = 0;
    iVar3 = param_3 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        FUN_00401530(iVar2,param_2);
        if (0 < iVar3) {
          iVar3 = iVar3 - iVar1;
          iVar2 = iVar2 + local_20;
        }
        param_2 = param_2 + 1;
        local_1c = local_1c + 1;
        iVar3 = iVar3 + param_3;
      } while (local_1c <= iVar1);
    }
  }
  return;
}

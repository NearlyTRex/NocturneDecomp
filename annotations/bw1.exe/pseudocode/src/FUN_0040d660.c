// Name: FUN_0040d660
// Address: 0040d660
// Address Range: [[0040d660, 0040d832]]
// Convention: unknown
// Signature: undefined8 FUN_0040d660(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,undefined4 param_8)

#include "nocturne.h"

ulonglong FUN_0040d660(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = (param_6 - param_4) + 1;
  iVar3 = (param_7 - param_5) + 1;
  local_18 = param_2;
  local_14 = DAT_0061b498;
  if ((((param_2 < DAT_0061b498) && (local_18 = param_3, param_3 < DAT_0061b49c)) &&
      (local_18 = param_2 + local_1c, -1 < local_18)) &&
     (local_14 = param_3 + iVar3, -1 < param_3 + iVar3)) {
    if (param_2 < 0) {
      param_4 = param_4 - param_2;
      param_2 = 0;
      local_1c = local_18;
    }
    if (param_3 < 0) {
      iVar3 = iVar3 + param_3;
      param_5 = param_5 - param_3;
      param_3 = 0;
    }
    if (DAT_0061b498 <= param_2 + local_1c) {
      local_1c = local_1c - ((param_2 + local_1c) - DAT_0061b498);
    }
    if (DAT_0061b49c <= param_3 + iVar3) {
      iVar3 = iVar3 - ((param_3 + iVar3) - DAT_0061b49c);
    }
    FUN_0040d910(param_1);
    param_4 = param_4 + param_5 * param_1[3];
    iVar4 = *param_1 + param_4;
    param_4 = param_4 + param_1[1];
    local_18 = param_3 * 4;
    iVar2 = iVar3 * 4 + local_18;
    local_14 = iVar2;
    if (DAT_0061b4a0 == 0x20) {
      if (0 < iVar3) {
        local_14 = local_18;
        do {
          local_18 = FUN_0057ff73(*(int *)(&DAT_01c4354c + local_14) + param_2 * 4,iVar4,param_4,
                                  param_8,local_1c);
          iVar4 = iVar4 + param_1[3];
          local_14 = local_14 + 4;
          param_4 = param_4 + param_1[3];
        } while (local_14 < iVar2);
      }
    }
    else if (0 < iVar3) {
      do {
        uVar1 = FUN_0058000e(*(int *)(&DAT_01c4354c + local_18) + param_2 * 2,iVar4,param_4,param_8,
                             local_1c);
        iVar4 = iVar4 + param_1[3];
        local_18 = local_18 + 4;
        param_4 = param_4 + param_1[3];
      } while (local_18 < iVar2);
      return CONCAT44(local_18,uVar1);
    }
  }
  return CONCAT44(local_14,local_18);
}

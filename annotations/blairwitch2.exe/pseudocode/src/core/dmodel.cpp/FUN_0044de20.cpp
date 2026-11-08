// Name: FUN_0044de20
// Address: 0044de20
// Address Range: [[0044de20, 0044e009]]
// Convention: unknown
// Signature: void FUN_0044de20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044de20(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  iVar1 = FUN_005b87c0(&local_2c,0x18,1,param_2);
  if (iVar1 != 1) goto LAB_0044de99;
  do {
    if ((local_2c < 3) || (4 < local_2c)) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0xed;
      FUN_004e4500("KFM file is invalid version %d",local_2c);
    }
    local_14 = 0;
    if ((local_2c < 4) || (iVar1 = FUN_005b87c0(&local_14,4,1,param_2), iVar1 == 1)) {
      FUN_0044ea80(param_1,local_28,local_24,local_20,local_1c,local_18);
      iVar1 = FUN_005b87c0(*(uint *)(param_1 + 0x10c),
                           *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x100) * 0xc,1,param_2);
      if ((iVar1 == 1) &&
         ((*(int *)(param_1 + 0x110) < 1 ||
          ((iVar1 = FUN_005b87c0(*(uint *)(param_1 + 0x114),*(int *)(param_1 + 0x110) * 0x48,1
                                 ,param_2), iVar1 == 1 &&
           (iVar1 = FUN_005b87c0(*(uint *)(param_1 + 0x118),*(int *)(param_1 + 0x110) << 2,1,
                                 param_2), iVar1 == 1)))))) {
        if (0 < *(int *)(param_1 + 0x120)) {
          FUN_005b77c0(param_1 + 0x124,0,0x120);
          for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x120); iVar1 = iVar1 + 1) {
            iVar2 = FUN_005b87c0(iVar1 * 0x48 + param_1 + 0x124,0x18,1,param_2);
            if (iVar2 != 1) goto LAB_0044de99;
          }
        }
        iVar1 = FUN_005b87c0(param_1 + 0x248,*(int *)(param_1 + 0x244) << 3,1,param_2);
        if (iVar1 == 1) {
          if (local_14 != 0) {
            FUN_0044f760(param_1);
            return;
          }
          return;
        }
      }
    }
LAB_0044de99:
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0xe7;
    FUN_004e4500("Error reading keyframed model file");
  } while( true );
}

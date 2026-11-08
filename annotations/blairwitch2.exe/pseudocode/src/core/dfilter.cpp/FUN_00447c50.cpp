// Name: FUN_00447c50
// Address: 00447c50
// Address Range: [[00447c50, 00447dd5]]
// Convention: unknown
// Signature: void FUN_00447c50(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447c50(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  FUN_00447c30(param_1);
  if (param_2 != 0) {
    FUN_005b7790(auStack_10c,0x5cecd0,param_2);
    iVar1 = FUN_00460c70(param_2,auStack_10c,0x5cecd7);
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\dfilter.cpp";
      _DAT_01d046a4 = 0x15a;
      FUN_004e4500("Can't open movie %s.txt",param_2);
    }
    FUN_005b8100(iVar1,0x5ced06,param_1);
    FUN_005b89c0(iVar1);
    iVar1 = FUN_005b8580(*param_1 << 0xd);
    param_1[1] = iVar1;
    FUN_005b7790(auStack_10c,0x5ced0a,param_2);
    iVar1 = FUN_00460c70(param_2,auStack_10c,0x5ced11);
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\dfilter.cpp";
      _DAT_01d046a4 = 0x166;
      FUN_004e4500("Can't open movie %s.mov",param_2);
    }
    FUN_005b87c0(param_1[1],0x2000,*param_1,iVar1);
    FUN_005b89c0(iVar1);
    for (iVar1 = 0; iVar1 < *param_1 * 0x2000; iVar1 = iVar1 + 1) {
      *(char *)(iVar1 + param_1[1]) =
           (char)((uint)((int)(uint)*(byte *)(iVar1 + param_1[1]) >> 2) / 2);
    }
    param_1[2] = 0;
    return;
  }
  uVar2 = FUN_004477a0(0x015111A8,"?movscrn.raw" + 1);
  FUN_004478d0(uVar2,"movscrn.raw");
  return;
}

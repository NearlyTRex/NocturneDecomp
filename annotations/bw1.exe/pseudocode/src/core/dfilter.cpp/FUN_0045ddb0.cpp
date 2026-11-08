// Name: FUN_0045ddb0
// Address: 0045ddb0
// Address Range: [[0045ddb0, 0045df35]]
// Convention: unknown
// Signature: void FUN_0045ddb0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ddb0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  FUN_0045dd90(param_1);
  if (param_2 != 0) {
    FUN_005bfb40(auStack_10c,0x5d85c9,param_2);
    iVar1 = FUN_00479180(param_2,auStack_10c,0x5d85d0);
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dfilter.cpp";
      _DAT_01d1d404 = 0x15a;
      FUN_005030e0("Can't open movie %s.txt",param_2);
    }
    FUN_005c04b0(iVar1,0x5d85ff,param_1);
    FUN_005c0d10(iVar1);
    iVar1 = FUN_005c08d0(*param_1 << 0xd);
    param_1[1] = iVar1;
    FUN_005bfb40(auStack_10c,0x5d8603,param_2);
    iVar1 = FUN_00479180(param_2,auStack_10c,0x5d860a);
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dfilter.cpp";
      _DAT_01d1d404 = 0x166;
      FUN_005030e0("Can't open movie %s.mov",param_2);
    }
    FUN_005c0b10(param_1[1],0x2000,*param_1,iVar1);
    FUN_005c0d10(iVar1);
    for (iVar1 = 0; iVar1 < *param_1 * 0x2000; iVar1 = iVar1 + 1) {
      *(char *)(iVar1 + param_1[1]) =
           (char)((uint)((int)(uint)*(byte *)(iVar1 + param_1[1]) >> 2) / 2);
    }
    param_1[2] = 0;
    return;
  }
  uVar2 = FUN_0045d900(0x0152C72C,"?movscrn.raw" + 1);
  FUN_0045da30(uVar2,"movscrn.raw");
  return;
}

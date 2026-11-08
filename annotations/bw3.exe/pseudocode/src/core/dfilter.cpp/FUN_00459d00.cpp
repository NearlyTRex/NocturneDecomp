// Name: FUN_00459d00
// Address: 00459d00
// Address Range: [[00459d00, 00459e85]]
// Convention: unknown
// Signature: void FUN_00459d00(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459d00(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  FUN_00459ce0(param_1);
  if (param_2 != 0) {
    FUN_005a28c0(auStack_10c,0x5bac22,param_2);
    iVar1 = FUN_004659c0(param_2,auStack_10c,0x5bac29);
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dfilter.cpp";
      _DAT_01d71de4 = 0x15a;
      FUN_004e4330("Can't open movie %s.txt",param_2);
    }
    FUN_005a3230(iVar1,0x5bac58,param_1);
    FUN_005a3a90(iVar1);
    iVar1 = FUN_005a3650(*param_1 << 0xd);
    param_1[1] = iVar1;
    FUN_005a28c0(auStack_10c,0x5bac5c,param_2);
    iVar1 = FUN_004659c0(param_2,auStack_10c,0x5bac63);
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dfilter.cpp";
      _DAT_01d71de4 = 0x166;
      FUN_004e4330("Can't open movie %s.mov",param_2);
    }
    FUN_005a3890(param_1[1],0x2000,*param_1,iVar1);
    FUN_005a3a90(iVar1);
    for (iVar1 = 0; iVar1 < *param_1 * 0x2000; iVar1 = iVar1 + 1) {
      *(char *)(iVar1 + param_1[1]) =
           (char)((uint)((int)(uint)*(byte *)(iVar1 + param_1[1]) >> 2) / 2);
    }
    param_1[2] = 0;
    return;
  }
  uVar2 = FUN_00459850(0x01548F90,"?movscrn.raw" + 1);
  FUN_00459980(uVar2,"movscrn.raw");
  return;
}

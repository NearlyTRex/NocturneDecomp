// Name: FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a997b]]
// Convention: unknown
// Signature: void FUN_005a9890(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a9890(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_005a8180(param_1 + 0x264,param_2);
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    iVar1 = param_1 + 0x2b4;
    iVar2 = FUN_005035c0(iVar1);
    if (*(int *)(iVar2 + 0x24) != 0xb) {
      iVar2 = FUN_005035c0(iVar1);
      if (*(int *)(iVar2 + 0x24) != 0xc) {
        FUN_0059d7f0(param_1 + 0x10af8,"BurnComplete","Death");
        FUN_00503620(iVar1,0xc,1);
        return;
      }
    }
  }
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0xb) {
    *(uint *)(param_1 + 0x10a28) = 0;
  }
  iVar1 = param_1 + 0x10af8;
  iVar2 = FUN_0059daa0(iVar1,"Death");
  if (iVar2 == 0) {
    iVar2 = FUN_0059daa0(iVar1,"Animation");
    if (iVar2 == 0) {
      iVar1 = FUN_0059daa0(iVar1,&DAT_005f0987);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
        return;
      }
    }
  }
  return;
}

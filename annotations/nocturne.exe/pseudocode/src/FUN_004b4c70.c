// Name: FUN_004b4c70
// Address: 004b4c70
// Address Range: [[004b4c70, 004b4d45]]
// Convention: unknown
// Signature: undefined4 FUN_004b4c70(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_004b4c70(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte local_14 [12];
  
  if (param_3 == 0) {
    iVar1 = param_1 + 0x150;
    uVar2 = FUN_004e1890(iVar1,"GETGRABBED",0);
    iVar3 = FUN_004e10a0(uVar2);
    if (iVar3 < 0) {
      return 0;
    }
    uVar2 = FUN_004e1890(iVar1,"GETGRABBED_FRONT",0);
    iVar3 = FUN_004e10a0(uVar2);
    if (iVar3 < 0) {
      FUN_004e1740(iVar1,"GETGRABBED",1);
    }
    else {
      iVar3 = FUN_0040a290(param_1,local_14,param_2 + 0x20);
      if (*(float *)(iVar3 + 8) <= 0.0) {
        FUN_004e1740(iVar1,"GETGRABBED_BACK",1);
      }
      else {
        FUN_004e1740(iVar1,"GETGRABBED_FRONT",1);
      }
    }
  }
  *(int *)(param_1 + 0x2590) = param_2;
  *(int *)(param_1 + 0x2594) = param_3;
  return 1;
}

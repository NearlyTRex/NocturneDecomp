// Name: FUN_004cea50
// Address: 004cea50
// Address Range: [[004cea50, 004ceb78]]
// Convention: unknown
// Signature: undefined4 FUN_004cea50(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_004cea50(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1010 [1014];
  char *pcVar5;
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  FUN_00436710(PTR_DAT_00609ed0,"CHero::startGettingGrabbed by %s, type %d\n",param_2,param_3);
  iVar3 = param_1 + 0x2b4;
  uVar1 = FUN_005035c0(iVar3);
  FUN_00436710(PTR_DAT_00609ed0,"  current motion is %s\n",uVar1);
  if (param_3 == 0) {
    uVar1 = FUN_00503860(iVar3,"GETGRABBED",0);
    iVar2 = FUN_00502fa0(uVar1);
    if (iVar2 < 0) {
      return 0;
    }
    uVar1 = FUN_00503860(iVar3,"GETGRABBED_FRONT",0);
    iVar2 = FUN_00502fa0(uVar1);
    if (iVar2 < 0) {
      pcVar5 = "GETGRABBED";
    }
    else {
      FUN_00408de0(param_1,param_2 + 0x20);
      local_1c = local_28;
      *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (local_14 <= 0.0) {
        pcVar5 = "GETGRABBED_BACK";
      }
      else {
        pcVar5 = "GETGRABBED_FRONT";
      }
    }
    FUN_005036b0(iVar3,pcVar5,1);
  }
  FUN_00436710(PTR_DAT_00609ed0,"  We are grabbed\n");
  *(int *)(param_1 + 0x276c) = param_2;
  *(int *)(param_1 + 0x2770) = param_3;
  return 1;
}

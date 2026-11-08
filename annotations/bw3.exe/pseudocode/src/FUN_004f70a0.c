// Name: FUN_004f70a0
// Address: 004f70a0
// Address Range: [[004f70a0, 004f7225]]
// Convention: unknown
// Signature: void FUN_004f70a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f70a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte local_24 [20];
  
  if (param_1[0x406] != 0) {
    iVar2 = 0;
    piVar1 = param_1;
    if (0 < param_1[0x406]) {
      do {
        iVar2 = iVar2 + 1;
        FUN_004f6ca0(param_1,piVar1[0x407],piVar1[0x46b]);
        piVar1 = piVar1 + 1;
      } while (iVar2 < param_1[0x406]);
    }
    param_1[0x406] = 0;
  }
  FUN_004f6f80(param_1);
  if (-1 < param_1[0x514]) {
    iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    *(int *)(iVar2 + 0x20) = param_1[0x511];
    *(int *)(iVar2 + 0x24) = param_1[0x512];
    *(int *)(iVar2 + 0x28) = param_1[0x513];
    *(int *)(iVar2 + 0x2c) = param_1[0x514];
    if (param_1[0x514] != *param_1) {
      FUN_0040d2e0(local_24);
      FUN_0040d400(local_24);
      FUN_0040d460(local_24,&DAT_01d88308,0x280,0x1e0);
      iVar2 = 0;
      do {
        FUN_00565820();
        FUN_0040dbe0(local_24);
        FUN_00565870(0);
        iVar2 = iVar2 + 1;
        FUN_0057a8a0();
      } while (iVar2 < 3);
      FUN_004f6de0(param_1,param_1[0x514]);
      FUN_00537520(0x01ED78C8);
      FUN_00534420(0x01ED78C8);
      *(uint *)(0x01ED73E0 + 0x10) = 2;
      FUN_0040d300(local_24,0);
    }
    param_1[0x405] = 0;
    param_1[0x514] = -1;
    param_1[0x513] = 0;
    param_1[0x512] = param_1[0x513];
    param_1[0x511] = param_1[0x512];
  }
  return;
}

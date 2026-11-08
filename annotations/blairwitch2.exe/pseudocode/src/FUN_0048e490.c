// Name: FUN_0048e490
// Address: 0048e490
// Address Range: [[0048e490, 0048e7ba]]
// Convention: unknown
// Signature: void FUN_0048e490(int param_1)

#include "nocturne.h"

void FUN_0048e490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_3a8 [200];
  byte local_2e0 [200];
  byte local_218 [200];
  byte local_150 [100];
  byte local_ec [100];
  byte local_88 [100];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = 0x2c;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1908)) {
    iVar3 = param_1 + 0x190c;
    iVar2 = iVar1;
    do {
      FUN_005b7790(local_218,"Game Flag: %s",iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
      iVar1 = iVar2 + 0xb;
      FUN_00401fe0(local_218,0,iVar2);
      iVar2 = iVar1;
    } while (iVar4 < *(int *)(param_1 + 0x1908));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x258c)) {
    iVar3 = param_1 + 0x2590;
    iVar2 = iVar1;
    do {
      FUN_005b7790(local_3a8,"Persistent: %s",iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
      iVar1 = iVar2 + 0xb;
      FUN_00401fe0(local_3a8,0,iVar2);
      iVar2 = iVar1;
    } while (iVar4 < *(int *)(param_1 + 0x258c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3210)) {
    iVar3 = param_1 + 0x3214;
    local_24 = param_1;
    do {
      FUN_005b7790(local_2e0,"Timer: %5.2f %s",(double)*(float *)(local_24 + 0x3354),iVar3);
      iVar4 = iVar4 + 1;
      FUN_00401fe0(local_2e0,0,iVar1);
      iVar3 = iVar3 + 0x20;
      iVar1 = iVar1 + 0xb;
      local_24 = local_24 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x3210));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc84)) {
    iVar3 = param_1 + 0xc88;
    iVar2 = iVar1;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = iVar2 + 0xb;
      FUN_00401fe0(iVar3,0,iVar2);
      iVar3 = iVar3 + 0x20;
      iVar2 = iVar1;
    } while (iVar4 < *(int *)(param_1 + 0xc84));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x337c)) {
    local_1c = param_1 + 0x3380;
    iVar3 = param_1;
    do {
      FUN_005b7790(local_88,"%s=%d",local_1c,*(uint *)(iVar3 + 0x34c0));
      iVar3 = iVar3 + 4;
      FUN_00401fe0(local_88,0,iVar1);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar4 < *(int *)(param_1 + 0x337c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x34e8)) {
    iVar3 = param_1 + 0x37da;
    local_18 = param_1 + 0x34ec;
    do {
      FUN_005b7790(local_ec,"%s=%s",local_18,iVar3);
      iVar4 = iVar4 + 1;
      FUN_00401fe0(local_ec,0,iVar1);
      iVar3 = iVar3 + 0x1e;
      iVar1 = iVar1 + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar4 < *(int *)(param_1 + 0x34e8));
  }
  FUN_00491a90(param_1);
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    local_20 = param_1 + 0x3ad0;
    iVar4 = param_1 + 0x3ae4;
    iVar3 = param_1;
    do {
      FUN_005b7790(local_150,"%s=%s %.1f",local_20,iVar4,*(uint *)(iVar3 + 0x3be4),
                   *(uint *)(iVar3 + 0x3be8));
      iVar3 = iVar3 + 0x120;
      iVar4 = iVar4 + 0x120;
      FUN_00401fe0(local_150,0,iVar1);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      iVar1 = iVar1 + 0xb;
    } while (local_14 < *(int *)(param_1 + 0x3ac8));
  }
  return;
}

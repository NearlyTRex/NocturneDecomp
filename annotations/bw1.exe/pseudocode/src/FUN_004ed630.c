// Name: FUN_004ed630
// Address: 004ed630
// Address Range: [[004ed630, 004ed7f8]]
// Convention: unknown
// Signature: void FUN_004ed630(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed630(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00569b20(param_1 + 0x158);
  iVar2 = param_1 + 0x24a8;
  *(uint *)(param_1 + 0x1fe68) = 6;
  iVar1 = FUN_005c04e0(iVar2,"hickboy.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 0;
  }
  iVar1 = FUN_005c04e0(iVar2,"depute.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 1;
  }
  iVar1 = FUN_005c04e0(iVar2,"hickho.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 2;
  }
  iVar1 = FUN_005c04e0(iVar2,"hickgirl.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 4;
  }
  iVar1 = FUN_005c04e0(iVar2,"hickdad.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 5;
  }
  iVar2 = FUN_005c04e0(iVar2,"preacher.dfm");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 3;
  }
  uVar3 = FUN_00569f30(param_1 + 0x158);
  uVar4 = FUN_00524a00(param_1 + 0x158);
  uVar5 = FUN_005634f0(uVar3,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0x1fe80) = uVar5;
  uVar5 = FUN_005634f0(uVar3,"Bip01 Head",1);
  *(uint *)(param_1 + 0x1fe7c) = uVar5;
  uVar5 = FUN_005634f0(uVar3,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0x1fe84) = uVar5;
  uVar5 = FUN_005634f0(uVar3,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0x1fe88) = uVar5;
  uVar5 = FUN_005634f0(uVar3,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x2620) = uVar5;
  if (*(int *)(param_1 + 0x1fe68) != 1) {
    uVar5 = FUN_005634f0(uVar3,"Bip01 L Hand",1);
    *(uint *)(param_1 + 0x25a8) = uVar5;
  }
  uVar3 = FUN_005634f0(uVar3,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x2750) = uVar3;
  if (*(int *)(param_1 + 0x1fe68) == 1) {
    _DAT_01d06b8c = FUN_005240c0(uVar4,"gunup",1);
  }
  FUN_00531720(param_1);
  *(uint *)(param_1 + 0x1fe60) = 0;
  return;
}

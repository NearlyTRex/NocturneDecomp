// Name: FUN_0059b770
// Address: 0059b770
// Address Range: [[0059b770, 0059b8f0]]
// Convention: unknown
// Signature: void FUN_0059b770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b770(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00489110(param_1);
  if (*(int *)(param_1 + 0x3268) == 0) {
    *(uint *)(param_1 + 0xce5c) = 0x41a00000;
    *(uint *)(param_1 + 0xce60) = 0x41a00000;
    *(uint *)(param_1 + 0x2538) = 0x43160000;
  }
  iVar2 = param_1 + 0x158;
  FUN_0054e6b0(iVar2);
  uVar1 = FUN_0054eac0(iVar2);
  _DAT_02d24c4c = FUN_00548090(uVar1,"@Bip01 Head" + 1,1);
  _DAT_02d24c54 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x25a8) = _DAT_02d24c54;
  FUN_0054ea40(iVar2);
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 0;
  iVar2 = FUN_004fc070(iVar2);
  if (*(int *)(iVar2 + 0x24) == 8) {
    *(uint *)(param_1 + 0x2540) = 0;
  }
  else {
    *(uint *)(param_1 + 0x2540) = 2;
  }
  *(uint *)(param_1 + 0xd054) = 0;
  *(uint *)(param_1 + 0xd058) = 0;
  FUN_00556230("hino_stand_fly.wav");
  FUN_00556230("hino_walk_fly.wav");
  FUN_00556230("hino_run_fly.wav");
  FUN_00556230("hino_reverse.wav");
  FUN_00556230("hino_attack_fly.wav");
  FUN_00556230("hino_attack_fly2.wav");
  FUN_00556230("hino_damage_fly.wav");
  FUN_00556230("hino_die_fly.wav");
  FUN_00556230("hino_warning.wav");
  FUN_00556230("hino_big_attack.wav");
  FUN_00556230("hino_appear.wav");
  FUN_00556230("hino_disappear.wav");
  return;
}

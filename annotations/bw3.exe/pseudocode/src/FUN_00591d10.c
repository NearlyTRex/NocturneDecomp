// Name: FUN_00591d10
// Address: 00591d10
// Address Range: [[00591d10, 00591ee1]]
// Convention: unknown
// Signature: void FUN_00591d10(int param_1)

#include "nocturne.h"

void FUN_00591d10(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3268) == 0) {
    *(uint *)(param_1 + 0xce5c) = 0x41a00000;
    *(uint *)(param_1 + 0xce60) = 0x41a00000;
    *(uint *)(param_1 + 0x2538) = 0x43480000;
  }
  iVar3 = param_1 + 0x158;
  FUN_0054e6b0(iVar3);
  uVar1 = FUN_0054eac0(iVar3);
  uVar2 = FUN_00548090(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xd078) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xd074) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Toe0",1);
  *(uint *)(param_1 + 0xd084) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Toe0",1);
  *(uint *)(param_1 + 0xd088) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xd07c) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xce5c) = 0;
  *(uint *)(param_1 + 0xd080) = uVar1;
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0xd078);
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0xd074);
  FUN_00489110(param_1);
  iVar3 = FUN_004fc070(iVar3);
  if (*(int *)(iVar3 + 0x24) == 9) {
    *(uint *)(param_1 + 0x2540) = 0;
  }
  else {
    *(uint *)(param_1 + 0x2540) = 2;
  }
  FUN_00556230("mann_firestaff.wav");
  FUN_00556230("mann_stand.wav");
  FUN_00556230("mann_chasewalk.wav");
  FUN_00556230("mann_chasefast.wav");
  FUN_00556230("mann_attack.wav");
  FUN_00556230("mann_attack1.wav");
  FUN_00556230("mann_attack2.wav");
  FUN_00556230("mann_attack3.wav");
  FUN_00556230("mann_pain.wav");
  FUN_00556230("mann_die.wav");
  FUN_00556230("mann_warning.wav");
  FUN_00556230("mann_appear.wav");
  FUN_00556230("mann_disappear.wav");
  return;
}

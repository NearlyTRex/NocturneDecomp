// Name: FUN_0059e130
// Address: 0059e130
// Address Range: [[0059e130, 0059e588]]
// Convention: unknown
// Signature: void FUN_0059e130(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e130(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x3268) == 0) {
    *(uint *)(param_1 + 0xce5c) = 0x41a00000;
    *(uint *)(param_1 + 0xce60) = 0x41a00000;
    *(uint *)(param_1 + 0x2538) = 0x437a0000;
  }
  iVar4 = param_1 + 0x158;
  FUN_0054e6b0(iVar4);
  FUN_0042f280(2);
  FUN_0042f280(4);
  FUN_0042f280(3);
  uVar2 = FUN_0054eac0(iVar4);
  _DAT_02d24cf4 = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_02d24cf8 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_02d24d04 = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_02d24cfc = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_02d24d00 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x25a8) = _DAT_02d24cf8;
  *(uint *)(param_1 + 0x2620) = _DAT_02d24cf4;
  iVar3 = FUN_004fc070(iVar4);
  if (*(int *)(iVar3 + 0x24) != 6) {
    iVar4 = FUN_004fc070(iVar4);
    if (*(int *)(iVar4 + 0x24) != 0xf) {
      *(uint *)(param_1 + 0x2540) = 2;
      goto LAB_0059e234;
    }
  }
  *(uint *)(param_1 + 0x2540) = 0;
LAB_0059e234:
  if (*(int *)(param_1 + 0xd05c) == 0) {
    iVar4 = FUN_0040c4f0("CStyler");
    *(int *)(param_1 + 0xd060) = iVar4;
    FUN_0054eae0(iVar4 + 0x158,"bwp_stylersub.dfm");
    pcVar5 = "Elizabeth-Demon";
    pcVar6 = *(char **)(param_1 + 0xd060);
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar4 = *(int *)(param_1 + 0xd060);
    *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0xd060);
    if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    *(uint *)(*(int *)(param_1 + 0xd060) + 0x27b8) = 0x3f800000;
    *(uint *)(*(int *)(param_1 + 0xd060) + 0x47b90) = 1;
    (*(code *)**(uint **)(*(int *)(param_1 + 0xd060) + 0x154))(*(int *)(param_1 + 0xd060));
    uVar2 = FUN_004fc310(*(int *)(param_1 + 0xd060) + 0x158,"getUpDustOff",1);
    uVar2 = FUN_004fb9c0(uVar2);
    FUN_004fc420(*(int *)(param_1 + 0xd060) + 0x158,uVar2,0);
    FUN_0054c090(*(int *)(param_1 + 0xd060) + 0x158);
    FUN_0054dd10(*(int *)(param_1 + 0xd060) + 0x158);
    iVar4 = param_1 + 0x158;
    FUN_0054c090(iVar4);
    FUN_0054dd10(iVar4);
    FUN_0054e6b0(iVar4);
  }
  iVar4 = param_1 + 0xd064;
  FUN_004fa9c0(iVar4,0,param_1 + 0x158);
  FUN_004fa9c0(iVar4,1,*(int *)(param_1 + 0xd060) + 0x158);
  FUN_004fac10(iVar4);
  *(uint *)(param_1 + 0xdc98) = 0;
  FUN_0054c110(param_1 + 0x158);
  FUN_0054c110(*(int *)(param_1 + 0xd060) + 0x158);
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xcdcc) = 0x3f800000;
  iVar4 = FUN_0040c4f0("CZombie");
  FUN_0054e6b0(iVar4 + 0x158);
  FUN_00556230("stydem_stand.wav");
  FUN_00556230("stydem_walk.wav");
  FUN_00556230("stydem_run.wav");
  FUN_00556230("stydem_attack.wav");
  FUN_00556230("stydem_damage.wav");
  FUN_00556230("stydem_die.wav");
  FUN_00556230("stydem_stand_fly.wav");
  FUN_00556230("stydem_walk_fly.wav");
  FUN_00556230("stydem_run_fly.wav");
  FUN_00556230("stydem_attack_fly.wav");
  FUN_00556230("stydem_warning_fly_spell.wav");
  FUN_00556230("stydem_fly_spell.wav");
  FUN_00556230("stydem_damage_fly.wav");
  FUN_00556230("stydem_die_fly.wav");
  FUN_00556230("stydem_takeoff.wav");
  FUN_00556230("stydem_land.wav");
  FUN_00556230("stydem_warning_spell_1.wav");
  FUN_00556230("stydem_spell_1.wav");
  FUN_00556230("stydem_warning_spell_2.wav");
  FUN_00556230("stydem_spell_2.wav");
  FUN_00556230("stydem_warning_spell_3.wav");
  FUN_00556230("stydem_spell_3.wav");
  FUN_00556230("stydem_raise_zombie.wav");
  FUN_00556230("stydem_transforming.wav");
  FUN_00556230("stydem_taunt1.wav");
  FUN_00556230("stydem_taunt2.wav");
  return;
}

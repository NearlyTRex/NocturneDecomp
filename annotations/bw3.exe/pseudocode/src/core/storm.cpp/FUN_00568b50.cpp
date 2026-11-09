// Name: core_storm.cpp_FUN_00568b50
// Address: 00568b50
// Address Range: [[00568b50, 00568c0a]]
// Convention: unknown
// Signature: undefined4 core_storm_cpp_FUN_00568b50(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_storm_cpp_FUN_00568b50(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1014 [1012];
  uint uStack_2c;
  uint uStack_20;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar3 = 0;
  iVar1 = core_weapon_cpp_FUN_0057b880(param_1);
  if (iVar1 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"wp_nomana.wav",(CVector3f *)&param_1->field_0x20);
    *(uint *)&param_1[2].field_0x50 = 0x3f800000;
    uVar2 = 0;
  }
  else {
    uStack_10 = 0xc1200000;
    uStack_c = 0x41200000;
    uStack_14 = 0;
    if (*(int *)&param_1[2].field_0x54 != 0) {
      core_actor_cpp_FUN_00408b00(*(uint *)&param_1[2].field_0x54,&stack0xffffffec);
      uStack_20 = uStack_2c;
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      core_fire_cpp_FUN_004a3a00
                (0x01C73654,&param_1->field_0x20,*(int *)&param_1[2].field_0x54 + 0x30,
                 &stack0xffffffe0);
    }
    uVar2 = 1;
    *(uint *)&param_1[2].field_0x50 = 0x40a00000;
  }
  return uVar2;
}

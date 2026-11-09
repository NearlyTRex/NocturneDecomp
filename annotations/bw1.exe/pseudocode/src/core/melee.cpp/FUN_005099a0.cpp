// Name: core_melee.cpp_FUN_005099a0
// Address: 005099a0
// Address Range: [[005099a0, 00509a6a]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_005099a0(CWeapon *param_1,float param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_melee_cpp_FUN_005099a0(CWeapon *param_1,float param_2,uint param_3,float param_4)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  uint auStackY_101c [1012];
  uint uStack_34;
  CVector3f CStack_28;
  uint uStack_1c;
  uint auStack_18 [2];
  CVector3f CStack_10;
  
  bVar3 = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(param_1,param_2);
  if ((0 < *(int *)&param_1[1].field_0x18) &&
     (param_4 = *(float *)&param_1[1].field_0x1c - param_4,
     *(float *)&param_1[1].field_0x1c = param_4, param_4 <= 0.0)) {
    fVar2 = *(float *)&param_1[1].field_0x20 * (float)_DAT_005e7976;
    iVar1 = *(int *)&param_1->field_0x154;
    *(int *)&param_1[1].field_0x18 = *(int *)&param_1[1].field_0x18 + -1;
    *(float *)&param_1[1].field_0x20 = fVar2;
    *(float *)&param_1[1].field_0x1c = fVar2;
    (**(code **)(iVar1 + 0xe0))(param_1);
    uStack_1c = uStack_34;
    auStack_18[(uint)bVar3 * -2] = *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    auStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    core_actor_cpp_FUN_00408b40(param_1,&uStack_1c);
    CStack_28._0_4_ = CStack_10._0_4_;
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_10 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_10 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
              (g_CGorePtr,&CStack_28,(CVector3f *)&DAT_02c8af28,
               *(EBloodType *)&param_1[1].field_0x14);
    return;
  }
  return;
}

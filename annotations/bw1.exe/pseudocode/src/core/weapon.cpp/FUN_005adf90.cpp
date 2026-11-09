// Name: core_weapon.cpp_FUN_005adf90
// Address: 005adf90
// Address Range: [[005adf90, 005adfbf] [005adfc1, 005ae136]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_FUN_005adf90(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_FUN_005adf90(CWeapon *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1044 [970];
  uint uStack_c4;
  uint auStack_b0 [2];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_5c;
  uint auStack_58 [5];
  uint auStack_44 [3];
  uint local_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint auStack_1c [5];
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))();
  auStack_58[2] = local_38;
  auStack_58[(uint)bVar4 * -2 + 3] = auStack_58[(uint)bVar4 * -2 + 9];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  uStack_c4 = 0x5adffe;
  core_actor_cpp_FUN_00408b40();
  uStack_5c = auStack_1c[2];
  auStack_58[(uint)bVar4 * -2] = auStack_1c[(uint)bVar4 * -2 + 3];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  uStack_24 = *(uint *)&this_ptr->field_0x2e8;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_c4 = 0x5ae041;
  core_actor_cpp_FUN_00408ac0();
  auStack_44[0] = uStack_20;
  auStack_58[(uint)bVar4 * -2 + 6] = auStack_1c[(uint)bVar4 * -2];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  uStack_c4 = 0x5ae06a;
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
    uStack_c4 = 0x5ae084;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0((SLaserInfo *)auStack_b0);
  uStack_a8 = 1;
  uStack_a4 = *(uint *)&this_ptr->field_0x2f4;
  uStack_a0 = *(uint *)&this_ptr->field_0x2f8;
  uStack_9c = *(uint *)&this_ptr->field_0x2fc;
  auStack_b0[0] = 0x3f800000;
  uStack_c4 = 0x5ae0d7;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600();
  uStack_94 = 1;
  uStack_98 = (uint)(iVar1 != 0);
  puVar2 = auStack_b0;
  puVar3 = (uint *)&stack0xfffffef0;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_fire_cpp_FUN_004b6420(0x01C57074,&uStack_5c,auStack_58 + 5);
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  return;
}

// Name: core_weapon.cpp_FUN_0057bb60
// Address: 0057bb60
// Address Range: [[0057bb60, 0057bb9f] [0057bba1, 0057bd1f]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_FUN_0057bb60(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_FUN_0057bb60(CWeapon *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1048 [971];
  uint uStack_c4;
  CDemonSet *this_ptr_00;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_98;
  uint local_60;
  uint auStack_5c [5];
  uint uStack_48;
  uint auStack_3c [3];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint auStack_20 [5];
  
  bVar4 = 0;
  core_fire_cpp_SLaserInfo_ctor_FUN_004a2de0((SLaserInfo *)&uStack_b4);
  if ((*(int *)&this_ptr->field_0x57c != 0) && (*(int *)&g_CGamePtr->field_0xe4 != 0)) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))();
      auStack_20[2] = local_60;
      auStack_20[(uint)bVar4 * -2 + 3] = auStack_5c[(uint)bVar4 * -2];
      auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      uStack_c4 = 0x57bbf0;
      core_actor_cpp_FUN_00408b80();
      auStack_3c[0] = auStack_5c[2];
      auStack_5c[(uint)bVar4 * -2 + 9] = auStack_5c[(uint)bVar4 * -2 + 3];
      auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      uStack_28 = *(uint *)&this_ptr->field_0x2e8;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_c4 = 0x57bc30;
      core_actor_cpp_FUN_00408b00();
      uStack_24 = uStack_48;
      auStack_20[(uint)bVar4 * -2] = auStack_5c[(uint)bVar4 * -2 + 6];
      this_ptr_00 = g_CDemonSetPtr;
      auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
      uStack_c4 = 0x57bc55;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
        uStack_c4 = 0x57bc6f;
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
      }
      uStack_ac = 1;
      uStack_a8 = *(uint *)&this_ptr->field_0x2f4;
      uStack_a4 = *(uint *)&this_ptr->field_0x2f8;
      uStack_a0 = *(uint *)&this_ptr->field_0x2fc;
      uStack_b0 = 0;
      if (*(float *)&this_ptr->field_0x300 <= 0.0) {
        uStack_b4 = 0x3f800000;
      }
      else {
        uStack_b4 = 0x3f000000;
      }
      uStack_98 = 1;
      core_setcolid_cpp_FUN_0053ebd0(g_CDemonSetPtr);
      puVar2 = &uStack_b4;
      puVar3 = (uint *)&stack0xfffffef0;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      core_fire_cpp_FUN_004a2e20(0x01C73654,auStack_5c + 8,&uStack_24);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return;
    }
  }
  return;
}

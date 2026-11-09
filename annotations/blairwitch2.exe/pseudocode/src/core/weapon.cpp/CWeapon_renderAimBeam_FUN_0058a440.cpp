// Name: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0058a440
// Address: 0058a440
// Address Range: [[0058a440, 0058a46f] [0058a471, 0058a5e6]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xe8))();
  auStack_58[2] = local_38;
  auStack_58[(uint)bVar4 * -2 + 3] = auStack_58[(uint)bVar4 * -2 + 9];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  uStack_c4 = 0x58a4ae;
  core_actor_cpp_FUN_00408d70();
  uStack_5c = auStack_1c[2];
  auStack_58[(uint)bVar4 * -2] = auStack_1c[(uint)bVar4 * -2 + 3];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  uStack_24 = *(uint *)&this_ptr->field_0x444;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_c4 = 0x58a4f1;
  core_actor_cpp_FUN_00408cf0();
  auStack_44[0] = uStack_20;
  auStack_58[(uint)bVar4 * -2 + 6] = auStack_1c[(uint)bVar4 * -2];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  uStack_c4 = 0x58a51a;
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  if (*(CDemonActor **)&this_ptr->field_0x460 != (CDemonActor *)0x0) {
    uStack_c4 = 0x58a534;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x460);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0((SLaserInfo *)auStack_b0);
  uStack_a8 = 1;
  uStack_a4 = *(uint *)&this_ptr->field_0x450;
  uStack_a0 = *(uint *)&this_ptr->field_0x454;
  uStack_9c = *(uint *)&this_ptr->field_0x458;
  auStack_b0[0] = 0x41200000;
  uStack_c4 = 0x58a587;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
  uStack_94 = 1;
  uStack_98 = (uint)(iVar1 != 0);
  puVar2 = auStack_b0;
  puVar3 = (uint *)&stack0xfffffef0;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_fire_cpp_FUN_0049db20(0x01C3DEB4,&uStack_5c,auStack_58 + 5);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}

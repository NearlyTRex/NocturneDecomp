// Name: core_elephant.cpp_FUN_00486c30
// Address: 00486c30
// Address Range: [[00486c30, 00486d31]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_00486c30(CWeapon *param_1,float param_2)

#include "nocturne.h"

void core_elephant_cpp_FUN_00486c30(CWeapon *param_1,float param_2)

{
  byte bVar1;
  uint auStackY_1020 [1014];
  uint uStack_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_14;
  
  bVar1 = 0;
  if (*(int *)&param_1[1].field_0x4 != 0) {
    g_CDemonLightInstance._7348_4_ = 1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))();
    uStack_38 = uStack_20;
    *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    core_actor_cpp_FUN_00408b80();
    uStack_2c = uStack_14;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    g_CDemonLightInstance._7356_4_ = 0;
    if (&stack0x00000000 != &g_CDemonLightInstance.field_0x30) {
      g_CDemonLightInstance._4_4_ = uStack_2c;
      g_CDemonLightInstance._8_4_ = uStack_28;
      g_CDemonLightInstance._12_4_ = uStack_24;
    }
    core_dirmat_cpp_FUN_0045b550
              ((CMatrix3x3f *)&g_CDemonLightInstance.field_0x10,(CVector3f *)&param_1->field_0x30);
    g_CDemonLightInstance._320_4_ = *(uint *)&param_1[1].field_0x8;
    g_CDemonLightInstance._56_4_ = 0x42e00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance._7376_4_ = 0;
    core_set_cpp_FUN_00537270(g_CDemonSetPtr,&g_CDemonLightInstance);
  }
  *(uint *)&param_1[1].field_0x4 = 0;
  core_weapon_cpp_FUN_0057b160(param_1,param_2);
  return;
}

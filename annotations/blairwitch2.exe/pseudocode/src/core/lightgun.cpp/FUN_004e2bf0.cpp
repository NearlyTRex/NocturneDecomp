// Name: core_lightgun.cpp_FUN_004e2bf0
// Address: 004e2bf0
// Address Range: [[004e2bf0, 004e2cb6]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_004e2bf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_004e2bf0(int param_1)

{
  byte bVar1;
  uint auStackY_1024 [1016];
  uint local_3c;
  uint uStack_30;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  
  bVar1 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))();
  local_3c = local_18;
  *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408d70();
  g_CDemonLightInstance._7348_4_ = 1;
  g_CDemonLightInstance._7356_4_ = 1;
  uStack_24 = uStack_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0x00000000 != &g_CDemonLightInstance.field_0x28) {
    g_CDemonLightInstance._4_4_ = uStack_24;
    g_CDemonLightInstance._8_4_ = uStack_20;
    g_CDemonLightInstance._12_4_ = uStack_1c;
  }
  core_dirmat_cpp_FUN_00449280
            ((CMatrix3x3f *)&g_CDemonLightInstance.field_0x10,(CVector3f *)(param_1 + 0x30));
  g_CDemonLightInstance._320_4_ = 0x42000000;
  g_CDemonLightInstance._56_4_ = _DAT_005f95d4;
  g_CDemonLightInstance._7376_4_ = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(&g_CDemonLightInstance,1.0);
  return;
}

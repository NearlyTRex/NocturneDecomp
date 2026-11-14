// Name: core_lightgun.cpp_FUN_00500090
// Address: 00500090
// Address Range: [[00500090, 00500156]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_00500090(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_00500090(int param_1)

{
  byte bVar1;
  float afStackY_1024 [1016];
  uint local_3c;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint local_18;
  
  bVar1 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
  local_3c = local_18;
  *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408b40();
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  fStack_24 = fStack_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((CVector3f *)&stack0x00000000 != g_CDemonLightInstance.base.base.rotation_matrix.m + 2) {
    g_CDemonLightInstance.base.base.position.f.x = fStack_24;
    g_CDemonLightInstance.base.base.position.f.y = fStack_20;
    g_CDemonLightInstance.base.base.position.f.z = fStack_1c;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&g_CDemonLightInstance.base.base.rotation_matrix,(CVector3f *)(param_1 + 0x30));
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = _DAT_00603014;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(&g_CDemonLightInstance,1.0);
  return;
}

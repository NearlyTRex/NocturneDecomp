// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004e2bf0
// Address: 004e2bf0
// Address Range: [[004e2bf0, 004e2cb6]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004e2bf0(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004e2bf0(CLightGun *this_ptr)

{
  byte bVar1;
  float afStackY_1024 [1017];
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float local_18;
  
  bVar1 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408d70();
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  fStack_20 = fStack_2c;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[1].z) {
    g_CDemonLightInstance.base.base.position.f.x = fStack_20;
    g_CDemonLightInstance.base.base.position.f.y = fStack_1c;
    g_CDemonLightInstance.base.base.position.f.z = local_18;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = _DAT_005f95d4;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(&g_CDemonLightInstance,1.0);
  return;
}

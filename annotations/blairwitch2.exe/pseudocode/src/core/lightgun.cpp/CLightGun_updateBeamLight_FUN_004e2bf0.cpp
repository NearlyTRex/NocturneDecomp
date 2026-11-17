// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004e2bf0
// Address: 004e2bf0
// Address Range: [[004e2bf0, 004e2cb6]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004e2bf0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004e2bf0(CLightGun *this_ptr)

{
  byte bVar1;
  float afStackY_1024 [1017];
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [2];
  CVector3f *pCStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8) = (&uStack_10)[(uint)bVar1 * -2];
  *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCStack_14,&CStack_2c);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  fStack_20 = CStack_2c.x;
  afStack_1c[(uint)bVar1 * -2] = *(float *)((int)&CStack_2c + (uint)bVar1 * -8 + 4);
  afStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[1].z) {
    g_CDemonLightInstance.base.base.position.f.x = fStack_20;
    g_CDemonLightInstance.base.base.position.f.y = afStack_1c[0];
    g_CDemonLightInstance.base.base.position.f.z = afStack_1c[1];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 56.0f;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(&g_CDemonLightInstance,1.0);
  return;
}

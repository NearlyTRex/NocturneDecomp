// Name: core_lightgun.cpp_FUN_00500090
// Address: 00500090
// Address Range: [[00500090, 00500156]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_00500090(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_00500090(CCharacter *param_1)

{
  byte bVar1;
  float afStackY_1024 [1017];
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [2];
  CVector3f *pCStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  (*(((param_1->base).vtable._uc)->_uc).isInvulnerable)(param_1);
  *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8) = (&uStack_10)[(uint)bVar1 * -2];
  *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&param_1->base,pCStack_14,&CStack_2c);
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
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&g_CDemonLightInstance.base.base.rotation_matrix,&(param_1->base).orient.vec);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = _DAT_00603014;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(&g_CDemonLightInstance,1.0);
  return;
}

// Name: core_lightgun.cpp_CLightGun_FUN_00505ac0
// Address: 00505ac0
// Address Range: [[00505ac0, 00505b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_FUN_00505ac0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_FUN_00505ac0(CLightGun *this_ptr)

{
  CVector3f *input_local_point;
  int unaff_ESI;
  float fStack_10;
  float fStack_c;
  
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,(CVector3f *)&fStack_10,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 0;
  if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].y) {
    g_CDemonLightInstance.base.base.position.x = (int)fStack_10;
    g_CDemonLightInstance.base.base.position.y = (int)fStack_c;
    g_CDemonLightInstance.base.base.position.z = unaff_ESI;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 112.0f;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
  return;
}

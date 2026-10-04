// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_00505ac0
// Address: 00505ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00505ac0, 00505b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_00505ac0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_00505ac0(CLightGun *this_ptr)

{
  CVector3f *input_local_point;
  CVector3f local_e1;
  CVector3f CStack_14;
  CDemonLight *light;

#if NOCTURNE_AUTHENTIC_NETPLAY
  light = &g_CDemonLightInstance;
#else
  light = nocturne_hero_light((CHero *)(this_ptr->base).carried_by_actor);
#endif
  input_local_point =
       (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_e1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_14,input_local_point);
  light->light_enabled_flag = 1;
  light->volumetric_enabled = 0;
  light->base.base.position.f = CStack_14;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&light->base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
  light->base.max_distance = 32.0;
  light->base.base.focal_length = 112.0f;
  light->antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(light,1.0);
  return;
}

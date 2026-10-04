// Name: core_shotgun.cpp_CShotgun_process_FUN_00587f70
// Address: 00587f70
// MANUAL RECONSTRUCTION
// Address Range: [[00587f70, 00588059]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  CVector3f aCStack_20 [2];
  CDemonLight *light;

  if (this_ptr->muzzle_flash_active != 0) {
#if NOCTURNE_AUTHENTIC_NETPLAY
    light = &g_CDemonLightInstance;
#else
    light = nocturne_hero_light((CHero *)(this_ptr->base).carried_by_actor);
#endif
    light->light_enabled_flag = 1;
    input_local_point =
         (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&aCStack_20[1]);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,aCStack_20,input_local_point);
    light->volumetric_enabled = 0;
    light->base.base.position.f = aCStack_20[0];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&light->base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
    light->base.max_distance = this_ptr->muzzle_flash_distance;
    light->base.base.focal_length = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(light,1.0);
    light->antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(g_CDemonSetPtr,light);
  }
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  return;
}

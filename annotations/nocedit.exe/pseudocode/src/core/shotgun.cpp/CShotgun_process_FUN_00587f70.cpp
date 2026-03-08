// Name: core_shotgun.cpp_CShotgun_process_FUN_00587f70
// Address: 00587f70
// Address Range: [[00587f70, 00588059]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  CVector3f *unaff_ESI;
  char local_res0;
  CVector3f aCStack_20 [2];
  
  if (this_ptr->muzzle_flash_active != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    input_local_point =
         (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,unaff_ESI);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,aCStack_20,input_local_point);
    g_CDemonLightInstance.volumetric_enabled = 0;
    if ((float *)&local_res0 != &g_CDemonLightInstance.base.base.rotation_matrix.m[1].z) {
      g_CDemonLightInstance.base.base.position.f.x = aCStack_20[0].x;
      g_CDemonLightInstance.base.base.position.f.y = aCStack_20[0].y;
      g_CDemonLightInstance.base.base.position.f.z = aCStack_20[0].z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
    g_CDemonLightInstance.base.max_distance = this_ptr->muzzle_flash_distance;
    g_CDemonLightInstance.base.base.focal_length = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(g_CDemonSetPtr,&g_CDemonLightInstance);
  }
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  return;
}

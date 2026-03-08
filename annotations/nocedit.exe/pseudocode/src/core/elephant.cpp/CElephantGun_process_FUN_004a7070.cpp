// Name: core_elephant.cpp_CElephantGun_process_FUN_004a7070
// Address: 004a7070
// Address Range: [[004a7070, 004a7159]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004a7070(CElephantGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_20 */

void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004a7070(CElephantGun *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  char local_res0;
  CVector3f local_20;
  CVector3f local_14;
  
  if (this_ptr->muzzle_flash_active != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    input_local_point =
         (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_14);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,(CVector3f *)&local_20.z,input_local_point);
    g_CDemonLightInstance.volumetric_enabled = 0;
    if ((CVector3f *)&local_res0 != g_CDemonLightInstance.base.base.rotation_matrix.m + 1) {
      g_CDemonLightInstance.base.base.position.f.x = local_20.z;
      g_CDemonLightInstance.base.base.position.f.y = local_14.x;
      g_CDemonLightInstance.base.base.position.f.z = local_14.y;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
    g_CDemonLightInstance.base.max_distance = this_ptr->projectile_distance;
    g_CDemonLightInstance.base.base.focal_length = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(g_CDemonSetPtr,&g_CDemonLightInstance);
  }
  local_20.y = delta_time;
  local_20.x = (float)this_ptr;
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  return;
}

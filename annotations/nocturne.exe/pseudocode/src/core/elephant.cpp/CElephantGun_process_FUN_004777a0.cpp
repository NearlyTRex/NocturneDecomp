// Name: core_elephant.cpp_CElephantGun_process_FUN_004777a0
// Address: 004777a0
// Address Range: [[004777a0, 00477889]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004777a0(CElephantGun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004777a0(CElephantGun *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  float in_stack_0000000c;
  CVector3f CStack_1c;
  
  if (this_ptr->muzzle_flash_active != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    input_local_point =
         (CVector3f *)
         (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&CStack_1c,input_local_point);
    g_CDemonLightInstance.volumetric_enabled = 0;
    if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.rotation_matrix.m[1].y) {
      g_CDemonLightInstance.base.position.x = CStack_1c.x;
      g_CDemonLightInstance.base.position.y = CStack_1c.y;
      g_CDemonLightInstance.base.position.z = CStack_1c.z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              (&g_CDemonLightInstance.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
    g_CDemonLightInstance.base.fixed_point_scale = this_ptr->projectile_distance;
    g_CDemonLightInstance.base.focal_length = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(g_CDemonSetPtr,&g_CDemonLightInstance);
  }
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,in_stack_0000000c);
  return;
}

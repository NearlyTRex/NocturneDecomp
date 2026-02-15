// Name: core_shotgun.cpp_CShotgun_process_FUN_00587f70
// Address: 00587f70
// Address Range: [[00587f70, 00588059]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  float in_stack_0000000c;
  CVector3f CStack_1c;
  
  if (*(int *)(this_ptr->unk + 4) != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    input_local_point =
         (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_1c,input_local_point);
    g_CDemonLightInstance.volumetric_enabled = 0;
    if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[1].y) {
      g_CDemonLightInstance.base.base.position.x = (int)CStack_1c.x;
      g_CDemonLightInstance.base.base.position.y = (int)CStack_1c.y;
      g_CDemonLightInstance.base.base.position.z = (int)CStack_1c.z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
               &(this_ptr->base).base.orient.vec);
    g_CDemonLightInstance.base.max_distance = *(float *)(this_ptr->unk + 8);
    g_CDemonLightInstance.base.base.projection_scale = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_FUN_0056d090(g_CDemonSetPtr);
  }
  this_ptr->unk[4] = '\0';
  this_ptr->unk[5] = '\0';
  this_ptr->unk[6] = '\0';
  this_ptr->unk[7] = '\0';
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,in_stack_0000000c);
  return;
}

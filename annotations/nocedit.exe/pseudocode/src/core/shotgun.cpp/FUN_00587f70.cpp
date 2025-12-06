// Name: core_shotgun.cpp_FUN_00587f70
// Address: 00587f70
// Address Range: [[00587f70, 00588059]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00587f70()

#include "nocturne.h"

/* Signature: byte actors_weapon_shotgun.cpp_FUN_00587f70(uint param_1, uint
   param_2) */

void core_shotgun_cpp_FUN_00587f70(void)

{
  CWeapon *pCVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CWeapon *in_stack_00000004;
  CDemonLight *local_14;
  float fStack_10;
  float in_stack_fffffff4;
  
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    input_local_point =
         (CVector3f *)
         (*(in_stack_00000004->base_actor).vtable[1].renderOpaque)(&in_stack_00000004->base_actor);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&local_14,input_local_point);
    g_CDemonLightInstance.field17_0x1cbc = 0;
    if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].y) {
      g_CDemonLightInstance.base.base.position.x = (int)fStack_10;
      g_CDemonLightInstance.base.base.position.y = (int)in_stack_fffffff4;
      g_CDemonLightInstance.base.base.position.z = unaff_EBP;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
               (CVector3f *)&(in_stack_00000004->base_actor).orient);
    g_CDemonLightInstance.base.max_distance =
         *(float *)(in_stack_00000004[1].base_actor.actor_name + 8);
    g_CDemonLightInstance.base.base.projection_scale = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
    local_14 = &g_CDemonLightInstance;
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
  }
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_actor).actor_name[4] = '\0';
  (pCVar1->base_actor).actor_name[5] = '\0';
  (pCVar1->base_actor).actor_name[6] = '\0';
  (pCVar1->base_actor).actor_name[7] = '\0';
  fStack_10 = 8.127293e-39;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  return;
}

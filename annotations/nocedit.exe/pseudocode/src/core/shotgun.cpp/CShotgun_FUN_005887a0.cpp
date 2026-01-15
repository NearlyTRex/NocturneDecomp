// Name: core_shotgun.cpp_CShotgun_FUN_005887a0
// Address: 005887a0
// Address Range: [[005887a0, 005887e3]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_CShotgun_FUN_005887a0()

#include "nocturne.h"

/* Signature: byte actors_weapon_shotgun.cpp_CShotgun_FUN_005887a0(uint param_1) */

void core_shotgun_cpp_CShotgun_FUN_005887a0(void)

{
  CVector3f *pCVar1;
  CDemonActor *in_stack_00000004;
  CMatrix3x3f local_64;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  if (*(int *)(in_stack_00000004[4].actor_name + 8) < 1) {
    return;
  }
  local_30.x = 5.0;
  local_30.y = 6.0;
  local_30.z = -6.0;
  local_24.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_c = local_24.x;
  local_24.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_24.z = 0.0;
  local_c = local_24.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_64,&local_24);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_64,&local_18,&local_30);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&local_3c,pCVar1);
  if (&local_30 != pCVar1) {
    local_30.x = pCVar1->x;
    local_30.y = pCVar1->y;
    local_30.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"shotgun-cock.wav");
  return;
}

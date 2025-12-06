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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  byte local_2c [12];
  float local_20;
  CVector3f local_1c;
  
  if (*(int *)(in_stack_00000004[4].actor_name + 8) < 1) {
    return;
  }
  local_2c._0_4_ = 6.0;
  local_2c._4_4_ = -6.0;
  local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_1c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_1c.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,&local_1c);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffffa8,(CVector3f *)&stack0xfffffff4,
                      (CVector3f *)(local_2c + 8));
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,(CVector3f *)local_2c,pCVar1);
  if (&local_1c != pCVar1) {
    local_1c.x = pCVar1->x;
    local_1c.y = pCVar1->y;
    local_1c.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"shotgun-cock.wav");
  return;
}

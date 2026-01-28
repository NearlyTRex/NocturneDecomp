// Name: core_elephant.cpp_FUN_004a78a0
// Address: 004a78a0
// Address Range: [[004a78a0, 004a78d4]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_004a78a0(void)

#include "nocturne.h"

void core_elephant_cpp_FUN_004a78a0(void)

{
  CVector3f *pCVar1;
  CDemonActor *in_stack_00000004;
  CMatrix3x3f local_6c;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  local_38.x = 5.0;
  local_38.y = 6.0;
  local_38.z = -6.0;
  local_2c.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_14 = local_2c.x;
  local_2c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_2c.z = 0.0;
  local_14 = local_2c.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_6c,&local_2c);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_6c,&local_20,&local_38);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&local_44,pCVar1);
  if (&local_38 != pCVar1) {
    local_38.x = pCVar1->x;
    local_38.y = pCVar1->y;
    local_38.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  (*((in_stack_00000004->vtable)._ub)->playSound)(in_stack_00000004,"sh-cock.wav");
  return;
}

// Name: core_elephant.cpp_FUN_004a78a0
// Address: 004a78a0
// Address Range: [[004a78a0, 004a78d4]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a78a0()

#include "nocturne.h"

void core_elephant_cpp_FUN_004a78a0(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  byte local_34 [12];
  float local_28;
  CVector3f local_24;
  
  local_34._0_4_ = 6.0;
  local_34._4_4_ = -6.0;
  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_24.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  local_24.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff9c,&local_24);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffffa0,(CVector3f *)&stack0xffffffec,
                      (CVector3f *)(local_34 + 8));
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,(CVector3f *)local_34,pCVar1);
  if (&local_24 != pCVar1) {
    local_24.x = pCVar1->x;
    local_24.y = pCVar1->y;
    local_24.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("shell.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"sh-cock.wav");
  return;
}

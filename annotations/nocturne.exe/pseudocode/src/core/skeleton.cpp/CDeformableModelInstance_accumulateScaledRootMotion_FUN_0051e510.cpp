// Name: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510
// Address: 0051e510
// Address Range: [[0051e510, 0051e582]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510(CDeformableModelInstance *param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510(CDeformableModelInstance *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  CVector3f local_c;
  
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
                     (param_1,&local_c,param_2,param_3);
  fVar1 = pCVar3->y;
  fVar2 = pCVar3->z;
  (param_1->accumulated_root_motion).x = (param_1->accumulated_root_motion).x + pCVar3->x * param_4;
  (param_1->accumulated_root_motion).y = (param_1->accumulated_root_motion).y + fVar1 * param_4;
  (param_1->accumulated_root_motion).z = (param_1->accumulated_root_motion).z + param_4 * fVar2;
  return;
}

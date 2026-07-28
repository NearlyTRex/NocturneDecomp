// Name: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860
// Address: 0051e860
// Address Range: [[0051e860, 0051e8b7]]
// Convention: unknown
// Signature: CBodyPart * core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860(undefined4 param_1,undefined4 param_2,CVector3f *param_3,UOrientationVector *param_4,CVector3f *param_5,CDemonActor *param_6)

#include "nocturne.h"

CBodyPart * core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860(uint param_1,uint param_2,CVector3f *param_3,UOrientationVector *param_4,CVector3f *param_5,CDemonActor *param_6)

{
  CBodyPart *this_ptr;
  
  this_ptr = core_bodypart_cpp_createBodyPart_FUN_00415b30(param_3,param_4,param_5,param_6,0,0,0);
  core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(param_1,this_ptr,param_2);
  if (this_ptr == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(this_ptr);
  return this_ptr;
}

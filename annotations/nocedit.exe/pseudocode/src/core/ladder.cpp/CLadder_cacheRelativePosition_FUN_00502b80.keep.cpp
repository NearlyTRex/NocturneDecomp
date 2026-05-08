// Name: core_ladder.cpp_CLadder_cacheRelativePosition_FUN_00502b80
// Address: 00502b80
// MANUAL RECONSTRUCTION
// Address Range: [[00502b80, 00502c89] [03fc435a, 03fc43bb]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_cacheRelativePosition_FUN_00502b80(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_cacheRelativePosition_FUN_00502b80(CLadder *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x3f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  if (this_ptr->master_actor != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_e4,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_b4,&(this_ptr->master_actor->location).position,
               &(this_ptr->master_actor->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_e4,&local_b4,&local_54);
    if (&this_ptr->relative_position != (CVector3f *)&local_24) {
      (this_ptr->relative_position).x = local_54.m[0].z;
      (this_ptr->relative_position).y = local_54.m[1].z;
      (this_ptr->relative_position).z = local_54.m[2].z;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_84,&local_18);
    if (&this_ptr->cached_euler_angles != pCVar1) {
      this_ptr->cached_euler_angles = *pCVar1;
      return;
    }
  }
  return;
}

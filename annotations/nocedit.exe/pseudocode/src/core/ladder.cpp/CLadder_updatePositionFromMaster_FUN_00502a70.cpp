// Name: core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_00502a70
// Address: 00502a70
// Address Range: [[00502a70, 00502b74] [03fc42f8, 03fc4359]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_00502a70(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_00502a70(CLadder *this_ptr)

{
  CVector3f *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x3f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x3f local_7c;
  float local_50;
  CMatrix3x4f local_4c;
  float local_1c;
  float local_18;
  float local_14;
  CVector3f local_10;
  UOrientationVector *pUVar1;
  
  if (this_ptr->master_actor == (CDemonActor *)0x0) {
    return;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_dc,&this_ptr->relative_position,&this_ptr->cached_euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_ac,&(this_ptr->master_actor->location).position,
             &(this_ptr->master_actor->orient).vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_dc,&local_ac,&local_4c);
  (this_ptr->base).location.position.x = local_4c.m[0].z;
  (this_ptr->base).location.position.y = local_4c.m[1].z;
  (this_ptr->base).location.position.z = local_4c.m[2].z;
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_7c,&local_10);
  pUVar1 = &(this_ptr->base).orient;
  if (pUVar1 != (UOrientationVector *)pCVar2) {
    (pUVar1->vec).x = pCVar2->x;
    (this_ptr->base).orient.vec.y = pCVar2->y;
    (this_ptr->base).orient.vec.z = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}

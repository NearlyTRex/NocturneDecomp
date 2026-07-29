// Name: core_ladder.cpp_FUN_004c46b0
// Address: 004c46b0
// Address Range: [[004c46b0, 004c47b9]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_FUN_004c46b0(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_FUN_004c46b0(CLadder *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  float local_54 [12];
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  bVar5 = 0;
  if (this_ptr->master_actor != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_e4,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_b4,&(this_ptr->master_actor->location).position,
               &(this_ptr->master_actor->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_e4,&local_b4);
    pfVar3 = local_54;
    pCVar4 = &local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_24 = local_84.m[0].z;
    local_20 = local_84.m[1].z;
    local_1c = local_84.m[2].z;
    if (&this_ptr->relative_position != (CVector3f *)&local_24) {
      (this_ptr->relative_position).x = local_84.m[0].z;
      (this_ptr->relative_position).y = local_84.m[1].z;
      (this_ptr->relative_position).z = local_84.m[2].z;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_84,&local_18);
    if (&this_ptr->cached_euler_angles != pCVar1) {
      (this_ptr->cached_euler_angles).x = pCVar1->x;
      (this_ptr->cached_euler_angles).y = pCVar1->y;
      (this_ptr->cached_euler_angles).z = pCVar1->z;
      return;
    }
  }
  return;
}

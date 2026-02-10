// Name: core_ladder.cpp_CLadder_FUN_00502b80
// Address: 00502b80
// Address Range: [[00502b80, 00502c89]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_FUN_00502b80(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_FUN_00502b80(CLadder *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x3f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x3f local_84;
  uint local_58;
  CMatrix3x4f local_54;
  float local_24;
  float local_20;
  uint local_1c;
  CVector3f local_18;
  
  bVar5 = 0;
  if (this_ptr->master_actor != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_e4,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_b4,&(this_ptr->master_actor->location).position,
               &(this_ptr->master_actor->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_e4,&local_b4,&local_54);
    pCVar3 = &local_54;
    pCVar4 = &local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].x = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_24 = local_84.m[1].x;
    local_20 = local_84.m[2].y;
    local_1c = local_58;
    if ((float *)this_ptr->unk1 != &local_24) {
      *(float *)this_ptr->unk1 = local_84.m[1].x;
      *(float *)(this_ptr->unk1 + 4) = local_84.m[2].y;
      *(uint *)(this_ptr->unk1 + 8) = local_58;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_84,&local_18);
    if ((CVector3f *)(this_ptr->unk1 + 0xc) != pCVar1) {
      ((CVector3f *)(this_ptr->unk1 + 0xc))->x = pCVar1->x;
      *(float *)(this_ptr->unk1 + 0x10) = pCVar1->y;
      *(float *)(this_ptr->unk1 + 0x14) = pCVar1->z;
      return;
    }
  }
  return;
}

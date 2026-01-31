// Name: core_ladder.cpp_CLadder_FUN_00502a70
// Address: 00502a70
// Address Range: [[00502a70, 00502b74]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_FUN_00502a70(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_FUN_00502a70(CLadder *this_ptr)

{
  COrientation *pCVar1;
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
  
  bVar6 = 0;
  if (*(int *)this_ptr->master_actor == 0) {
    return;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_dc,(CVector3f *)this_ptr->unk1,(CVector3f *)(this_ptr->unk1 + 0xc));
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_ac,(CVector3f *)(*(int *)this_ptr->master_actor + 0x20),
             (CVector3f *)(*(int *)this_ptr->master_actor + 0x30));
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_dc,&local_ac,&local_4c);
  pCVar4 = &local_4c;
  pCVar5 = &local_7c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].x = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  local_1c = local_7c.m[1].x;
  local_18 = local_7c.m[2].y;
  local_14 = local_50;
  (this_ptr->base).location.position.x = local_7c.m[1].x;
  (this_ptr->base).location.position.y = local_7c.m[2].y;
  (this_ptr->base).location.position.z = local_50;
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_7c,&local_10);
  pCVar1 = &(this_ptr->base).orient;
  if (pCVar1 != (COrientation *)pCVar2) {
    pCVar1->pitch = pCVar2->x;
    (this_ptr->base).orient.bank = pCVar2->y;
    (this_ptr->base).orient.heading = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}

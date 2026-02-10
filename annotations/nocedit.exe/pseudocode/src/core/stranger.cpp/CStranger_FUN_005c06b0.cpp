// Name: core_stranger.cpp_CStranger_FUN_005c06b0
// Address: 005c06b0
// Address Range: [[005c06b0, 005c07ac]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c06b0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c06b0(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor_vtable *pCVar2;
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float local_114 [12];
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar7 = 0;
  pCVar1 = this_ptr->weapon;
  if (((pCVar1 != (CDemonActor *)0x0) &&
      (pCVar1 != (this_ptr->base).base.carry_hands[0].carry_actor)) &&
     (pCVar1 != (this_ptr->base).base.carry_hands[1].carry_actor)) {
    core_stranger_cpp_CStranger_FUN_005c07b0(this_ptr);
    pfVar4 = local_114;
    pCVar5 = &local_b4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_84,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b4,&local_84,&local_54);
    pCVar5 = &local_54;
    pCVar6 = &local_e4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    pCVar1 = this_ptr->weapon;
    pCVar2 = (pCVar1->vtable)._ub;
    new_orientation =
         core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_e4,&local_24);
    new_position = core_xform_cpp_getTranslation_FUN_005f6110(&local_e4,&local_18);
    (*pCVar2->setPositionAndOrientation)(pCVar1,new_position,new_orientation);
  }
  return;
}

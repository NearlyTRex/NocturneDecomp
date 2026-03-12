// Name: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005c06b0
// Address: 005c06b0
// Address Range: [[005c06b0, 005c07ac]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(CStranger *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(CStranger *this_ptr,int hand_index)

{
  CWeapon *this_ptr_00;
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar3;
  int iVar1;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  CWeapon *pCVar1;
  CDemonActor_vtable *pCVar2;
  
  bVar6 = 0;
  pCVar1 = this_ptr->weapon;
  if (((pCVar1 != (CWeapon *)0x0) &&
      (pCVar1 != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) &&
     (pCVar1 != (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) {
    core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
              (this_ptr,&this_ptr->weapon->base,(uint)(hand_index == 0),&local_114);
    pCVar3 = &local_114;
    pCVar6 = &local_b4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_84,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b4,&local_84,&local_54);
    pCVar4 = &local_54;
    pCVar5 = &local_e4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = pCVar4;
      pCVar5 = pCVar5;
    }
    this_ptr_00 = this_ptr->weapon;
    pCVar2 = (this_ptr_00->base).vtable._ub;
    new_orientation =
         core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_e4,&local_24);
    new_position = core_xform_cpp_getTranslation_FUN_005f6110(&local_e4,&local_18);
    (*pCVar2->setPositionAndOrientation)(&this_ptr_00->base,new_position,new_orientation);
  }
  return;
}

// Name: core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360
// Address: 0051f360
// Address Range: [[0051f360, 0051f48a]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(CPrye *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(CPrye *this_ptr,int hand_index)

{
  CWeapon *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *unaff_ESI;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1020 [953];
  CVector3f *new_orientation;
  CMatrix3x4f local_128;
  CMatrix3x4f local_f8;
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CMatrix3x4f local_68;
  uint local_38;
  float afStack_34 [2];
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar6 = 0;
  pCVar1 = this_ptr->weapon;
  if (((pCVar1 != (CWeapon *)0x0) &&
      (pCVar1 != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) &&
     (pCVar1 != (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) {
    core_prye_cpp_CPrye_computeWeaponAttachXForm_FUN_0051f490
              (this_ptr,&this_ptr->weapon->base,(uint)(hand_index == 0),&local_128);
    pCVar4 = &local_128;
    pCVar5 = &local_c8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
              (&local_98,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_c8,&local_98,&local_68);
    pCVar4 = &local_68;
    pCVar5 = &local_f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    pCVar1 = this_ptr->weapon;
    pCVar2 = (pCVar1->base).vtable._ub;
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&local_f8,unaff_ESI);
    local_2c.x = (float)local_38;
    afStack_34[(uint)bVar6 * -2 + 3] = afStack_34[(uint)bVar6 * -2];
    afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    new_orientation = (CVector3f *)(afStack_34 + 2);
    core_xform_cpp_getTranslation_FUN_00584450(&local_f8,&local_14);
    local_20.x = local_14.x;
    afStack_34[(uint)bVar6 * -2 + 6] = *(float *)((int)&local_14 + (uint)bVar6 * -8 + 4);
    afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         *(float *)((int)&local_14 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    (*pCVar2->setPositionAndOrientation)
              (&pCVar1->base,(CVector3f *)(afStack_34 + 5),new_orientation);
  }
  return;
}

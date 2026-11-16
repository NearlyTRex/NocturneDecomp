// Name: core_doc.cpp_CDoc_updateWeaponPosition_FUN_004567c0
// Address: 004567c0
// Address Range: [[004567c0, 004568de]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateWeaponPosition_FUN_004567c0(CDoc *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_updateWeaponPosition_FUN_004567c0(CDoc *this_ptr,int hand_index)

{
  CWeapon *carried_actor;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float afStackY_1020 [953];
  CVector3f *new_orientation;
  CMatrix3x4f local_128;
  CMatrix3x4f local_f8;
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CMatrix3x4f local_68;
  CVector3f local_38;
  CVector3f local_2c;
  uint local_20;
  float afStack_1c [2];
  CVector3f local_14;
  
  bVar5 = 0;
  carried_actor = this_ptr->weapon;
  if (((carried_actor != (CWeapon *)0x0) &&
      (carried_actor != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) &&
     (carried_actor != (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) {
    core_doc_cpp_CDoc_computeWeaponAttachXForm_FUN_004568e0
              (this_ptr,&carried_actor->base,(uint)(hand_index == 0),&local_f8);
    pCVar3 = &local_f8;
    pCVar4 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_98,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c8,&local_98,&local_68);
    pCVar3 = &local_68;
    pCVar4 = &local_128;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    pCVar1 = (carried_actor->base).vtable._ub;
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_128,unaff_ESI);
    local_14.x = (float)local_20;
    afStack_1c[(uint)bVar5 * -2 + 3] = afStack_1c[(uint)bVar5 * -2];
    afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    new_orientation = (CVector3f *)(afStack_1c + 2);
    core_xform_cpp_getTranslation_FUN_00592720(&local_128,&local_2c);
    local_38.x = local_2c.x;
    *(uint *)((int)&local_38 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_2c + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    (*pCVar1->setPositionAndOrientation)(&carried_actor->base,&local_38,new_orientation);
  }
  return;
}

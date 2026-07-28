// Name: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660
// Address: 0053a660
// Address Range: [[0053a660, 0053a75c]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger *this_ptr,int hand_index)

{
  CWeapon *pCVar1;
  CDemonActor_vtable *pCVar2;
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  uint local_114 [12];
  CMatrix3x4f local_e4;
  uint local_b4 [12];
  byte local_84 [48];
  float local_54 [12];
  CVector3f local_24;
  CVector3f local_18;
  
  bVar8 = 0;
  pCVar1 = this_ptr->weapon;
  if (((pCVar1 != (CWeapon *)0x0) &&
      (pCVar1 != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) &&
     (pCVar1 != (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) {
    core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
              (this_ptr,this_ptr->weapon,hand_index == 0);
    puVar4 = local_114;
    puVar6 = local_b4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_84,&(this_ptr->base).base.base.location,&(this_ptr->base).base.base.orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_b4,local_84);
    pfVar5 = local_54;
    pCVar7 = &local_e4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    pCVar1 = this_ptr->weapon;
    pCVar2 = (pCVar1->base).vtable._ub;
    new_orientation = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_e4,&local_24);
    new_position = core_xform_cpp_getTranslation_FUN_0055bc00(&local_e4,&local_18);
    (*pCVar2->setPositionAndOrientation)(&pCVar1->base,new_position,new_orientation);
  }
  return;
}

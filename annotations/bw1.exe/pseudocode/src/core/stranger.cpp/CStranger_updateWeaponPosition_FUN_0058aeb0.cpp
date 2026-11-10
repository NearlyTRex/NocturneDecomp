// Name: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058afda]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger *this_ptr,int hand_index)

{
  CWeapon *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1020 [953];
  CVector3f *new_orientation;
  CMatrix3x4f local_98;
  uint local_68 [12];
  float local_38;
  float afStack_34 [2];
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  uint auStack_10 [2];
  
  bVar6 = 0;
  pCVar1 = this_ptr->weapon;
  if (((pCVar1 != (CWeapon *)0x0) && (pCVar1 != *(CWeapon **)&this_ptr->field_0x25b0)) &&
     (pCVar1 != *(CWeapon **)&this_ptr->field_0x2628)) {
    core_stranger_cpp_FUN_0058afe0(this_ptr,this_ptr->weapon,hand_index == 0);
    puVar4 = (uint *)&stack0xfffffed8;
    puVar5 = (uint *)&stack0xffffff38;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5760
              (&local_98,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&stack0xffffff38,&local_98);
    puVar4 = local_68;
    puVar5 = (uint *)&stack0xffffff08;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    pCVar1 = this_ptr->weapon;
    pCVar2 = (pCVar1->base).vtable._ub;
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xffffff08);
    local_2c.x = local_38;
    *(float *)((int)&local_2c + (uint)bVar6 * -8 + 4) = afStack_34[(uint)bVar6 * -2];
    *(float *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    new_orientation = &local_2c;
    core_xform_cpp_FUN_005b6270(&stack0xffffff08);
    local_20.x = local_14;
    *(uint *)((int)&local_20 + (uint)bVar6 * -8 + 4) = auStack_10[(uint)bVar6 * -2];
    *(uint *)((int)&local_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         auStack_10[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (*pCVar2->setPositionAndOrientation)(&pCVar1->base,&local_20,new_orientation);
  }
  return;
}

// Name: core_charactr.cpp_FUN_0042f6f0
// Address: 0042f6f0
// Address Range: [[0042f6f0, 0042f76e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042f6f0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_0042f6f0(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  byte *puVar2;
  CCharacter *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                     ((CDeformableModelInstance *)&this_ptr->field_0x158);
  if (0 < *(int *)&this_ptr->field_0x33a0) {
    puVar2 = &this_ptr->field_0x385c;
    pCVar3 = this_ptr;
    do {
      if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&pCVar3->field_0x33ac * 4) != 0) &&
         (*(int *)(&pCVar1->field_0x1de9c + *(int *)&pCVar3->field_0x33b0 * 0x24) != -1)) {
        (**(code **)(*(int *)(puVar2 + 0x154) + 0x14))(puVar2);
      }
      pCVar3 = (CCharacter *)&pCVar3->field_0x18;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x2a4;
    } while (iVar4 < *(int *)&this_ptr->field_0x33a0);
  }
  return;
}

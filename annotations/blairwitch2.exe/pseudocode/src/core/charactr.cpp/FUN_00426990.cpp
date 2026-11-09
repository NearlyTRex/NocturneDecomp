// Name: core_charactr.cpp_FUN_00426990
// Address: 00426990
// Address Range: [[00426990, 00426a0e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00426990(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00426990(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  byte *puVar2;
  CCharacter *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  if (0 < *(int *)&this_ptr->field_0x3564) {
    puVar2 = &this_ptr->field_0x3a20;
    pCVar3 = this_ptr;
    do {
      if ((*(int *)(&this_ptr->field_0x23f4 + *(int *)&pCVar3->field_0x3570 * 4) != 0) &&
         (*(int *)(&pCVar1->field_0x1d21c + *(int *)&pCVar3->field_0x3574 * 0x24) != -1)) {
        (**(code **)(*(int *)(puVar2 + 0x2b0) + 0x1c))(puVar2);
      }
      pCVar3 = (CCharacter *)&pCVar3->field_0x18;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x400;
    } while (iVar4 < *(int *)&this_ptr->field_0x3564);
  }
  return;
}

// Name: core_cloth.cpp_CCloth_editCollisionBone_FUN_0043c3e0
// Address: 0043c3e0
// Address Range: [[0043c3e0, 0043c42f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_editCollisionBone_FUN_0043c3e0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_editCollisionBone_FUN_0043c3e0(CCloth *this_ptr)

{
  int iVar1;
  CCloth *pCVar2;
  int iVar3;
  uint *in_stack_00000008;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr->model).model_filename) {
    do {
      while( true ) {
        iVar1 = *(int *)((pCVar2->model).texture_list[1].unknown + 0x10);
        if ((uint *)(iVar1 + 0x3fe64) == in_stack_00000008) break;
        *(uint *)(iVar1 + 0x3fe64) = *in_stack_00000008;
        *(uint *)(iVar1 + 0x3fe68) = in_stack_00000008[1];
        *(uint *)(iVar1 + 0x3fe6c) = in_stack_00000008[2];
        iVar3 = iVar3 + 1;
        pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
        if (*(int *)(this_ptr->model).model_filename <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
    } while (iVar3 < *(int *)(this_ptr->model).model_filename);
  }
  return;
}

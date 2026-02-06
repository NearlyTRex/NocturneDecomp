// Name: core_cloth.cpp_CCloth_deleteCollisionBone_FUN_0043c3a0
// Address: 0043c3a0
// Address Range: [[0043c3a0, 0043c3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_deleteCollisionBone_FUN_0043c3a0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_deleteCollisionBone_FUN_0043c3a0(CCloth *this_ptr)

{
  int iVar1;
  CCloth *pCVar2;
  CVector3f *in_stack_00000008;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr->model).model_filename) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_CCloth_applyRotation_FUN_0043e1a0
                (*(CCloth **)((pCVar2->model).texture_list[1].unknown + 0x10),in_stack_00000008);
      pCVar2 = (CCloth *)((pCVar2->model).model_filename + 4);
    } while (iVar1 < *(int *)(this_ptr->model).model_filename);
  }
  return;
}

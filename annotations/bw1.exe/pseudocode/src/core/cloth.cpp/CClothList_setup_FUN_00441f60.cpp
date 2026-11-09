// Name: core_cloth.cpp_CClothList_setup_FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00441f9e]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setup_FUN_00441f60(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setup_FUN_00441f60(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  CClothList *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_FUN_0043eea0(*(CCloth **)(pCVar1 + 0x194),position,euler,model_ptr);
      pCVar1 = pCVar1 + 4;
    } while (iVar2 < *(int *)this_ptr);
  }
  return;
}

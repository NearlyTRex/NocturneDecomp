// Name: core_cloth.cpp_CClothList_render_FUN_005b17d0
// Address: 005b17d0
// Address Range: [[005b17d0, 005b1844]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_render_FUN_005b17d0(CClothList *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_render_FUN_005b17d0(CClothList *this_ptr,CDeformableModelInstance *model_ptr)

{
  CClothList *pCVar1;
  int iVar2;
  
  if ((model_ptr != (CDeformableModelInstance *)0x0) &&
     (iVar2 = 0, pCVar1 = this_ptr, 0 < *(int *)this_ptr)) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(*(CCloth **)(pCVar1 + 0x194),model_ptr);
      pCVar1 = pCVar1 + 4;
    } while (iVar2 < *(int *)this_ptr);
  }
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_render_FUN_005b0fe0(*(CCloth **)(pCVar1 + 0x194),model_ptr);
      pCVar1 = pCVar1 + 4;
    } while (iVar2 < *(int *)this_ptr);
  }
  return;
}

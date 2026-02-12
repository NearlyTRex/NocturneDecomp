// Name: core_cloth.cpp_CClothList_reset_FUN_0043c070
// Address: 0043c070
// Address Range: [[0043c070, 0043c0ef]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_reset_FUN_0043c070(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_reset_FUN_0043c070(CClothList *this_ptr)

{
  CCloth *ptr;
  CClothList *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      g_CurrentDebugLine = 0x5bd;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (pCVar1->cloths[0] != (CCloth *)0x0) {
        ptr = core_cloth_cpp_CCloth_dtor_FUN_00438c00(pCVar1->cloths[0],0);
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CClothList *)pCVar1->filenames;
    } while (iVar2 < this_ptr->count);
  }
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return;
}

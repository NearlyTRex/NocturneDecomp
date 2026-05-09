// Name: core_cloth.cpp_CClothList_reset_FUN_0043c070
// Address: 0043c070
// MANUAL RECONSTRUCTION
// Address Range: [[0043c070, 0043c0ef]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_reset_FUN_0043c070(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_reset_FUN_0043c070(CClothList *this_ptr)

{
  CCloth *ptr;
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->count) {
    do {
      g_CurrentDebugLine = 0x5bd;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (this_ptr->cloths[iVar2] != (CCloth *)0x0) {
        ptr = core_cloth_cpp_CCloth_dtor_FUN_00438c00(this_ptr->cloths[iVar2],0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->count);
  }
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return;
}

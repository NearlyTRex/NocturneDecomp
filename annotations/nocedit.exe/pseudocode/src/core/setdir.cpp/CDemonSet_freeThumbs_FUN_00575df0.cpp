// Name: core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
// Address: 00575df0
// Address Range: [[00575df0, 00575e32]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet *this_ptr)

{
  CZThumb *this_ptr_00;
  CZThumb *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = g_CZThumbPool;
  do {
    pCVar1 = pCVar1 + 6;
    this_ptr_00 = g_CZThumbPool + iVar2 * 6;
    do {
      core_setdir_cpp_CZThumb_free_FUN_00574b50(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != pCVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xfa);
  return;
}

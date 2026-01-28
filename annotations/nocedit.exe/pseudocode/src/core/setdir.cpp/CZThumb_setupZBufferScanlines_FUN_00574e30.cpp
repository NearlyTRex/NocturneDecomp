// Name: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
// Address: 00574e30
// Address Range: [[00574e30, 00574e61]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < this_ptr->height) {
    iVar2 = 0;
    do {
      *(void **)((int)g_ZBufferScanlineArray + iVar2) =
           (void *)(this_ptr->width * iVar1 * 4 + (int)this_ptr->zbuffer_data);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < this_ptr->height);
  }
  return;
}

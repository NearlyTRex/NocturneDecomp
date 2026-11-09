// Name: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970
// Address: 00538970
// Address Range: [[00538970, 005389a1]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00538970(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00538970(CZThumb *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x4) {
    iVar2 = 0;
    do {
      *(int *)(&DAT_01c2b64c + iVar2) = *(int *)this_ptr * iVar1 * 4 + *(int *)&this_ptr->field_0x24
      ;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)&this_ptr->field_0x4);
  }
  return;
}

// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0
// Address: 004847e0
// Address Range: [[004847e0, 004848e7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(this_ptr + 4) <= *(int *)(this_ptr + 8)) || (*(int *)(this_ptr + 4) < 1)) {
    *(uint *)(this_ptr + 0x2c) = *(uint *)(this_ptr + 0x24);
    *(uint *)(this_ptr + 0x30) = *(uint *)(this_ptr + 0x28);
    return;
  }
  iVar3 = *(int *)(this_ptr + 0x28) - *(int *)(this_ptr + 0x24);
  if (iVar3 < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x124a;
    core_main_c_FUN_004e4500("CEdScrollBar::computeThumb - invalid dimensions");
  }
  iVar1 = (*(int *)(this_ptr + 8) * iVar3) / *(int *)(this_ptr + 4);
  if (*(int *)(this_ptr + 0x10) == 0) {
    iVar2 = *(int *)(this_ptr + 0x1c) - *(int *)(this_ptr + 0x14);
  }
  else {
    iVar2 = *(int *)(this_ptr + 0x20) - *(int *)(this_ptr + 0x18);
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  iVar3 = *(int *)(this_ptr + 0x24) +
          ((iVar3 - iVar1) * *(int *)this_ptr) / (*(int *)(this_ptr + 4) - *(int *)(this_ptr + 8));
  *(int *)(this_ptr + 0x2c) = iVar3;
  if (iVar3 < *(int *)(this_ptr + 0x24)) {
    *(int *)(this_ptr + 0x2c) = *(int *)(this_ptr + 0x24);
  }
  iVar1 = *(int *)(this_ptr + 0x2c) + iVar1;
  *(int *)(this_ptr + 0x30) = iVar1;
  if (*(int *)(this_ptr + 0x28) < iVar1) {
    *(uint *)(this_ptr + 0x30) = *(uint *)(this_ptr + 0x28);
    *(int *)(this_ptr + 0x2c) = *(int *)(this_ptr + 0x2c) - (iVar1 - *(int *)(this_ptr + 0x28));
  }
  if (*(int *)(this_ptr + 0x24) <= *(int *)(this_ptr + 0x2c)) {
    return;
  }
  *(int *)(this_ptr + 0x2c) = *(int *)(this_ptr + 0x24);
  return;
}

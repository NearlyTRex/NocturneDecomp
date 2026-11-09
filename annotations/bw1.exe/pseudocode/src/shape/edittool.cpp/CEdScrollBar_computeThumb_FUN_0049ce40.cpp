// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40
// Address: 0049ce40
// Address Range: [[0049ce40, 0049cf47]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar *this_ptr)

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
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x12cb;
    core_main_c_FUN_005030e0("CEdScrollBar::computeThumb - invalid dimensions");
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

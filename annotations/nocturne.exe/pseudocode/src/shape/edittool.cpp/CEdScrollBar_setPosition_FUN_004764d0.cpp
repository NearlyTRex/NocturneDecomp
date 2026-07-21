// Name: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0
// Address: 004764d0
// Address Range: [[004764d0, 0047657c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x14) = param_2;
  *(uint *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x1c) = param_4 + 1;
  *(int *)(param_1 + 0x20) = param_5 + 1;
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x14) + iVar2 + -1;
    iVar3 = *(int *)(param_1 + 0x1c) - iVar2;
    *(uint *)(param_1 + 0x10) = 1;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x18) + iVar1 + -1;
    iVar3 = *(int *)(param_1 + 0x20) - iVar1;
    *(uint *)(param_1 + 0x10) = 0;
  }
  *(int *)(param_1 + 0x28) = iVar3 + 1;
  if (((3 < iVar1) && (3 < iVar2)) && (3 < *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24))) {
    return;
  }
  _DAT_01cc4800 = "..\\shape\\edittool.cpp";
  _DAT_01cc4804 = 0xeac;
  FUN_004c8440("CEdScrollBar::setPosition - invalid dimensions.");
  return;
}

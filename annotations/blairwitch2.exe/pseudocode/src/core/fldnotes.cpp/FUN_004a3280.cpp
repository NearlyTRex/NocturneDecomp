// Name: core_fldnotes.cpp_FUN_004a3280
// Address: 004a3280
// Address Range: [[004a3280, 004a32bc]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a3280(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a3280(int param_1)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00480d20((CStrList *)(param_1 + 0x148));
  *(byte *)&pCVar1[-0x11].data_array = 0;
  pCVar1[-1].vtable._us = (CStrList_vtable *)0x0;
  pCVar1[-1].data_array = (char **)0xffffffff;
  pCVar1[1].item_count = -1;
  *(byte *)&pCVar1[-0x15].data_array = 0;
  return;
}

// Name: core_script.cpp_FUN_004fe490
// Address: 004fe490
// Address Range: [[004fe490, 004fe4c6]]
// Convention: unknown
// Signature: CStrList * core_script_cpp_FUN_004fe490(int param_1)

#include "nocturne.h"

CStrList * core_script_cpp_FUN_004fe490(int param_1)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00473b60((CStrList *)(param_1 + 0x30));
  pCVar1[-1].data_array = (char **)0x0;
  pCVar1[-1].vtable = (CStrList_vtable *)0x0;
  pCVar1[-2].vtable = (CStrList_vtable *)0x0;
  pCVar1[-1].item_count = 0;
  pCVar1[-1].capacity = 0;
  return pCVar1 + -3;
}

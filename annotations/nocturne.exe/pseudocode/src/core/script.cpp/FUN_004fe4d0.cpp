// Name: core_script.cpp_FUN_004fe4d0
// Address: 004fe4d0
// Address Range: [[004fe4d0, 004fe4f0]]
// Convention: unknown
// Signature: CStrList * core_script_cpp_FUN_004fe4d0(int param_1)

#include "nocturne.h"

CStrList * core_script_cpp_FUN_004fe4d0(int param_1)

{
  CStrList *pCVar1;
  
  core_script_cpp_FUN_004fe500(param_1);
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00473b80((CStrList *)(param_1 + 0x30),0);
  return pCVar1 + -3;
}

// Name: core_fldnotes.cpp_FUN_004bbcb0
// Address: 004bbcb0
// Address Range: [[004bbcb0, 004bbcec]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bbcb0(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004bbcb0(int param_1)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00499380((CStrList *)(param_1 + 0x148));
  pCVar1[-0x11].field_0x8 = 0;
  *(uint *)&pCVar1[-1].field_0xc = 0;
  *(uint *)&pCVar1[-1].field_0x8 = 0xffffffff;
  *(uint *)(pCVar1 + 1) = 0xffffffff;
  pCVar1[-0x15].field_0x8 = 0;
  return;
}

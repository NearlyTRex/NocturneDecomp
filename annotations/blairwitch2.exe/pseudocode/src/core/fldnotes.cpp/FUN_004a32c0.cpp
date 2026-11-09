// Name: core_fldnotes.cpp_FUN_004a32c0
// Address: 004a32c0
// Address Range: [[004a32c0, 004a32d9]]
// Convention: unknown
// Signature: undefined1 * core_fldnotes_cpp_FUN_004a32c0(int param_1)

#include "nocturne.h"

byte * core_fldnotes_cpp_FUN_004a32c0(int param_1)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00480d40((CStrList *)(param_1 + 0x148),0);
  return &pCVar1[-0x15].field_0x8;
}

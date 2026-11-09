// Name: core_fldnotes.cpp_FUN_004bbcf0
// Address: 004bbcf0
// Address Range: [[004bbcf0, 004bbd09]]
// Convention: unknown
// Signature: undefined1 * core_fldnotes_cpp_FUN_004bbcf0(int param_1)

#include "nocturne.h"

byte * core_fldnotes_cpp_FUN_004bbcf0(int param_1)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_004993a0((CStrList *)(param_1 + 0x148),0);
  return &pCVar1[-0x15].field_0x8;
}

// Name: core_fldnotes.cpp_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a9949]]
// Convention: unknown
// Signature: char *** core_fldnotes_cpp_FUN_004a9930(int param_1)

#include "nocturne.h"

char *** core_fldnotes_cpp_FUN_004a9930(int param_1)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00481f40((CStrList *)(param_1 + 0x148),0);
  return &pCVar1[-0x15].data_array;
}

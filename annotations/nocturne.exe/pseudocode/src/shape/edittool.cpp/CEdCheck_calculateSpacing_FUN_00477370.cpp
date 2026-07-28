// Name: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370
// Address: 00477370
// Address Range: [[00477370, 00477386]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_00477370(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_00477370(CEdCheck *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(this_ptr);
  return iVar1 / 2;
}

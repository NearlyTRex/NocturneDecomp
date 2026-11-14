// Name: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004867f0
// Address: 004867f0
// Address Range: [[004867f0, 00486806]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(CEdCheck *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(this_ptr);
  return iVar1 / 2;
}

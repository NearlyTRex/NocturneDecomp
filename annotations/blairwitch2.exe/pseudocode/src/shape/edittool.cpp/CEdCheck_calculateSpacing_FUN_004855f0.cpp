// Name: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004855f0
// Address: 004855f0
// Address Range: [[004855f0, 00485606]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004855f0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004855f0(CEdCheck *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(this_ptr);
  return iVar1 / 2;
}

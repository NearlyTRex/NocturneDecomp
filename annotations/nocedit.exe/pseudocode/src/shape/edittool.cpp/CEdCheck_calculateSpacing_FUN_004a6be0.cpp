// Name: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
// Address: 004a6be0
// Address Range: [[004a6be0, 004a6bf6]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(this_ptr);
  return iVar1 / 2;
}

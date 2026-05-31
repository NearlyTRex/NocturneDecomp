// Name: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
// Address: 004a6bb0
// MANUAL RECONSTRUCTION
// Address Range: [[004a6bb0, 004a6bd0]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr)

{
  int iVar1;

  iVar1 = (this_ptr->right_boundary - this_ptr->y_position) * 7;
  return iVar1 / 8;
}

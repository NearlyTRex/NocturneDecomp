// Name: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
// Address: 004a6bb0
// Address Range: [[004a6bb0, 004a6bd0]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->right_boundary - this_ptr->y_position) * 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}

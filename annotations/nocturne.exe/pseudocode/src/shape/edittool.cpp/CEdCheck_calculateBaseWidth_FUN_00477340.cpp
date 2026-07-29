// Name: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340
// Address: 00477340
// Address Range: [[00477340, 00477360]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->right_boundary - this_ptr->y_position) * 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}

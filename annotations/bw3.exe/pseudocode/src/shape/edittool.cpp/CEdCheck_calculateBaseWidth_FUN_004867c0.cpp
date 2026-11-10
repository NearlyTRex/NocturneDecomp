// Name: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004867c0
// Address: 004867c0
// Address Range: [[004867c0, 004867e0]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)(this_ptr + 0x1c) - *(int *)(this_ptr + 0x14)) * 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}

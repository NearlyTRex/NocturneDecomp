// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300
// Address: 00477300
// Address Range: [[00477300, 00477339]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(this_ptr);
  iVar1 = iVar1 * DAT_005b761c * 3;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) / DAT_005b7620;
}

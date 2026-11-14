// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780
// Address: 00486780
// Address Range: [[00486780, 004867b9]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(this_ptr);
  iVar1 = iVar1 * DAT_005fba18 * 3;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) / DAT_005fba1c;
}

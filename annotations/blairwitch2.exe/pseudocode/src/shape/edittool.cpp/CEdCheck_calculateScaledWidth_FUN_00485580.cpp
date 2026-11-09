// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580
// Address: 00485580
// Address Range: [[00485580, 004855b9]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(this_ptr);
  iVar1 = iVar1 * DAT_006141b8 * 3;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) / DAT_006141bc;
}

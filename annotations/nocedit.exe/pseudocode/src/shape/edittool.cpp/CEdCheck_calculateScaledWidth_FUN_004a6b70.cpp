// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
// Address: 004a6b70
// Address Range: [[004a6b70, 004a6ba9]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar1 = iVar1 * g_WindowWidth * 3;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) / g_WindowHeight;
}

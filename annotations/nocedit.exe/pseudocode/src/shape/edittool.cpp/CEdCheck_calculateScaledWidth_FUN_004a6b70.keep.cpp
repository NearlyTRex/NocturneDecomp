// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
// Address: 004a6b70
// MANUAL RECONSTRUCTION
// Address Range: [[004a6b70, 004a6ba9]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck *this_ptr)

{
  int iVar1;

  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar1 = iVar1 * g_WindowWidth * 3;
  return iVar1 / 4 / g_WindowHeight;
}

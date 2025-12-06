// Name: shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
// Address: 004a64b0
// Address Range: [[004a64b0, 004a64de]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_calculateGridHeight_FUN_004a64b0(void)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_004a64b0(void)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  return (((g_WindowHeight * iVar1) / g_WindowWidth) * 4) / 3;
}

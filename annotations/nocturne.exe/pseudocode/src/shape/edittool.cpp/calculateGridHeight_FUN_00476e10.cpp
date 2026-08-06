// Name: shape_edittool.cpp_calculateGridHeight_FUN_00476e10
// Address: 00476e10
// Address Range: [[00476e10, 00476e3e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00476e10(void)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00476e10(void)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_calculateGridWidth_FUN_00476df0();
  return (((g_WindowHeight * iVar1) / g_WindowWidth) * 4) / 3;
}

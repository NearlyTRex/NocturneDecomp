// Name: shape_edittool.cpp_calculateGridHeight_FUN_00485ff0
// Address: 00485ff0
// Address Range: [[00485ff0, 0048601e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00485ff0(void)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00485ff0(void)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_calculateGridWidth_FUN_00485fd0();
  return (((DAT_005fba1c * iVar1) / DAT_005fba18) * 4) / 3;
}

// Name: shape_edittool.cpp_calculateGridHeight_FUN_0049d450
// Address: 0049d450
// Address Range: [[0049d450, 0049d47e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_0049d450(void)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_0049d450(void)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_calculateGridWidth_FUN_0049d430();
  return (((DAT_0061b49c * iVar1) / DAT_0061b498) * 4) / 3;
}

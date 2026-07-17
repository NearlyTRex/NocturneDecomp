// Name: dll_dx7.cpp_floorLog2_FUN_10004d10
// Address: 10004d10
// Address Range: [[10004d10, 10004d2e]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_floorLog2_FUN_10004d10(uint value)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_floorLog2_FUN_10004d10(uint value)

{
  int iVar1;
  
  iVar1 = 0;
  if (value == 0) {
    return 0x20;
  }
  for (; 1 < value; value = value >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

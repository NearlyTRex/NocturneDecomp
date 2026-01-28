// Name: wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710
// Address: 005ed710
// Address Range: [[005ed710, 005ed72c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_findMostSignificantBit_FUN_005ed710(uint value)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_findMostSignificantBit_FUN_005ed710(uint value)

{
  int iVar1;
  
  iVar1 = 0;
  if (value != 0) {
    for (; 1 < value; value = value >> 1) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  return 0x20;
}

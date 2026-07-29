// Name: wincore_wddvmem.cpp_findMostSignificantBit_FUN_00553600
// Address: 00553600
// Address Range: [[00553600, 0055361c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_findMostSignificantBit_FUN_00553600(uint value)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_findMostSignificantBit_FUN_00553600(uint value)

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

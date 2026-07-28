// Name: crt_heap.c_CalculateHeapBlockSize_FUN_00568e1c
// Address: 00568e1c
// Address Range: [[00568e1c, 00568e65]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c_CalculateHeapBlockSize_FUN_00568e1c(uint *pSize)

#include "nocturne.h"

int __cdecl CalculateHeapBlockSize(uint *pSize)

{
  uint uVar1;
  
  uVar1 = *pSize + 7 & 0xfffffff8;
  if (uVar1 == 0) {
    return 0;
  }
  *pSize = uVar1;
  uVar1 = uVar1 + 0x3c;
  if (uVar1 < *pSize) {
    return 0;
  }
  if (uVar1 < 0x00010000) {
    uVar1 = 0x00010000 & 0xfffffffe;
  }
  *pSize = uVar1;
  if (uVar1 + 0xfff < *pSize) {
    return 0;
  }
  uVar1 = uVar1 + 0xfff >> 8 & 0xfffff0;
  *pSize = uVar1 << 8;
  return (uint)(uVar1 != 0);
}

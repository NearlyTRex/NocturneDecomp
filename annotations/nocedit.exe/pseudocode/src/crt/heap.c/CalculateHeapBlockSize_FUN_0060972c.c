// Name: crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
// Address: 0060972c
// Address Range: [[0060972c, 00609775]]
// Convention: __cdecl
// Signature: int crt_heap.c_CalculateHeapBlockSize_FUN_0060972c(uint * pSize)

#include "nocturne.h"

int __cdecl crt_heap_c_CalculateHeapBlockSize_FUN_0060972c(uint *pSize)

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
  if (uVar1 < (uint)g_HeapFlags) {
    uVar1 = g_HeapFlags & 0xfffffffe;
  }
  *pSize = uVar1;
  if (uVar1 + 0xfff < *pSize) {
    return 0;
  }
  uVar1 = uVar1 + 0xfff >> 8 & 0xfffff0;
  *pSize = uVar1 << 8;
  return (uint)(uVar1 != 0);
}

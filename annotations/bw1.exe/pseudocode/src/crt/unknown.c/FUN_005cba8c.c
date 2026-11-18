// Name: crt_unknown.c_FUN_005cba8c
// Address: 005cba8c
// Address Range: [[005cba8c, 005cbaea]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cba8c(Heap *param_1)

#include "nocturne.h"

uint FUN_005cba8c(Heap *param_1)

{
  Heap *pHVar1;
  BOOL BVar2;
  
  pHVar1 = param_1->next_heap_block;
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == g_SecondaryHeap) && (g_SecondaryHeap = pHVar1, pHVar1 == (Heap *)0x0)) {
      g_SecondaryHeap = g_MainHeap;
      g_INT_00626228 = 0;
    }
    if (param_1 == (Heap *)g_INT_02c9f040) {
      g_INT_02c9f040 = (uint)param_1 ^ g_INT_02c9f040;
    }
    return 0;
  }
  return 0xffffffff;
}

// Name: crt_unknown.c_FUN_0056f30c
// Address: 0056f30c
// Address Range: [[0056f30c, 0056f36a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056f30c(Heap *param_1)

#include "nocturne.h"

uint FUN_0056f30c(Heap *param_1)

{
  Heap *pHVar1;
  BOOL BVar2;
  
  pHVar1 = param_1->next_heap_block;
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == g_SecondaryHeap) && (g_SecondaryHeap = pHVar1, pHVar1 == (Heap *)0x0)) {
      g_SecondaryHeap = g_MainHeap;
      g_INT_005c1688 = 0;
    }
    if (param_1 == (Heap *)g_INT_02de4e10) {
      g_INT_02de4e10 = (uint)param_1 ^ g_INT_02de4e10;
    }
    return 0;
  }
  return 0xffffffff;
}

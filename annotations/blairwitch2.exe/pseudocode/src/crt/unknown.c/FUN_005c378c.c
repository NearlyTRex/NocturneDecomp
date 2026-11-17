// Name: crt_unknown.c_FUN_005c378c
// Address: 005c378c
// Address Range: [[005c378c, 005c37ea]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c378c(Heap *param_1)

#include "nocturne.h"

uint FUN_005c378c(Heap *param_1)

{
  Heap *pHVar1;
  BOOL BVar2;
  
  pHVar1 = param_1->next_heap_block;
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == g_SecondaryHeap) && (g_SecondaryHeap = pHVar1, pHVar1 == (Heap *)0x0)) {
      g_SecondaryHeap = g_MainHeap;
      g_INT_0061eea8 = 0;
    }
    if (param_1 == (Heap *)g_INT_02680150) {
      g_INT_02680150 = (uint)param_1 ^ g_INT_02680150;
    }
    return 0;
  }
  return 0xffffffff;
}

// Name: crt_unknown.c_FUN_005ae8fc
// Address: 005ae8fc
// Address Range: [[005ae8fc, 005ae95a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ae8fc(Heap *param_1)

#include "nocturne.h"

uint FUN_005ae8fc(Heap *param_1)

{
  Heap *pHVar1;
  BOOL BVar2;
  
  pHVar1 = param_1->next_heap_block;
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == g_Heap_PTR_006075c8) && (g_Heap_PTR_006075c8 = pHVar1, pHVar1 == (Heap *)0x0)) {
      g_Heap_PTR_006075c8 = g_Heap_PTR_006075c4;
      g_INT_006075cc = 0;
    }
    if (param_1 == (Heap *)g_INT_02d25290) {
      g_INT_02d25290 = (uint)param_1 ^ g_INT_02d25290;
    }
    return 0;
  }
  return 0xffffffff;
}

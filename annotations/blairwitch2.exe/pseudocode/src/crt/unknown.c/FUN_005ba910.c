// Name: crt_unknown.c_FUN_005ba910
// Address: 005ba910
// Address Range: [[005ba910, 005ba9b2]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ba910(uint *param_1,Heap *param_2)

#include "nocturne.h"

uint FUN_005ba910(uint *param_1,Heap *param_2)

{
  Heap *pHVar1;
  Heap *pHVar2;
  ushort in_DS;
  
  if (param_2 == (Heap *)0x0) {
    return 1;
  }
  pHVar1 = (Heap *)*param_1;
  if (pHVar1 == (Heap *)0x0) {
    pHVar2 = (Heap *)&param_2[3].next_heap_block;
  }
  else {
    pHVar2 = g_Heap_PTR_0061eea0->next_heap_block;
    param_2 = g_Heap_PTR_0061eea0;
    while ((pHVar2 != (Heap *)0x0 &&
           ((pHVar1 < param_2 || ((Heap *)((int)&param_2->heap_size + param_2->heap_size) <= pHVar1)
            )))) {
      param_2 = param_2->next_heap_block;
      pHVar2 = param_2->next_heap_block;
    }
    pHVar2 = (Heap *)((int)&pHVar1->heap_size + (pHVar1->heap_size & 0xfffffffeU));
    if (pHVar2 <= pHVar1) {
      return 3;
    }
  }
  while( true ) {
    if (pHVar2->heap_size != -1) {
      *(uint *)((int)param_1 + 10) = 1;
      *(ushort *)(param_1 + 1) = in_DS;
      *param_1 = (uint)pHVar2;
      *(uint *)((int)param_1 + 6) = pHVar2->heap_size & 0xfffffffe;
      if ((pHVar2->heap_size & 1) != 0) {
        *(uint *)((int)param_1 + 10) = 0;
      }
      return 0;
    }
    param_2 = param_2->next_heap_block;
    if (param_2 == (Heap *)0x0) break;
    pHVar2 = (Heap *)&param_2[3].next_heap_block;
  }
  *(ushort *)(param_1 + 1) = 0;
  *(uint *)((int)param_1 + 10) = 0;
  *(uint *)((int)param_1 + 6) = 0;
  *param_1 = 0;
  return 4;
}

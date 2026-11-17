// Name: crt_unknown.c_FUN_005c6880
// Address: 005c6880
// Address Range: [[005c6880, 005c68f6]]
// Convention: unknown
// Signature: Heap ** crt_unknown_c_FUN_005c6880(Heap *param_1)

#include "nocturne.h"

Heap ** FUN_005c6880(Heap *param_1)

{
  Heap **ppHVar1;
  int iVar2;
  Heap *pHVar3;
  Heap *pHVar4;
  Heap **ppHVar5;
  
  pHVar4 = (Heap *)0x0;
  for (pHVar3 = g_Heap_PTR_00626220; (pHVar3 != (Heap *)0x0 && (pHVar3 <= param_1));
      pHVar3 = pHVar3->next_heap_block) {
    pHVar4 = pHVar3;
  }
  param_1->heap_base = pHVar4;
  param_1->next_heap_block = pHVar3;
  if (pHVar4 == (Heap *)0x0) {
    g_Heap_PTR_00626220 = param_1;
  }
  else {
    pHVar4->next_heap_block = param_1;
  }
  if (pHVar3 != (Heap *)0x0) {
    pHVar3->heap_base = param_1;
  }
  ppHVar1 = &param_1[2].next_heap_block;
  ppHVar5 = &param_1[3].next_heap_block;
  param_1[2].next_heap_block = (Heap *)0x0;
  param_1[1].heap_base = (void *)0x0;
  param_1[2].heap_size = 0;
  param_1[2].heap_base = (void *)0x0;
  param_1[3].heap_size = (int)ppHVar1;
  iVar2 = param_1->heap_size;
  param_1[3].heap_base = ppHVar1;
  pHVar4 = (Heap *)(iVar2 + -0x2c);
  param_1[1].heap_size = (int)ppHVar1;
  *ppHVar5 = pHVar4;
  *(uint *)((int)ppHVar5 + (int)pHVar4) = 0xffffffff;
  return ppHVar5;
}

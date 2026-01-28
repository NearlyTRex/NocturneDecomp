// Name: crt_unknown.c_FUN_00600990
// Address: 00600990
// Address Range: [[00600990, 00600a61]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00600990(void)

#include "nocturne.h"

uint crt_unknown_c_FUN_00600990(void)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  Heap *pHVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint *in_stack_00000004;
  
  uVar6 = 0;
  pHVar4 = g_MainHeap;
  do {
    if (pHVar4 == (Heap *)0x0) {
      *in_stack_00000004 = uVar6;
      return 0;
    }
    INT_03f9b1f0 = (int)pHVar4[3].heap_base;
    if (((*(byte **)(INT_03f9b1f0 + 4) == (byte *)0x0) ||
        (*(byte **)(INT_03f9b1f0 + 4) < &pHVar4[2].next_heap_block)) ||
       ((uint)((int)&pHVar4->heap_size + pHVar4->heap_size) < *(uint *)(INT_03f9b1f0 + 4))) {
      return 3;
    }
    pbVar1 = *(byte **)(*(uint *)(INT_03f9b1f0 + 4) + 8);
    if ((byte *)INT_03f9b1f0 != pbVar1) {
      return 3;
    }
    iVar2 = *(int *)(pbVar1 + 8);
    pbVar5 = (byte *)INT_03f9b1f0;
    uVar7 = uVar6;
    while( true ) {
      if (((iVar2 == 0) || (*(byte **)(pbVar5 + 8) < &pHVar4[2].next_heap_block)) ||
         (INT_03f9b1f0 = *(int *)(pbVar5 + 8),
         (byte *)((int)&pHVar4->heap_size + pHVar4->heap_size) < (uint)INT_03f9b1f0)) {
        INT_03f9b1f0 = (int)pbVar5;
        return 3;
      }
      pbVar3 = *(byte **)(INT_03f9b1f0 + 4);
      if (pbVar5 != pbVar3) {
        INT_03f9b1f0 = (int)pbVar5;
        return 3;
      }
      if ((*pbVar3 & 1) != 0) {
        INT_03f9b1f0 = (int)pbVar5;
        return 3;
      }
      uVar6 = *(int *)pbVar3 + uVar7;
      if (uVar6 < uVar7) {
        INT_03f9b1f0 = (int)pbVar5;
        return 3;
      }
      if ((byte *)INT_03f9b1f0 == pbVar1) break;
      iVar2 = *(int *)(INT_03f9b1f0 + 8);
      pbVar5 = (byte *)INT_03f9b1f0;
      uVar7 = uVar6;
    }
    pHVar4 = pHVar4->next_heap_block;
  } while( true );
}

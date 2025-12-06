// Name: crt_unknown.c_FUN_00600990
// Address: 00600990
// Address Range: [[00600990, 00600a61]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600990()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint crt_unknown_c_FUN_00600990(void)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  Heap *pHVar5;
  uint uVar6;
  uint uVar7;
  uint *in_stack_00000004;
  
  uVar6 = 0;
  pHVar5 = g_MainHeap;
  if (g_MainHeap != (Heap *)0x0) {
    do {
      _DAT_03f9b1f0 = (byte *)pHVar5[3].heap_base;
      if (((*(byte **)(_DAT_03f9b1f0 + 4) == (byte *)0x0) ||
          (*(byte **)(_DAT_03f9b1f0 + 4) < &pHVar5[2].next_heap_block)) ||
         ((uint)((int)&pHVar5->heap_size + pHVar5->heap_size) < *(uint *)(_DAT_03f9b1f0 + 4))) {
        return 3;
      }
      pbVar1 = *(byte **)(*(uint *)(_DAT_03f9b1f0 + 4) + 8);
      if (_DAT_03f9b1f0 != pbVar1) {
        return 3;
      }
      iVar2 = *(int *)(pbVar1 + 8);
      pbVar4 = _DAT_03f9b1f0;
      uVar7 = uVar6;
      while( true ) {
        if (((iVar2 == 0) || (*(byte **)(pbVar4 + 8) < &pHVar5[2].next_heap_block)) ||
           (_DAT_03f9b1f0 = *(byte **)(pbVar4 + 8),
           (byte *)((int)&pHVar5->heap_size + pHVar5->heap_size) < _DAT_03f9b1f0)) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        pbVar3 = *(byte **)(_DAT_03f9b1f0 + 4);
        if (pbVar4 != pbVar3) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        if ((*pbVar3 & 1) != 0) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        uVar6 = *(int *)pbVar3 + uVar7;
        if (uVar6 < uVar7) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        if (_DAT_03f9b1f0 == pbVar1) break;
        iVar2 = *(int *)(_DAT_03f9b1f0 + 8);
        pbVar4 = _DAT_03f9b1f0;
        uVar7 = uVar6;
      }
      pHVar5 = pHVar5->next_heap_block;
    } while (pHVar5 != (Heap *)0x0);
  }
  *in_stack_00000004 = uVar6;
  return 0;
}

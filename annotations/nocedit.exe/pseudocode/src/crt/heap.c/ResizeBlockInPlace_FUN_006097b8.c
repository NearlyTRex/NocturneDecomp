// Name: crt_heap.c_ResizeBlockInPlace_FUN_006097b8
// Address: 006097b8
// Address Range: [[006097b8, 00609971]]
// Convention: __watcallRegister
// Signature: int crt_heap_c_ResizeBlockInPlace_FUN_006097b8 (ushort segment,void *ptr,ulong new_size,ulong *pExtraNeeded)

#include "nocturne.h"

int ResizeBlockInPlace
              (ushort segment,void *ptr,ulong new_size,ulong *pExtraNeeded)

{
  Heap **ppHVar1;
  uint uVar2;
  Heap *pHVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  short in_DS;
  short in_stack_00000004;
  Heap *in_stack_00000008;
  uint in_stack_0000000c;
  uint *in_stack_00000010;
  
  uVar4 = in_stack_0000000c + 0xb & 0xfffffff8;
  if (uVar4 < in_stack_0000000c) {
    uVar4 = 0xffffffff;
  }
  else if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  ppHVar1 = &in_stack_00000008[-1].next_heap_block;
  uVar7 = (uint)*ppHVar1 & 0xfffffffe;
  if (uVar7 < uVar4) {
    *in_stack_00000010 = uVar4 - uVar7;
    for (puVar8 = (uint *)((int)ppHVar1 + uVar7); uVar4 = *puVar8, uVar4 != 0xffffffff;
        puVar8 = (uint *)((int)puVar8 + uVar4)) {
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar7 = puVar8[2];
      uVar2 = puVar8[1];
      if (in_DS == in_stack_00000004) {
        pHVar3 = g_MainHeap->next_heap_block;
        new_size = (ulong)g_MainHeap;
        while ((pHVar3 != (Heap *)0x0 &&
               ((in_stack_00000008 < new_size ||
                ((Heap *)((int)&((Heap *)new_size)->heap_size + ((Heap *)new_size)->heap_size) <=
                 in_stack_00000008))))) {
          new_size = (ulong)((Heap *)new_size)->next_heap_block;
          pHVar3 = ((Heap *)new_size)->next_heap_block;
        }
      }
      if (puVar8 == (uint *)((Heap *)(new_size + 0xc))->heap_size) {
        ((Heap *)(new_size + 0xc))->heap_size = ((uint *)((Heap *)(new_size + 0xc))->heap_size)[1];
      }
      if (*in_stack_00000010 <= uVar4) {
        uVar6 = uVar4 - *in_stack_00000010;
        if (0xf < uVar6) {
          puVar8 = (uint *)((int)puVar8 + *in_stack_00000010);
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar7;
          *(uint **)(uVar2 + 8) = puVar8;
          *(uint **)(uVar7 + 4) = puVar8;
          *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + *in_stack_00000010);
          DAT_03f9b851 = 0;
          goto LAB_00609968;
        }
      }
      *(uint *)(uVar2 + 8) = uVar7;
      *(uint *)(uVar7 + 4) = uVar2;
      *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + uVar4);
      ((Heap *)(new_size + 0x18))->heap_base =
           (void *)((int)((Heap *)(new_size + 0x18))->heap_base + -1);
      DAT_03f9b851 = 0;
      if (*in_stack_00000010 <= uVar4) goto LAB_00609968;
      *in_stack_00000010 = *in_stack_00000010 - uVar4;
    }
    iVar5 = 2;
  }
  else {
    if (0xf < uVar7 - uVar4) {
      *ppHVar1 = (Heap *)(uVar4 | 1);
      *(uint *)(uVar4 + (int)ppHVar1) = uVar7 - uVar4 | 1;
      if (in_DS == in_stack_00000004) {
        pHVar3 = g_MainHeap->next_heap_block;
        new_size = (ulong)g_MainHeap;
        while ((pHVar3 != (Heap *)0x0 &&
               ((in_stack_00000008 < new_size ||
                ((Heap *)((int)&((Heap *)new_size)->heap_size + ((Heap *)new_size)->heap_size) <=
                 in_stack_00000008))))) {
          new_size = (ulong)((Heap *)new_size)->next_heap_block;
          pHVar3 = ((Heap *)new_size)->next_heap_block;
        }
      }
      ((Heap *)(new_size + 0x18))->heap_size = ((Heap *)(new_size + 0x18))->heap_size + 1;
      ValidateHeapIntegrity((uint *)(uVar4 + (int)ppHVar1) + 1);
    }
LAB_00609968:
    iVar5 = 0;
  }
  return iVar5;
}

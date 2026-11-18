// Name: crt_heap.c_ResizeBlockInPlace_FUN_0056afe8
// Address: 0056afe8
// Address Range: [[0056afe8, 0056b1a1]]
// Convention: __watcallRegister
// Signature: undefined4 __watcallRegister crt_heap_c_ResizeBlockInPlace_FUN_0056afe8(undefined4 param_1,undefined4 param_2,Heap *unaff_EBX,undefined4 param_4,short param_5,Heap *param_6,uint param_7,uint *param_8)

#include "nocturne.h"

uint __watcallRegister ResizeBlockInPlace(uint param_1,uint param_2,Heap *unaff_EBX,uint param_4,short param_5,Heap *param_6,uint param_7,uint *param_8)

{
  Heap **ppHVar1;
  uint uVar2;
  Heap *pHVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  short in_DS;
  
  uVar4 = param_7 + 0xb & 0xfffffff8;
  if (uVar4 < param_7) {
    uVar4 = 0xffffffff;
  }
  else if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  ppHVar1 = &param_6[-1].next_heap_block;
  uVar7 = (uint)*ppHVar1 & 0xfffffffe;
  if (uVar7 < uVar4) {
    *param_8 = uVar4 - uVar7;
    for (puVar8 = (uint *)((int)ppHVar1 + uVar7); uVar4 = *puVar8, uVar4 != 0xffffffff;
        puVar8 = (uint *)((int)puVar8 + uVar4)) {
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar7 = puVar8[2];
      uVar2 = puVar8[1];
      if (in_DS == param_5) {
        pHVar3 = g_MainHeap->next_heap_block;
        unaff_EBX = g_MainHeap;
        while ((pHVar3 != (Heap *)0x0 &&
               ((param_6 < unaff_EBX ||
                ((Heap *)((int)&unaff_EBX->heap_size + unaff_EBX->heap_size) <= param_6))))) {
          unaff_EBX = unaff_EBX->next_heap_block;
          pHVar3 = unaff_EBX->next_heap_block;
        }
      }
      if (puVar8 == (uint *)unaff_EBX[1].heap_size) {
        unaff_EBX[1].heap_size = ((uint *)unaff_EBX[1].heap_size)[1];
      }
      if (*param_8 <= uVar4) {
        uVar6 = uVar4 - *param_8;
        if (0xf < uVar6) {
          puVar8 = (uint *)((int)puVar8 + *param_8);
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar7;
          *(uint **)(uVar2 + 8) = puVar8;
          *(uint **)(uVar7 + 4) = puVar8;
          *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + *param_8);
          g_CHAR_ARRAY_02de5460[1] = '\0';
          goto LAB_0056b198;
        }
      }
      *(uint *)(uVar2 + 8) = uVar7;
      *(uint *)(uVar7 + 4) = uVar2;
      *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + uVar4);
      unaff_EBX[2].heap_base = (void *)((int)unaff_EBX[2].heap_base + -1);
      g_CHAR_ARRAY_02de5460[1] = '\0';
      if (*param_8 <= uVar4) goto LAB_0056b198;
      *param_8 = *param_8 - uVar4;
    }
    uVar5 = 2;
  }
  else {
    if (0xf < uVar7 - uVar4) {
      *ppHVar1 = (Heap *)(uVar4 | 1);
      *(uint *)(uVar4 + (int)ppHVar1) = uVar7 - uVar4 | 1;
      if (in_DS == param_5) {
        pHVar3 = g_MainHeap->next_heap_block;
        unaff_EBX = g_MainHeap;
        while ((pHVar3 != (Heap *)0x0 &&
               ((param_6 < unaff_EBX ||
                ((Heap *)((int)&unaff_EBX->heap_size + unaff_EBX->heap_size) <= param_6))))) {
          unaff_EBX = unaff_EBX->next_heap_block;
          pHVar3 = unaff_EBX->next_heap_block;
        }
      }
      unaff_EBX[2].heap_size = unaff_EBX[2].heap_size + 1;
      ValidateHeapIntegrity((uint *)(uVar4 + (int)ppHVar1) + 1);
    }
LAB_0056b198:
    uVar5 = 0;
  }
  return uVar5;
}

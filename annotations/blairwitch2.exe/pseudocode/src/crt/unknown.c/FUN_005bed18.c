// Name: crt_unknown.c_FUN_005bed18
// Address: 005bed18
// Address Range: [[005bed18, 005beed1]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005bed18(short param_1,Heap *param_2,uint param_3,uint *param_4)

#include "nocturne.h"

uint FUN_005bed18(short param_1,Heap *param_2,uint param_3,uint *param_4)

{
  Heap **ppHVar1;
  uint uVar2;
  Heap *pHVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Heap *unaff_EBX;
  uint *puVar8;
  short in_DS;
  
  uVar4 = param_3 + 0xb & 0xfffffff8;
  if (uVar4 < param_3) {
    uVar4 = 0xffffffff;
  }
  else if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  ppHVar1 = &param_2[-1].next_heap_block;
  uVar7 = (uint)*ppHVar1 & 0xfffffffe;
  if (uVar7 < uVar4) {
    *param_4 = uVar4 - uVar7;
    for (puVar8 = (uint *)((int)ppHVar1 + uVar7); uVar4 = *puVar8, uVar4 != 0xffffffff;
        puVar8 = (uint *)((int)puVar8 + uVar4)) {
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar7 = puVar8[2];
      uVar2 = puVar8[1];
      if (in_DS == param_1) {
        pHVar3 = g_Heap_PTR_0061eea0->next_heap_block;
        unaff_EBX = g_Heap_PTR_0061eea0;
        while ((pHVar3 != (Heap *)0x0 &&
               ((param_2 < unaff_EBX ||
                ((Heap *)((int)&unaff_EBX->heap_size + unaff_EBX->heap_size) <= param_2))))) {
          unaff_EBX = unaff_EBX->next_heap_block;
          pHVar3 = unaff_EBX->next_heap_block;
        }
      }
      if (puVar8 == (uint *)unaff_EBX[1].heap_size) {
        unaff_EBX[1].heap_size = ((uint *)unaff_EBX[1].heap_size)[1];
      }
      if (*param_4 <= uVar4) {
        uVar6 = uVar4 - *param_4;
        if (0xf < uVar6) {
          puVar8 = (uint *)((int)puVar8 + *param_4);
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar7;
          *(uint **)(uVar2 + 8) = puVar8;
          *(uint **)(uVar7 + 4) = puVar8;
          *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + *param_4);
          g_CHAR_ARRAY_026807a0[1] = '\0';
          goto LAB_005beec8;
        }
      }
      *(uint *)(uVar2 + 8) = uVar7;
      *(uint *)(uVar7 + 4) = uVar2;
      *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + uVar4);
      unaff_EBX[2].heap_base = (void *)((int)unaff_EBX[2].heap_base + -1);
      g_CHAR_ARRAY_026807a0[1] = '\0';
      if (*param_4 <= uVar4) goto LAB_005beec8;
      *param_4 = *param_4 - uVar4;
    }
    uVar5 = 2;
  }
  else {
    if (0xf < uVar7 - uVar4) {
      *ppHVar1 = (Heap *)(uVar4 | 1);
      *(uint *)(uVar4 + (int)ppHVar1) = uVar7 - uVar4 | 1;
      if (in_DS == param_1) {
        pHVar3 = g_Heap_PTR_0061eea0->next_heap_block;
        unaff_EBX = g_Heap_PTR_0061eea0;
        while ((pHVar3 != (Heap *)0x0 &&
               ((param_2 < unaff_EBX ||
                ((Heap *)((int)&unaff_EBX->heap_size + unaff_EBX->heap_size) <= param_2))))) {
          unaff_EBX = unaff_EBX->next_heap_block;
          pHVar3 = unaff_EBX->next_heap_block;
        }
      }
      unaff_EBX[2].heap_size = unaff_EBX[2].heap_size + 1;
      FUN_005b86b0((uint *)(uVar4 + (int)ppHVar1) + 1);
    }
LAB_005beec8:
    uVar5 = 0;
  }
  return uVar5;
}

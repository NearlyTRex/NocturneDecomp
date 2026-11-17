// Name: crt_unknown.c_FUN_005ae95c
// Address: 005ae95c
// Address Range: [[005ae95c, 005ae98d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ae95c(int param_1)

#include "nocturne.h"

void FUN_005ae95c(int param_1)

{
  void *pvVar1;
  Heap *pHVar2;
  Heap *pHVar3;
  int iVar4;
  
  pvVar1 = *(void **)(param_1 + 4);
  pHVar2 = *(Heap **)(param_1 + 8);
  iVar4 = FUN_005ae8fc(param_1);
  if (iVar4 == 0) {
    pHVar3 = pHVar2;
    if (pvVar1 != (void *)0x0) {
      *(Heap **)((int)pvVar1 + 8) = pHVar2;
      pHVar3 = g_Heap_PTR_006075c4;
    }
    g_Heap_PTR_006075c4 = pHVar3;
    if (pHVar2 != (Heap *)0x0) {
      pHVar2->heap_base = pvVar1;
    }
  }
  return;
}

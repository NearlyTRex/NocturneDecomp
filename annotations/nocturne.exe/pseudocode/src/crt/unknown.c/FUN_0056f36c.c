// Name: crt_unknown.c_FUN_0056f36c
// Address: 0056f36c
// Address Range: [[0056f36c, 0056f39d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056f36c(int param_1)

#include "nocturne.h"

void FUN_0056f36c(int param_1)

{
  void *pvVar1;
  Heap *pHVar2;
  Heap *pHVar3;
  int iVar4;
  
  pvVar1 = *(void **)(param_1 + 4);
  pHVar2 = *(Heap **)(param_1 + 8);
  iVar4 = FUN_0056f30c(param_1);
  if (iVar4 == 0) {
    pHVar3 = pHVar2;
    if (pvVar1 != (void *)0x0) {
      *(Heap **)((int)pvVar1 + 8) = pHVar2;
      pHVar3 = g_Heap_PTR_005c1680;
    }
    g_Heap_PTR_005c1680 = pHVar3;
    if (pHVar2 != (Heap *)0x0) {
      pHVar2->heap_base = pvVar1;
    }
  }
  return;
}

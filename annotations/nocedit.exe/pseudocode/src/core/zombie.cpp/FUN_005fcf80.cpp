// Name: core_zombie.cpp_FUN_005fcf80
// Address: 005fcf80
// Address Range: [[005fcf80, 005fcfb5]]
// Convention: unknown
// Signature: SEdgeData * core_zombie_cpp_FUN_005fcf80(void)

#include "nocturne.h"

SEdgeData * core_zombie_cpp_FUN_005fcf80(void)

{
  SEdgeData *pSVar1;
  int iVar2;
  int in_stack_00000004;
  SEdgeData *in_stack_00000008;
  
  pSVar1 = g_RasterizerEdgeArray;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((in_stack_00000004 == pSVar1->y_start) && (pSVar1 != in_stack_00000008)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  return (SEdgeData *)0x0;
}

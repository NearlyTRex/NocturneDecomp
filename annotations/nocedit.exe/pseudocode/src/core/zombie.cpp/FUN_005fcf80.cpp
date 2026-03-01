// Name: core_zombie.cpp_FUN_005fcf80
// Address: 005fcf80
// Address Range: [[005fcf80, 005fcfb5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl core_zombie_cpp_FUN_005fcf80(void)

#include "nocturne.h"

SSoftwareEdge * __cdecl core_zombie_cpp_FUN_005fcf80(void)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  int in_stack_00000004;
  SSoftwareEdge *in_stack_00000008;
  
  pSVar1 = g_RasterizerEdgeArray;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((in_stack_00000004 == (pSVar1->base).y_min) && (pSVar1 != in_stack_00000008)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}

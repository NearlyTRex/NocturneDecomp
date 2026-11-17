// Name: core_zombie.cpp_findRasterizerEdge_FUN_005bf0e0
// Address: 005bf0e0
// Address Range: [[005bf0e0, 005bf115]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl core_zombie_cpp_findRasterizerEdge_FUN_005bf0e0(int y_start,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

SSoftwareEdge * __cdecl core_zombie_cpp_findRasterizerEdge_FUN_005bf0e0(int y_start,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SSoftwareEdge_ARRAY_02c9eb38;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((y_start == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}

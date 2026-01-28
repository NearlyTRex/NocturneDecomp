// Name: engine_prim.c_findEdgeInTable_FUN_00553410
// Address: 00553410
// Address Range: [[00553410, 00553445]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_findEdgeInTable_FUN_00553410(int scanline,SSoftwareEdge *target_edge)

#include "nocturne.h"

SSoftwareEdge * __cdecl
engine_prim_c_findEdgeInTable_FUN_00553410(int scanline,SSoftwareEdge *target_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SoftwareEdgeTable;
  iVar2 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((scanline == pSVar1->y_min) && (pSVar1 != target_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_ActiveEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}

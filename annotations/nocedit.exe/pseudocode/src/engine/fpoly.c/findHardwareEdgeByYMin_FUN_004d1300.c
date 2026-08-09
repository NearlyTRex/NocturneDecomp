// Name: engine_fpoly.c_findHardwareEdgeByYMin_FUN_004d1300
// Address: 004d1300
// Address Range: [[004d1300, 004d1335]]
// Convention: __cdecl
// Signature: SHardwareEdge * __cdecl engine_fpoly_c_findHardwareEdgeByYMin_FUN_004d1300(int y_min,SHardwareEdge *exclude_edge)

#include "nocturne.h"

SHardwareEdge * __cdecl engine_fpoly_c_findHardwareEdgeByYMin_FUN_004d1300(int y_min,SHardwareEdge *exclude_edge)

{
  SHardwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_HardwareEdgeTable;
  iVar2 = 0;
  if (0 < g_EdgeCount) {
    do {
      if ((y_min == pSVar1->y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_EdgeCount);
  }
  return (SHardwareEdge *)0x0;
}

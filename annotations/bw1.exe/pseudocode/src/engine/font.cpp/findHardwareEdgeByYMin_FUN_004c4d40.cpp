// Name: engine_font.cpp_findHardwareEdgeByYMin_FUN_004c4d40
// Address: 004c4d40
// Address Range: [[004c4d40, 004c4d75]]
// Convention: __cdecl
// Signature: SHardwareEdge * __cdecl engine_font_cpp_findHardwareEdgeByYMin_FUN_004c4d40(int y_min,SHardwareEdge *exclude_edge)

#include "nocturne.h"

SHardwareEdge * __cdecl engine_font_cpp_findHardwareEdgeByYMin_FUN_004c4d40(int y_min,SHardwareEdge *exclude_edge)

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

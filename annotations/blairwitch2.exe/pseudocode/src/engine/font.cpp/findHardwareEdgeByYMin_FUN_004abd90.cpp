// Name: engine_font.cpp_findHardwareEdgeByYMin_FUN_004abd90
// Address: 004abd90
// Address Range: [[004abd90, 004abdc5]]
// Convention: __cdecl
// Signature: SHardwareEdge * __cdecl engine_font_cpp_findHardwareEdgeByYMin_FUN_004abd90(int y_min,SHardwareEdge *exclude_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SHardwareEdge * __cdecl engine_font_cpp_findHardwareEdgeByYMin_FUN_004abd90(int y_min,SHardwareEdge *exclude_edge)

{
  SHardwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SHardwareEdge *)&DAT_01cb025c;
  iVar2 = 0;
  if (0 < _DAT_01cb0258) {
    do {
      if ((y_min == pSVar1->y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01cb0258);
  }
  return (SHardwareEdge *)0x0;
}

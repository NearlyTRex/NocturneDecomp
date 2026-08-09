// Name: engine_fpoly.c_findHardwareEdgeByYMin_FUN_00494220
// Address: 00494220
// Address Range: [[00494220, 00494255]]
// Convention: __cdecl
// Signature: SHardwareEdge * __cdecl engine_fpoly_c_findHardwareEdgeByYMin_FUN_00494220(int y_min,SHardwareEdge *exclude_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SHardwareEdge * __cdecl engine_fpoly_c_findHardwareEdgeByYMin_FUN_00494220(int y_min,SHardwareEdge *exclude_edge)

{
  SHardwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SHardwareEdge *)&DAT_01c70f7c;
  iVar2 = 0;
  if (0 < _DAT_01c70f78) {
    do {
      if ((y_min == pSVar1->y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01c70f78);
  }
  return (SHardwareEdge *)0x0;
}

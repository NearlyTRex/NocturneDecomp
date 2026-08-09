// Name: engine_prim.c_findEdgeInTable_FUN_004faca0
// Address: 004faca0
// Address Range: [[004faca0, 004facd5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_findEdgeInTable_FUN_004faca0(int scanline,SSoftwareEdge *target_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl engine_prim_c_findEdgeInTable_FUN_004faca0(int scanline,SSoftwareEdge *target_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01e52f00;
  iVar2 = 0;
  if (0 < _DAT_01e52efc) {
    do {
      if ((scanline == (pSVar1->base).y_min) && (pSVar1 != target_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01e52efc);
  }
  return (SSoftwareEdge *)0x0;
}

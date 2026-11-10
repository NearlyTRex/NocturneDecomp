// Name: engine_prim.c_findEdgeInBuffer_FUN_0051c580
// Address: 0051c580
// Address Range: [[0051c580, 0051c5b5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_0051c580(int y_value,SSoftwareEdge *edge_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_0051c580(int y_value,SSoftwareEdge *edge_ptr)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01e6164c;
  iVar2 = 0;
  if (0 < _DAT_01e61648) {
    do {
      if ((y_value == *(int *)pSVar1) && (pSVar1 != edge_ptr)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 0x50;
    } while (iVar2 < _DAT_01e61648);
  }
  return (SSoftwareEdge *)0x0;
}

// Name: engine_prim.c_findEdgeInBuffer_FUN_0053db80
// Address: 0053db80
// Address Range: [[0053db80, 0053dbb5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_0053db80(int y_value,SSoftwareEdge *edge_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_0053db80(int y_value,SSoftwareEdge *edge_ptr)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01e7d5bc;
  iVar2 = 0;
  if (0 < _DAT_01e7d5b8) {
    do {
      if ((y_value == (pSVar1->base).y_min) && (pSVar1 != edge_ptr)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01e7d5b8);
  }
  return (SSoftwareEdge *)0x0;
}

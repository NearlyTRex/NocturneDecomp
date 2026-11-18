// Name: engine_prim.c_findEdgeInBuffer_FUN_005158e0
// Address: 005158e0
// Address Range: [[005158e0, 00515915]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_005158e0(int y_value,SSoftwareEdge *edge_ptr)

#include "nocturne.h"

SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_005158e0(int y_value,SSoftwareEdge *edge_ptr)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SSoftwareEdge_ARRAY_01ed2c8c;
  iVar2 = 0;
  if (0 < g_SoftwareEdgeCount) {
    do {
      if ((y_value == (pSVar1->base).y_min) && (pSVar1 != edge_ptr)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_SoftwareEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}

// Name: engine_prim.c_findEdgeInBuffer_FUN_004f9830
// Address: 004f9830
// Address Range: [[004f9830, 004f9865]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_004f9830(int y_value,SSoftwareEdge *edge_ptr)

#include "nocturne.h"

SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_004f9830(int y_value,SSoftwareEdge *edge_ptr)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SSoftwareEdge_ARRAY_01e52a6c;
  iVar2 = 0;
  if (0 < g_INT_01e52a68) {
    do {
      if ((y_value == (pSVar1->base).y_min) && (pSVar1 != edge_ptr)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01e52a68);
  }
  return (SSoftwareEdge *)0x0;
}

// Name: engine_drender.cpp_findEdgeByYStart_FUN_004579c0
// Address: 004579c0
// Address Range: [[004579c0, 004579f5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_drender_cpp_findEdgeByYStart_FUN_004579c0(int scanline_y,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl engine_drender_cpp_findEdgeByYStart_FUN_004579c0(int scanline_y,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01b4cd34;
  iVar2 = 0;
  if (0 < _DAT_01b4cd30) {
    do {
      if ((scanline_y == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01b4cd30);
  }
  return (SSoftwareEdge *)0x0;
}

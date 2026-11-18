// Name: core_dpart.cpp_findEdgeByYStart_FUN_00461f30
// Address: 00461f30
// Address Range: [[00461f30, 00461f65]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00461f30(int scanline_y,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00461f30(int scanline_y,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01ba51cc;
  iVar2 = 0;
  if (0 < g_INT_01ba51c8) {
    do {
      if ((scanline_y == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01ba51c8);
  }
  return (SSoftwareEdge *)0x0;
}

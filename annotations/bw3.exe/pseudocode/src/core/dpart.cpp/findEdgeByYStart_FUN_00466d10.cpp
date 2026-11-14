// Name: core_dpart.cpp_findEdgeByYStart_FUN_00466d10
// Address: 00466d10
// Address Range: [[00466d10, 00466d45]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00466d10(int scanline_y,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00466d10(int scanline_y,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01bdcfd8;
  iVar2 = 0;
  if (0 < _DAT_01bdcfd4) {
    do {
      if ((scanline_y == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01bdcfd4);
  }
  return (SSoftwareEdge *)0x0;
}

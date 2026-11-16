// Name: core_asgaya.cpp_findRasterizerEdge_FUN_005a1e60
// Address: 005a1e60
// Address Range: [[005a1e60, 005a1e95]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl core_asgaya_cpp_findRasterizerEdge_FUN_005a1e60(int y_start,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl core_asgaya_cpp_findRasterizerEdge_FUN_005a1e60(int y_start,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_02d24d84;
  iVar2 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((y_start == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_02d24d80);
  }
  return (SSoftwareEdge *)0x0;
}

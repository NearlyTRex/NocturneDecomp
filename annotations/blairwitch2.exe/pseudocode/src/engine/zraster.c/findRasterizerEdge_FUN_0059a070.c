// Name: engine_zraster.c_findRasterizerEdge_FUN_0059a070
// Address: 0059a070
// Address Range: [[0059a070, 0059a0a5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_0059a070(int y_start,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_0059a070(int y_start,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_026672ac;
  iVar2 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((y_start == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_026672a8);
  }
  return (SSoftwareEdge *)0x0;
}

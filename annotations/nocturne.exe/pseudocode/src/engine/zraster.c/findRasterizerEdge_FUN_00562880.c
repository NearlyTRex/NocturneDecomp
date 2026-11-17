// Name: engine_zraster.c_findRasterizerEdge_FUN_00562880
// Address: 00562880
// Address Range: [[00562880, 005628b5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_00562880(int y_start,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_00562880(int y_start,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SSoftwareEdge_ARRAY_02de4980;
  iVar2 = 0;
  if (0 < g_INT_02de497c) {
    do {
      if ((y_start == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_02de497c);
  }
  return (SSoftwareEdge *)0x0;
}

// Name: engine_prim.c_FUN_005158e0
// Address: 005158e0
// Address Range: [[005158e0, 00515915]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_prim_c_FUN_005158e0(int y_value,SSoftwareEdge *edge_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSoftwareEdge * __cdecl engine_prim_c_FUN_005158e0(int y_value,SSoftwareEdge *edge_ptr)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = (SSoftwareEdge *)&DAT_01ed2c8c;
  iVar2 = 0;
  if (0 < _DAT_01ed2c88) {
    do {
      if ((y_value == *(int *)pSVar1) && (pSVar1 != edge_ptr)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 0x50;
    } while (iVar2 < _DAT_01ed2c88);
  }
  return (SSoftwareEdge *)0x0;
}

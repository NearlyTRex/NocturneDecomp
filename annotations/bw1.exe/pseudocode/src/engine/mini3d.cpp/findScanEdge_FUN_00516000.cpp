// Name: engine_mini3d.cpp_findScanEdge_FUN_00516000
// Address: 00516000
// Address Range: [[00516000, 00516035]]
// Convention: __cdecl
// Signature: int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_00516000(int y,int *exclude)

#include "nocturne.h"

int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_00516000(int y,int *exclude)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = &g_SSoftwareEdge_01d2c0c8;
  iVar2 = 0;
  if (0 < g_INT_01d2c0c4) {
    do {
      if ((y == (pSVar1->base).y_min) && (pSVar1 != (SSoftwareEdge *)exclude)) {
        return (int *)pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01d2c0c4);
  }
  return (int *)0x0;
}

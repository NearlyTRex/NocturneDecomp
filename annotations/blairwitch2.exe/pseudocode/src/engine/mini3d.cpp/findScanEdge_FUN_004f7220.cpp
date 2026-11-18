// Name: engine_mini3d.cpp_findScanEdge_FUN_004f7220
// Address: 004f7220
// Address Range: [[004f7220, 004f7255]]
// Convention: __cdecl
// Signature: int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_004f7220(int y,int *exclude)

#include "nocturne.h"

int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_004f7220(int y,int *exclude)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = &g_SSoftwareEdge_01d17ab8;
  iVar2 = 0;
  if (0 < g_INT_01d17ab4) {
    do {
      if ((y == (pSVar1->base).y_min) && (pSVar1 != (SSoftwareEdge *)exclude)) {
        return (int *)pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01d17ab4);
  }
  return (int *)0x0;
}

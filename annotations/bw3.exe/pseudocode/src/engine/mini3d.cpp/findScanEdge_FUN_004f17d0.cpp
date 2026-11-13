// Name: engine_mini3d.cpp_findScanEdge_FUN_004f17d0
// Address: 004f17d0
// Address Range: [[004f17d0, 004f1805]]
// Convention: __cdecl
// Signature: int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_004f17d0(int y,int *exclude)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_004f17d0(int y,int *exclude)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01d80848;
  iVar2 = 0;
  if (0 < _DAT_01d80844) {
    do {
      if ((y == *piVar1) && (piVar1 != exclude)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01d80844);
  }
  return (int *)0x0;
}

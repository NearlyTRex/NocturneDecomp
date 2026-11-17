// Name: core_path.cpp_CPathMap_previewPathfinding_FUN_004f1500
// Address: 004f1500
// Address Range: [[004f1500, 004f15f0]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(CPathMap *this_ptr)

{
  int x;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char acStack_11c [256];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = 0;
  iStack_18 = 0;
  iStack_14 = 0x441;
  do {
    iVar3 = 0;
    iVar1 = 0;
    iStack_1c = iStack_14;
    iVar4 = iStack_18;
    do {
      _sprintf(acStack_11c,"%s",
                 g_DirectionCharacters[(byte)g_PathfindingVisited[0][iVar4]]);
      if ((iVar1 == g_PathfindingCurrentX) && (iVar2 == g_PathfindingCurrentZ)) {
        acStack_11c[0] = 's';
      }
      if ((iVar1 == g_PathfindingDestX) && (iVar2 == g_PathfindingDestZ)) {
        acStack_11c[0] = 'd';
      }
      x = g_WindowWidth / 2 + iVar3;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xe;
      engine_2d_c_drawText_FUN_00402600(acStack_11c,x,iStack_1c);
    } while (iVar1 < 100);
    iVar2 = iVar2 + 1;
    iStack_14 = iStack_14 + -0xb;
    iStack_18 = iStack_18 + 100;
  } while (iVar2 < 100);
  return;
}

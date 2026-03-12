// Name: core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00
// Address: 00547c00
// Address Range: [[00547c00, 00547cf0]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap *this_ptr)

{
  int x;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = 0;
  local_18 = 0;
  local_14 = 0x441;
  do {
    iVar3 = 0;
    iVar1 = 0;
    iVar4 = local_18;
    do {
      _sprintf
                (local_11c,"%s",g_DirectionCharacters[(byte)g_PathfindingVisited[0][iVar4]])
      ;
      if ((iVar1 == g_PathfindingCurrentX) && (iVar2 == g_PathfindingCurrentZ)) {
        local_11c[0] = 's';
      }
      if ((iVar1 == g_PathfindingDestX) && (iVar2 == g_PathfindingDestZ)) {
        local_11c[0] = 'd';
      }
      x = g_WindowWidth / 2 + iVar3;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xe;
      engine_2d_c_drawText_FUN_00401fd0(local_11c,x,local_14);
    } while (iVar1 < 100);
    iVar2 = iVar2 + 1;
    local_14 = local_14 + -0xb;
    local_18 = local_18 + 100;
  } while (iVar2 < 100);
  return;
}

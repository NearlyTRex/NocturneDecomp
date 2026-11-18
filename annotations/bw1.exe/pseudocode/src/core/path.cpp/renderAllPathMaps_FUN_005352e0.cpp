// Name: core_path.cpp_renderAllPathMaps_FUN_005352e0
// Address: 005352e0
// Address Range: [[005352e0, 00535363]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_005352e0(int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_renderAllPathMaps_FUN_005352e0(int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_PathMapCount) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar1) == 0) {
        g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
        g_INT_01d1d404 = 0x6a9;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)((int)g_PathMapList + iVar1))->cached_world_position).x < 0x461c3c01)
      {
        core_path_cpp_CPathMap_renderPathMap_FUN_00534ca0
                  (*(CPathMap **)((int)g_PathMapList + iVar1),depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}

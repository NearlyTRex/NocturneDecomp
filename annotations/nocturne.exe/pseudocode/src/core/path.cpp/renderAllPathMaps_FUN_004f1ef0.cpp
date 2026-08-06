// Name: core_path.cpp_renderAllPathMaps_FUN_004f1ef0
// Address: 004f1ef0
// Address Range: [[004f1ef0, 004f1f73]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_004f1ef0(int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderAllPathMaps_FUN_004f1ef0(int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01e312f8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e312fc) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 1704;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)(iVar1 + 0x1e312fc))->cached_world_position).x < 0x461c3c01) {
        core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0
                  (*(CPathMap **)(iVar1 + 0x1e312fc),depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e312f8);
  }
  return;
}

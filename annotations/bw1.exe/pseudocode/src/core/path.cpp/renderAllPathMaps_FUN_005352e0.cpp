// Name: core_path.cpp_renderAllPathMaps_FUN_005352e0
// Address: 005352e0
// Address Range: [[005352e0, 00535363]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_005352e0(int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderAllPathMaps_FUN_005352e0(int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01e6be48) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e6be4c) == 0) {
        _DAT_01d1d400 = "..\\core\\path.cpp";
        _DAT_01d1d404 = 0x6a9;
        core_main_c_FUN_005030e0("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)(iVar1 + 0x1e6be4c))->cached_world_position).x < 0x461c3c01) {
        core_path_cpp_CPathMap_renderPathMap_FUN_00534ca0
                  (*(CPathMap **)(iVar1 + 0x1e6be4c),depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e6be48);
  }
  return;
}

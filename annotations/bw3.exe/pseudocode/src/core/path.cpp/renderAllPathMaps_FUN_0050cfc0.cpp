// Name: core_path.cpp_renderAllPathMaps_FUN_0050cfc0
// Address: 0050cfc0
// Address Range: [[0050cfc0, 0050d043]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_0050cfc0(int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderAllPathMaps_FUN_0050cfc0(int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01ec1518) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1ec151c) == 0) {
        _DAT_01d71de0 = "..\\core\\path.cpp";
        _DAT_01d71de4 = 0x6a9;
        core_main_c_FUN_004e4330("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)(iVar1 + 0x1ec151c))->cached_world_position).x < 0x461c3c01) {
        core_path_cpp_CPathMap_renderPathMap_FUN_0050c980
                  (*(CPathMap **)(iVar1 + 0x1ec151c),depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01ec1518);
  }
  return;
}

// Name: core_path.cpp_renderAllPathMaps_FUN_00513f90
// Address: 00513f90
// Address Range: [[00513f90, 00514013]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_00513f90(int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderAllPathMaps_FUN_00513f90(int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01e4fed8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e4fedc) == 0) {
        _DAT_01d046a0 = "..\\core\\path.cpp";
        _DAT_01d046a4 = 0x6a8;
        core_main_c_FUN_004e4500("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)(iVar1 + 0x1e4fedc))->cached_world_position).x < 0x461c3c01) {
        core_path_cpp_CPathMap_renderPathMap_FUN_00513950
                  (*(CPathMap **)(iVar1 + 0x1e4fedc),depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e4fed8);
  }
  return;
}

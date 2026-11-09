// Name: core_path.cpp_resetAllPathMaps_FUN_00513f30
// Address: 00513f30
// Address Range: [[00513f30, 00513f8c]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetAllPathMaps_FUN_00513f30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_resetAllPathMaps_FUN_00513f30(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e4fed8) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1e4fedc) == 0) {
        _DAT_01d046a0 = "..\\core\\path.cpp";
        _DAT_01d046a4 = 0x6a1;
        core_main_c_FUN_004e4500("Global pathmap list corruption");
      }
      puVar1 = (uint *)(iVar2 + 0x1e4fedc);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_path_cpp_CPathMap_reset_FUN_00513eb0((CPathMap *)*puVar1);
    } while (iVar3 < _DAT_01e4fed8);
  }
  return;
}

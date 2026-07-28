// Name: core_path.cpp_renderAllPathMaps_FUN_004f1ef0
// Address: 004f1ef0
// Address Range: [[004f1ef0, 004f1f73]]
// Convention: unknown
// Signature: void core_path_cpp_renderAllPathMaps_FUN_004f1ef0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_renderAllPathMaps_FUN_004f1ef0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01e312f8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e312fc) == 0) {
        PTR_01cc4800 = "..\\core\\path.cpp";
        INT_01cc4804 = 0x6a8;
        core_main_c_FUN_004c8440("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)(iVar1 + 0x1e312fc))->cached_world_position).x < 0x461c3c01) {
        core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0
                  (*(CPathMap **)(iVar1 + 0x1e312fc),param_1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e312f8);
  }
  return;
}

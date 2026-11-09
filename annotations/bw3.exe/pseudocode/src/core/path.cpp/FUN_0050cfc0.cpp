// Name: core_path.cpp_FUN_0050cfc0
// Address: 0050cfc0
// Address Range: [[0050cfc0, 0050d043]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_0050cfc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_0050cfc0(uint param_1,uint param_2,uint param_3,uint param_4)

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
      if (*(int *)(*(int *)(iVar1 + 0x1ec151c) + 0x138c0) < 0x461c3c01) {
        core_path_cpp_FUN_0050c980(*(int *)(iVar1 + 0x1ec151c),param_1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01ec1518);
  }
  return;
}

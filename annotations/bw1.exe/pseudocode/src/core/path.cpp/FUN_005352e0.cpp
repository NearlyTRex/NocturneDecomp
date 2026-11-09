// Name: core_path.cpp_FUN_005352e0
// Address: 005352e0
// Address Range: [[005352e0, 00535363]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_005352e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_005352e0(uint param_1,uint param_2,uint param_3,uint param_4)

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
      if (*(int *)(*(int *)(iVar1 + 0x1e6be4c) + 0x138c0) < 0x461c3c01) {
        core_path_cpp_FUN_00534ca0(*(int *)(iVar1 + 0x1e6be4c),param_1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e6be48);
  }
  return;
}

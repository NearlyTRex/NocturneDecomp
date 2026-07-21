// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
// Address: 0050a970
// Address Range: [[0050a970, 0050a9e9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(uint param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x1cb4) != 0) {
    if (0 < _DAT_01fba2d8) {
      iVar1 = 0;
      do {
        if (param_2 == *(int *)(iVar1 + 0x1fba2dc)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_01fba2d8 * 4);
    }
    if (3 < _DAT_01fba2d8) {
      _DAT_01cc4800 = "?..\\core\\set.cpp" + 1;
      _DAT_01cc4804 = 0x865;
      FUN_004c8440("Too many dynamic lights!");
    }
    _DAT_01fba2d8 = _DAT_01fba2d8 + 1;
    *(int *)(&DAT_01fba2d8 + _DAT_01fba2d8 * 4) = param_2;
  }
  return;
}

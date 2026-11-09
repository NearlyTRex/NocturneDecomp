// Name: engine_texture.cpp_FUN_00597b7c
// Address: 00597b7c
// Address Range: [[00597b7c, 00597c20]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00597b7c(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00597b7c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((DAT_00713a74 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    iVar1 = engine_texture_cpp_FUN_005970b0
                      (_DAT_02c8a680,*(uint *)(param_1 + 4) & 0xffff,param_1 + 8);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_00596ed0(_DAT_02c8a680,param_1 + 8,param_2,param_3);
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      *(int *)(param_1 + 4) = iVar1;
      engine_texture_cpp_FUN_00597000(_DAT_02c8a680,param_1,param_2,param_3);
    }
    _DAT_02c8a67c = iVar1;
    engine_texture_cpp_FUN_00597140(_DAT_02c8a680,param_1,2);
    return;
  }
  return;
}

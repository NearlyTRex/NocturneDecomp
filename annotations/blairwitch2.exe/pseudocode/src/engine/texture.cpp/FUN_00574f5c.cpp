// Name: engine_texture.cpp_FUN_00574f5c
// Address: 00574f5c
// Address Range: [[00574f5c, 00575000]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574f5c(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00574f5c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((DAT_0070ca74 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    iVar1 = engine_texture_cpp_FUN_00574490
                      (_DAT_02652eb0,*(uint *)(param_1 + 4) & 0xffff,param_1 + 8);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_005742b0(_DAT_02652eb0,param_1 + 8,param_2,param_3);
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      *(int *)(param_1 + 4) = iVar1;
      engine_texture_cpp_FUN_005743e0(_DAT_02652eb0,param_1,param_2,param_3);
    }
    _DAT_02652eac = iVar1;
    engine_texture_cpp_FUN_00574520(_DAT_02652eb0,param_1,2);
    return;
  }
  return;
}

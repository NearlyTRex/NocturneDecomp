// Name: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
// Address: 0050ded0
// Address Range: [[0050ded0, 0050df3f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (*(int *)(0x01C775EC + 0x1f0) == 0) {
    if (*(int *)(0x01C775EC + 500) != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar1 == 0) {
        core_set_cpp_FUN_0050d910(param_1,param_2,param_3,0xffff);
        return;
      }
    }
    engine_drender_cpp_FUN_00461720(DAT_005ae704,param_2,param_3,param_4);
  }
  return;
}

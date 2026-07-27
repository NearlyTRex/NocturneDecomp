// Name: core_mirror.cpp_FUN_004d7720
// Address: 004d7720
// Address Range: [[004d7720, 004d7752]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_004d7720(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_004d7720(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_mirror_cpp_FUN_004d74a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
            (DAT_005ae704,param_1 + 0xe8);
  return;
}

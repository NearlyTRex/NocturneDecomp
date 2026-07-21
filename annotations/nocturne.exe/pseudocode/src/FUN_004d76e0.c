// Name: FUN_004d76e0
// Address: 004d76e0
// Address Range: [[004d76e0, 004d7712]]
// Convention: unknown
// Signature: void FUN_004d76e0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d76e0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004d74a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
            (DAT_005ae704,param_1 + 0xe8);
  return;
}

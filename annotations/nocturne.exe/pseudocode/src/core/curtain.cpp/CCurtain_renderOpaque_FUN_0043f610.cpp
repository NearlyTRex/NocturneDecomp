// Name: core_curtain.cpp_CCurtain_renderOpaque_FUN_0043f610
// Address: 0043f610
// Address Range: [[0043f610, 0043f62c]]
// Convention: unknown
// Signature: int core_curtain_cpp_CCurtain_renderOpaque_FUN_0043f610(CCurtain *param_1)

#include "nocturne.h"

int core_curtain_cpp_CCurtain_renderOpaque_FUN_0043f610(CCurtain *param_1)

{
  int iVar1;
  
  if (param_1->opacity < 0xfde9) {
    return 0;
  }
  iVar1 = core_curtain_cpp_FUN_0043f330(param_1);
  return iVar1;
}

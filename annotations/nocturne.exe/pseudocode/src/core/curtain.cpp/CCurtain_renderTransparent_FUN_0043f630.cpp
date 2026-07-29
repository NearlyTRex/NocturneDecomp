// Name: core_curtain.cpp_CCurtain_renderTransparent_FUN_0043f630
// Address: 0043f630
// Address Range: [[0043f630, 0043f63f]]
// Convention: unknown
// Signature: int core_curtain_cpp_CCurtain_renderTransparent_FUN_0043f630(CCurtain *param_1)

#include "nocturne.h"

int core_curtain_cpp_CCurtain_renderTransparent_FUN_0043f630(CCurtain *param_1)

{
  int iVar1;
  
  if (65000 < param_1->opacity) {
    return 0;
  }
  iVar1 = core_curtain_cpp_FUN_0043f330(param_1);
  return iVar1;
}

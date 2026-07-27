// Name: cockpit_drawsurf.cpp_FUN_0045ddd0
// Address: 0045ddd0
// Address Range: [[0045ddd0, 0045de3b]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045ddd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045ddd0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,param_4,&local_10);
  local_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_FUN_0045dd70(param_1,local_1010,param_2,param_3);
  return;
}

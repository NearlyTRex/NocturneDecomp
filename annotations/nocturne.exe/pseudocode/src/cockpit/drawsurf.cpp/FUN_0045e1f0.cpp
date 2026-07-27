// Name: cockpit_drawsurf.cpp_FUN_0045e1f0
// Address: 0045e1f0
// Address Range: [[0045e1f0, 0045e251]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045e1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045e1f0(uint param_1,uint param_2,uint param_3)

{
  byte local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,param_3,&local_c);
  local_c = (byte *)0x0;
  cockpit_drawsurf_cpp_FUN_0045e1a0(param_1,local_100c,param_2);
  return;
}

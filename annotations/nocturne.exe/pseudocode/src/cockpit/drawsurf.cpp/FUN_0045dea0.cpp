// Name: cockpit_drawsurf.cpp_FUN_0045dea0
// Address: 0045dea0
// Address Range: [[0045dea0, 0045df15]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045dea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045dea0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte local_1014 [4096];
  byte *local_14;
  
  local_14 = &stack0x00000018;
  _vsprintf(local_1014,param_5,&local_14);
  local_14 = (byte *)0x0;
  cockpit_drawsurf_cpp_FUN_0045de40(param_1,local_1014,param_2,param_3,param_4);
  return;
}

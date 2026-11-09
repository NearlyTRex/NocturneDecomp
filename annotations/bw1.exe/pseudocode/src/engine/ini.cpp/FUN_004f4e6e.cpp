// Name: engine_ini.cpp_FUN_004f4e6e
// Address: 004f4e6e
// Address Range: [[004f4e6e, 004f4ed3]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4e6e(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4e6e(int param_1,uint param_2,uint *param_3)

{
  char acStack_70 [100];
  
  FUN_005bfb40(acStack_70,0x5e58fa,*param_3,param_3[1]);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,acStack_70,100);
  sscanf(acStack_70,(char *)0x5e58fe);
  return;
}

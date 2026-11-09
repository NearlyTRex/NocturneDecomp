// Name: engine_ini.cpp_FUN_004d8c7e
// Address: 004d8c7e
// Address Range: [[004d8c7e, 004d8ce3]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8c7e(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void engine_ini_cpp_FUN_004d8c7e(int param_1,uint param_2,uint *param_3)

{
  char acStack_70 [100];
  
  FUN_005b7790(acStack_70,0x5dad99,*param_3,param_3[1]);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,acStack_70,100);
  sscanf(acStack_70,(char *)0x5dad9d);
  return;
}

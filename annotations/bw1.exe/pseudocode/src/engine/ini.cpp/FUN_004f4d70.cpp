// Name: engine_ini.cpp_FUN_004f4d70
// Address: 004f4d70
// Address Range: [[004f4d70, 004f4dac]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4d70(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4d70(int param_1,uint param_2,uint param_3)

{
  byte local_68 [100];
  
  FUN_005bfb40(local_68,&DAT_005e58ee,param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}

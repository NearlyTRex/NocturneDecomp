// Name: engine_ini.cpp_FUN_004f4db0
// Address: 004f4db0
// Address Range: [[004f4db0, 004f4e10]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4db0(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4db0(int param_1,uint param_2)

{
  char local_6c [100];
  
  _sprintf(local_6c,&DAT_005e58f1);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c);
  sscanf(local_6c,&DAT_005e58f4);
  return;
}

// Name: engine_ini.cpp_FUN_004d8bc0
// Address: 004d8bc0
// Address Range: [[004d8bc0, 004d8c20]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8bc0(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_ini_cpp_FUN_004d8bc0(int param_1,uint param_2)

{
  char local_6c [100];
  
  _sprintf(local_6c,&DAT_005dad90);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c);
  sscanf(local_6c,&DAT_005dad93);
  return;
}

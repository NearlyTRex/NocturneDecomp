// Name: engine_ini.cpp_FUN_004d8cf0
// Address: 004d8cf0
// Address Range: [[004d8cf0, 004d8d33]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8cf0(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_ini_cpp_FUN_004d8cf0(int param_1,uint param_2)

{
  char acStack_6c [100];
  
  _sprintf(acStack_6c,(char *)0x5dada1);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,acStack_6c);
  return;
}

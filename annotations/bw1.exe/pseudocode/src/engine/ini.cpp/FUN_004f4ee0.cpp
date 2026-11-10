// Name: engine_ini.cpp_FUN_004f4ee0
// Address: 004f4ee0
// Address Range: [[004f4ee0, 004f4f23]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4ee0(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4ee0(int param_1,uint param_2)

{
  char acStack_6c [100];
  
  _sprintf(acStack_6c,(char *)0x5e5902);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,acStack_6c);
  return;
}

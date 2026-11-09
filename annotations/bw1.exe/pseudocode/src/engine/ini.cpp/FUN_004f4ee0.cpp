// Name: engine_ini.cpp_FUN_004f4ee0
// Address: 004f4ee0
// Address Range: [[004f4ee0, 004f4f23]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4ee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4ee0(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte auStack_6c [100];
  
  FUN_005bfb40(auStack_6c,0x5e5902,param_3,param_4);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,auStack_6c);
  return;
}

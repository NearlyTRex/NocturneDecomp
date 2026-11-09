// Name: engine_ini.cpp_FUN_004d8e00
// Address: 004d8e00
// Address Range: [[004d8e00, 004d8e43]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8e00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void engine_ini_cpp_FUN_004d8e00(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte auStack_6c [100];
  
  FUN_005a28c0(auStack_6c,0x5c58c8,param_3,param_4);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,auStack_6c);
  return;
}

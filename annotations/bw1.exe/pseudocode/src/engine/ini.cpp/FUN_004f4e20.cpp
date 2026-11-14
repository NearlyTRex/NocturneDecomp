// Name: engine_ini.cpp_FUN_004f4e20
// Address: 004f4e20
// Address Range: [[004f4e20, 004f4e61]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4e20(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4e20(int param_1,uint param_2)

{
  char local_68 [100];
  
  _sprintf(local_68,&DAT_005e58f7);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}

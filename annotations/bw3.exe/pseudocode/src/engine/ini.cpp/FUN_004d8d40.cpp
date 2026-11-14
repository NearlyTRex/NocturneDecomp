// Name: engine_ini.cpp_FUN_004d8d40
// Address: 004d8d40
// Address Range: [[004d8d40, 004d8d81]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8d40(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_ini_cpp_FUN_004d8d40(int param_1,uint param_2)

{
  char local_68 [100];
  
  _sprintf(local_68,&DAT_005c58bd);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}

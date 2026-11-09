// Name: engine_ini.cpp_FUN_004f4d10
// Address: 004f4d10
// Address Range: [[004f4d10, 004f4d6b]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4d10(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void engine_ini_cpp_FUN_004f4d10(int param_1,uint param_2,uint *param_3)

{
  char local_6c [100];
  
  FUN_005bfb40(local_6c,&DAT_005e58e8,*param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c,100);
  sscanf(local_6c,&DAT_005e58eb);
  return;
}

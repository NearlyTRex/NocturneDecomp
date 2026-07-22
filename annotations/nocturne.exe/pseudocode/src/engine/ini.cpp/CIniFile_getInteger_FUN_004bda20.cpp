// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
// Address: 004bda20
// Address Range: [[004bda20, 004bda73]]
// Convention: unknown
// Signature: void engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(uint param_1,uint param_2,uint *param_3)

{
  byte local_6c [100];
  
  _sprintf(local_6c,"%d",*param_3);
  engine_ini_cpp_CIniFile_getString_FUN_004bd910(param_1,param_2,local_6c,100);
  sscanf(local_6c,"%d",param_3);
  return;
}

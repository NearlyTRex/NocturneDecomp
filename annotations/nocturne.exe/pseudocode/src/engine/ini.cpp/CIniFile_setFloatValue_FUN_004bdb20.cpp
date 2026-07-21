// Name: engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20
// Address: 004bdb20
// Address Range: [[004bdb20, 004bdb57]]
// Convention: unknown
// Signature: void engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(undefined4 param_1,undefined4 param_2,float param_3)

#include "nocturne.h"

void engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(uint param_1,uint param_2,float param_3)

{
  byte local_64 [100];
  
  _sprintf(local_64,&DAT_00586741,(double)param_3);
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(param_1,param_2,local_64);
  return;
}

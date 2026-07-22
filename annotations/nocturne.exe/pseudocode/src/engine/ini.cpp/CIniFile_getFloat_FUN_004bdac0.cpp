// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0
// Address: 004bdac0
// Address Range: [[004bdac0, 004bdb16]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(undefined4 param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(uint param_1,uint param_2,float *param_3)

{
  byte local_68 [100];
  
  _sprintf(local_68,"%g",(double)*param_3);
  engine_ini_cpp_CIniFile_getString_FUN_004bd910(param_1,param_2,local_68,100);
  sscanf(local_68,"%f",param_3);
  return;
}

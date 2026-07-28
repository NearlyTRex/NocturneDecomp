// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004bda80
// Address: 004bda80
// Address Range: [[004bda80, 004bdab4]]
// Convention: unknown
// Signature: void engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

void engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *param_1,char *param_2,uint param_3)

{
  char local_68 [100];
  
  _sprintf(local_68,"%d",param_3);
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(param_1,param_2,local_68);
  return;
}

// Name: engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
// Address: 004bd9a0
// Address Range: [[004bd9a0, 004bda1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(char *param_1,uint param_2,uint param_3)

{
  if (*param_1 == '\0') {
    PTR_01cc4800 = "..\\engine\\ini.cpp";
    INT_01cc4804 = 0x26b;
    core_main_c_FUN_004c8440("CIniFile::setString - filename not write!");
  }
  if (param_1[0x100] == '\0') {
    PTR_01cc4800 = "..\\engine\\ini.cpp";
    INT_01cc4804 = 0x26c;
    core_main_c_FUN_004c8440("CIniFile::setString - section not write!");
  }
  engine_ini_cpp_writeProfileString_FUN_004bd830(param_1 + 0x100,param_2,param_3,param_1);
  return;
}

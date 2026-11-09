// Name: engine_ini.cpp_FUN_004d8aa0
// Address: 004d8aa0
// Address Range: [[004d8aa0, 004d8b1e]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8aa0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_ini_cpp_FUN_004d8aa0(char *param_1,char *param_2,char *param_3)

{
  if (*param_1 == '\0') {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0x280;
    core_main_c_FUN_004e4500("CIniFile::setString - filename not set!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0x281;
    core_main_c_FUN_004e4500("CIniFile::setString - section not set!");
  }
  engine_ini_cpp_writeProfileString_FUN_004d88e0(param_1 + 0x100,param_2,param_3,param_1);
  return;
}

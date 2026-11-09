// Name: engine_ini.cpp_FUN_004d8b20
// Address: 004d8b20
// Address Range: [[004d8b20, 004d8ba4]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8b20(char *param_1,char *param_2,char *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_ini_cpp_FUN_004d8b20(char *param_1,char *param_2,char *param_3,int param_4)

{
  if (*param_1 == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x27a;
    core_main_c_FUN_004e4330("CIniFile::getString - filename not set!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x27b;
    core_main_c_FUN_004e4330("CIniFile::getString - section not set!");
  }
  engine_ini_cpp_getProfileString_FUN_004d8910
            (param_1 + 0x100,param_2,param_3,param_3,param_4,param_1);
  return;
}

// Name: engine_ini.cpp_CIniFile_getString_FUN_004bd910
// Address: 004bd910
// Address Range: [[004bd910, 004bd994]]
// Convention: unknown
// Signature: void engine_ini_cpp_CIniFile_getString_FUN_004bd910(char *param_1,char *param_2,char *param_3,int param_4)

#include "nocturne.h"

void engine_ini_cpp_CIniFile_getString_FUN_004bd910(char *param_1,char *param_2,char *param_3,int param_4)

{
  if (*param_1 == '\0') {
    PTR_01cc4800 = "..\\engine\\ini.cpp";
    INT_01cc4804 = 0x265;
    core_main_c_FUN_004c8440("CIniFile::getString - filename not write!");
  }
  if (param_1[0x100] == '\0') {
    PTR_01cc4800 = "..\\engine\\ini.cpp";
    INT_01cc4804 = 0x266;
    core_main_c_FUN_004c8440("CIniFile::getString - section not write!");
  }
  engine_ini_cpp_getProfileString_FUN_004bd750
            (param_1 + 0x100,param_2,param_3,param_3,param_4,param_1);
  return;
}

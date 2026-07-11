// Name: FUN_004bd910
// Address: 004bd910
// Address Range: [[004bd910, 004bd994]]
// Convention: unknown
// Signature: void FUN_004bd910(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bd910(char *param_1,uint param_2,uint param_3,uint param_4)

{
  if (*param_1 == '\0') {
    _DAT_01cc4800 = "..\\engine\\ini.cpp";
    _DAT_01cc4804 = 0x265;
    FUN_004c8440("CIniFile::getString - filename not write!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01cc4800 = "..\\engine\\ini.cpp";
    _DAT_01cc4804 = 0x266;
    FUN_004c8440("CIniFile::getString - section not write!");
  }
  FUN_004bd750(param_1 + 0x100,param_2,param_3,param_3,param_4,param_1);
  return;
}

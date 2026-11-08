// Name: FUN_004d8bb0
// Address: 004d8bb0
// Address Range: [[004d8bb0, 004d8c2e]]
// Convention: unknown
// Signature: void FUN_004d8bb0(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8bb0(char *param_1,uint param_2,uint param_3)

{
  if (*param_1 == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x280;
    FUN_004e4330("CIniFile::setString - filename not set!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0x281;
    FUN_004e4330("CIniFile::setString - section not set!");
  }
  FUN_004d89f0(param_1 + 0x100,param_2,param_3,param_1);
  return;
}

// Name: FUN_004d8a10
// Address: 004d8a10
// Address Range: [[004d8a10, 004d8a94]]
// Convention: unknown
// Signature: void FUN_004d8a10(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8a10(char *param_1,uint param_2,uint param_3,uint param_4)

{
  if (*param_1 == '\0') {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0x27a;
    FUN_004e4500("CIniFile::getString - filename not set!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0x27b;
    FUN_004e4500("CIniFile::getString - section not set!");
  }
  FUN_004d8800(param_1 + 0x100,param_2,param_3,param_3,param_4,param_1);
  return;
}

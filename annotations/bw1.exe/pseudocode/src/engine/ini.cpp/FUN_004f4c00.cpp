// Name: FUN_004f4c00
// Address: 004f4c00
// Address Range: [[004f4c00, 004f4c84]]
// Convention: unknown
// Signature: void FUN_004f4c00(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f4c00(char *param_1,uint param_2,uint param_3,uint param_4)

{
  if (*param_1 == '\0') {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x27a;
    FUN_005030e0("CIniFile::getString - filename not set!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x27b;
    FUN_005030e0("CIniFile::getString - section not set!");
  }
  FUN_004f49f0(param_1 + 0x100,param_2,param_3,param_3,param_4,param_1);
  return;
}

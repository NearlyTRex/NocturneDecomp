// Name: FUN_004f4c90
// Address: 004f4c90
// Address Range: [[004f4c90, 004f4d0e]]
// Convention: unknown
// Signature: void FUN_004f4c90(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f4c90(char *param_1,uint param_2,uint param_3)

{
  if (*param_1 == '\0') {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x280;
    FUN_005030e0("CIniFile::setString - filename not set!");
  }
  if (param_1[0x100] == '\0') {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x281;
    FUN_005030e0("CIniFile::setString - section not set!");
  }
  FUN_004f4ad0(param_1 + 0x100,param_2,param_3,param_1);
  return;
}

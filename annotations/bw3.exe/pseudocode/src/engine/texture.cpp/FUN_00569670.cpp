// Name: engine_texture.cpp_FUN_00569670
// Address: 00569670
// Address Range: [[00569670, 0056978f]]
// Convention: unknown
// Signature: int engine_texture_cpp_FUN_00569670(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_texture_cpp_FUN_00569670(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    iVar4 = param_1[0x6001];
    param_1[0x6001] = iVar4 + 1;
    if (0x3ff < iVar4 + 1) {
      *param_1 = 1;
      iVar3 = _DAT_02cfd0d4;
      param_1[0x6001] = 0x400;
      if (iVar3 != 0) {
        _DAT_01d71de0 = "..\\engine\\texture.cpp";
        _DAT_01d71de4 = 0xbc;
        core_main_c_FUN_004e4330("CTextureCache::findFreeSlot - Cache has wrapped, but is supposed to be frozen");
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    iVar4 = 0;
    piVar1 = param_1;
    do {
      if ((piVar1[0x17] == 0) && ((uint)piVar1[0x16] < uVar2)) {
        uVar2 = piVar1[0x16];
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0x18;
    } while (iVar3 < 0x400);
  }
  param_1 = param_1 + iVar4 * 0x18 + 1;
  if (param_1[0x11] != 0) {
    FUN_005a3770(param_1[0x11]);
  }
  if (param_1[0x12] != 0) {
    FUN_005a3770(param_1[0x12]);
  }
  if (param_1[0x13] != 0) {
    FUN_005a3770(param_1[0x13]);
  }
  if (param_1[0x14] != 0) {
    FUN_005a3770(param_1[0x14]);
    memset(param_1,0,0x60);
    return iVar4;
  }
  memset(param_1,0,0x60);
  return iVar4;
}

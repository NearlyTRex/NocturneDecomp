// Name: core_flashlit.cpp_FUN_004a1570
// Address: 004a1570
// Address Range: [[004a1570, 004a16a6]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a1570(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004a1570(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_01caf568 = 1;
  iVar2 = _strcmp(param_1,&DAT_01caf4a0);
  if (iVar2 == 0) {
    if (-1 < DAT_00616040) {
      return;
    }
  }
  else {
    pcVar5 = &DAT_01caf4a0;
    _DAT_01caf488 = 0;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    DAT_00616040 = -1;
  }
  _DAT_01caf488 = _DAT_01caf488 + _DAT_01c2a370;
  if (_DAT_01caf488 < 0x10000) {
    return;
  }
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(_DAT_01511cbc,param_1);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01511cbc,param_1);
  _DAT_01caf48c = _DAT_01c2a380 + 0x40;
  _DAT_01caf490 = _DAT_01c2a37c + iVar2 + 8;
  _DAT_01caf494 = _DAT_01caf48c + iVar3 + 6;
  DAT_00616040 = _DAT_01c2a37c;
  if (DAT_006141b8 < _DAT_01caf490) {
    DAT_00616040 = DAT_006141b8 - (iVar2 + 8);
    _DAT_01caf490 = DAT_006141b8;
  }
  if (DAT_006141bc < _DAT_01caf494) {
    _DAT_01caf494 = _DAT_01c2a380 + -0x14;
    _DAT_01caf48c = _DAT_01caf494 - (iVar3 + 6);
  }
  _DAT_01caf498 = ((DAT_00616040 + _DAT_01caf490) - iVar2) / 2;
  _DAT_01caf49c = ((_DAT_01caf48c + _DAT_01caf494) - iVar3) / 2;
  return;
}

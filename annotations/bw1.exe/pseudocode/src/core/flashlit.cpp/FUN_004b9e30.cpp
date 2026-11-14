// Name: core_flashlit.cpp_FUN_004b9e30
// Address: 004b9e30
// Address Range: [[004b9e30, 004b9f66]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004b9e30(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004b9e30(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_01cc8000 = 1;
  iVar2 = _strcmp(param_1,&DAT_01cc7f38);
  if (iVar2 == 0) {
    if (-1 < DAT_0061d310) {
      return;
    }
  }
  else {
    pcVar5 = &DAT_01cc7f38;
    _DAT_01cc7f1c = 0;
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
    DAT_0061d310 = -1;
  }
  _DAT_01cc7f1c = _DAT_01cc7f1c + _DAT_01c43530;
  if (_DAT_01cc7f1c < 0x10000) {
    return;
  }
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_0152d240,param_1);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_0152d240,param_1);
  _DAT_01cc7f20 = _DAT_01c43540 + 0x40;
  _DAT_01cc7f24 = _DAT_01c4353c + iVar2 + 8;
  _DAT_01cc7f28 = _DAT_01cc7f20 + iVar3 + 6;
  DAT_0061d310 = _DAT_01c4353c;
  if (DAT_0061b498 < _DAT_01cc7f24) {
    DAT_0061d310 = DAT_0061b498 - (iVar2 + 8);
    _DAT_01cc7f24 = DAT_0061b498;
  }
  if (DAT_0061b49c < _DAT_01cc7f28) {
    _DAT_01cc7f28 = _DAT_01c43540 + -0x14;
    _DAT_01cc7f20 = _DAT_01cc7f28 - (iVar3 + 6);
  }
  _DAT_01cc7f2c = ((DAT_0061d310 + _DAT_01cc7f24) - iVar2) / 2;
  _DAT_01cc7f30 = ((_DAT_01cc7f20 + _DAT_01cc7f28) - iVar3) / 2;
  return;
}

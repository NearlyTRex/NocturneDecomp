// Name: engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
// Address: 00492da0
// Address Range: [[00492da0, 00492e50]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont *param_1,byte *param_2)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *text;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = 0;
  text = param_2;
  if (param_1->win_font_enabled == 0) {
    while (*param_2 != 0) {
      iVar2 = 0;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        if (bVar1 == 10) break;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(param_1,(uint)bVar1);
        iVar2 = iVar2 + iVar3 + param_1->char_spacing;
      } while (*param_2 != 0);
      if (0 < iVar2) {
        iVar2 = iVar2 - param_1->char_spacing;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
  }
  else {
LAB_00492dc1:
    do {
      pbVar5 = param_2;
      if (*param_2 == 10) goto LAB_00492dd9;
      if (*param_2 == 0) break;
      pbVar5 = param_2 + 1;
      if (*pbVar5 == 10) goto LAB_00492dd9;
      param_2 = param_2 + 2;
    } while (*pbVar5 != 0);
    pbVar5 = (byte *)0x0;
LAB_00492dd9:
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
    }
    iVar2 = (*((param_1->win_font_helper->base).vtable)->getStringWidth)
                      (&param_1->win_font_helper->base,(char *)text);
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (pbVar5 != (byte *)0x0) {
      param_2 = pbVar5 + 1;
      *pbVar5 = 10;
      text = param_2;
      goto LAB_00492dc1;
    }
  }
  return iVar4;
}

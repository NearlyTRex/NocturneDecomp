// Name: core_flashlit.cpp_updateTooltip_FUN_004b9e30
// Address: 004b9e30
// Address Range: [[004b9e30, 004b9f66]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_updateTooltip_FUN_004b9e30(char *text)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_updateTooltip_FUN_004b9e30(char *text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  g_INT_01cc8000 = 1;
  iVar2 = _strcmp(text,&g_CHAR_01cc7f38);
  if (iVar2 == 0) {
    if (-1 < g_INT_0061d310) {
      return;
    }
  }
  else {
    pcVar5 = &g_CHAR_01cc7f38;
    g_INT_01cc7f1c = 0;
    pcVar4 = text;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    g_INT_0061d310 = -1;
  }
  g_INT_01cc7f1c = g_INT_01cc7f1c + g_GlobalDeltaTimeInt;
  if (g_INT_01cc7f1c < 0x10000) {
    return;
  }
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(g_TinyFont,text);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(g_TinyFont,text);
  g_INT_01cc7f20 = g_MouseY + 0x40;
  g_INT_01cc7f24 = g_MouseX + iVar2 + 8;
  g_INT_01cc7f28 = g_INT_01cc7f20 + iVar3 + 6;
  g_INT_0061d310 = g_MouseX;
  if (g_INT_0061b498 < g_INT_01cc7f24) {
    g_INT_0061d310 = g_INT_0061b498 - (iVar2 + 8);
    g_INT_01cc7f24 = g_INT_0061b498;
  }
  if (g_INT_0061b49c < g_INT_01cc7f28) {
    g_INT_01cc7f28 = g_MouseY + -0x14;
    g_INT_01cc7f20 = g_INT_01cc7f28 - (iVar3 + 6);
  }
  g_INT_01cc7f2c = ((g_INT_0061d310 + g_INT_01cc7f24) - iVar2) / 2;
  g_INT_01cc7f30 = ((g_INT_01cc7f20 + g_INT_01cc7f28) - iVar3) / 2;
  return;
}

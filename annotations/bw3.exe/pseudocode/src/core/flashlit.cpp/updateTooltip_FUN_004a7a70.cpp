// Name: core_flashlit.cpp_updateTooltip_FUN_004a7a70
// Address: 004a7a70
// Address Range: [[004a7a70, 004a7ba6]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_updateTooltip_FUN_004a7a70(char *text)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_updateTooltip_FUN_004a7a70(char *text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  g_INT_01d1a058 = 1;
  iVar2 = _strcmp(text,&g_CHAR_01d19f90);
  if (iVar2 == 0) {
    if (-1 < g_INT_005fe3a8) {
      return;
    }
  }
  else {
    pcVar5 = &g_CHAR_01d19f90;
    g_INT_01d19f78 = 0;
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
    g_INT_005fe3a8 = -1;
  }
  g_INT_01d19f78 = g_INT_01d19f78 + g_GlobalDeltaTimeInt;
  if (g_INT_01d19f78 < 0x10000) {
    return;
  }
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_TinyFont,text);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(g_TinyFont,text);
  g_INT_01d19f7c = g_MouseY + 0x40;
  g_INT_01d19f80 = g_MouseX + iVar2 + 8;
  g_INT_01d19f84 = g_INT_01d19f7c + iVar3 + 6;
  g_INT_005fe3a8 = g_MouseX;
  if (g_INT_005fba18 < g_INT_01d19f80) {
    g_INT_005fe3a8 = g_INT_005fba18 - (iVar2 + 8);
    g_INT_01d19f80 = g_INT_005fba18;
  }
  if (g_INT_005fba1c < g_INT_01d19f84) {
    g_INT_01d19f84 = g_MouseY + -0x14;
    g_INT_01d19f7c = g_INT_01d19f84 - (iVar3 + 6);
  }
  g_INT_01d19f88 = ((g_INT_005fe3a8 + g_INT_01d19f80) - iVar2) / 2;
  g_INT_01d19f8c = ((g_INT_01d19f7c + g_INT_01d19f84) - iVar3) / 2;
  return;
}

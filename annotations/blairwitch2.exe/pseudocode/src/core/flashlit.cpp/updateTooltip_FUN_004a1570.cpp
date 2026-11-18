// Name: core_flashlit.cpp_updateTooltip_FUN_004a1570
// Address: 004a1570
// Address Range: [[004a1570, 004a16a6]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_updateTooltip_FUN_004a1570(char *text)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_updateTooltip_FUN_004a1570(char *text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  g_INT_01caf568 = 1;
  iVar2 = _strcmp(text,&g_CHAR_01caf4a0);
  if (iVar2 == 0) {
    if (-1 < g_INT_00616040) {
      return;
    }
  }
  else {
    pcVar5 = &g_CHAR_01caf4a0;
    g_INT_01caf488 = 0;
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
    g_INT_00616040 = -1;
  }
  g_INT_01caf488 = g_INT_01caf488 + g_GlobalDeltaTimeInt;
  if (g_INT_01caf488 < 0x10000) {
    return;
  }
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_TinyFont,text);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(g_TinyFont,text);
  g_INT_01caf48c = g_MouseY + 0x40;
  g_INT_01caf490 = g_MouseX + iVar2 + 8;
  g_INT_01caf494 = g_INT_01caf48c + iVar3 + 6;
  g_INT_00616040 = g_MouseX;
  if (g_INT_006141b8 < g_INT_01caf490) {
    g_INT_00616040 = g_INT_006141b8 - (iVar2 + 8);
    g_INT_01caf490 = g_INT_006141b8;
  }
  if (g_INT_006141bc < g_INT_01caf494) {
    g_INT_01caf494 = g_MouseY + -0x14;
    g_INT_01caf48c = g_INT_01caf494 - (iVar3 + 6);
  }
  g_INT_01caf498 = ((g_INT_00616040 + g_INT_01caf490) - iVar2) / 2;
  g_INT_01caf49c = ((g_INT_01caf48c + g_INT_01caf494) - iVar3) / 2;
  return;
}

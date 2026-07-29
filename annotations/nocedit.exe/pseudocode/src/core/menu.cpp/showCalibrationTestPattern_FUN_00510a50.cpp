// Name: core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
// Address: 00510a50
// Address Range: [[00510a50, 00510b95]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(char *message_text)

#include "nocturne.h"

void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(char *message_text)

{
  char cVar2;
  char *pcVar2;
  int iVar5;
  int iVar3;
  int iVar6;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar7;
  char local_110 [256];
  char cVar1;
  
  bVar7 = 0;
  pcVar5 = local_110;
  do {
    cVar1 = *message_text;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = message_text[1];
    message_text = message_text + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("  Press any key to continue.");
  iVar4 = -1;
  pcVar6 = local_110;
  do {
    pcVar6 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6;
  } while (cVar2 != '\0');
  pcVar7 = pcVar6 + -1;
  do {
    cVar2 = *pcVar2;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_SmallEditorFont,0x58);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_SmallEditorFont,local_110);
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_CalibrationBitmap,0,0,0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,local_110,0x140 - iVar3 / 2,iVar5 * -3 + 0x1e0,0xf8,-1);
  pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Monitor calibration");
  iVar6 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_SmallEditorFont,pcVar7);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,pcVar7,0x140 - iVar6 / 2,iVar5 * 2,0xf8,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}

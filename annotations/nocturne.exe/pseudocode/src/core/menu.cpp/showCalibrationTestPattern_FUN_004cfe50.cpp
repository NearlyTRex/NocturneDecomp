// Name: core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50
// Address: 004cfe50
// Address Range: [[004cfe50, 004cff95]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_110 [256];
  
  bVar8 = 0;
  pcVar6 = local_110;
  do {
    cVar1 = *param_1;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar2 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             (">  Press any key to continue." + 1);
  iVar5 = -1;
  pcVar6 = local_110;
  do {
    pcVar7 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9904,0x58);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b9904,local_110);
  wincore_windll_cpp_clearScreen_FUN_0052ee70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(0x1cc5b6c,0,0,0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b9904,local_110,0x140 - iVar3 / 2,iVar5 * -3 + 0x1e0,0xf8,0xffffffff);
  uVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Monitor calibration");
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b9904,uVar4);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b9904,uVar4,0x140 - iVar3 / 2,iVar5 * 2,0xf8,0xffffffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  return;
}

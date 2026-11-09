// Name: core_menu.cpp_showCalibrationTestPattern_FUN_0050a870
// Address: 0050a870
// Address Range: [[0050a870, 0050a9b5]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(char *message_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(char *message_text)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_110 [256];
  
  bVar7 = 0;
  pcVar5 = local_110;
  do {
    cVar1 = *message_text;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = message_text[1];
    message_text = message_text + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("  Press any key to continue.");
  iVar4 = -1;
  pcVar5 = local_110;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar4 = engine_font_cpp_FUN_004c4510(_DAT_0152d248,0x58);
  iVar3 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d248,local_110);
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&g_CalibrationBitmap,0,0,0xffff);
  engine_font_cpp_FUN_004c1dd0
            (_DAT_0152d248,local_110,0x140 - iVar3 / 2,iVar4 * -3 + 0x1e0,0xf8,0xffffffff);
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Monitor calibration");
  iVar3 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d248,pcVar5);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d248,pcVar5,0x140 - iVar3 / 2,iVar4 * 2,0xf8,0xffffffff);
  wincore_wddvmem_cpp_FUN_005acff0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
  return;
}

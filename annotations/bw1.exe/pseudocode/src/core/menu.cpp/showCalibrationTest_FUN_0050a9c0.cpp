// Name: core_menu.cpp_showCalibrationTest_FUN_0050a9c0
// Address: 0050a9c0
// Address Range: [[0050a9c0, 0050aa6c]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showCalibrationTest_FUN_0050a9c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_showCalibrationTest_FUN_0050a9c0(void)

{
  char *pcVar1;
  
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&g_CalibrationBitmap,"brightness",0x280,0x1e0);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_0152d248,0x58);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("1. Turn off all the lights in your room.");
  core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("3. Turn down the brightness, so that the left 2 bars become the same color.");
  core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("4. Turn your contrast all the way up.");
  core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You're done with calibration.");
  core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(pcVar1);
  engine_alphabit_cpp_FUN_0040d1c0(&g_CalibrationBitmap);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  return;
}

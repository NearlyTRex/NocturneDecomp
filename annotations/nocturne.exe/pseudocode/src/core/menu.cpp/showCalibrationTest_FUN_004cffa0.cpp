// Name: core_menu.cpp_showCalibrationTest_FUN_004cffa0
// Address: 004cffa0
// Address Range: [[004cffa0, 004d004c]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showCalibrationTest_FUN_004cffa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_showCalibrationTest_FUN_004cffa0(void)

{
  char *pcVar1;
  
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)&DAT_01cc5b6c,"brightness",0x280,0x1e0);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9904,0x58);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("1. Turn off all the lights in your room.");
  core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("3. Turn down the brightness, so that the left 2 bars become the same color.");
  core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("4. Turn your contrast all the way up.");
  core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You're done with calibration.");
  core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(pcVar1);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360((CAlphaBitmap *)&DAT_01cc5b6c);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  return;
}

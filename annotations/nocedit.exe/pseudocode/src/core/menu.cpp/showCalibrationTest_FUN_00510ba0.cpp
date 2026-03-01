// Name: core_menu.cpp_showCalibrationTest_FUN_00510ba0
// Address: 00510ba0
// Address Range: [[00510ba0, 00510c4c]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showCalibrationTest_FUN_00510ba0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_showCalibrationTest_FUN_00510ba0(void)

{
  char *pcVar1;
  
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_CalibrationBitmap,"brightness",0x280,0x1e0);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_SmallEditorFont,0x58);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("1. Turn off all the lights in your room.");
  core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("3. Turn down the brightness, so that the left 2 bars become the same color.");
  core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("4. Turn your contrast all the way up.");
  core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(pcVar1);
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You're done with calibration.");
  core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(pcVar1);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_CalibrationBitmap);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}

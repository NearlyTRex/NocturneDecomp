// Name: core_menu.cpp_showCalibrationTest_FUN_00510ba0
// Address: 00510ba0
// Address Range: [[00510ba0, 00510c4c]]
// Convention: __cdecl
// Signature: void core_menu.cpp_showCalibrationTest_FUN_00510ba0(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 0050823b [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 (00510c80) at 005117f8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_brightness_00636688
//   TerminatedCString s_s_1_Turn_off_all_the_lig_00636693
//   TerminatedCString s_s_2_Turn_your_brightness_006366bc
//   TerminatedCString s_s_3_Turn_down_the_bright_0063670f
//   TerminatedCString s_s_4_Turn_your_contrast_a_0063675b
//   TerminatedCString s_You_re_done_with_calibra_00636781
//   CBitFont* g_SmallEditorFont
//   CAlphaBitmap g_CalibrationBitmap
// Function calls:
//   core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl core_menu_cpp_showCalibrationTest_FUN_00510ba0(void)

{
  char *pcVar1;
  
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_CalibrationBitmap,"brightness",0x280,0x1e0);
  engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_SmallEditorFont,0x58);
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


// Assembly code:
// 00510ba0: PUSH 0x1e0
//   Label: core_menu.cpp_showCalibrationTest_FUN_00510ba0
// 00510ba5: PUSH 0x280
// 00510baa: PUSH 0x636688
//   XREF to: 00636688 (DATA)
// 00510baf: PUSH 0x2f26cbc
//   XREF to: 02f26cbc (DATA)
// 00510bb4: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00510bb9: ADD ESP,0x10
// 00510bbc: PUSH 0x58
// 00510bbe: MOV EDX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510bc4: PUSH EDX
// 00510bc5: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00510bca: ADD ESP,0x8
// 00510bcd: PUSH 0x636693
//   XREF to: 00636693 (DATA)
// 00510bd2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510bd7: ADD ESP,0x4
// 00510bda: PUSH EAX
// 00510bdb: CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
//   XREF to: 00510a50 (UNCONDITIONAL_CALL)
// 00510be0: ADD ESP,0x4
// 00510be3: PUSH 0x6366bc
//   XREF to: 006366bc (DATA)
// 00510be8: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510bed: ADD ESP,0x4
// 00510bf0: PUSH EAX
// 00510bf1: CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
//   XREF to: 00510a50 (UNCONDITIONAL_CALL)
// 00510bf6: ADD ESP,0x4
// 00510bf9: PUSH 0x63670f
//   XREF to: 0063670f (DATA)
// 00510bfe: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510c03: ADD ESP,0x4
// 00510c06: PUSH EAX
// 00510c07: CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
//   XREF to: 00510a50 (UNCONDITIONAL_CALL)
// 00510c0c: ADD ESP,0x4
// 00510c0f: PUSH 0x63675b
//   XREF to: 0063675b (DATA)
// 00510c14: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510c19: ADD ESP,0x4
// 00510c1c: PUSH EAX
// 00510c1d: CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
//   XREF to: 00510a50 (UNCONDITIONAL_CALL)
// 00510c22: ADD ESP,0x4
// 00510c25: PUSH 0x636781
//   XREF to: 00636781 (DATA)
// 00510c2a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510c2f: ADD ESP,0x4
// 00510c32: PUSH EAX
// 00510c33: CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
//   XREF to: 00510a50 (UNCONDITIONAL_CALL)
// 00510c38: ADD ESP,0x4
// 00510c3b: PUSH 0x2f26cbc
//   XREF to: 02f26cbc (DATA)
// 00510c40: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 00510c45: ADD ESP,0x4
// 00510c48: JMP 0x00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)

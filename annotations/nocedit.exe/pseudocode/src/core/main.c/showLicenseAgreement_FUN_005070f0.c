// Name: core_main.c_showLicenseAgreement_FUN_005070f0
// Address: 005070f0
// Address Range: [[005070f0, 00507399]]
// Convention: __cdecl
// Signature: int __cdecl core_main_c_showLicenseAgreement_FUN_005070f0(void)

#include "nocturne.h"

int __cdecl core_main_c_showLicenseAgreement_FUN_005070f0(void)

{
  char *text_string;
  int iVar1;
  int iVar2;
  int iVar3;
  int right_pos;
  int bottom_pos;
  CIniFile local_410;
  CEdButton local_210;
  CEdButton local_12c;
  CEdScrollBar local_48;
  int local_14;
  
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70(&local_410,".\\system\\nocturne.ini",0x63169a);
  local_14 = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_410,"AcceptedLicenseAgreement",&local_14);
  if (local_14 != 0) {
    return 1;
  }
  text_string = support_newmsg_cpp_decryptMessage_FUN_00544270(g_LicenseAgreement);
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,text_string);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&local_48);
  iVar3 = g_ClipTop;
  right_pos = g_ClipRight;
  bottom_pos = g_ClipBottom;
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&local_48,g_WindowWidth - iVar2,iVar3,right_pos,bottom_pos);
  local_48.max_value = g_WindowHeight;
  local_48.current_value = iVar1 + 100;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_12c);
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_210);
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&local_48);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&local_48);
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              (&local_12c,0x1e,(iVar1 - local_48.scroll_position) + 10,
               "I accept the terms of the license agreement");
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              (&local_210,0x1e,(iVar1 - local_48.scroll_position) + 0x28,
               "I DO NOT accept the terms of the license agreement");
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_12c);
    if (iVar3 != 0) {
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                (&local_410,"AcceptedLicenseAgreement",1);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_210);
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_12c);
      shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&local_48);
      return 1;
    }
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_210);
    if (iVar3 != 0) break;
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_EditorFont,text_string,0x1e,-local_48.scroll_position,0xff,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_12c,0);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_210,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
  } while (iVar3 == 0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_210);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_12c);
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&local_48);
  return 0;
}

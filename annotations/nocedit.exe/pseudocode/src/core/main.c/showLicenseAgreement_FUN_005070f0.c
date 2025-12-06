// Name: core_main.c_showLicenseAgreement_FUN_005070f0
// Address: 005070f0
// Address Range: [[005070f0, 00507399]]
// Convention: __cdecl
// Signature: int core_main.c_showLicenseAgreement_FUN_005070f0(void)

#include "nocturne.h"

int __cdecl core_main_c_showLicenseAgreement_FUN_005070f0(void)

{
  char *text_string;
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_EDI;
  int right_pos;
  int in_stack_fffffc04;
  byte auStack_1f0 [28];
  byte auStack_1d4 [8];
  byte auStack_1cc [188];
  byte auStack_110 [28];
  CEdButton CStack_f4;
  
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)&stack0xfffffbf0,".\\system\\nocturne.ini",0x63169a);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffbf4,"AcceptedLicenseAgreement",
             (int *)&stack0xfffffff0);
  if (unaff_EDI != 0) {
    return 1;
  }
  text_string = support_newmsg_cpp_decryptMessage_FUN_00544270
                          ((SEncryptedMessage *)g_LicenseAgreement);
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,text_string);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)(CStack_f4.button_text + 0xa0));
  iVar3 = g_ClipRight;
  right_pos = g_ClipBottom;
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)(CStack_f4.button_text + 0xa8),g_WindowWidth - iVar2,iVar3,right_pos,
             in_stack_fffffc04);
  CStack_f4.button_text[0xb4] = (byte)g_WindowHeight;
  CStack_f4.button_text[0xb5] = g_WindowHeight._1_1_;
  CStack_f4.button_text[0xb6] = g_WindowHeight._2_1_;
  CStack_f4.button_text[0xb7] = g_WindowHeight._3_1_;
  CStack_f4.button_text._176_4_ = iVar1 + 100;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)auStack_110);
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)auStack_1f0);
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0
              ((CEdScrollBar *)(CStack_f4.button_text + 0xb8));
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10
              ((CEdScrollBar *)(CStack_f4.button_text + 0xbc));
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              ((CEdButton *)(auStack_110 + 0x14),0x1e,(iVar1 - CStack_f4.button_text._192_4_) + 10,
               "I accept the terms of the license agreement");
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              ((CEdButton *)(auStack_1f0 + 0x14),0x1e,(iVar1 - CStack_f4.button_text._196_4_) + 0x28
               ,"I DO NOT accept the terms of the license agreement");
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&CStack_f4);
    if (iVar3 != 0) {
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                ((CIniFile *)&stack0xfffffc2c,"AcceptedLicenseAgreement",1);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)auStack_1cc);
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)&CStack_f4.right);
      shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20((CEdScrollBar *)&stack0x00000004);
      return 1;
    }
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)auStack_1d4);
    if (iVar3 != 0) break;
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,text_string,0x1e,-unaff_ESI,0xff,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)&CStack_f4.top,0);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)(auStack_1cc + 4),0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
  } while (iVar3 == 0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)(auStack_1d4 + 4));
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)&CStack_f4.top);
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20((CEdScrollBar *)&stack0x00000000);
  return 0;
}

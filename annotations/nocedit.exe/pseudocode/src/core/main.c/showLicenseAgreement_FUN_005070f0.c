// Name: core_main.c_showLicenseAgreement_FUN_005070f0
// Address: 005070f0
// Address Range: [[005070f0, 00507399]]
// Convention: __cdecl
// Signature: int core_main.c_showLicenseAgreement_FUN_005070f0(void)
// Globals:
//   TerminatedCString s_Editor_0063169a
//   TerminatedCString s_system_nocturne_ini_006316a1
//   TerminatedCString s_AcceptedLicenseAgreement_006316b7
//   SEncryptedMessage g_LicenseAgreement
//   TerminatedCString s_I_accept_the_terms_of_th_00634fe8
//   TerminatedCString s_I_DO_NOT_accept_the_term_00635014
//   TerminatedCString s_AcceptedLicenseAgreement_00635047
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   void* g_CKeysPtr
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
//   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   support_newmsg.cpp_decryptMessage_FUN_00544270
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

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
  undefined1 auStack_1f0 [28];
  undefined1 auStack_1d4 [8];
  undefined1 auStack_1cc [188];
  undefined1 auStack_110 [28];
  CEdButton CStack_f4;
  
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)&stack0xfffffbf0,".\\system\\nocturne.ini",0x63169a);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffbf4,"AcceptedLicenseAgreement",
             (int *)&stack0xfffffff0);
  if (unaff_EDI != 0) {
    return 1;
  }
  text_string = support_newmsg_cpp_decryptMessage_FUN_00544270(&g_LicenseAgreement);
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,text_string);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)(CStack_f4.button_text + 0xa0));
  iVar3 = g_ClipRight;
  right_pos = g_ClipBottom;
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)(CStack_f4.button_text + 0xa8),g_WindowWidth - iVar2,iVar3,right_pos,
             in_stack_fffffc04);
  CStack_f4.button_text[0xb4] = (undefined1)g_WindowHeight;
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


// Assembly code:
// 005070f0: PUSH EBX
//   Label: core_main.c_showLicenseAgreement_FUN_005070f0
// 005070f1: PUSH ESI
// 005070f2: PUSH EDI
// 005070f3: PUSH EBP
// 005070f4: SUB ESP,0x400
// 005070fa: PUSH 0x63169a
//   XREF to: 0063169a (DATA)
// 005070ff: PUSH 0x6316a1
//   XREF to: 006316a1 (DATA)
// 00507104: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x410] (DATA)
// 00507108: PUSH EAX
// 00507109: CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   XREF to: 004fba70 (UNCONDITIONAL_CALL)
// 0050710e: ADD ESP,0xc
// 00507111: LEA EAX,[ESP + 0x3fc]
//   XREF to: Stack[-0x14] (DATA)
// 00507118: PUSH EAX
// 00507119: PUSH 0x6316b7
//   XREF to: 006316b7 (DATA)
// 0050711e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x410] (DATA)
// 00507122: XOR EDX,EDX
// 00507124: PUSH EAX
// 00507125: MOV dword ptr [ESP + 0x408],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0050712c: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 00507131: ADD ESP,0xc
// 00507134: CMP dword ptr [ESP + 0x3fc],0x0
//   XREF to: Stack[-0x14] (READ)
// 0050713c: JZ 0x00507150
//   XREF to: 00507150 (CONDITIONAL_JUMP)
// 0050713e: MOV EDI,0x1
// 00507143: MOV EAX,EDI
// 00507145: ADD ESP,0x400
// 0050714b: POP EBP
// 0050714c: POP EDI
// 0050714d: POP ESI
// 0050714e: POP EBX
// 0050714f: RET
// 00507150: PUSH 0x6316d0
//   Label: LAB_00507150
//   XREF to: 006316d0 (DATA)
// 00507155: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 0050715a: ADD ESP,0x4
// 0050715d: PUSH EAX
// 0050715e: MOV EBX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 00507164: PUSH EBX
// 00507165: MOV EDI,EAX
// 00507167: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 0050716c: MOV EBX,EAX
// 0050716e: ADD ESP,0x8
// 00507171: MOV ESI,EAX
// 00507173: LEA EAX,[ESP + 0x3c8]
//   XREF to: Stack[-0x48] (DATA)
// 0050717a: PUSH EAX
// 0050717b: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 00507180: ADD ESP,0x4
// 00507183: MOV EBP,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00507189: PUSH EBP
// 0050718a: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 0050718f: PUSH EAX
// 00507190: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00507196: PUSH EDX
// 00507197: CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   XREF to: 004a6490 (UNCONDITIONAL_CALL)
// 0050719c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005071a2: SUB EDX,EAX
// 005071a4: PUSH EDX
// 005071a5: LEA EAX,[ESP + 0x3d8]
//   XREF to: Stack[-0x48] (DATA)
// 005071ac: PUSH EAX
// 005071ad: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 005071b2: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 005071b7: ADD ESP,0x14
// 005071ba: MOV dword ptr [ESP + 0x3d0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005071c1: LEA EAX,[ESP + 0x2e4]
//   XREF to: Stack[-0x12c] (DATA)
// 005071c8: ADD EBX,0x64
// 005071cb: PUSH EAX
// 005071cc: MOV dword ptr [ESP + 0x3d0],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 005071d3: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 005071d8: ADD ESP,0x4
// 005071db: LEA EAX,[ESP + 0x200]
//   XREF to: Stack[-0x210] (DATA)
// 005071e2: PUSH EAX
// 005071e3: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 005071e8: ADD ESP,0x4
// 005071eb: XOR EBP,EBP
// 005071ed: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_005071ed
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005071f2: LEA EAX,[ESP + 0x3c8]
//   XREF to: Stack[-0x48] (DATA)
// 005071f9: PUSH EAX
// 005071fa: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 005071ff: ADD ESP,0x4
// 00507202: LEA EAX,[ESP + 0x3c8]
//   XREF to: Stack[-0x48] (DATA)
// 00507209: PUSH EAX
// 0050720a: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 0050720f: ADD ESP,0x4
// 00507212: MOV EAX,ESI
// 00507214: SUB EAX,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[-0x48] (READ)
// 0050721b: PUSH 0x634fe8
//   XREF to: 00634fe8 (DATA)
// 00507220: ADD EAX,0xa
// 00507223: PUSH EAX
// 00507224: PUSH 0x1e
// 00507226: LEA EAX,[ESP + 0x2f0]
//   XREF to: Stack[-0x12c] (DATA)
// 0050722d: PUSH EAX
// 0050722e: CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
//   XREF to: 004a6550 (UNCONDITIONAL_CALL)
// 00507233: ADD ESP,0x10
// 00507236: MOV EAX,ESI
// 00507238: SUB EAX,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[-0x48] (READ)
// 0050723f: PUSH 0x635014
//   XREF to: 00635014 (DATA)
// 00507244: ADD EAX,0x28
// 00507247: PUSH EAX
// 00507248: PUSH 0x1e
// 0050724a: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x210] (DATA)
// 00507251: PUSH EAX
// 00507252: CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
//   XREF to: 004a6550 (UNCONDITIONAL_CALL)
// 00507257: ADD ESP,0x10
// 0050725a: LEA EAX,[ESP + 0x2e4]
//   XREF to: Stack[-0x12c] (DATA)
// 00507261: PUSH EAX
// 00507262: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 00507267: ADD ESP,0x4
// 0050726a: TEST EAX,EAX
// 0050726c: JNZ 0x00507339
//   XREF to: 00507339 (CONDITIONAL_JUMP)
// 00507272: LEA EAX,[ESP + 0x200]
//   XREF to: Stack[-0x210] (DATA)
// 00507279: PUSH EAX
// 0050727a: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 0050727f: ADD ESP,0x4
// 00507282: TEST EAX,EAX
// 00507284: JNZ 0x005072f7
//   XREF to: 005072f7 (CONDITIONAL_JUMP)
// 00507286: PUSH -0x1
// 00507288: MOV EAX,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[-0x48] (READ)
// 0050728f: PUSH 0xff
// 00507294: NEG EAX
// 00507296: PUSH EAX
// 00507297: PUSH 0x1e
// 00507299: PUSH EDI
// 0050729a: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0050729f: PUSH EAX
// 005072a0: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005072a5: ADD ESP,0x18
// 005072a8: PUSH EBP
// 005072a9: LEA EAX,[ESP + 0x2e8]
//   XREF to: Stack[-0x12c] (DATA)
// 005072b0: PUSH EAX
// 005072b1: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 005072b6: ADD ESP,0x8
// 005072b9: PUSH EBP
// 005072ba: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x210] (DATA)
// 005072c1: PUSH EAX
// 005072c2: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 005072c7: ADD ESP,0x8
// 005072ca: PUSH EBP
// 005072cb: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005072d1: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005072d2: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 005072d7: ADD ESP,0x8
// 005072da: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005072df: PUSH 0x1
// 005072e1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005072e6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005072e7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005072e9: CALL dword ptr [EDX + 0x4]
// 005072ec: ADD ESP,0x8
// 005072ef: TEST EAX,EAX
// 005072f1: JZ 0x005071ed
//   XREF to: 005071ed (CONDITIONAL_JUMP)
// 005072f7: XOR EDI,EDI
//   Label: LAB_005072f7
// 005072f9: PUSH EDI
// 005072fa: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x210] (DATA)
// 00507301: PUSH EAX
// 00507302: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507307: ADD ESP,0x8
// 0050730a: PUSH EDI
// 0050730b: LEA EAX,[ESP + 0x2e8]
// 00507312: PUSH EAX
// 00507313: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507318: ADD ESP,0x8
// 0050731b: PUSH EDI
// 0050731c: LEA EAX,[ESP + 0x3cc]
// 00507323: PUSH EAX
// 00507324: CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   XREF to: 004a5b20 (UNCONDITIONAL_CALL)
// 00507329: ADD ESP,0x8
// 0050732c: MOV EAX,EDI
// 0050732e: ADD ESP,0x400
// 00507334: POP EBP
// 00507335: POP EDI
// 00507336: POP ESI
// 00507337: POP EBX
// 00507338: RET
// 00507339: PUSH 0x1
//   Label: LAB_00507339
// 0050733b: PUSH 0x635047
//   XREF to: 00635047 (DATA)
// 00507340: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x410] (DATA)
// 00507344: PUSH EAX
// 00507345: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 0050734a: ADD ESP,0xc
// 0050734d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00507352: PUSH 0x0
// 00507354: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x210] (DATA)
// 0050735b: PUSH EAX
// 0050735c: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507361: ADD ESP,0x8
// 00507364: PUSH 0x0
// 00507366: LEA EAX,[ESP + 0x2e8]
//   XREF to: Stack[-0x12c] (DATA)
// 0050736d: PUSH EAX
// 0050736e: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507373: ADD ESP,0x8
// 00507376: PUSH 0x0
// 00507378: LEA EAX,[ESP + 0x3cc]
//   XREF to: Stack[-0x48] (DATA)
// 0050737f: PUSH EAX
// 00507380: MOV EDI,0x1
// 00507385: CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   XREF to: 004a5b20 (UNCONDITIONAL_CALL)
// 0050738a: ADD ESP,0x8
// 0050738d: MOV EAX,EDI
// 0050738f: ADD ESP,0x400
// 00507395: POP EBP
// 00507396: POP EDI
// 00507397: POP ESI
// 00507398: POP EBX
// 00507399: RET

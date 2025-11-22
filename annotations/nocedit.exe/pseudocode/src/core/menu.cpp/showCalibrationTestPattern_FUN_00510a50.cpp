// Name: core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
// Address: 00510a50
// Address Range: [[00510a50, 00510b95]]
// Convention: __cdecl
// Signature: void core_menu.cpp_showCalibrationTestPattern_FUN_00510a50(char * message_text)
// Cross-references:
//   core_menu.cpp_showCalibrationTest_FUN_00510ba0 (00510ba0) at 00510c07 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Press_any_key_to_continu_00636657
//   TerminatedCString s_Monitor_calibration_00636674
//   CBitFont* g_SmallEditorFont
//   CAlphaBitmap g_CalibrationBitmap
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(char *message_text)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  pcVar5 = &stack0xfffffef0;
  do {
    cVar1 = *message_text;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = message_text[1];
    message_text = message_text + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("  Press any key to continue.");
  iVar4 = -1;
  pcVar5 = &stack0xfffffef4;
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
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_SmallEditorFont,0x58);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_SmallEditorFont,&stack0xfffffef8);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_CalibrationBitmap,0,0,0xffff);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,&stack0xffffff04,0x140 - iVar3 / 2,iVar4 * -3 + 0x1e0,0xf8,-1);
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Monitor calibration");
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_SmallEditorFont,pcVar5);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,pcVar5,0x140 - iVar3 / 2,iVar4 * 2,0xf8,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}


// Assembly code:
// 00510a50: PUSH EBX
//   Label: core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
// 00510a51: PUSH ESI
// 00510a52: PUSH EDI
// 00510a53: PUSH EBP
// 00510a54: SUB ESP,0x100
// 00510a5a: MOV ESI,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00510a61: MOV EDI,ESP
// 00510a63: PUSH EDI
// 00510a64: MOV AL,byte ptr [ESI]
//   Label: LAB_00510a64
// 00510a66: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 00510a68: CMP AL,0x0
// 00510a6a: JZ 0x00510a7c
//   XREF to: 00510a7c (CONDITIONAL_JUMP)
// 00510a6c: MOV AL,byte ptr [ESI + 0x1]
// 00510a6f: ADD ESI,0x2
// 00510a72: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 00510a75: ADD EDI,0x2
// 00510a78: CMP AL,0x0
// 00510a7a: JNZ 0x00510a64
//   XREF to: 00510a64 (CONDITIONAL_JUMP)
// 00510a7c: POP EDI
//   Label: LAB_00510a7c
// 00510a7d: PUSH 0x636657
//   XREF to: 00636657 (DATA)
// 00510a82: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510a87: ADD ESP,0x4
// 00510a8a: MOV EDI,ESP
// 00510a8c: MOV ESI,EAX
// 00510a8e: PUSH EDI
// 00510a8f: SUB ECX,ECX
// 00510a91: DEC ECX
// 00510a92: MOV AL,0x0
// 00510a94: SCASB.REPNE ES:EDI
// 00510a96: DEC EDI
// 00510a97: MOV AL,byte ptr [ESI]
//   Label: LAB_00510a97
// 00510a99: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 00510a9b: CMP AL,0x0
// 00510a9d: JZ 0x00510aaf
//   XREF to: 00510aaf (CONDITIONAL_JUMP)
// 00510a9f: MOV AL,byte ptr [ESI + 0x1]
// 00510aa2: ADD ESI,0x2
// 00510aa5: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 00510aa8: ADD EDI,0x2
// 00510aab: CMP AL,0x0
// 00510aad: JNZ 0x00510a97
//   XREF to: 00510a97 (CONDITIONAL_JUMP)
// 00510aaf: POP EDI
//   Label: LAB_00510aaf
// 00510ab0: PUSH 0x58
// 00510ab2: MOV EDX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510ab8: PUSH EDX
// 00510ab9: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00510abe: ADD ESP,0x8
// 00510ac1: MOV EDI,EAX
// 00510ac3: MOV EAX,ESP
// 00510ac5: PUSH EAX
// 00510ac6: MOV ECX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510acc: PUSH ECX
// 00510acd: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00510ad2: ADD ESP,0x8
// 00510ad5: MOV ESI,EAX
// 00510ad7: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00510adc: PUSH 0xffff
// 00510ae1: PUSH 0x0
// 00510ae3: PUSH 0x0
// 00510ae5: PUSH 0x2f26cbc
//   XREF to: 02f26cbc (DATA)
// 00510aea: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00510aef: MOV EAX,EDI
// 00510af1: ADD ESP,0x10
// 00510af4: LEA EDX,[EAX*0x4 + 0x0]
// 00510afb: PUSH -0x1
// 00510afd: SUB EDX,EAX
// 00510aff: MOV EAX,0x1e0
// 00510b04: PUSH 0xf8
// 00510b09: SUB EAX,EDX
// 00510b0b: PUSH EAX
// 00510b0c: MOV EDX,ESI
// 00510b0e: MOV EAX,ESI
// 00510b10: SAR EDX,0x1f
// 00510b13: SUB EAX,EDX
// 00510b15: SAR EAX,0x1
// 00510b17: MOV EDX,0x140
// 00510b1c: SUB EDX,EAX
// 00510b1e: PUSH EDX
// 00510b1f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x110] (DATA)
// 00510b23: PUSH EAX
// 00510b24: MOV EBX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510b2a: PUSH EBX
// 00510b2b: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00510b30: ADD ESP,0x18
// 00510b33: PUSH 0x636674
//   XREF to: 00636674 (DATA)
// 00510b38: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510b3d: ADD ESP,0x4
// 00510b40: PUSH EAX
// 00510b41: MOV EBP,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510b47: PUSH EBP
// 00510b48: MOV ESI,EAX
// 00510b4a: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00510b4f: MOV EDX,EAX
// 00510b51: SAR EDX,0x1f
// 00510b54: SUB EAX,EDX
// 00510b56: SAR EAX,0x1
// 00510b58: ADD ESP,0x8
// 00510b5b: PUSH -0x1
// 00510b5d: PUSH 0xf8
// 00510b62: ADD EDI,EDI
// 00510b64: MOV EDX,0x140
// 00510b69: PUSH EDI
// 00510b6a: SUB EDX,EAX
// 00510b6c: PUSH EDX
// 00510b6d: PUSH ESI
// 00510b6e: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510b73: PUSH EAX
// 00510b74: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00510b79: ADD ESP,0x18
// 00510b7c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00510b81: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00510b86: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00510b8b: ADD ESP,0x100
// 00510b91: POP EBP
// 00510b92: POP EDI
// 00510b93: POP ESI
// 00510b94: POP EBX
// 00510b95: RET

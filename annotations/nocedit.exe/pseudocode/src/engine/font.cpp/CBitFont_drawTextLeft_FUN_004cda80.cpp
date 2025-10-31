// Name: engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
// Address: 004cda80
// Address Range: [[004cda80, 004cdbe6]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, int color_mode, int color_value)
// Cross-references:
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d83a7 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 (004d89d0) at 004d9a00 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d8890 (004d8890) at 004d88b1 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d8910 (004d8910) at 004d8963 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500acd [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005046e0 [UNCONDITIONAL_CALL]
//   core_main.c_drawCenteredText_FUN_00508250 (00508250) at 00508291 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508774 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005076db [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005072a0 [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 005083f6 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_00510410 (00510410) at 00510477 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000 (00510000) at 00510244 [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510b2b [UNCONDITIONAL_CALL]
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 00510562 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559d09 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0 (004cdbf0) at 004cdc12 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d0a7d [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0 (004d04b0) at 004d05d5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a669f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6c92 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (004a1ca0) at 004a1e81 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e903 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a117f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fd08 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049da65 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a5144 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e371 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_font_cpp_0062a691
//   TerminatedCString s_CBitFont_drawText_OSFont_0062a6a4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   engine_palette.cpp_CFont_drawText_FUN_00544ed0

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
          (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint character_code;
  char *unaff_EDI;
  int in_stack_0000001c;
  int in_stack_00000020;
  char *param1;
  
  iVar1 = x_pos;
  if (this_ptr->win_font_enabled == 0) {
    for (; character_code = (uint)(byte)*text_string, character_code != 0;
        text_string = text_string + 1) {
      if (character_code != 0xd) {
        if (character_code == 10) {
          y_pos = y_pos + this_ptr->current_max_width + this_ptr->line_spacing;
          x_pos = iVar1;
        }
        else {
          iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
                            (this_ptr,character_code,x_pos,y_pos,color_mode,color_value);
          x_pos = x_pos + iVar2;
        }
      }
    }
    return x_pos - iVar1;
  }
  pcVar3 = (char *)x_pos;
  param1 = (char *)x_pos;
  if (this_ptr->win_font_helper == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0x266;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBitFont::drawText - OSFont not set before DrawText called");
  }
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '\n') goto LAB_004cdad3;
    if (*pcVar3 == '\0') goto LAB_004cdad1;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '\n') goto LAB_004cdad3;
    pcVar3 = pcVar3 + 2;
    if (*pcVar4 == '\0') {
LAB_004cdad1:
      pcVar4 = (char *)0x0;
LAB_004cdad3:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      engine_palette_cpp_CFont_drawText_FUN_00544ed0
                (&this_ptr->win_font_helper->base_font,(int)param1,x_pos,y_pos,color_value,
                 in_stack_0000001c);
      iVar1 = extraout_EAX;
      if (extraout_EAX == -1) {
        this_ptr->win_font_enabled = 0;
        iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                          (this_ptr,unaff_EDI,x_pos,y_pos,in_stack_0000001c,in_stack_00000020);
        this_ptr->win_font_enabled = 1;
      }
      if (pcVar4 == (char *)0x0) {
        return iVar1;
      }
      *pcVar4 = '\n';
      y_pos = y_pos + this_ptr->current_max_width + this_ptr->line_spacing;
      pcVar3 = pcVar4 + 1;
      param1 = pcVar4 + 1;
    }
  } while( true );
}


// Assembly code:
// 004cda80: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
// 004cda81: PUSH ESI
// 004cda82: PUSH EDI
// 004cda83: PUSH EBP
// 004cda84: SUB ESP,0xc
// 004cda87: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004cda8b: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004cda8f: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 004cda93: CMP dword ptr [EBX + 0x3190],0x0
// 004cda9a: JZ 0x004cdb8b
//   XREF to: 004cdb8b (CONDITIONAL_JUMP)
// 004cdaa0: CMP dword ptr [EBX + 0x3194],0x0
// 004cdaa7: JZ 0x004cdb5a
//   XREF to: 004cdb5a (CONDITIONAL_JUMP)
// 004cdaad: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004cdaad
//   XREF to: Stack[0x8] (READ)
// 004cdab1: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004cdab5: MOV DL,0xa
//   Label: LAB_004cdab5
// 004cdab7: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004cdabb: MOV AL,byte ptr [ESI]
//   Label: LAB_004cdabb
// 004cdabd: CMP AL,DL
// 004cdabf: JZ 0x004cdad3
//   XREF to: 004cdad3 (CONDITIONAL_JUMP)
// 004cdac1: CMP AL,0x0
// 004cdac3: JZ 0x004cdad1
//   XREF to: 004cdad1 (CONDITIONAL_JUMP)
// 004cdac5: INC ESI
// 004cdac6: MOV AL,byte ptr [ESI]
// 004cdac8: CMP AL,DL
// 004cdaca: JZ 0x004cdad3
//   XREF to: 004cdad3 (CONDITIONAL_JUMP)
// 004cdacc: INC ESI
// 004cdacd: CMP AL,0x0
// 004cdacf: JNZ 0x004cdabb
//   XREF to: 004cdabb (CONDITIONAL_JUMP)
// 004cdad1: SUB ESI,ESI
//   Label: LAB_004cdad1
// 004cdad3: MOV dword ptr [ESP + 0x4],ESI
//   Label: LAB_004cdad3
//   XREF to: Stack[-0x18] (WRITE)
// 004cdad7: TEST ESI,ESI
// 004cdad9: JZ 0x004cdade
//   XREF to: 004cdade (CONDITIONAL_JUMP)
// 004cdadb: MOV byte ptr [ESI],0x0
// 004cdade: MOV ESI,dword ptr [ESP + 0x34]
//   Label: LAB_004cdade
//   XREF to: Stack[0x18] (READ)
// 004cdae2: PUSH ESI
// 004cdae3: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 004cdae7: PUSH EAX
// 004cdae8: PUSH EDI
// 004cdae9: PUSH EBP
// 004cdaea: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004cdaee: PUSH EDX
// 004cdaef: MOV ECX,dword ptr [EBX + 0x3194]
// 004cdaf5: PUSH ECX
// 004cdaf6: CALL engine_palette.cpp_CFont_drawText_FUN_00544ed0
//   XREF to: 00544ed0 (UNCONDITIONAL_CALL)
// 004cdafb: ADD ESP,0x18
// 004cdafe: MOV ESI,EAX
// 004cdb00: CMP EAX,-0x1
// 004cdb03: JNZ 0x004cdb35
//   XREF to: 004cdb35 (CONDITIONAL_JUMP)
// 004cdb05: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 004cdb09: PUSH ESI
// 004cdb0a: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 004cdb0e: PUSH EAX
// 004cdb0f: PUSH EDI
// 004cdb10: PUSH EBP
// 004cdb11: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004cdb15: PUSH EDX
// 004cdb16: PUSH EBX
// 004cdb17: MOV dword ptr [EBX + 0x3190],0x0
// 004cdb21: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004cdb26: ADD ESP,0x18
// 004cdb29: MOV ESI,EAX
// 004cdb2b: MOV dword ptr [EBX + 0x3190],0x1
// 004cdb35: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_004cdb35
//   XREF to: Stack[-0x18] (READ)
// 004cdb39: TEST ECX,ECX
// 004cdb3b: JZ 0x004cdb81
//   XREF to: 004cdb81 (CONDITIONAL_JUMP)
// 004cdb3d: LEA EAX,[ECX + 0x1]
// 004cdb40: MOV byte ptr [ECX],0xa
// 004cdb43: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004cdb47: MOV ESI,dword ptr [EBX + 0x3170]
// 004cdb4d: ADD ESI,dword ptr [EBX + 0x3178]
// 004cdb53: ADD EDI,ESI
// 004cdb55: JMP 0x004cdab5
//   XREF to: 004cdab5 (UNCONDITIONAL_JUMP)
// 004cdb5a: MOV ESI,0x62a691
//   Label: LAB_004cdb5a
//   XREF to: 0062a691 (DATA)
// 004cdb5f: MOV EAX,0x266
// 004cdb64: PUSH 0x62a6a4
//   XREF to: 0062a6a4 (DATA)
// 004cdb69: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004cdb6f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004cdb74: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cdb79: ADD ESP,0x4
// 004cdb7c: JMP 0x004cdaad
//   XREF to: 004cdaad (UNCONDITIONAL_JUMP)
// 004cdb81: MOV EAX,ESI
//   Label: LAB_004cdb81
// 004cdb83: ADD ESP,0xc
// 004cdb86: POP EBP
// 004cdb87: POP EDI
// 004cdb88: POP ESI
// 004cdb89: POP EBX
// 004cdb8a: RET
// 004cdb8b: MOV dword ptr [ESP],EBP
//   Label: LAB_004cdb8b
//   XREF to: Stack[-0x1c] (DATA)
// 004cdb8e: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_004cdb8e
//   XREF to: Stack[0x8] (READ)
// 004cdb92: MOVZX ESI,byte ptr [ESI]
// 004cdb95: TEST ESI,ESI
// 004cdb97: JZ 0x004cdbd6
//   XREF to: 004cdbd6 (CONDITIONAL_JUMP)
// 004cdb99: CMP ESI,0xd
// 004cdb9c: JNZ 0x004cdba4
//   XREF to: 004cdba4 (CONDITIONAL_JUMP)
// 004cdb9e: INC dword ptr [ESP + 0x24]
//   Label: LAB_004cdb9e
//   XREF to: Stack[0x8] (READ_WRITE)
// 004cdba2: JMP 0x004cdb8e
//   XREF to: 004cdb8e (UNCONDITIONAL_JUMP)
// 004cdba4: CMP ESI,0xa
//   Label: LAB_004cdba4
// 004cdba7: JNZ 0x004cdbbc
//   XREF to: 004cdbbc (CONDITIONAL_JUMP)
// 004cdba9: MOV ESI,dword ptr [EBX + 0x3170]
// 004cdbaf: ADD ESI,dword ptr [EBX + 0x3178]
// 004cdbb5: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004cdbb8: ADD EDI,ESI
// 004cdbba: JMP 0x004cdb9e
//   XREF to: 004cdb9e (UNCONDITIONAL_JUMP)
// 004cdbbc: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_004cdbbc
//   XREF to: Stack[0x18] (READ)
// 004cdbc0: PUSH ECX
// 004cdbc1: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 004cdbc5: PUSH EAX
// 004cdbc6: PUSH EDI
// 004cdbc7: PUSH EBP
// 004cdbc8: PUSH ESI
// 004cdbc9: PUSH EBX
// 004cdbca: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004cdbcf: ADD ESP,0x18
// 004cdbd2: ADD EBP,EAX
// 004cdbd4: JMP 0x004cdb9e
//   XREF to: 004cdb9e (UNCONDITIONAL_JUMP)
// 004cdbd6: MOV EDX,dword ptr [ESP]
//   Label: LAB_004cdbd6
//   XREF to: Stack[-0x1c] (DATA)
// 004cdbd9: MOV ESI,EBP
// 004cdbdb: SUB ESI,EDX
// 004cdbdd: MOV EAX,ESI
// 004cdbdf: ADD ESP,0xc
// 004cdbe2: POP EBP
// 004cdbe3: POP EDI
// 004cdbe4: POP ESI
// 004cdbe5: POP EBX
// 004cdbe6: RET

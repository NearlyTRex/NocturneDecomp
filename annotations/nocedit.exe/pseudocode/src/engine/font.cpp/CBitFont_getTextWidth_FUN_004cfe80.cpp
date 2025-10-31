// Name: engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
// Address: 004cfe80
// Address Range: [[004cfe80, 004cff30]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_getCurrentTextWidth_FUN_00489d00 (00489d00) at 00489d10 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d8522 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe1c8 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 005011e0 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 00504693 [UNCONDITIONAL_CALL]
//   core_main.c_drawCenteredText_FUN_00508250 (00508250) at 00508260 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508629 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 0050808d [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 005083c8 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_00510410 (00510410) at 00510429 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000 (00510000) at 00510046 [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510b4a [UNCONDITIONAL_CALL]
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 0051050e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559ce6 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 (004cdee0) at 004cdf07 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0 (004cdff0) at 004ce01c [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 (004cdde0) at 004cddfc [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 (004cdce0) at 004cdcfc [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010 (004d0010) at 004d0164 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a6629 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 (004a6a60) at 004a6b08 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 (004a0890) at 004a0951 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1161 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (004a0430) at 004a050a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fd7b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0 (0049d8f0) at 0049d969 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4674 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 (004a68e0) at 004a6946 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e1cb [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ebfc [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *this_ptr,char *text)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *text_00;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  text_00 = text;
  if (this_ptr->win_font_enabled == 0) {
    while (*text != 0) {
      iVar2 = 0;
      do {
        bVar1 = *text;
        text = (char *)((byte *)text + 1);
        if (bVar1 == 10) break;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,(uint)bVar1);
        iVar2 = iVar2 + iVar3 + this_ptr->char_spacing;
      } while (*text != 0);
      if (0 < iVar2) {
        iVar2 = iVar2 - this_ptr->char_spacing;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
  }
  else {
LAB_004cfea1:
    do {
      pcVar5 = text;
      if (*text == '\n') goto LAB_004cfeb9;
      if (*text == '\0') break;
      pcVar5 = text + 1;
      if (*pcVar5 == '\n') goto LAB_004cfeb9;
      text = text + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_004cfeb9:
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
    }
    iVar2 = (*((this_ptr->win_font_helper->base_font).vtable)->getStringWidth)
                      (&this_ptr->win_font_helper->base_font,text_00);
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (pcVar5 != (char *)0x0) {
      text = pcVar5 + 1;
      *pcVar5 = '\n';
      text_00 = text;
      goto LAB_004cfea1;
    }
  }
  return iVar4;
}


// Assembly code:
// 004cfe80: PUSH EBX
//   Label: engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
// 004cfe81: PUSH ESI
// 004cfe82: PUSH EDI
// 004cfe83: PUSH EBP
// 004cfe84: SUB ESP,0x4
// 004cfe87: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004cfe8b: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004cfe8f: MOV EDX,dword ptr [EDI + 0x3190]
// 004cfe95: XOR EBP,EBP
// 004cfe97: TEST EDX,EDX
// 004cfe99: JZ 0x004cfee8
//   XREF to: 004cfee8 (CONDITIONAL_JUMP)
// 004cfe9b: MOV EBX,ESI
// 004cfe9d: MOV DL,0xa
//   Label: LAB_004cfe9d
// 004cfe9f: MOV ESI,EBX
// 004cfea1: MOV AL,byte ptr [ESI]
//   Label: LAB_004cfea1
// 004cfea3: CMP AL,DL
// 004cfea5: JZ 0x004cfeb9
//   XREF to: 004cfeb9 (CONDITIONAL_JUMP)
// 004cfea7: CMP AL,0x0
// 004cfea9: JZ 0x004cfeb7
//   XREF to: 004cfeb7 (CONDITIONAL_JUMP)
// 004cfeab: INC ESI
// 004cfeac: MOV AL,byte ptr [ESI]
// 004cfeae: CMP AL,DL
// 004cfeb0: JZ 0x004cfeb9
//   XREF to: 004cfeb9 (CONDITIONAL_JUMP)
// 004cfeb2: INC ESI
// 004cfeb3: CMP AL,0x0
// 004cfeb5: JNZ 0x004cfea1
//   XREF to: 004cfea1 (CONDITIONAL_JUMP)
// 004cfeb7: SUB ESI,ESI
//   Label: LAB_004cfeb7
// 004cfeb9: MOV dword ptr [ESP],ESI
//   Label: LAB_004cfeb9
//   XREF to: Stack[-0x14] (DATA)
// 004cfebc: TEST ESI,ESI
// 004cfebe: JZ 0x004cfec3
//   XREF to: 004cfec3 (CONDITIONAL_JUMP)
// 004cfec0: MOV byte ptr [ESI],0x0
// 004cfec3: PUSH EBX
//   Label: LAB_004cfec3
// 004cfec4: MOV EAX,dword ptr [EDI + 0x3194]
// 004cfeca: PUSH EAX
// 004cfecb: MOV ESI,dword ptr [EAX]
// 004cfecd: CALL dword ptr [ESI + 0x8]
// 004cfed0: ADD ESP,0x8
// 004cfed3: CMP EAX,EBP
// 004cfed5: JLE 0x004cfed9
//   XREF to: 004cfed9 (CONDITIONAL_JUMP)
// 004cfed7: MOV EBP,EAX
// 004cfed9: MOV ECX,dword ptr [ESP]
//   Label: LAB_004cfed9
// 004cfedc: TEST ECX,ECX
// 004cfede: JZ 0x004cff27
//   XREF to: 004cff27 (CONDITIONAL_JUMP)
// 004cfee0: LEA EBX,[ECX + 0x1]
// 004cfee3: MOV byte ptr [ECX],0xa
// 004cfee6: JMP 0x004cfe9d
//   XREF to: 004cfe9d (UNCONDITIONAL_JUMP)
// 004cfee8: CMP byte ptr [ESI],0x0
//   Label: LAB_004cfee8
// 004cfeeb: JZ 0x004cff27
//   XREF to: 004cff27 (CONDITIONAL_JUMP)
// 004cfeed: XOR EBX,EBX
// 004cfeef: XOR EAX,EAX
//   Label: LAB_004cfeef
// 004cfef1: MOV AL,byte ptr [ESI]
// 004cfef3: INC ESI
// 004cfef4: CMP EAX,0xa
// 004cfef7: JNZ 0x004cff0b
//   XREF to: 004cff0b (CONDITIONAL_JUMP)
// 004cfef9: TEST EBX,EBX
//   Label: LAB_004cfef9
// 004cfefb: JLE 0x004cff03
//   XREF to: 004cff03 (CONDITIONAL_JUMP)
// 004cfefd: SUB EBX,dword ptr [EDI + 0x3174]
// 004cff03: CMP EBX,EBP
//   Label: LAB_004cff03
// 004cff05: JLE 0x004cfee8
//   XREF to: 004cfee8 (CONDITIONAL_JUMP)
// 004cff07: MOV EBP,EBX
// 004cff09: JMP 0x004cfee8
//   XREF to: 004cfee8 (UNCONDITIONAL_JUMP)
// 004cff0b: PUSH EAX
//   Label: LAB_004cff0b
// 004cff0c: PUSH EDI
// 004cff0d: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 004cff12: MOV EDX,dword ptr [EDI + 0x3174]
// 004cff18: ADD ESP,0x8
// 004cff1b: ADD EAX,EDX
// 004cff1d: MOV DL,byte ptr [ESI]
// 004cff1f: ADD EBX,EAX
// 004cff21: TEST DL,DL
// 004cff23: JNZ 0x004cfeef
//   XREF to: 004cfeef (CONDITIONAL_JUMP)
// 004cff25: JMP 0x004cfef9
//   XREF to: 004cfef9 (UNCONDITIONAL_JUMP)
// 004cff27: MOV EAX,EBP
//   Label: LAB_004cff27
// 004cff29: ADD ESP,0x4
// 004cff2c: POP EBP
// 004cff2d: POP EDI
// 004cff2e: POP ESI
// 004cff2f: POP EBX
// 004cff30: RET

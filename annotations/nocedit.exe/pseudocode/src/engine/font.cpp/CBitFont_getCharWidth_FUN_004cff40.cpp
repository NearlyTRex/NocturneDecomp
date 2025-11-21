// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
// Address: 004cff40
// Address Range: [[004cff40, 004d000f]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507552 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507167 [UNCONDITIONAL_CALL]
//   core_menu.cpp_getGameMainMenuChoice_FUN_00510000 (00510000) at 005103a9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a663b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6c5a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 (004a6a60) at 004a6ad5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a0b07 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a11ab [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 (004a6970) at 004a69f3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e1fc [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont *this_ptr,char *text_string)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = text_string;
  if (this_ptr->win_font_enabled != 0) {
    do {
      pcVar6 = pcVar5;
      if (*pcVar5 == '\n') goto LAB_004cffc4;
      if (*pcVar5 == '\0') break;
      pcVar6 = pcVar5 + 1;
      if (*pcVar6 == '\n') goto LAB_004cffc4;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_004cffc4:
    if (pcVar6 == (char *)0x0) {
      iVar3 = (*((this_ptr->win_font_helper->base_font).vtable)->getStringHeight)
                        (&this_ptr->win_font_helper->base_font,text_string);
      return iVar3;
    }
  }
  bVar1 = *text_string;
  iVar3 = 0;
  while( true ) {
    if (bVar1 == 0) {
      return iVar3;
    }
    if (*text_string == 10) break;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,(uint)(byte)*text_string);
    if (iVar3 < iVar2) {
      iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,(uint)(byte)*text_string);
    }
    bVar1 = ((byte *)text_string)[1];
    text_string = (char *)((byte *)text_string + 1);
  }
  iVar3 = this_ptr->current_max_width;
  do {
    iVar3 = iVar3 + this_ptr->line_spacing + this_ptr->current_max_width;
    pbVar4 = (byte *)text_string + 1;
    do {
      text_string = (char *)pbVar4;
      if (*pbVar4 == 10) goto LAB_004cff9c;
      if (*pbVar4 == 0) break;
      text_string = (char *)(pbVar4 + 1);
      if (*text_string == 10) goto LAB_004cff9c;
      pbVar4 = pbVar4 + 2;
    } while (*text_string != 0);
    text_string = (char *)0x0;
LAB_004cff9c:
    if ((byte *)text_string == (byte *)0x0) {
      return iVar3;
    }
  } while( true );
}


// Assembly code:
// 004cff40: PUSH EBX
//   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
// 004cff41: PUSH ESI
// 004cff42: PUSH EDI
// 004cff43: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004cff47: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004cff4b: CMP dword ptr [EDI + 0x3190],0x0
// 004cff52: JNZ 0x004cffa8
//   XREF to: 004cffa8 (CONDITIONAL_JUMP)
// 004cff54: MOV AH,byte ptr [EBX]
//   Label: LAB_004cff54
// 004cff56: XOR ESI,ESI
// 004cff58: TEST AH,AH
// 004cff5a: JZ 0x004d000a
//   XREF to: 004d000a (CONDITIONAL_JUMP)
// 004cff60: MOV DH,byte ptr [EBX]
//   Label: LAB_004cff60
// 004cff62: CMP DH,0xa
// 004cff65: JNZ 0x004cffdc
//   XREF to: 004cffdc (CONDITIONAL_JUMP)
// 004cff6b: MOV DL,DH
// 004cff6d: MOV ECX,dword ptr [EDI + 0x3170]
// 004cff73: MOV ESI,dword ptr [EDI + 0x3178]
//   Label: LAB_004cff73
// 004cff79: ADD ESI,dword ptr [EDI + 0x3170]
// 004cff7f: ADD ECX,ESI
// 004cff81: LEA ESI,[EBX + 0x1]
// 004cff84: MOV AL,byte ptr [ESI]
//   Label: LAB_004cff84
// 004cff86: CMP AL,DL
// 004cff88: JZ 0x004cff9c
//   XREF to: 004cff9c (CONDITIONAL_JUMP)
// 004cff8a: CMP AL,0x0
// 004cff8c: JZ 0x004cff9a
//   XREF to: 004cff9a (CONDITIONAL_JUMP)
// 004cff8e: INC ESI
// 004cff8f: MOV AL,byte ptr [ESI]
// 004cff91: CMP AL,DL
// 004cff93: JZ 0x004cff9c
//   XREF to: 004cff9c (CONDITIONAL_JUMP)
// 004cff95: INC ESI
// 004cff96: CMP AL,0x0
// 004cff98: JNZ 0x004cff84
//   XREF to: 004cff84 (CONDITIONAL_JUMP)
// 004cff9a: SUB ESI,ESI
//   Label: LAB_004cff9a
// 004cff9c: MOV EBX,ESI
//   Label: LAB_004cff9c
// 004cff9e: TEST ESI,ESI
// 004cffa0: JNZ 0x004cff73
//   XREF to: 004cff73 (CONDITIONAL_JUMP)
// 004cffa2: MOV EAX,ECX
// 004cffa4: POP EDI
// 004cffa5: POP ESI
// 004cffa6: POP EBX
// 004cffa7: RET
// 004cffa8: MOV DL,0xa
//   Label: LAB_004cffa8
// 004cffaa: MOV ESI,EBX
// 004cffac: MOV AL,byte ptr [ESI]
//   Label: LAB_004cffac
// 004cffae: CMP AL,DL
// 004cffb0: JZ 0x004cffc4
//   XREF to: 004cffc4 (CONDITIONAL_JUMP)
// 004cffb2: CMP AL,0x0
// 004cffb4: JZ 0x004cffc2
//   XREF to: 004cffc2 (CONDITIONAL_JUMP)
// 004cffb6: INC ESI
// 004cffb7: MOV AL,byte ptr [ESI]
// 004cffb9: CMP AL,DL
// 004cffbb: JZ 0x004cffc4
//   XREF to: 004cffc4 (CONDITIONAL_JUMP)
// 004cffbd: INC ESI
// 004cffbe: CMP AL,0x0
// 004cffc0: JNZ 0x004cffac
//   XREF to: 004cffac (CONDITIONAL_JUMP)
// 004cffc2: SUB ESI,ESI
//   Label: LAB_004cffc2
// 004cffc4: TEST ESI,ESI
//   Label: LAB_004cffc4
// 004cffc6: JNZ 0x004cff54
//   XREF to: 004cff54 (CONDITIONAL_JUMP)
// 004cffc8: PUSH EBX
// 004cffc9: MOV EAX,dword ptr [EDI + 0x3194]
// 004cffcf: PUSH EAX
// 004cffd0: MOV ECX,dword ptr [EAX]
// 004cffd2: CALL dword ptr [ECX + 0xc]
// 004cffd5: ADD ESP,0x8
// 004cffd8: POP EDI
// 004cffd9: POP ESI
// 004cffda: POP EBX
// 004cffdb: RET
// 004cffdc: XOR EAX,EAX
//   Label: LAB_004cffdc
// 004cffde: MOV AL,DH
// 004cffe0: PUSH EAX
// 004cffe1: PUSH EDI
// 004cffe2: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004cffe7: ADD ESP,0x8
// 004cffea: CMP EAX,ESI
// 004cffec: JLE 0x004cfffe
//   XREF to: 004cfffe (CONDITIONAL_JUMP)
// 004cffee: XOR EAX,EAX
// 004cfff0: MOV AL,byte ptr [EBX]
// 004cfff2: PUSH EAX
// 004cfff3: PUSH EDI
// 004cfff4: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004cfff9: ADD ESP,0x8
// 004cfffc: MOV ESI,EAX
// 004cfffe: MOV DL,byte ptr [EBX + 0x1]
//   Label: LAB_004cfffe
// 004d0001: INC EBX
// 004d0002: TEST DL,DL
// 004d0004: JNZ 0x004cff60
//   XREF to: 004cff60 (CONDITIONAL_JUMP)
// 004d000a: MOV EAX,ESI
//   Label: LAB_004d000a
// 004d000c: POP EDI
// 004d000d: POP ESI
// 004d000e: POP EBX
// 004d000f: RET

// Name: shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
// Address: 004a65e0
// Address Range: [[004a65e0, 004a6826]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005076ec [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005072b1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4f43 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e380 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049efc5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dd23 [UNCONDITIONAL_CALL]
// Globals:
//   CBitFont* g_EditorFont
//   int g_UITextColor
//   int g_ClipTop
//   int g_ActiveRenderColor
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   shape_edittool.cpp_drawDashedLine_FUN_0049d290

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(CEdButton *this_ptr,int draw_border_flag)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar2 = g_ClipTop;
  bVar10 = 0;
  g_ClipTop = this_ptr->top;
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0
            (this_ptr->left,g_ClipTop,this_ptr->right,this_ptr->bottom,this_ptr->button_state);
  pcVar7 = this_ptr->button_text;
  g_ClipTop = iVar2;
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,pcVar7);
  iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,pcVar7);
  iVar4 = engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(g_EditorFont,0x41);
  iVar2 = this_ptr->button_state + ((this_ptr->right + this_ptr->left) - iVar2) / 2;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,pcVar7,iVar2,
             this_ptr->button_state + ((this_ptr->top + this_ptr->bottom) - (iVar3 + iVar4)) / 2,
             g_UITextColor,-1);
  g_ActiveRenderColor = g_UITextColor;
  if (in_stack_0000001c != 0) {
    shape_edittool_cpp_drawDashedLine_FUN_0049d290
              (this_ptr->left + 3,this_ptr->top + 3,this_ptr->right + -5,this_ptr->bottom + -4,1);
  }
  pcVar9 = &stack0xffffff3c;
  pcVar7 = this_ptr->button_text;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  do {
    uVar6 = 0xffffffff;
    pcVar7 = &stack0xffffff3c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar5) break;
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)(&stack0xffffff3c)[uVar5]);
    (&stack0xffffff40)[uVar5] = (char)iVar3;
    uVar5 = uVar5 + 1;
  } while( true );
  iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)this_ptr->shortcut_key);
  pcVar7 = &stack0xffffff40;
  pcVar9 = &stack0xffffff40;
  do {
    pcVar8 = pcVar7;
    if (*pcVar7 == (char)iVar3) goto LAB_004a6754;
    if (*pcVar7 == '\0') break;
    pcVar8 = pcVar7 + 1;
    if (*pcVar8 == (char)iVar3) goto LAB_004a6754;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_004a6754:
  if (pcVar8 == (char *)0x0) {
    return;
  }
  pcVar7 = this_ptr->button_text;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  *pcVar8 = '\0';
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,&stack0xffffff40);
  uVar5 = iVar3 + g_EditorFont->char_spacing;
  bVar10 = this_ptr->button_text[0];
  uVar6 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)this_ptr->shortcut_key);
  if (uVar6 == bVar10) {
    uVar5 = uVar6 ^ bVar10;
  }
  iVar2 = iVar2 + uVar5;
  engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x41);
  g_ActiveRenderColor = g_UITextColor;
  iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0
                    (g_EditorFont,(uint)(byte)this_ptr->shortcut_key);
  engine_2d_c_drawHLine_FUN_00402ee0(iVar2,in_stack_00000018,iVar3 + iVar2 + -1);
  return;
}


// Assembly code:
// 004a65e0: PUSH EBX
//   Label: shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
// 004a65e1: PUSH ESI
// 004a65e2: PUSH EDI
// 004a65e3: PUSH EBP
// 004a65e4: SUB ESP,0xcc
// 004a65ea: MOV EBX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 004a65f1: MOV EDX,dword ptr [EBX + 0x18]
// 004a65f4: PUSH EDX
// 004a65f5: MOV ECX,dword ptr [EBX + 0x14]
// 004a65f8: PUSH ECX
// 004a65f9: MOV EDI,dword ptr [EBX + 0x10]
// 004a65fc: PUSH EDI
// 004a65fd: MOV EAX,dword ptr [EBX + 0xc]
// 004a6600: MOV ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a6606: PUSH EAX
// 004a6607: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 004a660c: MOV EAX,dword ptr [EBX + 0x8]
// 004a660f: PUSH EAX
// 004a6610: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a6615: ADD ESP,0x14
// 004a6618: MOV dword ptr [0x02d0255c],ESI
//   XREF to: 02d0255c (WRITE)
// 004a661e: LEA ESI,[EBX + 0x1c]
// 004a6621: PUSH ESI
// 004a6622: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a6628: PUSH EDX
// 004a6629: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a662e: ADD ESP,0x8
// 004a6631: PUSH ESI
// 004a6632: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a6638: PUSH ECX
// 004a6639: MOV EBP,EAX
// 004a663b: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a6640: ADD ESP,0x8
// 004a6643: PUSH 0x41
// 004a6645: MOV EDI,EAX
// 004a6647: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a664c: PUSH EAX
// 004a664d: CALL engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
//   XREF to: 004d0200 (UNCONDITIONAL_CALL)
// 004a6652: MOV EDX,dword ptr [EBX + 0x10]
// 004a6655: ADD EDI,EAX
// 004a6657: ADD EDX,dword ptr [EBX + 0x8]
// 004a665a: SUB EDX,EBP
// 004a665c: MOV EAX,EDX
// 004a665e: SAR EDX,0x1f
// 004a6661: SUB EAX,EDX
// 004a6663: SAR EAX,0x1
// 004a6665: MOV ECX,dword ptr [EBX + 0x14]
// 004a6668: MOV EDX,dword ptr [EBX + 0xc]
// 004a666b: ADD EDX,ECX
// 004a666d: MOV EBP,dword ptr [EBX + 0x18]
// 004a6670: SUB EDX,EDI
// 004a6672: ADD EBP,EAX
// 004a6674: MOV EAX,EDX
// 004a6676: SAR EDX,0x1f
// 004a6679: SUB EAX,EDX
// 004a667b: SAR EAX,0x1
// 004a667d: ADD ESP,0x8
// 004a6680: PUSH -0x1
// 004a6682: MOV EDI,dword ptr [0x02cf2ae8]
//   XREF to: 02cf2ae8 (READ)
// 004a6688: MOV EDX,dword ptr [EBX + 0x18]
// 004a668b: PUSH EDI
// 004a668c: ADD EDX,EAX
// 004a668e: PUSH EDX
// 004a668f: PUSH EBP
// 004a6690: PUSH ESI
// 004a6691: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004a6698: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a669e: PUSH EDX
// 004a669f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004a66a4: ADD ESP,0x18
// 004a66a7: MOV EAX,[0x02cf2ae8]
//   XREF to: 02cf2ae8 (READ)
// 004a66ac: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 004a66b3: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a66b8: TEST ECX,ECX
// 004a66ba: JNZ 0x004a6702
//   XREF to: 004a6702 (CONDITIONAL_JUMP)
// 004a66bc: MOV EDI,ESP
//   Label: LAB_004a66bc
// 004a66be: LEA ESI,[EBX + 0x1c]
// 004a66c1: PUSH EDI
// 004a66c2: MOV AL,byte ptr [ESI]
//   Label: LAB_004a66c2
// 004a66c4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xdc] (DATA)
// 004a66c6: CMP AL,0x0
// 004a66c8: JZ 0x004a66da
//   XREF to: 004a66da (CONDITIONAL_JUMP)
// 004a66ca: MOV AL,byte ptr [ESI + 0x1]
// 004a66cd: ADD ESI,0x2
// 004a66d0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xdb] (WRITE)
// 004a66d3: ADD EDI,0x2
// 004a66d6: CMP AL,0x0
// 004a66d8: JNZ 0x004a66c2
//   XREF to: 004a66c2 (CONDITIONAL_JUMP)
// 004a66da: POP EDI
//   Label: LAB_004a66da
// 004a66db: XOR ESI,ESI
// 004a66dd: MOV EDI,ESP
//   Label: LAB_004a66dd
// 004a66df: SUB ECX,ECX
// 004a66e1: DEC ECX
// 004a66e2: XOR EAX,EAX
// 004a66e4: SCASB.REPNE ES:EDI
// 004a66e6: NOT ECX
// 004a66e8: DEC ECX
// 004a66e9: CMP ESI,ECX
// 004a66eb: JNC 0x004a672a
//   XREF to: 004a672a (CONDITIONAL_JUMP)
// 004a66ed: XOR EAX,EAX
// 004a66ef: MOV AL,byte ptr [ESP + ESI*0x1]
//   XREF to: Stack[-0xdc] (DATA)
// 004a66f2: PUSH EAX
// 004a66f3: INC ESI
// 004a66f4: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004a66f9: ADD ESP,0x4
// 004a66fc: MOV byte ptr [ESP + ESI*0x1 + -0x1],AL
//   XREF to: Stack[-0xdc] (DATA)
// 004a6700: JMP 0x004a66dd
//   XREF to: 004a66dd (UNCONDITIONAL_JUMP)
// 004a6702: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_004a6702
// 004a6705: PUSH 0x1
// 004a6707: SUB EAX,0x4
// 004a670a: PUSH EAX
// 004a670b: MOV EAX,dword ptr [EBX + 0x10]
// 004a670e: SUB EAX,0x5
// 004a6711: PUSH EAX
// 004a6712: MOV EAX,dword ptr [EBX + 0xc]
// 004a6715: ADD EAX,0x3
// 004a6718: PUSH EAX
// 004a6719: MOV EAX,dword ptr [EBX + 0x8]
// 004a671c: ADD EAX,0x3
// 004a671f: PUSH EAX
// 004a6720: CALL shape_edittool.cpp_drawDashedLine_FUN_0049d290
//   XREF to: 0049d290 (UNCONDITIONAL_CALL)
// 004a6725: ADD ESP,0x14
// 004a6728: JMP 0x004a66bc
//   XREF to: 004a66bc (UNCONDITIONAL_JUMP)
// 004a672a: XOR EAX,EAX
//   Label: LAB_004a672a
// 004a672c: MOV AL,byte ptr [EBX + 0x4]
// 004a672f: PUSH EAX
// 004a6730: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004a6735: ADD ESP,0x4
// 004a6738: MOV ESI,ESP
// 004a673a: MOV DL,AL
// 004a673c: MOV AL,byte ptr [ESI]
//   Label: LAB_004a673c
//   XREF to: Stack[-0xdc] (DATA)
// 004a673e: CMP AL,DL
// 004a6740: JZ 0x004a6754
//   XREF to: 004a6754 (CONDITIONAL_JUMP)
// 004a6742: CMP AL,0x0
// 004a6744: JZ 0x004a6752
//   XREF to: 004a6752 (CONDITIONAL_JUMP)
// 004a6746: INC ESI
// 004a6747: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xdb] (DATA)
// 004a6749: CMP AL,DL
// 004a674b: JZ 0x004a6754
//   XREF to: 004a6754 (CONDITIONAL_JUMP)
// 004a674d: INC ESI
// 004a674e: CMP AL,0x0
// 004a6750: JNZ 0x004a673c
//   XREF to: 004a673c (CONDITIONAL_JUMP)
// 004a6752: SUB ESI,ESI
//   Label: LAB_004a6752
// 004a6754: MOV EDX,ESI
//   Label: LAB_004a6754
// 004a6756: TEST ESI,ESI
// 004a6758: JNZ 0x004a6765
//   XREF to: 004a6765 (CONDITIONAL_JUMP)
// 004a675a: ADD ESP,0xcc
// 004a6760: POP EBP
// 004a6761: POP EDI
// 004a6762: POP ESI
// 004a6763: POP EBX
// 004a6764: RET
// 004a6765: MOV EDI,ESP
//   Label: LAB_004a6765
// 004a6767: LEA ESI,[EBX + 0x1c]
// 004a676a: PUSH EDI
// 004a676b: MOV AL,byte ptr [ESI]
//   Label: LAB_004a676b
// 004a676d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xdc] (DATA)
// 004a676f: CMP AL,0x0
// 004a6771: JZ 0x004a6783
//   XREF to: 004a6783 (CONDITIONAL_JUMP)
// 004a6773: MOV AL,byte ptr [ESI + 0x1]
// 004a6776: ADD ESI,0x2
// 004a6779: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xdb] (WRITE)
// 004a677c: ADD EDI,0x2
// 004a677f: CMP AL,0x0
// 004a6781: JNZ 0x004a676b
//   XREF to: 004a676b (CONDITIONAL_JUMP)
// 004a6783: POP EDI
//   Label: LAB_004a6783
// 004a6784: MOV EAX,ESP
// 004a6786: PUSH EAX
// 004a6787: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a678d: PUSH ESI
// 004a678e: MOV byte ptr [EDX],0x0
// 004a6791: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a6796: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a679c: MOV EDX,dword ptr [EDX + 0x3174]
// 004a67a2: LEA EDI,[EAX + EDX*0x1]
// 004a67a5: XOR EAX,EAX
// 004a67a7: ADD ESP,0x8
// 004a67aa: MOV AL,byte ptr [EBX + 0x4]
// 004a67ad: PUSH EAX
// 004a67ae: MOVZX ESI,byte ptr [EBX + 0x1c]
// 004a67b2: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004a67b7: ADD ESP,0x4
// 004a67ba: CMP EAX,ESI
// 004a67bc: JNZ 0x004a6823
//   XREF to: 004a6823 (CONDITIONAL_JUMP)
// 004a67be: XOR EAX,ESI
// 004a67c0: PUSH 0x41
//   Label: LAB_004a67c0
// 004a67c2: MOV EDI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a67c8: PUSH EDI
// 004a67c9: ADD EBP,EAX
// 004a67cb: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a67d0: ADD ESP,0x8
// 004a67d3: INC EAX
// 004a67d4: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 004a67db: ADD EDX,EAX
// 004a67dd: MOV EAX,[0x02cf2ae8]
//   XREF to: 02cf2ae8 (READ)
// 004a67e2: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a67e7: XOR EAX,EAX
// 004a67e9: MOV AL,byte ptr [EBX + 0x4]
// 004a67ec: PUSH EAX
// 004a67ed: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a67f3: PUSH ECX
// 004a67f4: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004a67fb: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 004a6800: ADD EAX,EBP
// 004a6802: ADD ESP,0x8
// 004a6805: DEC EAX
// 004a6806: PUSH EAX
// 004a6807: MOV EBX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x14] (READ)
// 004a680e: PUSH EBX
// 004a680f: PUSH EBP
// 004a6810: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a6815: ADD ESP,0xc
// 004a6818: ADD ESP,0xcc
// 004a681e: POP EBP
// 004a681f: POP EDI
// 004a6820: POP ESI
// 004a6821: POP EBX
// 004a6822: RET
// 004a6823: MOV EAX,EDI
//   Label: LAB_004a6823
// 004a6825: JMP 0x004a67c0
//   XREF to: 004a67c0 (UNCONDITIONAL_JUMP)

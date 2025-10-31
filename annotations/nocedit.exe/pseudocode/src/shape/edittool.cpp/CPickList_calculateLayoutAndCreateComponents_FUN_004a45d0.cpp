// Name: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
// Address: 004a45d0
// Address Range: [[004a45d0, 004a4d33]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0(CPickList * this_ptr, char * dialog_title, int config_parameter)
// Cross-references:
//   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 (004a3ef0) at 004a3f00 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623a7e
//   TerminatedCString s_Too_many_picklist_column_00623a94
//   TerminatedCString s_Cancel_00623aaf
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_FontCharacterWidth
//   int g_LastClickItemIndex
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
          (CPickList *this_ptr,char *dialog_title,int config_parameter)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int top_pos;
  int unaff_EBX;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  int unaff_ESI;
  char *pcVar10;
  int unaff_retaddr;
  int in_stack_00000010;
  int in_stack_00000014;
  char *in_stack_00000018;
  int *in_stack_0000001c;
  int in_stack_00000020;
  int local_24;
  int local_18;
  int iVar11;
  
  this_ptr->character_width = g_FontCharacterWidth + 1;
  this_ptr->field9_0x178 = 8;
  this_ptr->field1_0x10[0x28] = '\x01';
  this_ptr->field1_0x10[0x29] = '\0';
  this_ptr->field1_0x10[0x2a] = '\0';
  this_ptr->field1_0x10[0x2b] = '\0';
  crt_memory_c_memset_FUN_005fde40(this_ptr->field1_0x10,0,0x28);
  iVar11 = 0;
  if (0 < *(int *)dialog_title) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)dialog_title,iVar11)
      ;
      iVar9 = 0;
      pcVar10 = dialog_title;
      while( true ) {
        pcVar7 = &stack0xfffffea4;
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar7 = *pcVar2;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar7 = '\0';
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,&stack0xfffffea4);
        if (*(int *)(pcVar10 + 0x10) < iVar4) {
          *(int *)(pcVar10 + 0x10) = iVar4;
        }
        iVar9 = iVar9 + 1;
        pcVar10 = pcVar10 + 4;
        if (*pcVar3 == '\0') break;
        if (9 < iVar9) {
          g_CurrentFilename = "..\\shape\\edittool.cpp";
          g_CurrentLineNumber = 0xed6;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many picklist columns!");
        }
      }
      if (*(int *)(dialog_title + 0x38) < iVar9) {
        *(int *)(dialog_title + 0x38) = iVar9;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)dialog_title);
  }
  pcVar3 = dialog_title;
  for (iVar11 = 0; iVar11 < *(int *)(dialog_title + 0x38) + -1; iVar11 = iVar11 + 1) {
    *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + g_WindowWidth / 0x28;
    pcVar3 = pcVar3 + 4;
  }
  iVar9 = 0;
  iVar11 = *(int *)(dialog_title + 0x38);
  dialog_title[0x18c] = '\0';
  dialog_title[0x18d] = '\0';
  dialog_title[0x18e] = '\0';
  dialog_title[399] = '\0';
  pcVar3 = dialog_title;
  if (0 < iVar11) {
    do {
      iVar9 = iVar9 + 1;
      *(int *)(dialog_title + 0x18c) = *(int *)(dialog_title + 0x18c) + *(int *)(pcVar3 + 0x10);
      pcVar3 = pcVar3 + 4;
    } while (iVar9 < *(int *)(dialog_title + 0x38));
  }
  *(int *)(dialog_title + 0x18c) =
       *(int *)(dialog_title + 0x18c) + *(int *)(dialog_title + 0x178) * 2;
  iVar11 = (g_WindowHeight + g_FontCharacterWidth * -4) / *(int *)(dialog_title + 0x174);
  *(int *)(dialog_title + 0x188) = iVar11;
  if (iVar11 < 1) {
    dialog_title[0x188] = '\x01';
    dialog_title[0x189] = '\0';
    dialog_title[0x18a] = '\0';
    dialog_title[0x18b] = '\0';
  }
  if (*(int *)dialog_title < *(int *)(dialog_title + 0x188)) {
    *(int *)(dialog_title + 0x188) = *(int *)dialog_title;
  }
  iVar11 = g_WindowWidth * 7 >> 0x1f;
  iVar11 = ((int)((g_WindowWidth * 7 + iVar11 * -8) - (uint)(iVar11 << 2 < 0)) >> 3) /
           *(int *)(dialog_title + 0x18c);
  *(int *)(dialog_title + 400) = iVar11;
  if (iVar11 < 1) {
    dialog_title[400] = '\x01';
    dialog_title[0x191] = '\0';
    dialog_title[0x192] = '\0';
    dialog_title[0x193] = '\0';
  }
  iVar11 = (*(int *)dialog_title + *(int *)(dialog_title + 0x188) + -1) /
           *(int *)(dialog_title + 0x188);
  if (iVar11 < *(int *)(dialog_title + 400)) {
    *(int *)(dialog_title + 400) = iVar11;
  }
  if (0 < *(int *)(dialog_title + 0x3c)) {
    *(int *)(dialog_title + 400) = *(int *)(dialog_title + 0x3c);
  }
  dialog_title[0x1d8] = '\0';
  dialog_title[0x1d9] = '\0';
  dialog_title[0x1da] = '\0';
  dialog_title[0x1db] = '\0';
  if (*(int *)(dialog_title + 0x188) * *(int *)(dialog_title + 400) < *(int *)dialog_title) {
    if (*(int *)(dialog_title + 400) < 2) {
      dialog_title[0x1d8] = '\x01';
      dialog_title[0x1d9] = '\0';
      dialog_title[0x1da] = '\0';
      dialog_title[0x1db] = '\0';
    }
    else {
      dialog_title[0x1d8] = '\x02';
      dialog_title[0x1d9] = '\0';
      dialog_title[0x1da] = '\0';
      dialog_title[0x1db] = '\0';
    }
  }
  iVar11 = *(int *)(dialog_title + 0x18c) * *(int *)(dialog_title + 400) + 8;
  iVar9 = *(int *)(dialog_title + 0x188) * *(int *)(dialog_title + 0x174) + 6;
  iVar4 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  iVar5 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
  if (*(int *)(in_stack_00000010 + 0x1d8) == 1) {
    iVar11 = iVar11 + iVar4;
  }
  else if (*(int *)(in_stack_00000010 + 0x1d8) == 2) {
    iVar9 = iVar9 + iVar5;
  }
  iVar5 = g_WindowHeight / 0x60;
  iVar8 = 0;
  iVar4 = 0;
  if (*(char *)(in_stack_00000010 + 0x44) != '\0') {
    iVar4 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0((char *)(in_stack_00000010 + 0x44))
    ;
    unaff_ESI = 1;
  }
  if (*(char *)(in_stack_00000014 + 0xa8) != '\0') {
    iVar6 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0((char *)(in_stack_00000014 + 0xa8))
    ;
    if (iVar4 < iVar6) {
      iVar4 = iVar6;
    }
    unaff_ESI = unaff_ESI + 1;
  }
  if (0 < unaff_ESI) {
    iVar8 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
    if (iVar4 < iVar8) {
      iVar4 = iVar8;
    }
    iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar8 = local_18 + iVar8;
    iVar6 = unaff_ESI * iVar4 + (unaff_ESI + -1) * local_24;
    if (*(int *)(in_stack_00000014 + 0x1d8) == 2) {
      iVar8 = iVar8 + local_18;
    }
    if (iVar11 < iVar6) {
      iVar11 = iVar6;
    }
    iVar9 = iVar9 + iVar8;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,iVar11,iVar9,in_stack_00000018,(int)in_stack_0000001c);
  iVar11 = (g_ClipRight - g_ClipLeft) + 1;
  iVar9 = (g_ClipBottom - g_ClipTop) + 1;
  if (*(int *)(in_stack_00000018 + 0x1d8) == 1) {
    iVar11 = iVar11 - iVar5;
    iVar6 = (g_ClipRight - iVar5) + 1;
    top_pos = g_ClipTop;
    iVar5 = unaff_ESI;
  }
  else {
    if (*(int *)(in_stack_00000018 + 0x1d8) != 2) goto LAB_004a4afc;
    iVar9 = iVar9 - local_18;
    top_pos = ((g_ClipBottom - local_18) - iVar8) + 1;
    iVar6 = g_ClipLeft;
    iVar5 = iVar8;
  }
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)(in_stack_00000018 + 0x1a4),iVar6,top_pos,g_ClipRight,
             g_ClipBottom - iVar5);
LAB_004a4afc:
  if (0 < unaff_retaddr) {
    iVar5 = (g_ClipBottom - unaff_EBX) + 1;
    if ((char)in_stack_0000001c[0x11] != '\0') {
      iVar6 = (g_ClipRight + 1) - unaff_ESI;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                ((CEdButton *)(in_stack_0000001c + 0x77),iVar6,iVar5,iVar6 + -1 + iVar4,
                 iVar5 + unaff_EBX + -1,(char *)(in_stack_0000001c + 0x11));
    }
    if ((char)in_stack_0000001c[0x2a] != '\0') {
      iVar6 = (g_ClipRight + 1) - iVar4;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                ((CEdButton *)(in_stack_0000001c + 0xb0),iVar6,iVar5,iVar6 + -1 + iVar4,
                 iVar5 + unaff_EBX + -1,(char *)(in_stack_0000001c + 0x2a));
    }
    iVar9 = iVar9 - iVar8;
  }
  in_stack_0000001c[0x62] = iVar9 / in_stack_0000001c[0x5d];
  in_stack_0000001c[100] = iVar11 / in_stack_0000001c[99];
  iVar9 = (*in_stack_0000001c + in_stack_0000001c[0x62] + -1) / in_stack_0000001c[0x62];
  if (iVar9 < in_stack_0000001c[100]) {
    in_stack_0000001c[100] = iVar9;
  }
  if (in_stack_0000001c[100] < 1) {
    in_stack_0000001c[100] = 1;
  }
  in_stack_0000001c[0x61] = in_stack_0000001c[0x62] * in_stack_0000001c[100];
  in_stack_0000001c[0x60] = 0;
  in_stack_0000001c[99] = iVar11 / in_stack_0000001c[100];
  engine_2d_c_clearInputAndWait_FUN_00403260();
  *(undefined1 *)(in_stack_00000020 + 0x10c) = 0;
  g_LastClickItemIndex = -1;
  *(undefined4 *)(in_stack_00000020 + 0x170) = 0;
  return;
}


// Assembly code:
// 004a45d0: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
// 004a45d1: PUSH ESI
// 004a45d2: PUSH EDI
// 004a45d3: PUSH EBP
// 004a45d4: SUB ESP,0x150
// 004a45da: PUSH 0x28
// 004a45dc: MOV EAX,[0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a45e1: MOV EDX,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x4] (READ)
// 004a45e8: INC EAX
// 004a45e9: PUSH 0x0
// 004a45eb: MOV dword ptr [EDX + 0x174],EAX
// 004a45f1: LEA EAX,[EDX + 0x10]
// 004a45f4: MOV dword ptr [EDX + 0x178],0x8
// 004a45fe: PUSH EAX
// 004a45ff: MOV dword ptr [EDX + 0x38],0x1
// 004a4606: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004a460b: ADD ESP,0xc
// 004a460e: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4615: XOR EDX,EDX
// 004a4617: MOV ECX,dword ptr [EAX]
// 004a4619: MOV dword ptr [ESP + 0x14c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004a4620: TEST ECX,ECX
// 004a4622: JLE 0x004a46fb
//   XREF to: 004a46fb (CONDITIONAL_JUMP)
// 004a4628: MOV EDI,dword ptr [ESP + 0x14c]
//   Label: LAB_004a4628
//   XREF to: Stack[-0x14] (READ)
// 004a462f: PUSH EDI
// 004a4630: MOV EBP,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x4] (READ)
// 004a4637: PUSH EBP
// 004a4638: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a463d: ADD ESP,0x8
// 004a4640: MOV EDI,EAX
// 004a4642: XOR EBP,EBP
// 004a4644: MOV ESI,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a464b: XOR BL,BL
// 004a464d: MOV EDX,ESP
//   Label: LAB_004a464d
// 004a464f: MOV BH,byte ptr [EDI]
// 004a4651: MOV EAX,EDI
// 004a4653: CMP BL,BH
// 004a4655: JZ 0x004a4667
//   XREF to: 004a4667 (CONDITIONAL_JUMP)
// 004a4657: MOV BH,byte ptr [EAX]
//   Label: LAB_004a4657
// 004a4659: LEA ECX,[EAX + 0x1]
// 004a465c: CMP BH,0x9
// 004a465f: JNZ 0x004a46bd
//   XREF to: 004a46bd (CONDITIONAL_JUMP)
// 004a4665: MOV EAX,ECX
// 004a4667: MOV byte ptr [EDX],BL
//   Label: LAB_004a4667
//   XREF to: Stack[-0x160] (DATA)
// 004a4669: MOV EDI,EAX
// 004a466b: MOV EAX,ESP
// 004a466d: PUSH EAX
// 004a466e: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a4673: PUSH EAX
// 004a4674: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a4679: MOV EDX,dword ptr [ESI + 0x10]
// 004a467c: ADD ESP,0x8
// 004a467f: CMP EAX,EDX
// 004a4681: JLE 0x004a4686
//   XREF to: 004a4686 (CONDITIONAL_JUMP)
// 004a4683: MOV dword ptr [ESI + 0x10],EAX
// 004a4686: INC EBP
//   Label: LAB_004a4686
// 004a4687: MOV CL,byte ptr [EDI]
// 004a4689: ADD ESI,0x4
// 004a468c: CMP BL,CL
// 004a468e: JZ 0x004a46cc
//   XREF to: 004a46cc (CONDITIONAL_JUMP)
// 004a4694: CMP EBP,0xa
// 004a4697: JL 0x004a464d
//   XREF to: 004a464d (CONDITIONAL_JUMP)
// 004a4699: MOV EAX,0x623a7e
//   XREF to: 00623a7e (PARAM)
// 004a469e: MOV EDX,0xed6
// 004a46a3: PUSH 0x623a94
//   XREF to: 00623a94 (DATA)
// 004a46a8: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004a46ad: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004a46b3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a46b8: ADD ESP,0x4
// 004a46bb: JMP 0x004a464d
//   XREF to: 004a464d (UNCONDITIONAL_JUMP)
// 004a46bd: MOV AL,byte ptr [EAX]
//   Label: LAB_004a46bd
// 004a46bf: MOV byte ptr [EDX],AL
//   XREF to: Stack[-0x160] (DATA)
// 004a46c1: INC EDX
// 004a46c2: MOV BH,byte ptr [ECX]
// 004a46c4: MOV EAX,ECX
// 004a46c6: CMP BL,BH
// 004a46c8: JNZ 0x004a4657
//   XREF to: 004a4657 (CONDITIONAL_JUMP)
// 004a46ca: JMP 0x004a4667
//   XREF to: 004a4667 (UNCONDITIONAL_JUMP)
// 004a46cc: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a46cc
//   XREF to: Stack[0x4] (READ)
// 004a46d3: CMP EBP,dword ptr [EAX + 0x38]
// 004a46d6: JLE 0x004a46db
//   XREF to: 004a46db (CONDITIONAL_JUMP)
// 004a46d8: MOV dword ptr [EAX + 0x38],EBP
// 004a46db: MOV EBX,dword ptr [ESP + 0x14c]
//   Label: LAB_004a46db
//   XREF to: Stack[-0x14] (READ)
// 004a46e2: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a46e9: INC EBX
// 004a46ea: MOV ESI,dword ptr [EDX]
// 004a46ec: MOV dword ptr [ESP + 0x14c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004a46f3: CMP EBX,ESI
// 004a46f5: JL 0x004a4628
//   XREF to: 004a4628 (CONDITIONAL_JUMP)
// 004a46fb: MOV ESI,dword ptr [ESP + 0x164]
//   Label: LAB_004a46fb
//   XREF to: Stack[0x4] (READ)
// 004a4702: MOV ECX,0x28
// 004a4707: XOR EDI,EDI
// 004a4709: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4709
//   XREF to: Stack[0x4] (READ)
// 004a4710: MOV EAX,dword ptr [EAX + 0x38]
// 004a4713: DEC EAX
// 004a4714: CMP EDI,EAX
// 004a4716: JGE 0x004a4732
//   XREF to: 004a4732 (CONDITIONAL_JUMP)
// 004a4718: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004a471d: MOV EDX,EAX
// 004a471f: SAR EDX,0x1f
// 004a4722: IDIV ECX
// 004a4724: MOV EBX,dword ptr [ESI + 0x10]
// 004a4727: ADD ESI,0x4
// 004a472a: ADD EBX,EAX
// 004a472c: INC EDI
// 004a472d: MOV dword ptr [ESI + 0xc],EBX
// 004a4730: JMP 0x004a4709
//   XREF to: 004a4709 (UNCONDITIONAL_JUMP)
// 004a4732: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4732
//   XREF to: Stack[0x4] (READ)
// 004a4739: XOR EDX,EDX
// 004a473b: MOV ECX,dword ptr [EAX + 0x38]
// 004a473e: MOV dword ptr [EAX + 0x18c],0x0
// 004a4748: TEST ECX,ECX
// 004a474a: JLE 0x004a4770
//   XREF to: 004a4770 (CONDITIONAL_JUMP)
// 004a474c: MOV EBX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4753: MOV ECX,dword ptr [EAX + 0x10]
//   Label: LAB_004a4753
// 004a4756: ADD EAX,0x4
// 004a4759: MOV ESI,dword ptr [EBX + 0x18c]
// 004a475f: INC EDX
// 004a4760: ADD ESI,ECX
// 004a4762: MOV EDI,dword ptr [EBX + 0x38]
// 004a4765: MOV dword ptr [EBX + 0x18c],ESI
// 004a476b: CMP EDX,EDI
// 004a476d: JL 0x004a4753
//   XREF to: 004a4753 (CONDITIONAL_JUMP)
// 004a476f: NOP
// 004a4770: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4770
//   XREF to: Stack[0x4] (READ)
// 004a4777: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a477e: MOV EAX,dword ptr [EAX + 0x178]
// 004a4784: MOV EBP,dword ptr [EDX + 0x18c]
// 004a478a: ADD EAX,EAX
// 004a478c: ADD EBP,EAX
// 004a478e: MOV dword ptr [EDX + 0x18c],EBP
// 004a4794: MOV EDX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a479a: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004a479f: SHL EDX,0x2
// 004a47a2: SUB EAX,EDX
// 004a47a4: MOV ECX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a47ab: MOV EDX,EAX
// 004a47ad: MOV ECX,dword ptr [ECX + 0x174]
// 004a47b3: SAR EDX,0x1f
// 004a47b6: IDIV ECX
// 004a47b8: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a47bf: MOV dword ptr [EDX + 0x188],EAX
// 004a47c5: CMP EAX,0x1
// 004a47c8: JGE 0x004a47d4
//   XREF to: 004a47d4 (CONDITIONAL_JUMP)
// 004a47ca: MOV dword ptr [EDX + 0x188],0x1
// 004a47d4: MOV EDX,dword ptr [ESP + 0x164]
//   Label: LAB_004a47d4
//   XREF to: Stack[0x4] (READ)
// 004a47db: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a47e2: MOV ECX,dword ptr [EDX]
// 004a47e4: CMP ECX,dword ptr [EAX + 0x188]
// 004a47ea: JGE 0x004a47f2
//   XREF to: 004a47f2 (CONDITIONAL_JUMP)
// 004a47ec: MOV dword ptr [EDX + 0x188],ECX
// 004a47f2: MOV EDX,dword ptr [0x00679394]
//   Label: LAB_004a47f2
//   XREF to: 00679394 (READ)
// 004a47f8: LEA EAX,[EDX*0x8 + 0x0]
// 004a47ff: SUB EAX,EDX
// 004a4801: MOV EDX,EAX
// 004a4803: SAR EDX,0x1f
// 004a4806: SHL EDX,0x3
// 004a4809: SBB EAX,EDX
// 004a480b: SAR EAX,0x3
// 004a480e: MOV ECX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4815: MOV EDX,EAX
// 004a4817: MOV ECX,dword ptr [ECX + 0x18c]
// 004a481d: SAR EDX,0x1f
// 004a4820: IDIV ECX
// 004a4822: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4829: MOV dword ptr [EDX + 0x190],EAX
// 004a482f: CMP EAX,0x1
// 004a4832: JGE 0x004a483e
//   XREF to: 004a483e (CONDITIONAL_JUMP)
// 004a4834: MOV dword ptr [EDX + 0x190],0x1
// 004a483e: MOV EDX,dword ptr [ESP + 0x164]
//   Label: LAB_004a483e
//   XREF to: Stack[0x4] (READ)
// 004a4845: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a484c: MOV ESI,dword ptr [EDX + 0x188]
// 004a4852: MOV EAX,dword ptr [EAX]
// 004a4854: ADD EAX,ESI
// 004a4856: MOV ECX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a485d: LEA EDX,[EAX + -0x1]
// 004a4860: MOV EDI,dword ptr [ECX + 0x188]
// 004a4866: MOV EAX,EDX
// 004a4868: SAR EDX,0x1f
// 004a486b: IDIV EDI
// 004a486d: CMP EAX,dword ptr [ECX + 0x190]
// 004a4873: JGE 0x004a487b
//   XREF to: 004a487b (CONDITIONAL_JUMP)
// 004a4875: MOV dword ptr [ECX + 0x190],EAX
// 004a487b: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a487b
//   XREF to: Stack[0x4] (READ)
// 004a4882: MOV EDX,dword ptr [EAX + 0x3c]
// 004a4885: TEST EDX,EDX
// 004a4887: JLE 0x004a4898
//   XREF to: 004a4898 (CONDITIONAL_JUMP)
// 004a4889: MOV EAX,EDX
// 004a488b: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4892: MOV dword ptr [EDX + 0x190],EAX
// 004a4898: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4898
//   XREF to: Stack[0x4] (READ)
// 004a489f: MOV dword ptr [EAX + 0x1d8],0x0
// 004a48a9: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a48b0: MOV EAX,dword ptr [EAX + 0x188]
// 004a48b6: MOV ECX,dword ptr [EDX + 0x190]
// 004a48bc: IMUL EAX,ECX
// 004a48bf: CMP EAX,dword ptr [EDX]
// 004a48c1: JGE 0x004a48d6
//   XREF to: 004a48d6 (CONDITIONAL_JUMP)
// 004a48c3: CMP ECX,0x1
// 004a48c6: JLE 0x004a4cd9
//   XREF to: 004a4cd9 (CONDITIONAL_JUMP)
// 004a48cc: MOV dword ptr [EDX + 0x1d8],0x2
// 004a48d6: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a48d6
//   XREF to: Stack[0x4] (READ)
// 004a48dd: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a48e4: MOV EAX,dword ptr [EAX + 0x18c]
// 004a48ea: IMUL EAX,dword ptr [EDX + 0x190]
// 004a48f1: LEA EBP,[EAX + 0x8]
// 004a48f4: MOV ECX,dword ptr [EDX + 0x174]
// 004a48fa: MOV EAX,dword ptr [EDX + 0x188]
// 004a4900: IMUL EAX,ECX
// 004a4903: LEA ESI,[EAX + 0x6]
// 004a4906: CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   XREF to: 004a6490 (UNCONDITIONAL_CALL)
// 004a490b: MOV EBX,EAX
// 004a490d: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004a4914: CALL shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   XREF to: 004a64b0 (UNCONDITIONAL_CALL)
// 004a4919: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4920: MOV EDI,dword ptr [EDX + 0x1d8]
// 004a4926: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004a492d: CMP EDI,0x1
// 004a4930: JNZ 0x004a4ce8
//   XREF to: 004a4ce8 (CONDITIONAL_JUMP)
// 004a4936: ADD EBP,EBX
// 004a4938: MOV EAX,[0x00679394]
//   Label: LAB_004a4938
//   XREF to: 00679394 (READ)
// 004a493d: MOV EDX,EAX
// 004a493f: SAR EDX,0x1f
// 004a4942: SHL EDX,0x7
// 004a4945: SBB EAX,EDX
// 004a4947: SAR EAX,0x7
// 004a494a: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004a4951: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004a4956: MOV EDX,EAX
// 004a4958: MOV ECX,0x60
// 004a495d: SAR EDX,0x1f
// 004a4960: IDIV ECX
// 004a4962: XOR EBX,EBX
// 004a4964: XOR EDI,EDI
// 004a4966: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004a496d: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4974: MOV dword ptr [ESP + 0x140],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004a497b: MOV dword ptr [ESP + 0x144],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a4982: MOV DL,byte ptr [EAX + 0x44]
// 004a4985: MOV dword ptr [ESP + 0x148],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004a498c: TEST DL,DL
// 004a498e: JZ 0x004a49aa
//   XREF to: 004a49aa (CONDITIONAL_JUMP)
// 004a4990: ADD EAX,0x44
// 004a4993: PUSH EAX
// 004a4994: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 004a4999: MOV ECX,0x1
// 004a499e: ADD ESP,0x4
// 004a49a1: MOV EDI,EAX
// 004a49a3: MOV dword ptr [ESP + 0x148],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004a49aa: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a49aa
//   XREF to: Stack[0x4] (READ)
// 004a49b1: CMP byte ptr [EAX + 0xa8],0x0
// 004a49b8: JZ 0x004a49d5
//   XREF to: 004a49d5 (CONDITIONAL_JUMP)
// 004a49ba: ADD EAX,0xa8
// 004a49bf: PUSH EAX
// 004a49c0: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 004a49c5: ADD ESP,0x4
// 004a49c8: CMP EAX,EDI
// 004a49ca: JLE 0x004a49ce
//   XREF to: 004a49ce (CONDITIONAL_JUMP)
// 004a49cc: MOV EDI,EAX
// 004a49ce: INC dword ptr [ESP + 0x148]
//   Label: LAB_004a49ce
//   XREF to: Stack[-0x18] (READ_WRITE)
// 004a49d5: CMP dword ptr [ESP + 0x148],0x0
//   Label: LAB_004a49d5
//   XREF to: Stack[-0x18] (READ)
// 004a49dd: JLE 0x004a4a5d
//   XREF to: 004a4a5d (CONDITIONAL_JUMP)
// 004a49e3: PUSH 0x623aaf
//   XREF to: 00623aaf (DATA)
// 004a49e8: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 004a49ed: ADD ESP,0x4
// 004a49f0: CMP EAX,EDI
// 004a49f2: JLE 0x004a49f6
//   XREF to: 004a49f6 (CONDITIONAL_JUMP)
// 004a49f4: MOV EDI,EAX
// 004a49f6: PUSH 0x0
//   Label: LAB_004a49f6
// 004a49f8: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 004a49fd: ADD ESP,0x4
// 004a4a00: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 004a4a07: MOV ECX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x34] (READ)
// 004a4a0e: DEC EDX
// 004a4a0f: IMUL EDX,ECX
// 004a4a12: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 004a4a19: IMUL ECX,EDI
// 004a4a1c: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 004a4a23: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a4a2a: ADD EBX,EAX
// 004a4a2c: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4a33: ADD ECX,EDX
// 004a4a35: MOV EDX,dword ptr [EAX + 0x1d8]
// 004a4a3b: MOV dword ptr [ESP + 0x140],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004a4a42: CMP EDX,0x2
// 004a4a45: JNZ 0x004a4a4e
//   XREF to: 004a4a4e (CONDITIONAL_JUMP)
// 004a4a47: ADD EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 004a4a4e: MOV EAX,dword ptr [ESP + 0x140]
//   Label: LAB_004a4a4e
//   XREF to: Stack[-0x20] (READ)
// 004a4a55: CMP EBP,EAX
// 004a4a57: JGE 0x004a4a5b
//   XREF to: 004a4a5b (CONDITIONAL_JUMP)
// 004a4a59: MOV EBP,EAX
// 004a4a5b: ADD ESI,EBX
//   Label: LAB_004a4a5b
// 004a4a5d: MOV EDX,dword ptr [ESP + 0x16c]
//   Label: LAB_004a4a5d
//   XREF to: Stack[0xc] (READ)
// 004a4a64: PUSH EDX
// 004a4a65: MOV ECX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[0x8] (READ)
// 004a4a6c: PUSH ECX
// 004a4a6d: PUSH ESI
// 004a4a6e: PUSH EBP
// 004a4a6f: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004a4a75: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004a4a76: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 004a4a7b: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a4a80: SUB EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a4a86: LEA EBP,[EAX + 0x1]
// 004a4a89: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a4a8f: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a4a94: SUB EAX,EDX
// 004a4a96: ADD ESP,0x14
// 004a4a99: LEA ESI,[EAX + 0x1]
// 004a4a9c: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4aa3: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4aaa: MOV ECX,dword ptr [EDX + 0x1d8]
// 004a4ab0: ADD EAX,0x1a4
// 004a4ab5: CMP ECX,0x1
// 004a4ab8: JNZ 0x004a4cf8
//   XREF to: 004a4cf8 (CONDITIONAL_JUMP)
// 004a4abe: MOV ECX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x30] (READ)
// 004a4ac5: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a4acb: SUB EBP,ECX
// 004a4acd: SUB EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 004a4ad4: SUB EDX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 004a4adb: PUSH EDX
// 004a4adc: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a4ae2: PUSH EDX
// 004a4ae3: MOV ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a4ae9: PUSH ECX
// 004a4aea: SUB EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x30] (READ)
// 004a4af1: INC EDX
// 004a4af2: PUSH EDX
//   Label: LAB_004a4af2
// 004a4af3: PUSH EAX
// 004a4af4: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 004a4af9: ADD ESP,0x14
// 004a4afc: CMP dword ptr [ESP + 0x148],0x0
//   Label: LAB_004a4afc
//   XREF to: Stack[-0x18] (READ)
// 004a4b04: JLE 0x004a4bd7
//   XREF to: 004a4bd7 (CONDITIONAL_JUMP)
// 004a4b0a: MOV EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 004a4b11: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a4b16: SUB EAX,EDX
// 004a4b18: INC EAX
// 004a4b19: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004a4b20: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4b27: CMP byte ptr [EAX + 0x44],0x0
// 004a4b2b: JZ 0x004a4b7a
//   XREF to: 004a4b7a (CONDITIONAL_JUMP)
// 004a4b2d: MOV ECX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 004a4b34: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4b3b: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a4b40: ADD EDX,0x44
// 004a4b43: INC EAX
// 004a4b44: PUSH EDX
// 004a4b45: SUB EAX,ECX
// 004a4b47: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x24] (READ)
// 004a4b4e: ADD EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x1c] (READ)
// 004a4b55: DEC EDX
// 004a4b56: PUSH EDX
// 004a4b57: LEA EDX,[EAX + EDI*0x1 + -0x1]
// 004a4b5b: PUSH EDX
// 004a4b5c: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x24] (READ)
// 004a4b63: PUSH EDX
// 004a4b64: PUSH EAX
// 004a4b65: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 004a4b6c: ADD EAX,0x1dc
// 004a4b71: PUSH EAX
// 004a4b72: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 004a4b77: ADD ESP,0x18
// 004a4b7a: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4b7a
//   XREF to: Stack[0x4] (READ)
// 004a4b81: CMP byte ptr [EAX + 0xa8],0x0
// 004a4b88: JZ 0x004a4bd5
//   XREF to: 004a4bd5 (CONDITIONAL_JUMP)
// 004a4b8a: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4b91: ADD EDX,0xa8
// 004a4b97: MOV ECX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 004a4b9e: PUSH EDX
// 004a4b9f: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x24] (READ)
// 004a4ba6: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a4bab: ADD EDX,ECX
// 004a4bad: INC EAX
// 004a4bae: DEC EDX
// 004a4baf: SUB EAX,EDI
// 004a4bb1: PUSH EDX
// 004a4bb2: LEA EDX,[EAX + EDI*0x1 + -0x1]
// 004a4bb6: PUSH EDX
// 004a4bb7: MOV EDI,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x24] (READ)
// 004a4bbe: PUSH EDI
// 004a4bbf: PUSH EAX
// 004a4bc0: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 004a4bc7: ADD EAX,0x2c0
// 004a4bcc: PUSH EAX
// 004a4bcd: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 004a4bd2: ADD ESP,0x18
// 004a4bd5: SUB ESI,EBX
//   Label: LAB_004a4bd5
// 004a4bd7: MOV ECX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4bd7
//   XREF to: Stack[0x4] (READ)
// 004a4bde: MOV EDX,ESI
// 004a4be0: MOV EAX,ESI
// 004a4be2: SAR EDX,0x1f
// 004a4be5: MOV ECX,dword ptr [ECX + 0x174]
// 004a4beb: IDIV ECX
// 004a4bed: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4bf4: MOV ECX,dword ptr [EDX + 0x18c]
// 004a4bfa: MOV dword ptr [EDX + 0x188],EAX
// 004a4c00: MOV EDX,EBP
// 004a4c02: MOV EAX,EBP
// 004a4c04: SAR EDX,0x1f
// 004a4c07: IDIV ECX
// 004a4c09: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4c10: MOV dword ptr [EDX + 0x190],EAX
// 004a4c16: MOV ECX,dword ptr [EDX + 0x188]
// 004a4c1c: MOV EAX,dword ptr [EDX]
// 004a4c1e: ADD EAX,ECX
// 004a4c20: LEA EDX,[EAX + -0x1]
// 004a4c23: MOV ECX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4c2a: MOV EAX,EDX
// 004a4c2c: MOV EBX,dword ptr [ECX + 0x188]
// 004a4c32: SAR EDX,0x1f
// 004a4c35: IDIV EBX
// 004a4c37: CMP EAX,dword ptr [ECX + 0x190]
// 004a4c3d: JGE 0x004a4c45
//   XREF to: 004a4c45 (CONDITIONAL_JUMP)
// 004a4c3f: MOV dword ptr [ECX + 0x190],EAX
// 004a4c45: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4c45
//   XREF to: Stack[0x4] (READ)
// 004a4c4c: CMP dword ptr [EAX + 0x190],0x1
// 004a4c53: JGE 0x004a4c5f
//   XREF to: 004a4c5f (CONDITIONAL_JUMP)
// 004a4c55: MOV dword ptr [EAX + 0x190],0x1
// 004a4c5f: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_004a4c5f
//   XREF to: Stack[0x4] (READ)
// 004a4c66: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4c6d: MOV EAX,dword ptr [EAX + 0x188]
// 004a4c73: IMUL EAX,dword ptr [EDX + 0x190]
// 004a4c7a: MOV ECX,dword ptr [EDX + 0x190]
// 004a4c80: MOV dword ptr [EDX + 0x184],EAX
// 004a4c86: MOV EDX,EBP
// 004a4c88: MOV EAX,EBP
// 004a4c8a: SAR EDX,0x1f
// 004a4c8d: IDIV ECX
// 004a4c8f: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4c96: MOV dword ptr [EDX + 0x180],0x0
// 004a4ca0: MOV dword ptr [EDX + 0x18c],EAX
// 004a4ca6: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004a4cab: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4cb2: MOV EBX,0xffffffff
// 004a4cb7: MOV byte ptr [EAX + 0x10c],0x0
// 004a4cbe: MOV dword ptr [0x02cf2afc],EBX
//   XREF to: 02cf2afc (WRITE)
// 004a4cc4: MOV dword ptr [EAX + 0x170],0x0
// 004a4cce: ADD ESP,0x150
// 004a4cd4: POP EBP
// 004a4cd5: POP EDI
// 004a4cd6: POP ESI
// 004a4cd7: POP EBX
// 004a4cd8: RET
// 004a4cd9: MOV dword ptr [EDX + 0x1d8],0x1
//   Label: LAB_004a4cd9
// 004a4ce3: JMP 0x004a48d6
//   XREF to: 004a48d6 (UNCONDITIONAL_JUMP)
// 004a4ce8: CMP EDI,0x2
//   Label: LAB_004a4ce8
// 004a4ceb: JNZ 0x004a4938
//   XREF to: 004a4938 (CONDITIONAL_JUMP)
// 004a4cf1: ADD ESI,EAX
// 004a4cf3: JMP 0x004a4938
//   XREF to: 004a4938 (UNCONDITIONAL_JUMP)
// 004a4cf8: CMP ECX,0x2
//   Label: LAB_004a4cf8
// 004a4cfb: JNZ 0x004a4afc
//   XREF to: 004a4afc (CONDITIONAL_JUMP)
// 004a4d01: SUB ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x2c] (READ)
// 004a4d08: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a4d0e: SUB EDX,EBX
// 004a4d10: PUSH EDX
// 004a4d11: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a4d17: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a4d1d: PUSH ECX
// 004a4d1e: SUB EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x2c] (READ)
// 004a4d25: SUB EDX,EBX
// 004a4d27: INC EDX
// 004a4d28: PUSH EDX
// 004a4d29: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a4d2f: JMP 0x004a4af2
//   XREF to: 004a4af2 (UNCONDITIONAL_JUMP)

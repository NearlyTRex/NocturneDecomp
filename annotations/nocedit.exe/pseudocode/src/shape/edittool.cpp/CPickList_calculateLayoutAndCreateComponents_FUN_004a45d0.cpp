// Name: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
// Address: 004a45d0
// Address Range: [[004a45d0, 004a4d33]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0(CPickList * this_ptr, char * dialog_title, int config_parameter)

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
  *(byte *)(in_stack_00000020 + 0x10c) = 0;
  g_LastClickItemIndex = -1;
  *(uint *)(in_stack_00000020 + 0x170) = 0;
  return;
}

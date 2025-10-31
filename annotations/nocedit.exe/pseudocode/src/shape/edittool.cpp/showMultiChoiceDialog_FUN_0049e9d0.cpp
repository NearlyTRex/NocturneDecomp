// Name: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049f055]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList * str_list, char * dialog_title, int dialog_mode)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (0049f060) at 0049f0c4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 (0049f180) at 0049f208 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 (0049f0f0) at 0049f154 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   TerminatedCString s_shape_edittool_cpp_0062301e
//   TerminatedCString s_Cancel_00623034
//   TerminatedCString s_Cancel_0062303b
//   TerminatedCString s_shape_edittool_cpp_00623042
//   WatcomTypeInfo g_CEdButtonTypeInfo
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_InputKeyMask = 0x7f
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char* g_CurrentDebugFilename = 0067d200
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   CEdButton* g_ActiveButton
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_memory.c_constructTypedObjectArray_FUN_00601272
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
          (CStrList *str_list,char *dialog_title,int dialog_mode)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  CEdButton *pCVar11;
  BADSPACEBASE *in_ESP;
  int left;
  CEdButton *pCVar12;
  char *pcVar13;
  int index;
  CEdButton *pCVar14;
  int iVar15;
  CStrList *in_stack_00000010;
  undefined4 uStack00000014;
  CStrList *in_stack_00000018;
  CStrList *in_stack_00000020;
  CStrList *in_stack_00000024;
  CEdButton *in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000060;
  CEdButton *in_stack_00000064;
  CEdButton *in_stack_00000078;
  CEdButton *in_stack_0000007c;
  int in_stack_00000080;
  void *in_stack_00000084;
  int in_stack_00000088;
  WatcomTypeInfo *element_count;
  WatcomTypeInfo *in_stack_fffffeb8;
  int local_38;
  int local_34;
  void *local_30;
  void *local_2c;
  int local_24;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if ((in_stack_00000010 == (CStrList *)0x0) || (iVar2 = in_stack_00000010->item_count, iVar2 < 1))
  {
    return -1;
  }
  element_count = &g_CEdButtonTypeInfo;
  pvVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar2 * 0xe4 + 4,"..\\shape\\edittool.cpp",0x412);
  pvVar4 = crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (pvVar4,(int)element_count,in_stack_fffffeb8);
  iVar10 = 0;
  local_38 = 0;
  if (0 < iVar2) {
    do {
      local_2c = pvVar4;
      pcVar13 = &stack0xfffffec0;
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000018,iVar10);
      do {
        cVar1 = *pcVar5;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar13 = &stack0xfffffeb8;
      do {
        pcVar5 = pcVar13;
        if (*pcVar13 == '^') goto LAB_0049eae7;
        if (*pcVar13 == '\0') break;
        pcVar5 = pcVar13 + 1;
        if (*pcVar5 == '^') goto LAB_0049eae7;
        pcVar13 = pcVar13 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_0049eae7:
      if (pcVar5 != (char *)0x0) {
        pcVar13 = pcVar5 + 1;
        *(char *)(local_34 + 4) = pcVar5[1];
        do {
          cVar1 = *pcVar13;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
                  (in_stack_00000010,iVar10,&stack0xfffffeb8);
      }
      iVar6 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(&stack0xfffffebc);
      if (local_38 < iVar6) {
        local_38 = iVar6;
      }
      local_2c = (void *)((int)local_2c + 0xe4);
      iVar10 = iVar10 + 1;
      pvVar4 = local_2c;
    } while (iVar10 < iVar2);
  }
  iVar10 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  if (local_34 < iVar10) {
    local_30 = (void *)shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  }
  iVar10 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
                (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar6 = g_WindowHeight / 0x60;
  if (in_stack_00000024 == (CStrList *)0x0) {
    iVar7 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar7 = iVar7 + -1;
    pvVar4 = (void *)((iVar2 + -1) * (iVar10 + -2) + (int)local_30 * iVar2 + 1);
  }
  else {
    iVar7 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar7 = (iVar6 + -2) * (iVar2 + -1) + iVar7 * iVar2;
    pvVar4 = local_2c;
  }
  pvVar8 = (void *)engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                             (g_EditorFont,(char *)in_stack_00000020);
  if ((int)pvVar8 < (int)pvVar4) {
    pvVar8 = pvVar4;
  }
  pcVar13 = (char *)0x0;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)pvVar8,iVar7,(char *)in_stack_00000024,0);
  iVar7 = g_ClipRight - g_ClipLeft;
  index = 0;
  if (0 < iVar2) {
    str_list = (CStrList *)0x0;
    iVar15 = 0;
    do {
      left = g_ClipLeft + ((iVar7 + 1) - (int)pvVar4) / 2;
      if (in_stack_00000030 == 0) {
        left = (int)&str_list->item_count + left + iVar15;
        shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000024,index);
        pvVar8 = local_30;
        iVar9 = g_ClipBottom;
      }
      else {
        shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000020,index);
        iVar9 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar9 = (int)local_2c + iVar9 + -1;
        pvVar8 = local_2c;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                ((CEdButton *)dialog_mode,left,(int)pvVar8,iVar6 + left + -1,iVar9,pcVar13);
      dialog_mode = dialog_mode + 0xe4;
      index = index + 1;
      str_list = (CStrList *)((int)str_list + iVar10 + -1);
      iVar15 = iVar15 + local_24;
    } while (index < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_InputKeyMask = 0x7f;
  uStack00000014 = 0;
  pCVar14 = (CEdButton *)0xfffffffe;
  do {
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
    if (iVar10 != 0) {
      pCVar14 = in_stack_00000028;
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar10 == 0) {
      (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if ((iVar10 != 0) && (iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar10 != 0)
       ) {
      in_stack_00000078 = (CEdButton *)(in_stack_00000078[-1].button_text + 199);
    }
    if ((int)in_stack_00000078 < iVar2) {
      if ((int)in_stack_00000078 < 0) {
        in_stack_00000078 = in_stack_00000064;
      }
    }
    else {
      in_stack_00000078 = (CEdButton *)0x0;
    }
    while (bVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
          CONCAT31(extraout_var,bVar3) != 0) {
      in_stack_00000084 =
           (void *)engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      cVar1 = (char)in_stack_0000007c->shortcut_key;
      pCVar11 = in_stack_0000007c;
      for (pCVar12 = (CEdButton *)0x0; (cVar1 != '\0' && ((int)pCVar12 < iVar2));
          pCVar12 = (CEdButton *)((int)&pCVar12->enabled + 1)) {
        iVar10 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pCVar11->shortcut_key);
        if (iVar10 == in_stack_00000088) {
          pCVar14 = pCVar12;
        }
        cVar1 = (char)pCVar11[1].shortcut_key;
        pCVar11 = pCVar11 + 1;
      }
      if (in_stack_0000007c == (CEdButton *)0x1b) {
        pCVar14 = (CEdButton *)0xffffffff;
      }
    }
    pCVar11 = (CEdButton *)0x0;
    pCVar12 = in_stack_00000078;
    if (0 < iVar2) {
      do {
        iVar10 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(pCVar12);
        if (iVar10 != 0) {
          pCVar14 = pCVar11;
        }
        if (pCVar12 == g_ActiveButton) {
          in_stack_0000007c = pCVar11;
        }
        pCVar11 = (CEdButton *)((int)&pCVar11->enabled + 1);
        pCVar12 = pCVar12 + 1;
      } while ((int)pCVar11 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    iVar10 = 0;
    pCVar12 = in_stack_0000007c;
    if (0 < iVar2) {
      do {
        bVar3 = iVar10 == in_stack_00000080;
        iVar10 = iVar10 + 1;
        shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(pCVar12,(uint)bVar3);
        pCVar12 = pCVar12 + 1;
      } while (iVar10 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (pCVar14 == (CEdButton *)0xfffffffe);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0x49d;
  pvVar4 = crt_memory_c_freeSingleInstance_FUN_005fe632(in_stack_00000084,&g_CEdButtonTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar4);
  g_InputKeyMask = in_stack_00000060;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return (int)pCVar14;
}


// Assembly code:
// 0049e9d0: PUSH EBX
//   Label: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
// 0049e9d1: PUSH ESI
// 0049e9d2: PUSH EBP
// 0049e9d3: SUB ESP,0x144
// 0049e9d9: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 0049e9e0: JNZ 0x0049ea05
//   XREF to: 0049ea05 (CONDITIONAL_JUMP)
// 0049e9e2: MOV ECX,0x622eae
//   XREF to: 00622eae (PARAM)
// 0049e9e7: MOV EBX,0x8d
// 0049e9ec: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049e9f1: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049e9f7: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049e9fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049ea02: ADD ESP,0x4
// 0049ea05: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049ea05
//   XREF to: 02cf1cd0 (READ)
// 0049ea0a: PUSH 0x6a
// 0049ea0c: MOV EDX,dword ptr [EAX + 0x3168]
// 0049ea12: PUSH EAX
// 0049ea13: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049ea19: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049ea1e: ADD ESP,0x8
// 0049ea21: MOV ESI,dword ptr [ESP + 0x158]
//   XREF to: Stack[0x8] (READ)
// 0049ea28: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049ea2d: TEST ESI,ESI
// 0049ea2f: JZ 0x0049ee8e
//   XREF to: 0049ee8e (CONDITIONAL_JUMP)
// 0049ea35: MOV EAX,dword ptr [ESI]
// 0049ea37: CMP EAX,0x1
// 0049ea3a: JL 0x0049ee8e
//   XREF to: 0049ee8e (CONDITIONAL_JUMP)
// 0049ea40: PUSH 0x65d4d0
//   XREF to: 0065d4d0 (DATA)
// 0049ea45: MOV EBP,EAX
// 0049ea47: PUSH EAX
// 0049ea48: SHL EAX,0x3
// 0049ea4b: SUB EAX,EBP
// 0049ea4d: SHL EAX,0x3
// 0049ea50: ADD EAX,EBP
// 0049ea52: PUSH 0x412
// 0049ea57: SHL EAX,0x2
// 0049ea5a: PUSH 0x62301e
//   XREF to: 0062301e (DATA)
// 0049ea5f: ADD EAX,0x4
// 0049ea62: PUSH EAX
// 0049ea63: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0049ea68: ADD ESP,0xc
// 0049ea6b: PUSH EAX
// 0049ea6c: CALL crt_memory.c_constructTypedObjectArray_FUN_00601272
//   XREF to: 00601272 (UNCONDITIONAL_CALL)
// 0049ea71: ADD ESP,0xc
// 0049ea74: TEST EAX,EAX
// 0049ea76: PUSH EDI
// 0049ea77: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0049ea7e: XOR EDI,EDI
// 0049ea80: XOR EBX,EBX
// 0049ea82: MOV dword ptr [ESP + 0x10c],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 0049ea89: TEST EBP,EBP
// 0049ea8b: JLE 0x0049eb64
//   XREF to: 0049eb64 (CONDITIONAL_JUMP)
// 0049ea91: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049ea98: PUSH EBX
//   Label: LAB_0049ea98
// 0049ea99: MOV ECX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 0049eaa0: PUSH ECX
// 0049eaa1: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x150] (DATA)
// 0049eaa5: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0049eaaa: ADD ESP,0x8
// 0049eaad: MOV ESI,EAX
// 0049eaaf: MOV DL,0x5e
// 0049eab1: PUSH EDI
// 0049eab2: MOV AL,byte ptr [ESI]
//   Label: LAB_0049eab2
// 0049eab4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x150] (DATA)
// 0049eab6: CMP AL,0x0
// 0049eab8: JZ 0x0049eaca
//   XREF to: 0049eaca (CONDITIONAL_JUMP)
// 0049eaba: MOV AL,byte ptr [ESI + 0x1]
// 0049eabd: ADD ESI,0x2
// 0049eac0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x14f] (WRITE)
// 0049eac3: ADD EDI,0x2
// 0049eac6: CMP AL,0x0
// 0049eac8: JNZ 0x0049eab2
//   XREF to: 0049eab2 (CONDITIONAL_JUMP)
// 0049eaca: POP EDI
//   Label: LAB_0049eaca
// 0049eacb: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x150] (DATA)
// 0049eacf: MOV AL,byte ptr [ESI]
//   Label: LAB_0049eacf
//   XREF to: Stack[-0x150] (DATA)
// 0049ead1: CMP AL,DL
// 0049ead3: JZ 0x0049eae7
//   XREF to: 0049eae7 (CONDITIONAL_JUMP)
// 0049ead5: CMP AL,0x0
// 0049ead7: JZ 0x0049eae5
//   XREF to: 0049eae5 (CONDITIONAL_JUMP)
// 0049ead9: INC ESI
// 0049eada: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x14f] (DATA)
// 0049eadc: CMP AL,DL
// 0049eade: JZ 0x0049eae7
//   XREF to: 0049eae7 (CONDITIONAL_JUMP)
// 0049eae0: INC ESI
// 0049eae1: CMP AL,0x0
// 0049eae3: JNZ 0x0049eacf
//   XREF to: 0049eacf (CONDITIONAL_JUMP)
// 0049eae5: SUB ESI,ESI
//   Label: LAB_0049eae5
// 0049eae7: MOV EDI,ESI
//   Label: LAB_0049eae7
// 0049eae9: TEST ESI,ESI
// 0049eaeb: JZ 0x0049eb2b
//   XREF to: 0049eb2b (CONDITIONAL_JUMP)
// 0049eaed: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x3c] (READ)
// 0049eaf4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x14c] (READ)
// 0049eaf7: INC ESI
// 0049eaf8: MOV byte ptr [EDX + 0x4],AL
// 0049eafb: PUSH EDI
// 0049eafc: MOV AL,byte ptr [ESI]
//   Label: LAB_0049eafc
//   XREF to: Stack[-0x14c] (DATA)
// 0049eafe: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x14d] (DATA)
// 0049eb00: CMP AL,0x0
// 0049eb02: JZ 0x0049eb14
//   XREF to: 0049eb14 (CONDITIONAL_JUMP)
// 0049eb04: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x14c] (READ)
// 0049eb07: ADD ESI,0x2
// 0049eb0a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x14d] (WRITE)
// 0049eb0d: ADD EDI,0x2
// 0049eb10: CMP AL,0x0
// 0049eb12: JNZ 0x0049eafc
//   XREF to: 0049eafc (CONDITIONAL_JUMP)
// 0049eb14: POP EDI
//   Label: LAB_0049eb14
// 0049eb15: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x150] (DATA)
// 0049eb19: PUSH EAX
// 0049eb1a: PUSH EBX
// 0049eb1b: MOV ESI,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x8] (READ)
// 0049eb22: PUSH ESI
// 0049eb23: CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
//   XREF to: 004a3120 (UNCONDITIONAL_CALL)
// 0049eb28: ADD ESP,0xc
// 0049eb2b: LEA EAX,[ESP + 0x4]
//   Label: LAB_0049eb2b
//   XREF to: Stack[-0x150] (DATA)
// 0049eb2f: PUSH EAX
// 0049eb30: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 0049eb35: ADD ESP,0x4
// 0049eb38: CMP EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x48] (READ)
// 0049eb3f: JLE 0x0049eb48
//   XREF to: 0049eb48 (CONDITIONAL_JUMP)
// 0049eb41: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0049eb48: MOV EAX,dword ptr [ESP + 0x118]
//   Label: LAB_0049eb48
//   XREF to: Stack[-0x3c] (READ)
// 0049eb4f: ADD EAX,0xe4
// 0049eb54: INC EBX
// 0049eb55: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049eb5c: CMP EBX,EBP
// 0049eb5e: JL 0x0049ea98
//   XREF to: 0049ea98 (CONDITIONAL_JUMP)
// 0049eb64: PUSH 0x623034
//   Label: LAB_0049eb64
//   XREF to: 00623034 (DATA)
// 0049eb69: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 0049eb6e: ADD ESP,0x4
// 0049eb71: CMP EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x48] (READ)
// 0049eb78: JLE 0x0049eb8e
//   XREF to: 0049eb8e (CONDITIONAL_JUMP)
// 0049eb7a: PUSH 0x62303b
//   XREF to: 0062303b (DATA)
// 0049eb7f: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 0049eb84: ADD ESP,0x4
// 0049eb87: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0049eb8e: MOV EAX,[0x00679394]
//   Label: LAB_0049eb8e
//   XREF to: 00679394 (READ)
// 0049eb93: MOV EDX,EAX
// 0049eb95: SAR EDX,0x1f
// 0049eb98: SHL EDX,0x7
// 0049eb9b: SBB EAX,EDX
// 0049eb9d: SAR EAX,0x7
// 0049eba0: MOV ESI,EAX
// 0049eba2: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0049eba7: MOV EDX,EAX
// 0049eba9: MOV EBX,0x60
// 0049ebae: SAR EDX,0x1f
// 0049ebb1: IDIV EBX
// 0049ebb3: MOV ECX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 0049ebba: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0049ebc1: LEA EAX,[EBP + -0x1]
// 0049ebc4: TEST ECX,ECX
// 0049ebc6: JNZ 0x0049ee9d
//   XREF to: 0049ee9d (CONDITIONAL_JUMP)
// 0049ebcc: LEA EDX,[ESI + -0x2]
// 0049ebcf: IMUL EAX,EDX
// 0049ebd2: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x48] (READ)
// 0049ebd9: IMUL EDX,EBP
// 0049ebdc: ADD EAX,EDX
// 0049ebde: PUSH ECX
// 0049ebdf: LEA EBX,[EAX + 0x1]
// 0049ebe2: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049ebe7: ADD ESP,0x4
// 0049ebea: LEA EDI,[EAX + -0x1]
// 0049ebed: MOV EAX,dword ptr [ESP + 0x158]
//   Label: LAB_0049ebed
//   XREF to: Stack[0x4] (READ)
// 0049ebf4: PUSH EAX
// 0049ebf5: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049ebfb: PUSH EDX
// 0049ebfc: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0049ec01: ADD ESP,0x8
// 0049ec04: MOV EDX,EAX
// 0049ec06: CMP EBX,EAX
// 0049ec08: JLE 0x0049ec0c
//   XREF to: 0049ec0c (CONDITIONAL_JUMP)
// 0049ec0a: MOV EDX,EBX
// 0049ec0c: PUSH 0x0
//   Label: LAB_0049ec0c
// 0049ec0e: MOV ECX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[0x4] (READ)
// 0049ec15: PUSH ECX
// 0049ec16: PUSH EDI
// 0049ec17: PUSH EDX
// 0049ec18: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0049ec1e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0049ec1f: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 0049ec24: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 0049ec29: SUB EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049ec2f: LEA EDX,[EAX + 0x1]
// 0049ec32: SUB EDX,EBX
// 0049ec34: MOV EAX,EDX
// 0049ec36: SAR EDX,0x1f
// 0049ec39: SUB EAX,EDX
// 0049ec3b: SAR EAX,0x1
// 0049ec3d: ADD ESP,0x14
// 0049ec40: XOR EDI,EDI
// 0049ec42: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0049ec49: TEST EBP,EBP
// 0049ec4b: JLE 0x0049ed70
//   XREF to: 0049ed70 (CONDITIONAL_JUMP)
// 0049ec51: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x40] (READ)
// 0049ec58: DEC EAX
// 0049ec59: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0049ec60: IMUL EAX,EDI
// 0049ec63: DEC ESI
// 0049ec64: MOV dword ptr [ESP + 0x11c],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0049ec6b: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049ec72: IMUL EAX,ESI,0x0
// 0049ec75: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0049ec7c: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x48] (READ)
// 0049ec83: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049ec8a: IMUL EAX,EDI
// 0049ec8d: MOV EBX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0049ec94: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0049ec9b: MOV ECX,dword ptr [ESP + 0x120]
//   Label: LAB_0049ec9b
//   XREF to: Stack[-0x34] (READ)
// 0049eca2: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049eca8: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 0049ecaf: ADD ESI,ECX
// 0049ecb1: TEST EAX,EAX
// 0049ecb3: JNZ 0x0049eec5
//   XREF to: 0049eec5 (CONDITIONAL_JUMP)
// 0049ecb9: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 0049ecc0: MOV EDX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x20] (READ)
// 0049ecc7: ADD ESI,EAX
// 0049ecc9: PUSH 0x0
// 0049eccb: ADD ESI,EDX
// 0049eccd: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049ecd2: ADD ESP,0x4
// 0049ecd5: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049ecdb: PUSH EDI
// 0049ecdc: SUB EDX,EAX
// 0049ecde: MOV ECX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 0049ece5: LEA EAX,[EDX + 0x1]
// 0049ece8: PUSH ECX
// 0049ece9: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0049ecf0: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0049ecf5: ADD ESP,0x8
// 0049ecf8: PUSH EAX
// 0049ecf9: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049ecfe: PUSH EAX
// 0049ecff: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x48] (READ)
// 0049ed06: ADD EAX,ESI
// 0049ed08: DEC EAX
// 0049ed09: PUSH EAX
// 0049ed0a: MOV EDX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x50] (READ)
// 0049ed11: PUSH EDX
//   Label: LAB_0049ed11
// 0049ed12: PUSH ESI
// 0049ed13: PUSH EBX
// 0049ed14: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 0049ed19: ADD ESP,0x18
// 0049ed1c: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x30] (READ)
// 0049ed23: MOV EDX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x1c] (READ)
// 0049ed2a: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x20] (READ)
// 0049ed31: MOV ESI,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 0049ed38: ADD EBX,0xe4
// 0049ed3e: ADD EDX,EAX
// 0049ed40: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x38] (READ)
// 0049ed47: INC EDI
// 0049ed48: ADD ECX,EAX
// 0049ed4a: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x2c] (READ)
// 0049ed51: MOV dword ptr [ESP + 0x138],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049ed58: ADD ESI,EAX
// 0049ed5a: MOV dword ptr [ESP + 0x134],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0049ed61: MOV dword ptr [ESP + 0x130],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0049ed68: CMP EDI,EBP
// 0049ed6a: JL 0x0049ec9b
//   XREF to: 0049ec9b (CONDITIONAL_JUMP)
// 0049ed70: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0049ed70
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049ed75: MOV EAX,[0x006793a8]
//   XREF to: 006793a8 (READ)
// 0049ed7a: MOV EDI,0x7f
// 0049ed7f: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0049ed86: XOR EAX,EAX
// 0049ed88: MOV dword ptr [0x006793a8],EDI
//   XREF to: 006793a8 (WRITE)
// 0049ed8e: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049ed95: LEA EAX,[EBP + -0x1]
// 0049ed98: MOV EDI,0xfffffffe
// 0049ed9d: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0049eda4: PUSH 0x1c
//   Label: LAB_0049eda4
// 0049eda6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049edab: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049edac: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049edae: CALL dword ptr [EBX + 0x4]
// 0049edb1: ADD ESP,0x8
// 0049edb4: TEST EAX,EAX
// 0049edb6: JZ 0x0049edbf
//   XREF to: 0049edbf (CONDITIONAL_JUMP)
// 0049edb8: MOV EDI,dword ptr [ESP + 0x140]
// 0049edbf: PUSH 0x2a
//   Label: LAB_0049edbf
// 0049edc1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049edc6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049edc7: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049edc9: CALL dword ptr [EBX]
// 0049edcb: ADD ESP,0x8
// 0049edce: TEST EAX,EAX
// 0049edd0: JZ 0x0049ef22
//   XREF to: 0049ef22 (CONDITIONAL_JUMP)
// 0049edd6: PUSH 0x2a
//   Label: LAB_0049edd6
// 0049edd8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049eddd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049edde: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049ede0: CALL dword ptr [EBX]
// 0049ede2: ADD ESP,0x8
// 0049ede5: TEST EAX,EAX
// 0049ede7: JZ 0x0049ee04
//   XREF to: 0049ee04 (CONDITIONAL_JUMP)
// 0049ede9: PUSH 0xf
// 0049edeb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049edf0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049edf1: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049edf3: CALL dword ptr [EBX + 0x4]
// 0049edf6: ADD ESP,0x8
// 0049edf9: TEST EAX,EAX
// 0049edfb: JZ 0x0049ee04
//   XREF to: 0049ee04 (CONDITIONAL_JUMP)
// 0049edfd: DEC dword ptr [ESP + 0x140]
// 0049ee04: MOV ESI,dword ptr [ESP + 0x140]
//   Label: LAB_0049ee04
// 0049ee0b: CMP EBP,ESI
// 0049ee0d: JG 0x0049ef46
//   XREF to: 0049ef46 (CONDITIONAL_JUMP)
// 0049ee13: XOR EDX,EDX
// 0049ee15: MOV dword ptr [ESP + 0x140],EDX
// 0049ee1c: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_0049ee1c
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0049ee21: TEST EAX,EAX
// 0049ee23: JZ 0x0049ef61
//   XREF to: 0049ef61 (CONDITIONAL_JUMP)
// 0049ee29: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0049ee2f: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 0049ee30: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0049ee35: ADD ESP,0x4
// 0049ee38: MOV EBX,dword ptr [ESP + 0x13c]
// 0049ee3f: XOR ESI,ESI
// 0049ee41: MOV DL,byte ptr [EBX + 0x4]
// 0049ee44: MOV dword ptr [ESP + 0x144],EAX
// 0049ee4b: TEST DL,DL
// 0049ee4d: JZ 0x0049ee7d
//   XREF to: 0049ee7d (CONDITIONAL_JUMP)
// 0049ee4f: CMP ESI,EBP
//   Label: LAB_0049ee4f
// 0049ee51: JGE 0x0049ee7d
//   XREF to: 0049ee7d (CONDITIONAL_JUMP)
// 0049ee53: XOR EAX,EAX
// 0049ee55: MOV AL,byte ptr [EBX + 0x4]
// 0049ee58: PUSH EAX
// 0049ee59: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0049ee5e: ADD ESP,0x4
// 0049ee61: CMP EAX,dword ptr [ESP + 0x144]
// 0049ee68: JNZ 0x0049ee6c
//   XREF to: 0049ee6c (CONDITIONAL_JUMP)
// 0049ee6a: MOV EDI,ESI
// 0049ee6c: MOV DH,byte ptr [EBX + 0xe8]
//   Label: LAB_0049ee6c
// 0049ee72: ADD EBX,0xe4
// 0049ee78: INC ESI
// 0049ee79: TEST DH,DH
// 0049ee7b: JNZ 0x0049ee4f
//   XREF to: 0049ee4f (CONDITIONAL_JUMP)
// 0049ee7d: CMP dword ptr [ESP + 0x144],0x1b
//   Label: LAB_0049ee7d
// 0049ee85: JNZ 0x0049ee1c
//   XREF to: 0049ee1c (CONDITIONAL_JUMP)
// 0049ee87: MOV EDI,0xffffffff
// 0049ee8c: JMP 0x0049ee1c
//   XREF to: 0049ee1c (UNCONDITIONAL_JUMP)
// 0049ee8e: MOV EAX,0xffffffff
//   Label: LAB_0049ee8e
// 0049ee93: ADD ESP,0x144
// 0049ee99: POP EBP
// 0049ee9a: POP ESI
// 0049ee9b: POP EBX
// 0049ee9c: RET
// 0049ee9d: MOV EDI,dword ptr [ESP + 0x114]
//   Label: LAB_0049ee9d
//   XREF to: Stack[-0x40] (READ)
// 0049eea4: SUB EDI,0x2
// 0049eea7: IMUL EDI,EAX
// 0049eeaa: PUSH 0x0
// 0049eeac: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049eeb1: IMUL EAX,EBP
// 0049eeb4: MOV EBX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 0049eebb: ADD ESP,0x4
// 0049eebe: ADD EDI,EAX
// 0049eec0: JMP 0x0049ebed
//   XREF to: 0049ebed (UNCONDITIONAL_JUMP)
// 0049eec5: PUSH 0x0
//   Label: LAB_0049eec5
// 0049eec7: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049eecc: IMUL EAX,EDI
// 0049eecf: ADD ESP,0x4
// 0049eed2: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049eed8: MOV ECX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x1c] (READ)
// 0049eedf: ADD EAX,EDX
// 0049eee1: ADD EAX,ECX
// 0049eee3: DEC EAX
// 0049eee4: PUSH EDI
// 0049eee5: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049eeec: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 0049eef3: PUSH EAX
// 0049eef4: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0049eef9: ADD ESP,0x8
// 0049eefc: PUSH EAX
// 0049eefd: PUSH 0x0
// 0049eeff: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049ef04: ADD ESP,0x4
// 0049ef07: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x4c] (READ)
// 0049ef0e: ADD EAX,EDX
// 0049ef10: DEC EAX
// 0049ef11: PUSH EAX
// 0049ef12: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x48] (READ)
// 0049ef19: ADD EAX,ESI
// 0049ef1b: DEC EAX
// 0049ef1c: PUSH EAX
// 0049ef1d: JMP 0x0049ed11
//   XREF to: 0049ed11 (UNCONDITIONAL_JUMP)
// 0049ef22: PUSH 0xf
//   Label: LAB_0049ef22
// 0049ef24: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049ef29: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049ef2a: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049ef2c: CALL dword ptr [EBX + 0x4]
// 0049ef2f: ADD ESP,0x8
// 0049ef32: TEST EAX,EAX
// 0049ef34: JZ 0x0049edd6
//   XREF to: 0049edd6 (CONDITIONAL_JUMP)
// 0049ef3a: INC dword ptr [ESP + 0x140]
// 0049ef41: JMP 0x0049edd6
//   XREF to: 0049edd6 (UNCONDITIONAL_JUMP)
// 0049ef46: TEST ESI,ESI
//   Label: LAB_0049ef46
// 0049ef48: JGE 0x0049ee1c
//   XREF to: 0049ee1c (CONDITIONAL_JUMP)
// 0049ef4e: MOV EAX,dword ptr [ESP + 0x12c]
// 0049ef55: MOV dword ptr [ESP + 0x140],EAX
// 0049ef5c: JMP 0x0049ee1c
//   XREF to: 0049ee1c (UNCONDITIONAL_JUMP)
// 0049ef61: XOR EBX,EBX
//   Label: LAB_0049ef61
// 0049ef63: TEST EBP,EBP
// 0049ef65: JLE 0x0049ef97
//   XREF to: 0049ef97 (CONDITIONAL_JUMP)
// 0049ef67: MOV ESI,dword ptr [ESP + 0x13c]
// 0049ef6e: PUSH ESI
//   Label: LAB_0049ef6e
// 0049ef6f: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 0049ef74: ADD ESP,0x4
// 0049ef77: TEST EAX,EAX
// 0049ef79: JZ 0x0049ef7d
//   XREF to: 0049ef7d (CONDITIONAL_JUMP)
// 0049ef7b: MOV EDI,EBX
// 0049ef7d: CMP ESI,dword ptr [0x02cf2b00]
//   Label: LAB_0049ef7d
//   XREF to: 02cf2b00 (READ)
// 0049ef83: JNZ 0x0049ef8c
//   XREF to: 0049ef8c (CONDITIONAL_JUMP)
// 0049ef85: MOV dword ptr [ESP + 0x140],EBX
// 0049ef8c: INC EBX
//   Label: LAB_0049ef8c
// 0049ef8d: ADD ESI,0xe4
// 0049ef93: CMP EBX,EBP
// 0049ef95: JL 0x0049ef6e
//   XREF to: 0049ef6e (CONDITIONAL_JUMP)
// 0049ef97: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_0049ef97
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049ef9d: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0049ef9e: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 0049efa3: ADD ESP,0x4
// 0049efa6: XOR EBX,EBX
// 0049efa8: TEST EBP,EBP
// 0049efaa: JLE 0x0049efd7
//   XREF to: 0049efd7 (CONDITIONAL_JUMP)
// 0049efac: MOV ESI,dword ptr [ESP + 0x13c]
// 0049efb3: CMP EBX,dword ptr [ESP + 0x140]
//   Label: LAB_0049efb3
// 0049efba: SETZ AL
// 0049efbd: AND EAX,0xff
// 0049efc2: PUSH EAX
// 0049efc3: PUSH ESI
// 0049efc4: INC EBX
// 0049efc5: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 0049efca: ADD ESP,0x8
// 0049efcd: ADD ESI,0xe4
// 0049efd3: CMP EBX,EBP
// 0049efd5: JL 0x0049efb3
//   XREF to: 0049efb3 (CONDITIONAL_JUMP)
// 0049efd7: PUSH 0x0
//   Label: LAB_0049efd7
// 0049efd9: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049efdf: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0049efe0: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0049efe5: ADD ESP,0x8
// 0049efe8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049efed: CMP EDI,-0x2
// 0049eff0: JZ 0x0049eda4
//   XREF to: 0049eda4 (CONDITIONAL_JUMP)
// 0049eff6: MOV EBX,0x623042
//   XREF to: 00623042 (PARAM)
// 0049effb: PUSH 0x65d4d0
//   XREF to: 0065d4d0 (DATA)
// 0049f000: MOV EBP,dword ptr [ESP + 0x140]
// 0049f007: MOV ESI,0x49d
// 0049f00c: PUSH EBP
// 0049f00d: MOV dword ptr [0x0067d20c],EBX
//   XREF to: 0067d20c (WRITE)
// 0049f013: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 0049f019: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0049f01e: ADD ESP,0x8
// 0049f021: PUSH EAX
// 0049f022: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0049f027: ADD ESP,0x4
// 0049f02a: MOV EAX,dword ptr [ESP + 0x110]
// 0049f031: MOV [0x006793a8],EAX
//   XREF to: 006793a8 (WRITE)
// 0049f036: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049f03b: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049f040: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0049f041: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0049f046: ADD ESP,0x4
// 0049f049: MOV EAX,EDI
// 0049f04b: POP EDI
// 0049f04c: ADD ESP,0x144
// 0049f052: POP EBP
// 0049f053: POP ESI
// 0049f054: POP EBX
// 0049f055: RET

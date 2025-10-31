// Name: shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
// Address: 004a4d40
// Address Range: [[004a4d40, 004a5230]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40(CPickList * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004daae6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3eb1 [UNCONDITIONAL_CALL]
// Globals:
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowHeight = 0xc8
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_EnabledTextColor
//   int g_BackgroundColor1
//   int g_SelectionHighlightColor
//   int g_HighlightColor1
//   int g_HighlightColor2
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipBottom
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_drawDashedLine_FUN_0049d290

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(CPickList *this_ptr)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_retaddr;
  CPickList *in_stack_00000008;
  int *in_stack_0000000c;
  char acStack_150 [292];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
  shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
  local_20 = g_ClipLeft;
  local_1c = in_stack_0000000c[0x60];
  local_28 = 0;
  if (0 < in_stack_0000000c[100]) {
    do {
      local_14 = g_ClipTop;
      local_24 = 0;
      if (0 < in_stack_0000000c[0x62]) {
        do {
          iVar8 = local_14;
          if (*in_stack_0000000c <= local_1c) break;
          if (local_1c == in_stack_0000000c[0x5f]) {
            iVar3 = local_20 + in_stack_0000000c[99] + -1;
            iVar5 = local_14 + in_stack_0000000c[0x5d] + -1;
            iVar4 = g_SelectionHighlightColor;
            if (in_stack_0000000c[0x5c] != 0) {
              iVar4 = g_HighlightColor1;
            }
            engine_2d_c_fillRectColor_FUN_00403170(local_20,local_14,iVar3,iVar5,iVar4);
            if (*(int *)(unaff_retaddr + 0x3a4) == -1) {
              g_ActiveRenderColor = 0;
              shape_edittool_cpp_drawDashedLine_FUN_0049d290(local_2c,iVar8,iVar3,iVar5,1);
            }
          }
          iVar8 = local_24;
          local_18 = 0;
          pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (&this_ptr->base_strlist,local_24);
          iVar4 = local_24 + in_stack_00000008->field9_0x178;
          local_1c = g_EnabledTextColor;
          iVar8 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0(in_stack_00000008,iVar8);
          if (iVar8 == 0) {
            local_18 = g_BackgroundColor1;
          }
          do {
            pcVar9 = &stack0xfffffeac;
            cVar1 = *pcVar7;
            pcVar2 = pcVar7;
            while ((pcVar7 = pcVar2, cVar1 != '\0' && (pcVar7 = pcVar2 + 1, *pcVar2 != '\t'))) {
              *pcVar9 = *pcVar2;
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar7;
              pcVar2 = pcVar7;
            }
            *pcVar9 = '\0';
            engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
            engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                      (g_EditorFont,acStack_150,unaff_ESI,iVar4,local_14,-1);
            iVar4 = iVar4 + 1;
          } while (*pcVar7 != '\0');
          local_14 = local_14 + in_stack_0000000c[0x5d];
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
        } while (local_24 < in_stack_0000000c[0x62]);
      }
      iVar8 = g_ActiveRenderColor;
      if (0 < local_28) {
        g_ActiveRenderColor = g_HighlightColor2;
        iVar3 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
        iVar4 = g_WindowHeight / 0x60;
        if (this_ptr->dialog_result == 2) {
          iVar5 = 3;
        }
        else {
          iVar5 = 1;
        }
        iVar6 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        if (in_stack_00000008->dialog_result != 2) {
          iVar3 = 0;
        }
        engine_2d_c_drawLine_FUN_004011b0
                  (local_24,g_ClipTop,local_24,g_ClipBottom - (iVar3 + iVar4 * iVar5 + iVar6));
      }
      local_28 = local_28 + 1;
      local_20 = local_20 + in_stack_0000000c[99];
      g_ActiveRenderColor = iVar8;
    } while (local_28 < in_stack_0000000c[100]);
  }
  if (in_stack_0000000c[0x76] == 1) {
    in_stack_0000000c[0x69] = in_stack_0000000c[0x60];
    in_stack_0000000c[0x6a] = *in_stack_0000000c;
    in_stack_0000000c[0x6b] = in_stack_0000000c[0x62];
  }
  else {
    if (in_stack_0000000c[0x76] != 2) goto LAB_004a4f19;
    in_stack_0000000c[0x69] = in_stack_0000000c[0x60] / in_stack_0000000c[0x62];
    in_stack_0000000c[0x6a] =
         (*in_stack_0000000c + in_stack_0000000c[0x62] + -1) / in_stack_0000000c[0x62];
    in_stack_0000000c[0x6b] = in_stack_0000000c[100];
  }
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)(in_stack_0000000c + 0x69));
LAB_004a4f19:
  if ((char)in_stack_0000000c[0x11] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
              ((CEdButton *)(in_stack_0000000c + 0x77),(uint)(in_stack_0000000c[0xe9] == 0));
  }
  if ((char)in_stack_0000000c[0x2a] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
              ((CEdButton *)(in_stack_0000000c + 0xb0),(uint)(in_stack_0000000c[0xe9] == 1));
  }
  if (in_stack_0000000c[0x10] != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
  return;
}


// Assembly code:
// 004a4d40: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
// 004a4d41: PUSH ESI
// 004a4d42: PUSH EDI
// 004a4d43: PUSH EBP
// 004a4d44: SUB ESP,0x14c
// 004a4d4a: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004a4d50: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004a4d51: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 004a4d56: ADD ESP,0x4
// 004a4d59: PUSH 0x1
// 004a4d5b: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004a4d61: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004a4d62: CALL shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
//   XREF to: 004a1230 (UNCONDITIONAL_CALL)
// 004a4d67: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a4d6c: ADD ESP,0x8
// 004a4d6f: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004a4d76: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4d7d: MOV EAX,dword ptr [EAX + 0x180]
// 004a4d83: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004a4d8a: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4d91: XOR EBX,EBX
// 004a4d93: MOV ESI,dword ptr [EAX + 0x190]
// 004a4d99: MOV dword ptr [ESP + 0x12c],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004a4da0: TEST ESI,ESI
// 004a4da2: JLE 0x004a4ec6
//   XREF to: 004a4ec6 (CONDITIONAL_JUMP)
// 004a4da8: MOV EAX,[0x02d0255c]
//   Label: LAB_004a4da8
//   XREF to: 02d0255c (READ)
// 004a4dad: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a4db4: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4dbb: XOR EDI,EDI
// 004a4dbd: MOV EBP,dword ptr [EAX + 0x188]
// 004a4dc3: MOV dword ptr [ESP + 0x130],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 004a4dca: TEST EBP,EBP
// 004a4dcc: JLE 0x004a4de4
//   XREF to: 004a4de4 (CONDITIONAL_JUMP)
// 004a4dce: MOV EDX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4dce
//   XREF to: Stack[0x4] (READ)
// 004a4dd5: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x24] (READ)
// 004a4ddc: CMP EAX,dword ptr [EDX]
// 004a4dde: JL 0x004a4ff2
//   XREF to: 004a4ff2 (CONDITIONAL_JUMP)
// 004a4de4: CMP dword ptr [ESP + 0x12c],0x0
//   Label: LAB_004a4de4
//   XREF to: Stack[-0x30] (READ)
// 004a4dec: JLE 0x004a4e85
//   XREF to: 004a4e85 (CONDITIONAL_JUMP)
// 004a4df2: MOV EAX,[0x02cf2ad8]
//   XREF to: 02cf2ad8 (READ)
// 004a4df7: MOV EBP,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 004a4dfd: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a4e02: CALL shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   XREF to: 004a64b0 (UNCONDITIONAL_CALL)
// 004a4e07: MOV EDI,EAX
// 004a4e09: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004a4e0e: MOV EDX,EAX
// 004a4e10: MOV ECX,0x60
// 004a4e15: SAR EDX,0x1f
// 004a4e18: IDIV ECX
// 004a4e1a: MOV EDX,EAX
// 004a4e1c: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4e23: CMP dword ptr [EAX + 0x1d8],0x2
// 004a4e2a: JNZ 0x004a51b0
//   XREF to: 004a51b0 (CONDITIONAL_JUMP)
// 004a4e30: MOV EAX,0x3
// 004a4e35: MOV ESI,EDX
//   Label: LAB_004a4e35
// 004a4e37: IMUL ESI,EAX
// 004a4e3a: PUSH 0x0
// 004a4e3c: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 004a4e41: ADD ESP,0x4
// 004a4e44: ADD ESI,EAX
// 004a4e46: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4e4d: CMP dword ptr [EAX + 0x1d8],0x2
// 004a4e54: JNZ 0x004a51ba
//   XREF to: 004a51ba (CONDITIONAL_JUMP)
// 004a4e5a: MOV EAX,EDI
// 004a4e5c: MOV EDX,dword ptr [0x02d02564]
//   Label: LAB_004a4e5c
//   XREF to: 02d02564 (READ)
// 004a4e62: ADD EAX,ESI
// 004a4e64: SUB EDX,EAX
// 004a4e66: PUSH EDX
// 004a4e67: MOV ESI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x28] (READ)
// 004a4e6e: PUSH ESI
// 004a4e6f: MOV EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a4e75: PUSH EDI
// 004a4e76: PUSH ESI
// 004a4e77: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004a4e7c: ADD ESP,0x10
// 004a4e7f: MOV dword ptr [0x02d02570],EBP
//   XREF to: 02d02570 (WRITE)
// 004a4e85: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4e85
//   XREF to: Stack[0x4] (READ)
// 004a4e8c: MOV EDI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x28] (READ)
// 004a4e93: MOV EBP,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x30] (READ)
// 004a4e9a: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4ea1: INC EBP
// 004a4ea2: MOV EAX,dword ptr [EAX + 0x18c]
// 004a4ea8: MOV ECX,dword ptr [EDX + 0x190]
// 004a4eae: ADD EDI,EAX
// 004a4eb0: MOV dword ptr [ESP + 0x12c],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 004a4eb7: MOV dword ptr [ESP + 0x134],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004a4ebe: CMP EBP,ECX
// 004a4ec0: JL 0x004a4da8
//   XREF to: 004a4da8 (CONDITIONAL_JUMP)
// 004a4ec6: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4ec6
//   XREF to: Stack[0x4] (READ)
// 004a4ecd: MOV ECX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4ed4: MOV EBX,dword ptr [EAX + 0x1d8]
// 004a4eda: ADD ECX,0x1a4
// 004a4ee0: CMP EBX,0x1
// 004a4ee3: JNZ 0x004a51c1
//   XREF to: 004a51c1 (CONDITIONAL_JUMP)
// 004a4ee9: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4ef0: MOV EAX,dword ptr [EAX + 0x180]
// 004a4ef6: MOV dword ptr [EDX + 0x1a4],EAX
// 004a4efc: MOV EAX,dword ptr [EDX]
// 004a4efe: MOV dword ptr [EDX + 0x1a8],EAX
// 004a4f04: MOV EAX,dword ptr [EDX + 0x188]
// 004a4f0a: PUSH ECX
// 004a4f0b: MOV dword ptr [EDX + 0x1ac],EAX
// 004a4f11: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   Label: LAB_004a4f11
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 004a4f16: ADD ESP,0x4
// 004a4f19: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4f19
//   XREF to: Stack[0x4] (READ)
// 004a4f20: CMP byte ptr [EAX + 0x44],0x0
// 004a4f24: JZ 0x004a4f4b
//   XREF to: 004a4f4b (CONDITIONAL_JUMP)
// 004a4f26: CMP dword ptr [EAX + 0x3a4],0x0
// 004a4f2d: SETZ AL
// 004a4f30: AND EAX,0xff
// 004a4f35: PUSH EAX
// 004a4f36: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4f3d: ADD EAX,0x1dc
// 004a4f42: PUSH EAX
// 004a4f43: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 004a4f48: ADD ESP,0x8
// 004a4f4b: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4f4b
//   XREF to: Stack[0x4] (READ)
// 004a4f52: CMP byte ptr [EAX + 0xa8],0x0
// 004a4f59: JZ 0x004a4f80
//   XREF to: 004a4f80 (CONDITIONAL_JUMP)
// 004a4f5b: CMP dword ptr [EAX + 0x3a4],0x1
// 004a4f62: SETZ AL
// 004a4f65: AND EAX,0xff
// 004a4f6a: PUSH EAX
// 004a4f6b: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a4f72: ADD EAX,0x2c0
// 004a4f77: PUSH EAX
// 004a4f78: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 004a4f7d: ADD ESP,0x8
// 004a4f80: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4f80
//   XREF to: Stack[0x4] (READ)
// 004a4f87: MOV EBX,dword ptr [EAX + 0x40]
// 004a4f8a: TEST EBX,EBX
// 004a4f8c: JZ 0x004a5216
//   XREF to: 004a5216 (CONDITIONAL_JUMP)
// 004a4f92: ADD ESP,0x14c
// 004a4f98: POP EBP
// 004a4f99: POP EDI
// 004a4f9a: POP ESI
// 004a4f9b: POP EBX
// 004a4f9c: RET
// 004a4f9d: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_004a4f9d
//   XREF to: Stack[0x4] (READ)
// 004a4fa4: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x1c] (READ)
// 004a4fab: MOV ECX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x24] (READ)
// 004a4fb2: MOV EAX,dword ptr [EAX + 0x174]
// 004a4fb8: MOV EBX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x2c] (READ)
// 004a4fbf: ADD EDX,EAX
// 004a4fc1: INC ECX
// 004a4fc2: MOV dword ptr [ESP + 0x140],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a4fc9: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a4fd0: INC EBX
// 004a4fd1: MOV dword ptr [ESP + 0x138],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004a4fd8: MOV ESI,dword ptr [EDX + 0x188]
// 004a4fde: MOV dword ptr [ESP + 0x130],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004a4fe5: CMP EBX,ESI
// 004a4fe7: JL 0x004a4dce
//   XREF to: 004a4dce (CONDITIONAL_JUMP)
// 004a4fed: JMP 0x004a4de4
//   XREF to: 004a4de4 (UNCONDITIONAL_JUMP)
// 004a4ff2: CMP EAX,dword ptr [EDX + 0x17c]
//   Label: LAB_004a4ff2
// 004a4ff8: JNZ 0x004a507b
//   XREF to: 004a507b (CONDITIONAL_JUMP)
// 004a4ffe: MOV ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x28] (READ)
// 004a5005: MOV EAX,EDX
// 004a5007: MOV EDI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x1c] (READ)
// 004a500e: MOV EDX,dword ptr [EDX + 0x18c]
// 004a5014: MOV ECX,dword ptr [EAX + 0x174]
// 004a501a: MOV EBX,dword ptr [EAX + 0x170]
// 004a5020: ADD ESI,EDX
// 004a5022: ADD EDI,ECX
// 004a5024: DEC ESI
// 004a5025: DEC EDI
// 004a5026: TEST EBX,EBX
// 004a5028: JZ 0x004a517d
//   XREF to: 004a517d (CONDITIONAL_JUMP)
// 004a502e: MOV EAX,[0x02cf2ad4]
//   XREF to: 02cf2ad4 (READ)
// 004a5033: PUSH EAX
//   Label: LAB_004a5033
// 004a5034: PUSH EDI
// 004a5035: PUSH ESI
// 004a5036: MOV EBP,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x1c] (READ)
// 004a503d: PUSH EBP
// 004a503e: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x28] (READ)
// 004a5045: PUSH EAX
// 004a5046: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004a504b: ADD ESP,0x14
// 004a504e: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a5055: CMP dword ptr [EAX + 0x3a4],-0x1
// 004a505c: JNZ 0x004a507b
//   XREF to: 004a507b (CONDITIONAL_JUMP)
// 004a505e: PUSH 0x1
// 004a5060: PUSH EDI
// 004a5061: PUSH ESI
// 004a5062: PUSH EBP
// 004a5063: MOV ESI,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x28] (READ)
// 004a506a: XOR ECX,ECX
// 004a506c: PUSH ESI
// 004a506d: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004a5073: CALL shape_edittool.cpp_drawDashedLine_FUN_0049d290
//   XREF to: 0049d290 (UNCONDITIONAL_CALL)
// 004a5078: ADD ESP,0x14
// 004a507b: MOV EBP,dword ptr [ESP + 0x138]
//   Label: LAB_004a507b
//   XREF to: Stack[-0x24] (READ)
// 004a5082: PUSH EBP
// 004a5083: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[0x4] (READ)
// 004a508a: XOR EDI,EDI
// 004a508c: PUSH EAX
// 004a508d: MOV dword ptr [ESP + 0x14c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004a5094: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a5099: ADD ESP,0x8
// 004a509c: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a50a3: MOV EDI,EAX
// 004a50a5: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x28] (READ)
// 004a50ac: ADD EAX,dword ptr [EDX + 0x178]
// 004a50b2: PUSH EBP
// 004a50b3: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a50ba: MOV EAX,[0x02cf2ac8]
//   XREF to: 02cf2ac8 (READ)
// 004a50bf: PUSH EDX
// 004a50c0: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004a50c7: CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
//   XREF to: 004a54e0 (UNCONDITIONAL_CALL)
// 004a50cc: ADD ESP,0x8
// 004a50cf: TEST EAX,EAX
// 004a50d1: JZ 0x004a5187
//   XREF to: 004a5187 (CONDITIONAL_JUMP)
// 004a50d7: MOV EBP,dword ptr [ESP + 0x144]
//   Label: LAB_004a50d7
//   XREF to: Stack[-0x18] (READ)
// 004a50de: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a50e5: SHL EBP,0x2
// 004a50e8: ADD EBP,EDX
// 004a50ea: XOR BL,BL
// 004a50ec: MOV EDX,ESP
//   Label: LAB_004a50ec
// 004a50ee: MOV BH,byte ptr [EDI]
// 004a50f0: MOV EAX,EDI
// 004a50f2: CMP BL,BH
// 004a50f4: JZ 0x004a51a9
//   XREF to: 004a51a9 (CONDITIONAL_JUMP)
// 004a50fa: MOV BH,byte ptr [EAX]
//   Label: LAB_004a50fa
// 004a50fc: LEA ECX,[EAX + 0x1]
// 004a50ff: CMP BH,0x9
// 004a5102: JNZ 0x004a5198
//   XREF to: 004a5198 (CONDITIONAL_JUMP)
// 004a5108: MOV ESI,ECX
// 004a510a: MOV byte ptr [EDX],BL
//   Label: LAB_004a510a
//   XREF to: Stack[-0x15c] (DATA)
// 004a510c: PUSH 0xffff
// 004a5111: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004a5116: ADD ESP,0x4
// 004a5119: PUSH -0x1
// 004a511b: MOV ECX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 004a5122: PUSH ECX
// 004a5123: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x1c] (READ)
// 004a512a: PUSH EAX
// 004a512b: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x14] (READ)
// 004a5132: PUSH EDX
// 004a5133: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x15c] (DATA)
// 004a5137: PUSH EAX
// 004a5138: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a513e: PUSH ECX
// 004a513f: MOV EDI,ESI
// 004a5141: ADD EBP,0x4
// 004a5144: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004a5149: ADD ESP,0x18
// 004a514c: MOV EAX,dword ptr [EBP + 0xc]
// 004a514f: MOV ECX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x18] (READ)
// 004a5156: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x14] (READ)
// 004a515d: INC ECX
// 004a515e: ADD EDX,EAX
// 004a5160: MOV dword ptr [ESP + 0x144],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004a5167: MOV CL,byte ptr [ESI]
// 004a5169: MOV dword ptr [ESP + 0x148],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004a5170: CMP BL,CL
// 004a5172: JZ 0x004a4f9d
//   XREF to: 004a4f9d (CONDITIONAL_JUMP)
// 004a5178: JMP 0x004a50ec
//   XREF to: 004a50ec (UNCONDITIONAL_JUMP)
// 004a517d: MOV EAX,[0x02cf2ad0]
//   Label: LAB_004a517d
//   XREF to: 02cf2ad0 (READ)
// 004a5182: JMP 0x004a5033
//   XREF to: 004a5033 (UNCONDITIONAL_JUMP)
// 004a5187: MOV EAX,[0x02cf2acc]
//   Label: LAB_004a5187
//   XREF to: 02cf2acc (READ)
// 004a518c: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004a5193: JMP 0x004a50d7
//   XREF to: 004a50d7 (UNCONDITIONAL_JUMP)
// 004a5198: MOV AL,byte ptr [EAX]
//   Label: LAB_004a5198
// 004a519a: MOV byte ptr [EDX],AL
//   XREF to: Stack[-0x15c] (DATA)
// 004a519c: INC EDX
// 004a519d: MOV BH,byte ptr [ECX]
// 004a519f: MOV EAX,ECX
// 004a51a1: CMP BL,BH
// 004a51a3: JNZ 0x004a50fa
//   XREF to: 004a50fa (CONDITIONAL_JUMP)
// 004a51a9: MOV ESI,EAX
//   Label: LAB_004a51a9
// 004a51ab: JMP 0x004a510a
//   XREF to: 004a510a (UNCONDITIONAL_JUMP)
// 004a51b0: MOV EAX,0x1
//   Label: LAB_004a51b0
// 004a51b5: JMP 0x004a4e35
//   XREF to: 004a4e35 (UNCONDITIONAL_JUMP)
// 004a51ba: XOR EAX,EAX
//   Label: LAB_004a51ba
// 004a51bc: JMP 0x004a4e5c
//   XREF to: 004a4e5c (UNCONDITIONAL_JUMP)
// 004a51c1: CMP EBX,0x2
//   Label: LAB_004a51c1
// 004a51c4: JNZ 0x004a4f19
//   XREF to: 004a4f19 (CONDITIONAL_JUMP)
// 004a51ca: MOV EDX,dword ptr [EAX + 0x180]
// 004a51d0: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 004a51d7: MOV EAX,EDX
// 004a51d9: MOV EDI,dword ptr [ESI + 0x188]
// 004a51df: SAR EDX,0x1f
// 004a51e2: IDIV EDI
// 004a51e4: MOV dword ptr [ESI + 0x1a4],EAX
// 004a51ea: MOV EBP,dword ptr [ESI + 0x188]
// 004a51f0: MOV EAX,dword ptr [ESI]
// 004a51f2: ADD EAX,EBP
// 004a51f4: LEA EDX,[EAX + -0x1]
// 004a51f7: MOV EAX,EDX
// 004a51f9: SAR EDX,0x1f
// 004a51fc: IDIV EBP
// 004a51fe: MOV dword ptr [ESI + 0x1a8],EAX
// 004a5204: MOV EAX,dword ptr [ESI + 0x190]
// 004a520a: PUSH ECX
// 004a520b: MOV dword ptr [ESI + 0x1ac],EAX
// 004a5211: JMP 0x004a4f11
//   XREF to: 004a4f11 (UNCONDITIONAL_JUMP)
// 004a5216: PUSH EBX
//   Label: LAB_004a5216
// 004a5217: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004a521d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004a521e: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 004a5223: ADD ESP,0x8
// 004a5226: ADD ESP,0x14c
// 004a522c: POP EBP
// 004a522d: POP EDI
// 004a522e: POP ESI
// 004a522f: POP EBX
// 004a5230: RET

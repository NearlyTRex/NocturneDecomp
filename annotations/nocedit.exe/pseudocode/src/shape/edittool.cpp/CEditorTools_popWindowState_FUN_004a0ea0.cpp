// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
// Address: 004a0ea0
// Address Range: [[004a0ea0, 004a0f79]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0 (0049dfb0) at 0049dfc2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 (004a0dd0) at 004a0e81 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623426
//   TerminatedCString s_CEditorTools_popWindow_c_0062343c
//   TerminatedCString s_shape_edittool_cpp_00623477
//   int g_WindowStackCount
//   SWindow[5] g_WindowStack
//   undefined4 DAT_02cf1cf0
//   undefined4 DAT_02cf1cf4
//   undefined4 DAT_02cf1cf8
//   undefined4 DAT_02cf1cfc
//   undefined4 DAT_02cf1d00
//   undefined4 DAT_02cf1d04
//   undefined4 DAT_02cf1d08
//   undefined4 DAT_02cf1d0c
//   undefined4 DAT_02cf1d10
//   undefined4 DAT_02cf1d14
//   undefined4 DAT_02cf1ea8
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ViewportWidth
//   int g_ViewportHeight
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x856;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::popWindow() called but no window was opened!");
  }
  iVar1 = g_WindowStackCount + -1;
  g_WindowStackCount = iVar1;
  if (g_WindowStack[iVar1].screen_backup_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_WindowStack[iVar1].screen_backup_buffer,"..\\shape\\edittool.cpp",0x861);
    g_WindowStack[iVar1].screen_backup_buffer = (void *)0x0;
  }
  g_ClipLeft = g_WindowStack[iVar1].saved_clip_left;
  g_ClipTop = g_WindowStack[iVar1].saved_clip_top;
  g_ClipRight = g_WindowStack[iVar1].saved_clip_right;
  g_ClipBottom = g_WindowStack[iVar1].saved_clip_bottom;
  g_ViewportCenterXFixed = g_WindowStack[iVar1].saved_viewport_center_x;
  g_ViewportCenterYFixed = g_WindowStack[iVar1].saved_viewport_center_y;
  g_ViewportRightFixed = g_WindowStack[iVar1].saved_viewport_right;
  g_ViewportBottomFixed = g_WindowStack[iVar1].saved_viewport_bottom;
  g_ViewportWidth = g_WindowStack[iVar1].saved_viewport_width;
  g_ViewportHeight = g_WindowStack[iVar1].saved_viewport_height;
  return;
}


// Assembly code:
// 004a0ea0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
// 004a0ea1: PUSH ESI
// 004a0ea2: PUSH EDI
// 004a0ea3: CMP dword ptr [0x02cf1cdc],0x1
//   XREF to: 02cf1cdc (READ)
// 004a0eaa: JL 0x004a0f30
//   XREF to: 004a0f30 (CONDITIONAL_JUMP)
// 004a0eb0: MOV ESI,dword ptr [0x02cf1cdc]
//   Label: LAB_004a0eb0
//   XREF to: 02cf1cdc (READ)
// 004a0eb6: DEC ESI
// 004a0eb7: MOV EBX,ESI
// 004a0eb9: SHL EBX,0x4
// 004a0ebc: SUB EBX,ESI
// 004a0ebe: SHL EBX,0x2
// 004a0ec1: ADD EBX,ESI
// 004a0ec3: SHL EBX,0x3
// 004a0ec6: ADD EBX,0x2cf1ce0
//   XREF to: 02cf1ce0 (DATA)
// 004a0ecc: MOV EDI,dword ptr [EBX + 0x1c8]
//   XREF to: 02cf1ea8 (DATA)
// 004a0ed2: MOV dword ptr [0x02cf1cdc],ESI
//   XREF to: 02cf1cdc (WRITE)
// 004a0ed8: TEST EDI,EDI
// 004a0eda: JNZ 0x004a0f58
//   XREF to: 004a0f58 (CONDITIONAL_JUMP)
// 004a0edc: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_004a0edc
//   XREF to: 02cf1cf0 (DATA)
// 004a0edf: MOV [0x02d02558],EAX
//   XREF to: 02d02558 (WRITE)
// 004a0ee4: MOV EAX,dword ptr [EBX + 0x14]
//   XREF to: 02cf1cf4 (DATA)
// 004a0ee7: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 004a0eec: MOV EAX,dword ptr [EBX + 0x18]
//   XREF to: 02cf1cf8 (DATA)
// 004a0eef: MOV [0x02d02560],EAX
//   XREF to: 02d02560 (WRITE)
// 004a0ef4: MOV EAX,dword ptr [EBX + 0x1c]
//   XREF to: 02cf1cfc (DATA)
// 004a0ef7: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 004a0efc: MOV EAX,dword ptr [EBX + 0x20]
//   XREF to: 02cf1d00 (DATA)
// 004a0eff: MOV [0x02d02548],EAX
//   XREF to: 02d02548 (WRITE)
// 004a0f04: MOV EAX,dword ptr [EBX + 0x24]
//   XREF to: 02cf1d04 (DATA)
// 004a0f07: MOV [0x02d0254c],EAX
//   XREF to: 02d0254c (WRITE)
// 004a0f0c: MOV EAX,dword ptr [EBX + 0x28]
//   XREF to: 02cf1d08 (DATA)
// 004a0f0f: MOV [0x02d02550],EAX
//   XREF to: 02d02550 (WRITE)
// 004a0f14: MOV EAX,dword ptr [EBX + 0x2c]
//   XREF to: 02cf1d0c (DATA)
// 004a0f17: MOV [0x02d02554],EAX
//   XREF to: 02d02554 (WRITE)
// 004a0f1c: MOV EAX,dword ptr [EBX + 0x30]
//   XREF to: 02cf1d10 (DATA)
// 004a0f1f: MOV [0x02d02568],EAX
//   XREF to: 02d02568 (WRITE)
// 004a0f24: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02cf1d14 (DATA)
// 004a0f27: MOV [0x02d0256c],EAX
//   XREF to: 02d0256c (WRITE)
// 004a0f2c: POP EDI
// 004a0f2d: POP ESI
// 004a0f2e: POP EBX
// 004a0f2f: RET
// 004a0f30: MOV ECX,0x623426
//   Label: LAB_004a0f30
//   XREF to: 00623426 (PARAM)
// 004a0f35: MOV EBX,0x856
// 004a0f3a: PUSH 0x62343c
//   XREF to: 0062343c (DATA)
// 004a0f3f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a0f45: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a0f4b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a0f50: ADD ESP,0x4
// 004a0f53: JMP 0x004a0eb0
//   XREF to: 004a0eb0 (UNCONDITIONAL_JUMP)
// 004a0f58: PUSH 0x861
//   Label: LAB_004a0f58
// 004a0f5d: PUSH 0x623477
//   XREF to: 00623477 (DATA)
// 004a0f62: PUSH EDI
// 004a0f63: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004a0f68: ADD ESP,0xc
// 004a0f6b: MOV dword ptr [EBX + 0x1c8],0x0
//   XREF to: 02cf1ea8 (DATA)
// 004a0f75: JMP 0x004a0edc
//   XREF to: 004a0edc (UNCONDITIONAL_JUMP)

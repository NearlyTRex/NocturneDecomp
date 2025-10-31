// Name: shape_edittool.cpp_CEditorTools_init_FUN_0049e020
// Address: 0049e020
// Address Range: [[0049e020, 0049e129]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_init_FUN_0049e020(CEditorTools * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80 (0049df80) at 0049dfa1 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02cf2a78
//   int g_WindowBorderColor1
//   int g_WindowBorderColor2
//   int g_TitleBarColor
//   int g_WindowFillColor
//   int g_WindowFontColor
//   HWND g_DialogParentWindow
//   CEditorTools* g_CUserInterfacePtr
//   int g_SelectionColor
//   int g_TextColor
//   int g_CursorColor
//   int g_StatusTextColor
//   int g_WindowStatusTextColor
//   undefined4 DAT_02cf2aac
//   int g_ButtonColor
//   int g_ProgressBarBackgroundColor
//   int g_ProgressBarFillColor
//   int g_ProgressBarBorderColor
//   int g_ProgressBarTextColor
//   int g_AxisLabelTextColor
//   int g_EnabledTextColor
//   int g_BackgroundColor1
//   int g_SelectionHighlightColor
//   int g_HighlightColor1
//   int g_HighlightColor2
//   int g_ShadowColor
//   int g_ShadowHighlightColor
//   int g_ButtonFaceColor
//   int g_UITextColor
//   int g_InsetColor
//   int g_HighlightColor
//   int g_BackgroundColor2

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0049e020(CEditorTools *this_ptr)

{
  g_WindowBorderColor1 = 7;
  g_WindowBorderColor2 = 7;
  g_WindowFillColor = 0;
  DAT_02cf2a78 = 0;
  g_TitleBarColor = 0xfb;
  g_WindowFontColor = 0xff;
  g_DialogParentWindow = (HWND)0xff;
  g_CUserInterfacePtr = (CEditorTools *)0xff;
  g_TextColor = 0xff;
  g_CursorColor = 0xff;
  g_StatusTextColor = 0xff;
  g_WindowStatusTextColor = 0xff;
  DAT_02cf2aac = 0xff;
  g_ProgressBarFillColor = 4;
  g_ProgressBarBorderColor = 0xff;
  g_ProgressBarTextColor = 0xff;
  g_AxisLabelTextColor = 0xff;
  g_EnabledTextColor = 0xff;
  g_HighlightColor = 0xff;
  g_SelectionColor = 4;
  g_ButtonColor = 0xfa;
  g_HighlightColor1 = 0xfa;
  g_HighlightColor2 = 7;
  g_ShadowColor = 0;
  g_ShadowHighlightColor = 7;
  g_ButtonFaceColor = 7;
  g_ProgressBarBackgroundColor = 0;
  g_BackgroundColor1 = 0xf8;
  g_BackgroundColor2 = 0xf8;
  g_SelectionHighlightColor = 2;
  g_UITextColor = 0;
  g_InsetColor = 0;
  return;
}


// Assembly code:
// 0049e020: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_init_FUN_0049e020
// 0049e021: PUSH ESI
// 0049e022: PUSH EDI
// 0049e023: PUSH EBP
// 0049e024: MOV ECX,0x7
// 0049e029: MOV ESI,0xfb
// 0049e02e: MOV EBP,0xff
// 0049e033: MOV EBX,0x4
// 0049e038: XOR EDX,EDX
// 0049e03a: MOV dword ptr [0x02cf2a7c],ECX
//   XREF to: 02cf2a7c (WRITE)
// 0049e040: MOV dword ptr [0x02cf2a80],ECX
//   XREF to: 02cf2a80 (WRITE)
// 0049e046: MOV dword ptr [0x02cf2a88],EDX
//   XREF to: 02cf2a88 (WRITE)
// 0049e04c: MOV dword ptr [0x02cf2a78],EDX
//   XREF to: 02cf2a78 (WRITE)
// 0049e052: MOV dword ptr [0x02cf2a84],ESI
//   XREF to: 02cf2a84 (WRITE)
// 0049e058: MOV dword ptr [0x02cf2a8c],EBP
//   XREF to: 02cf2a8c (WRITE)
// 0049e05e: MOV dword ptr [0x02cf2a90],EBP
//   XREF to: 02cf2a90 (WRITE)
// 0049e064: MOV dword ptr [0x02cf2a94],EBP
//   XREF to: 02cf2a94 (WRITE)
// 0049e06a: MOV dword ptr [0x02cf2a9c],EBP
//   XREF to: 02cf2a9c (WRITE)
// 0049e070: MOV dword ptr [0x02cf2aa0],EBP
//   XREF to: 02cf2aa0 (WRITE)
// 0049e076: MOV EDI,EBP
// 0049e078: MOV dword ptr [0x02cf2aa4],EBP
//   XREF to: 02cf2aa4 (WRITE)
// 0049e07e: MOV dword ptr [0x02cf2aa8],EBP
//   XREF to: 02cf2aa8 (WRITE)
// 0049e084: MOV dword ptr [0x02cf2aac],EBP
//   XREF to: 02cf2aac (WRITE)
// 0049e08a: MOV dword ptr [0x02cf2ab8],EBX
//   XREF to: 02cf2ab8 (WRITE)
// 0049e090: MOV dword ptr [0x02cf2abc],EBP
//   XREF to: 02cf2abc (WRITE)
// 0049e096: MOV dword ptr [0x02cf2ac0],EBP
//   XREF to: 02cf2ac0 (WRITE)
// 0049e09c: MOV dword ptr [0x02cf2ac4],EBP
//   XREF to: 02cf2ac4 (WRITE)
// 0049e0a2: MOV dword ptr [0x02cf2ac8],EBP
//   XREF to: 02cf2ac8 (WRITE)
// 0049e0a8: MOV dword ptr [0x02cf2af0],EBP
//   XREF to: 02cf2af0 (WRITE)
// 0049e0ae: MOV ECX,0x4
// 0049e0b3: MOV EDX,0xfa
// 0049e0b8: MOV EBX,0xfa
// 0049e0bd: MOV ESI,0x7
// 0049e0c2: XOR EDI,EBP
// 0049e0c4: MOV dword ptr [0x02cf2a98],ECX
//   XREF to: 02cf2a98 (WRITE)
// 0049e0ca: MOV dword ptr [0x02cf2ab0],EDX
//   XREF to: 02cf2ab0 (WRITE)
// 0049e0d0: MOV dword ptr [0x02cf2ad4],EBX
//   XREF to: 02cf2ad4 (WRITE)
// 0049e0d6: MOV dword ptr [0x02cf2ad8],ESI
//   XREF to: 02cf2ad8 (WRITE)
// 0049e0dc: MOV dword ptr [0x02cf2adc],EDI
//   XREF to: 02cf2adc (WRITE)
// 0049e0e2: MOV dword ptr [0x02cf2ae0],ESI
//   XREF to: 02cf2ae0 (WRITE)
// 0049e0e8: MOV dword ptr [0x02cf2ae4],ESI
//   XREF to: 02cf2ae4 (WRITE)
// 0049e0ee: MOV EDX,0xf8
// 0049e0f3: XOR ECX,ECX
// 0049e0f5: MOV ESI,0xf8
// 0049e0fa: MOV dword ptr [0x02cf2ab4],ECX
//   XREF to: 02cf2ab4 (WRITE)
// 0049e100: MOV dword ptr [0x02cf2acc],EDX
//   XREF to: 02cf2acc (WRITE)
// 0049e106: MOV dword ptr [0x02cf2af4],ESI
//   XREF to: 02cf2af4 (WRITE)
// 0049e10c: MOV ECX,0x2
// 0049e111: XOR EDX,EDX
// 0049e113: MOV dword ptr [0x02cf2ad0],ECX
//   XREF to: 02cf2ad0 (WRITE)
// 0049e119: MOV dword ptr [0x02cf2ae8],EDX
//   XREF to: 02cf2ae8 (WRITE)
// 0049e11f: MOV dword ptr [0x02cf2aec],EDX
//   XREF to: 02cf2aec (WRITE)
// 0049e125: POP EBP
// 0049e126: POP EDI
// 0049e127: POP ESI
// 0049e128: POP EBX
// 0049e129: RET

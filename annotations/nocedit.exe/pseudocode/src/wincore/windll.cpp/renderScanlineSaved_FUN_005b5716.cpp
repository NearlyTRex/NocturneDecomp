// Name: wincore_windll.cpp_renderScanlineSaved_FUN_005b5716
// Address: 005b5716
// Address Range: [[005b5716, 005b575b]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderScanlineSaved_FUN_005b5716(void * scanline_data, int scanline_y, int render_flags)
// Globals:
//   int g_SavedRegisterEAX = 0x0
//   int g_SavedRegisterEBX = 0x0
//   int g_SavedRegisterECX = 0x0
//   int g_SavedRegisterEDX = 0x0
//   RenderScanlineFunc* g_ScanlineRenderFunc

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderScanlineSaved_FUN_005b5716
          (void *scanline_data,int scanline_y,int render_flags)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  void *unaff_EDI;
  
  g_SavedRegisterEAX = in_EAX;
  g_SavedRegisterEBX = unaff_EBX;
  g_SavedRegisterECX = in_ECX;
  g_SavedRegisterEDX = in_EDX;
  (*g_ScanlineRenderFunc)(unaff_EDI,unaff_ESI,unaff_EBP);
  return;
}


// Assembly code:
// 005b5716: PUSH EBP
//   Label: wincore_windll.cpp_renderScanlineSaved_FUN_005b5716
// 005b5717: MOV EBP,ESP
// 005b5719: PUSH ESI
// 005b571a: PUSH EDI
// 005b571b: MOV [0x00682634],EAX
//   XREF to: 00682634 (WRITE)
// 005b5720: MOV dword ptr [0x00682638],EBX
//   XREF to: 00682638 (WRITE)
// 005b5726: MOV dword ptr [0x0068263c],ECX
//   XREF to: 0068263c (WRITE)
// 005b572c: MOV dword ptr [0x00682640],EDX
//   XREF to: 00682640 (WRITE)
// 005b5732: MOV EBX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b5735: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b5738: MOV EDI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b573b: CALL dword ptr [g_ScanlineRenderFunc]
//   XREF to: 02d0257c (READ)
// 005b5741: MOV EAX,[0x00682634]
//   XREF to: 00682634 (READ)
// 005b5746: MOV EBX,dword ptr [0x00682638]
//   XREF to: 00682638 (READ)
// 005b574c: MOV ECX,dword ptr [0x0068263c]
//   XREF to: 0068263c (READ)
// 005b5752: MOV EDX,dword ptr [0x00682640]
//   XREF to: 00682640 (READ)
// 005b5758: POP EDI
// 005b5759: POP ESI
// 005b575a: LEAVE
// 005b575b: RET

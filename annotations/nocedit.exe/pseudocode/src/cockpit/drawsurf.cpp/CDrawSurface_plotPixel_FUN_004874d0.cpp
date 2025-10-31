// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
// Address: 004874d0
// Address Range: [[004874d0, 00487624]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 (004887a0) at 00488818 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0 (00487bc0) at 00487d4e [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0 (00487ad0) at 00487b92 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0 (004878e0) at 004878ff [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489ff5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621d04
//   TerminatedCString s_Invalid_bitsPerPixel_00621d1c
//   TerminatedCString s_cockpit_drawsurf_cpp_00621d32
//   TerminatedCString s_Invalid_bitsPerPixel_00621d4a
//   int g_BitsPerPixel = 0x8
//   int g_CurrentDrawColor
//   int g_UseRGBConversion
//   int g_OriginalColorValue
//   int g_PackedPixelColor
//   void*[1024] g_ScreenBufferArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface *this_ptr,int x,int y)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = x + this_ptr->x;
  iVar4 = y + this_ptr->y;
  if ((((iVar3 < this_ptr->clip_left) || (this_ptr->clip_right < iVar3)) ||
      (iVar4 < this_ptr->clip_top)) || (this_ptr->clip_bottom < iVar4)) {
    return;
  }
  iVar2 = iVar3 * 2;
  iVar1 = iVar3 * 4;
  if (g_UseRGBConversion == 0) {
    if ((uint)g_BitsPerPixel < 0x10) {
      if (g_BitsPerPixel == 8) {
        *(undefined1 *)(iVar3 + (int)g_ScreenBufferArray[iVar4]) = (undefined1)g_CurrentDrawColor;
        return;
      }
    }
    else {
      if ((uint)g_BitsPerPixel < 0x11) {
        *(undefined2 *)(iVar2 + (int)g_ScreenBufferArray[iVar4]) = (undefined2)g_CurrentDrawColor;
        return;
      }
      if (g_BitsPerPixel == 0x20) {
        *(int *)(iVar1 + (int)g_ScreenBufferArray[iVar4]) = g_CurrentDrawColor;
        return;
      }
    }
    g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
    g_CurrentLineNumber = 0x18d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
    return;
  }
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      return;
    }
  }
  else {
    if ((uint)g_BitsPerPixel < 0x11) {
      *(ushort *)(iVar2 + (int)g_ScreenBufferArray[iVar4]) =
           *(ushort *)(iVar2 + (int)g_ScreenBufferArray[iVar4]) >>
           ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      *(uint *)((int)g_ScreenBufferArray[iVar4] + iVar1) =
           *(uint *)((int)g_ScreenBufferArray[iVar4] + iVar1) >> ((byte)g_OriginalColorValue & 0x1f)
           & g_PackedPixelColor;
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 0x19e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
  return;
}


// Assembly code:
// 004874d0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
// 004874d1: PUSH ESI
// 004874d2: PUSH EDI
// 004874d3: PUSH EBP
// 004874d4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004874d8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004874dc: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004874e0: MOV EBX,dword ptr [EDX + 0x8]
// 004874e3: MOV ESI,dword ptr [EDX + 0xc]
// 004874e6: MOV EDI,dword ptr [EDX + 0x10]
// 004874e9: ADD EAX,EBX
// 004874eb: ADD ECX,ESI
// 004874ed: CMP EAX,EDI
// 004874ef: JL 0x0048753b
//   XREF to: 0048753b (CONDITIONAL_JUMP)
// 004874f1: CMP EAX,dword ptr [EDX + 0x18]
// 004874f4: JG 0x0048753b
//   XREF to: 0048753b (CONDITIONAL_JUMP)
// 004874f6: CMP ECX,dword ptr [EDX + 0x14]
// 004874f9: JL 0x0048753b
//   XREF to: 0048753b (CONDITIONAL_JUMP)
// 004874fb: CMP ECX,dword ptr [EDX + 0x1c]
// 004874fe: JG 0x0048753b
//   XREF to: 0048753b (CONDITIONAL_JUMP)
// 00487500: MOV EDI,dword ptr [0x02c6d55c]
//   XREF to: 02c6d55c (READ)
// 00487506: LEA ESI,[EAX + EAX*0x1]
// 00487509: SHL ECX,0x2
// 0048750c: LEA EBX,[EAX*0x4 + 0x0]
// 00487513: TEST EDI,EDI
// 00487515: JNZ 0x004875e2
//   XREF to: 004875e2 (CONDITIONAL_JUMP)
// 0048751b: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00487521: CMP EDX,0x10
// 00487524: JNC 0x00487592
//   XREF to: 00487592 (CONDITIONAL_JUMP)
// 00487526: CMP EDX,0x8
// 00487529: JNZ 0x0048756a
//   XREF to: 0048756a (CONDITIONAL_JUMP)
// 0048752b: MOV EDX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00487531: ADD EAX,EDX
// 00487533: MOV DL,byte ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 00487539: MOV byte ptr [EAX],DL
// 0048753b: POP EBP
//   Label: LAB_0048753b
// 0048753c: POP EDI
// 0048753d: POP ESI
// 0048753e: POP EBX
// 0048753f: RET
// 00487540: MOV EAX,dword ptr [ECX + 0x2cf6a9c]
//   Label: LAB_00487540
//   XREF to: 02cf6a9c (DATA)
// 00487546: ADD ESI,EAX
// 00487548: MOV AX,[0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 0048754e: MOV word ptr [ESI],AX
// 00487551: POP EBP
// 00487552: POP EDI
// 00487553: POP ESI
// 00487554: POP EBX
// 00487555: RET
// 00487556: MOV EAX,dword ptr [ECX + 0x2cf6a9c]
//   Label: LAB_00487556
//   XREF to: 02cf6a9c (DATA)
// 0048755c: ADD EBX,EAX
// 0048755e: MOV EAX,[0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 00487563: MOV dword ptr [EBX],EAX
// 00487565: POP EBP
// 00487566: POP EDI
// 00487567: POP ESI
// 00487568: POP EBX
// 00487569: RET
// 0048756a: MOV ECX,0x621d04
//   Label: LAB_0048756a
//   XREF to: 00621d04 (DATA)
// 0048756f: MOV EBX,0x18d
// 00487574: PUSH 0x621d1c
//   XREF to: 00621d1c (DATA)
// 00487579: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0048757f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00487585: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048758a: ADD ESP,0x4
// 0048758d: POP EBP
// 0048758e: POP EDI
// 0048758f: POP ESI
// 00487590: POP EBX
// 00487591: RET
// 00487592: JBE 0x00487540
//   Label: LAB_00487592
//   XREF to: 00487540 (CONDITIONAL_JUMP)
// 00487594: CMP EDX,0x20
// 00487597: JZ 0x00487556
//   XREF to: 00487556 (CONDITIONAL_JUMP)
// 00487599: JMP 0x0048756a
//   XREF to: 0048756a (UNCONDITIONAL_JUMP)
// 0048759b: MOV EAX,dword ptr [ECX + 0x2cf6a9c]
//   Label: LAB_0048759b
//   XREF to: 02cf6a9c (DATA)
// 004875a1: XOR EDX,EDX
// 004875a3: MOV CL,byte ptr [0x02c6d560]
//   XREF to: 02c6d560 (READ)
// 004875a9: MOV DX,word ptr [ESI + EAX*0x1]
// 004875ad: MOV EBP,dword ptr [0x02c6d570]
//   XREF to: 02c6d570 (READ)
// 004875b3: SHR EDX,CL
// 004875b5: AND EDX,EBP
// 004875b7: MOV word ptr [ESI + EAX*0x1],DX
// 004875bb: POP EBP
// 004875bc: POP EDI
// 004875bd: POP ESI
// 004875be: POP EBX
// 004875bf: RET
// 004875c0: MOV EDX,dword ptr [ECX + 0x2cf6a9c]
//   Label: LAB_004875c0
//   XREF to: 02cf6a9c (DATA)
// 004875c6: MOV CL,byte ptr [0x02c6d560]
//   XREF to: 02c6d560 (READ)
// 004875cc: MOV EAX,dword ptr [EDX + EBX*0x1]
// 004875cf: SHR EAX,CL
// 004875d1: MOV ECX,EAX
// 004875d3: MOV EAX,[0x02c6d570]
//   XREF to: 02c6d570 (READ)
// 004875d8: AND ECX,EAX
// 004875da: MOV dword ptr [EDX + EBX*0x1],ECX
// 004875dd: POP EBP
// 004875de: POP EDI
// 004875df: POP ESI
// 004875e0: POP EBX
// 004875e1: RET
// 004875e2: MOV EAX,[0x0067939c]
//   Label: LAB_004875e2
//   XREF to: 0067939c (READ)
// 004875e7: CMP EAX,0x10
// 004875ea: JNC 0x004875f7
//   XREF to: 004875f7 (CONDITIONAL_JUMP)
// 004875ec: CMP EAX,0x8
// 004875ef: JZ 0x0048753b
//   XREF to: 0048753b (CONDITIONAL_JUMP)
// 004875f5: JMP 0x004875fe
//   XREF to: 004875fe (UNCONDITIONAL_JUMP)
// 004875f7: JBE 0x0048759b
//   Label: LAB_004875f7
//   XREF to: 0048759b (CONDITIONAL_JUMP)
// 004875f9: CMP EAX,0x20
// 004875fc: JZ 0x004875c0
//   XREF to: 004875c0 (CONDITIONAL_JUMP)
// 004875fe: MOV EAX,0x621d32
//   Label: LAB_004875fe
//   XREF to: 00621d32 (DATA)
// 00487603: MOV EDX,0x19e
// 00487608: PUSH 0x621d4a
//   XREF to: 00621d4a (DATA)
// 0048760d: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00487612: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00487618: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048761d: ADD ESP,0x4
// 00487620: POP EBP
// 00487621: POP EDI
// 00487622: POP ESI
// 00487623: POP EBX
// 00487624: RET

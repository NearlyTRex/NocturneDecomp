// Name: cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
// Address: 00487220
// Address Range: [[00487220, 0048737f]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_setColorBlack_FUN_00487380 (00487380) at 00487386 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorBlue_FUN_004873f0 (004873f0) at 004873f9 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorCyan_FUN_00487450 (00487450) at 0048745c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorDarkGray_FUN_00487470 (00487470) at 00487476 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480 (00487480) at 0048748f [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorGreen_FUN_004873d0 (004873d0) at 004873d9 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorLightGray_FUN_004874a0 (004874a0) at 004874af [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430 (00487430) at 0048743c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRed_FUN_004873b0 (004873b0) at 004873b9 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorWhite_FUN_00487390 (00487390) at 0048739f [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorYellow_FUN_00487410 (00487410) at 0048741c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489dda [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621cbd
//   TerminatedCString s_Invalid_bitsPerPixel_in__00621cd5
//   int g_BitsPerPixel = 0x8
//   int g_CurrentDrawColor
//   int g_PaletteColorIndex
//   int g_UseRGBConversion
//   uchar[32768] g_ColorCubeLookup
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00487331) */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(int red,int green,int blue)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = red & 0xff;
  uVar3 = green & 0xff;
  uVar2 = blue & 0xff;
  iVar4 = ((int)uVar2 >> 3) + ((int)uVar3 >> 3) * 0x20 + ((int)uVar1 >> 3) * 0x400;
  g_PaletteColorIndex = (int)g_ColorCubeLookup[iVar4];
  g_UseRGBConversion = 0;
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      g_CurrentDrawColor = (uint)g_ColorCubeLookup[iVar4];
      return;
    }
  }
  else {
    if ((uint)g_BitsPerPixel < 0x11) {
      g_CurrentDrawColor =
           (uVar2 / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f) |
           uVar1 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f) |
           uVar3 / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f)) & 0xffff;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      g_CurrentDrawColor =
           uVar2 << ((byte)g_BlueBitPosition & 0x1f) |
           uVar1 << ((byte)g_RedBitPosition & 0x1f) | uVar3 << ((byte)g_GreenBitPosition & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 0x11d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}


// Assembly code:
// 00487220: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
// 00487221: PUSH ESI
// 00487222: PUSH EDI
// 00487223: PUSH EBP
// 00487224: SUB ESP,0x8
// 00487227: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048722b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0048722f: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00487233: AND EAX,0xff
// 00487238: AND ESI,0xff
// 0048723e: MOV EDI,EAX
// 00487240: MOV ECX,ESI
// 00487242: SAR EDI,0x3
// 00487245: SAR ECX,0x3
// 00487248: SHL EDI,0xa
// 0048724b: SHL ECX,0x5
// 0048724e: AND EBX,0xff
// 00487254: ADD ECX,EDI
// 00487256: MOV EDI,EBX
// 00487258: SAR EDI,0x3
// 0048725b: ADD EDI,ECX
// 0048725d: XOR ECX,ECX
// 0048725f: MOV CL,byte ptr [EDI + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00487265: XOR EDX,EDX
// 00487267: MOV dword ptr [0x02c6d554],ECX
//   XREF to: 02c6d554 (WRITE)
// 0048726d: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00487273: MOV dword ptr [0x02c6d55c],EDX
//   XREF to: 02c6d55c (WRITE)
// 00487279: CMP ECX,0x10
// 0048727c: JNC 0x0048734b
//   XREF to: 0048734b (CONDITIONAL_JUMP)
// 00487282: CMP ECX,0x8
// 00487285: JNZ 0x00487356
//   XREF to: 00487356 (CONDITIONAL_JUMP)
// 0048728b: XOR EAX,EAX
// 0048728d: MOV AL,byte ptr [EDI + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00487293: MOV [0x02c6d550],EAX
//   XREF to: 02c6d550 (WRITE)
// 00487298: ADD ESP,0x8
// 0048729b: POP EBP
// 0048729c: POP EDI
// 0048729d: POP ESI
// 0048729e: POP EBX
// 0048729f: RET
// 004872a0: DIV dword ptr [0x02d01f28]
//   Label: LAB_004872a0
//   XREF to: 02d01f28 (READ)
// 004872a6: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 004872a9: MOV EDI,EAX
// 004872ab: XOR EDX,EDX
// 004872ad: MOV EAX,ESI
// 004872af: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004872b5: MOV EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004872bb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004872be: XOR EDX,EDX
// 004872c0: MOV EAX,EBX
// 004872c2: DIV EBP
// 004872c4: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004872ca: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004872ce: SHL EDI,CL
// 004872d0: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004872d6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004872da: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004872dd: SHL EAX,CL
// 004872df: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004872e5: OR EDI,EAX
// 004872e7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004872eb: SHL EAX,CL
// 004872ed: OR EAX,EDI
// 004872ef: AND EAX,0xffff
// 004872f4: MOV [0x02c6d550],EAX
//   XREF to: 02c6d550 (WRITE)
// 004872f9: ADD ESP,0x8
// 004872fc: POP EBP
// 004872fd: POP EDI
// 004872fe: POP ESI
// 004872ff: POP EBX
// 00487300: RET
// 00487301: CMP ECX,ECX
//   Label: LAB_00487301
// 00487303: JNZ 0x00487331
//   XREF to: 00487331 (CONDITIONAL_JUMP)
// 00487305: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0048730b: SHL EAX,CL
// 0048730d: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00487313: SHL ESI,CL
// 00487315: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0048731b: SHL EBX,CL
// 0048731d: OR EAX,ESI
// 0048731f: MOV ECX,EBX
// 00487321: OR ECX,EAX
// 00487323: MOV dword ptr [0x02c6d550],ECX
//   XREF to: 02c6d550 (WRITE)
// 00487329: ADD ESP,0x8
// 0048732c: POP EBP
// 0048732d: POP EDI
// 0048732e: POP ESI
// 0048732f: POP EBX
// 00487330: RET
// 00487331: MOV ECX,EAX
//   Label: LAB_00487331
// 00487333: SHL ESI,0x8
// 00487336: SHL ECX,0x10
// 00487339: OR ECX,ESI
// 0048733b: OR ECX,EBX
// 0048733d: MOV dword ptr [0x02c6d550],ECX
//   XREF to: 02c6d550 (WRITE)
// 00487343: ADD ESP,0x8
// 00487346: POP EBP
// 00487347: POP EDI
// 00487348: POP ESI
// 00487349: POP EBX
// 0048734a: RET
// 0048734b: JBE 0x004872a0
//   Label: LAB_0048734b
//   XREF to: 004872a0 (CONDITIONAL_JUMP)
// 00487351: CMP ECX,0x20
// 00487354: JZ 0x00487301
//   XREF to: 00487301 (CONDITIONAL_JUMP)
// 00487356: MOV EAX,0x621cbd
//   Label: LAB_00487356
//   XREF to: 00621cbd (DATA)
// 0048735b: MOV EDX,0x11d
// 00487360: PUSH 0x621cd5
//   XREF to: 00621cd5 (DATA)
// 00487365: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0048736a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00487370: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00487375: ADD ESP,0x4
// 00487378: ADD ESP,0x8
// 0048737b: POP EBP
// 0048737c: POP EDI
// 0048737d: POP ESI
// 0048737e: POP EBX
// 0048737f: RET

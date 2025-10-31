// Name: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
// Address: 00487010
// Address Range: [[00487010, 00487218]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489df1 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559dc8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621c76
//   TerminatedCString s_Invalid_bitsPerPixel_in__00621c8e
//   int g_BitsPerPixel = 0x8
//   int g_CurrentDrawColor
//   int g_PaletteColorIndex
//   int g_UseRGBConversion
//   int g_OriginalColorValue
//   int g_ScaledRedComponent
//   int g_ScaledGreenComponent
//   int g_ScaledBlueComponent
//   int g_PackedPixelColor
//   int g_DuplicatedPixelColor
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004871be) */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(int color_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = color_value < 0;
  if (bVar3) {
    g_OriginalColorValue = -color_value;
    bVar2 = (byte)g_OriginalColorValue;
    g_ScaledRedComponent = (uint)(0xff / (ulonglong)(uint)g_RedScaleFactor) >> (bVar2 & 0x1f);
    g_ScaledGreenComponent = (uint)(0xff / (ulonglong)(uint)g_GreenScaleFactor) >> (bVar2 & 0x1f);
    g_ScaledBlueComponent = (uint)(0xff / (ulonglong)(uint)g_BlueScaleFactor) >> (bVar2 & 0x1f);
    g_PackedPixelColor =
         g_ScaledRedComponent << ((byte)g_RedBitPosition & 0x1f) |
         g_ScaledGreenComponent << ((byte)g_GreenBitPosition & 0x1f) |
         g_ScaledBlueComponent << ((byte)g_BlueBitPosition & 0x1f);
    g_DuplicatedPixelColor = g_PackedPixelColor | g_PackedPixelColor << 0x10;
    color_value = 0;
  }
  g_UseRGBConversion = (int)bVar3;
  g_PaletteColorIndex = color_value & 0xff;
  if ((uint)g_BitsPerPixel < 0x10) {
    if (g_BitsPerPixel == 8) {
      g_CurrentDrawColor = g_PaletteColorIndex;
      return;
    }
  }
  else {
    iVar1 = g_PaletteColorIndex * 3;
    if ((uint)g_BitsPerPixel < 0x11) {
      g_CurrentDrawColor =
           ((uint)(byte)g_SourcePaletteData[iVar1] / (uint)g_RedScaleFactor <<
            ((byte)g_RedBitPosition & 0x1f) |
            (uint)(byte)g_SourcePaletteData[iVar1 + 1] / (uint)g_GreenScaleFactor <<
            ((byte)g_GreenBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar1 + 2] / (uint)g_BlueScaleFactor <<
           ((byte)g_BlueBitPosition & 0x1f)) & 0xffff;
      return;
    }
    if (g_BitsPerPixel == 0x20) {
      g_CurrentDrawColor =
           (uint)(byte)g_SourcePaletteData[iVar1 + 2] << ((byte)g_BlueBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar1 + 1] << ((byte)g_GreenBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar1] << ((byte)g_RedBitPosition & 0x1f);
      return;
    }
  }
  g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
  g_CurrentLineNumber = 0xf6;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel in CDrawSurface::setColor");
  return;
}


// Assembly code:
// 00487010: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
// 00487011: PUSH ESI
// 00487012: PUSH EDI
// 00487013: PUSH EBP
// 00487014: SUB ESP,0x4
// 00487017: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048701b: TEST EAX,EAX
// 0048701d: JL 0x00487056
//   XREF to: 00487056 (CONDITIONAL_JUMP)
// 0048701f: XOR EDX,EDX
// 00487021: MOV dword ptr [0x02c6d55c],EDX
//   XREF to: 02c6d55c (WRITE)
// 00487027: AND EAX,0xff
//   Label: LAB_00487027
// 0048702c: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00487032: MOV [0x02c6d554],EAX
//   XREF to: 02c6d554 (WRITE)
// 00487037: CMP EDX,0x10
// 0048703a: JNC 0x004871d8
//   XREF to: 004871d8 (CONDITIONAL_JUMP)
// 00487040: CMP EDX,0x8
// 00487043: JNZ 0x004871ef
//   XREF to: 004871ef (CONDITIONAL_JUMP)
// 00487049: MOV [0x02c6d550],EAX
//   XREF to: 02c6d550 (WRITE)
// 0048704e: ADD ESP,0x4
// 00487051: POP EBP
// 00487052: POP EDI
// 00487053: POP ESI
// 00487054: POP EBX
// 00487055: RET
// 00487056: MOV ESI,dword ptr [0x02d01f28]
//   Label: LAB_00487056
//   XREF to: 02d01f28 (READ)
// 0048705c: MOV [0x02c6d560],EAX
//   XREF to: 02c6d560 (WRITE)
// 00487061: MOV EBX,EAX
// 00487063: XOR EDX,EDX
// 00487065: MOV EAX,0xff
// 0048706a: DIV ESI
// 0048706c: MOV ECX,0x1
// 00487071: NEG EBX
// 00487073: MOV dword ptr [0x02c6d55c],ECX
//   XREF to: 02c6d55c (WRITE)
// 00487079: MOV ECX,EBX
// 0048707b: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00487081: SHR EAX,CL
// 00487083: XOR EDX,EDX
// 00487085: MOV [0x02c6d564],EAX
//   XREF to: 02c6d564 (WRITE)
// 0048708a: MOV EAX,0xff
// 0048708f: DIV EDI
// 00487091: MOV EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00487097: SHR EAX,CL
// 00487099: XOR EDX,EDX
// 0048709b: MOV [0x02c6d568],EAX
//   XREF to: 02c6d568 (WRITE)
// 004870a0: MOV EAX,0xff
// 004870a5: DIV EBP
// 004870a7: MOV EDX,dword ptr [0x02c6d564]
//   XREF to: 02c6d564 (READ)
// 004870ad: SHR EAX,CL
// 004870af: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004870b5: MOV [0x02c6d56c],EAX
//   XREF to: 02c6d56c (WRITE)
// 004870ba: MOV EAX,[0x02c6d568]
//   XREF to: 02c6d568 (READ)
// 004870bf: SHL EDX,CL
// 004870c1: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004870c7: SHL EAX,CL
// 004870c9: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004870cf: OR EDX,EAX
// 004870d1: MOV EAX,[0x02c6d56c]
//   XREF to: 02c6d56c (READ)
// 004870d6: SHL EAX,CL
// 004870d8: OR EDX,EAX
// 004870da: MOV dword ptr [0x02c6d570],EDX
//   XREF to: 02c6d570 (WRITE)
// 004870e0: MOV EAX,[0x02c6d570]
//   XREF to: 02c6d570 (READ)
// 004870e5: SHL EDX,0x10
// 004870e8: OR EAX,EDX
// 004870ea: MOV dword ptr [0x02c6d560],EBX
//   XREF to: 02c6d560 (WRITE)
// 004870f0: MOV [0x02c6d574],EAX
//   XREF to: 02c6d574 (WRITE)
// 004870f5: XOR EAX,EAX
// 004870f7: JMP 0x00487027
//   XREF to: 00487027 (UNCONDITIONAL_JUMP)
// 004870fc: XOR EBX,EBX
//   Label: LAB_004870fc
// 004870fe: XOR EAX,EAX
// 00487100: MOV BL,byte ptr [ECX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 00487106: MOV AL,byte ptr [ECX + 0x2d01f48]
//   XREF to: 02d01f48 (DATA)
// 0048710c: MOV CL,byte ptr [ECX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 00487112: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 00487118: XOR EDX,EDX
// 0048711a: DIV ESI
// 0048711c: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00487122: MOV ESI,EAX
// 00487124: XOR EDX,EDX
// 00487126: MOV EAX,EBX
// 00487128: DIV EDI
// 0048712a: MOV EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00487130: AND ECX,0xff
// 00487136: MOV EDI,EAX
// 00487138: XOR EDX,EDX
// 0048713a: MOV EAX,ECX
// 0048713c: DIV EBP
// 0048713e: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00487141: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00487147: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0048714a: MOV EAX,ESI
// 0048714c: SHL EAX,CL
// 0048714e: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00487154: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00487157: SHL EDI,CL
// 00487159: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0048715f: OR EAX,EDI
// 00487161: SHL EDX,CL
// 00487163: OR EAX,EDX
// 00487165: AND EAX,0xffff
// 0048716a: MOV [0x02c6d550],EAX
//   XREF to: 02c6d550 (WRITE)
// 0048716f: ADD ESP,0x4
// 00487172: POP EBP
// 00487173: POP EDI
// 00487174: POP ESI
// 00487175: POP EBX
// 00487176: RET
// 00487177: MOVZX ESI,byte ptr [ECX + 0x2d01f48]
//   Label: LAB_00487177
//   XREF to: 02d01f48 (DATA)
// 0048717e: XOR EAX,EAX
// 00487180: XOR EBX,EBX
// 00487182: MOV AL,byte ptr [ECX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 00487188: MOV BL,byte ptr [ECX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 0048718e: CMP EDX,EDX
// 00487190: JNZ 0x004871be
//   XREF to: 004871be (CONDITIONAL_JUMP)
// 00487192: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00487198: SHL ESI,CL
// 0048719a: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004871a0: SHL EAX,CL
// 004871a2: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004871a8: SHL EBX,CL
// 004871aa: OR EAX,ESI
// 004871ac: MOV ECX,EBX
// 004871ae: OR ECX,EAX
// 004871b0: MOV dword ptr [0x02c6d550],ECX
//   XREF to: 02c6d550 (WRITE)
// 004871b6: ADD ESP,0x4
// 004871b9: POP EBP
// 004871ba: POP EDI
// 004871bb: POP ESI
// 004871bc: POP EBX
// 004871bd: RET
// 004871be: MOV ECX,EAX
//   Label: LAB_004871be
// 004871c0: SHL ESI,0x10
// 004871c3: SHL ECX,0x8
// 004871c6: OR ECX,ESI
// 004871c8: OR ECX,EBX
// 004871ca: MOV dword ptr [0x02c6d550],ECX
//   XREF to: 02c6d550 (WRITE)
// 004871d0: ADD ESP,0x4
// 004871d3: POP EBP
// 004871d4: POP EDI
// 004871d5: POP ESI
// 004871d6: POP EBX
// 004871d7: RET
// 004871d8: LEA ECX,[EAX*0x4 + 0x0]
//   Label: LAB_004871d8
// 004871df: SUB ECX,EAX
// 004871e1: CMP EDX,0x10
// 004871e4: JBE 0x004870fc
//   XREF to: 004870fc (CONDITIONAL_JUMP)
// 004871ea: CMP EDX,0x20
// 004871ed: JZ 0x00487177
//   XREF to: 00487177 (CONDITIONAL_JUMP)
// 004871ef: MOV EAX,0x621c76
//   Label: LAB_004871ef
//   XREF to: 00621c76 (PARAM)
// 004871f4: MOV EDX,0xf6
// 004871f9: PUSH 0x621c8e
//   XREF to: 00621c8e (DATA)
// 004871fe: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00487203: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00487209: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048720e: ADD ESP,0x4
// 00487211: ADD ESP,0x4
// 00487214: POP EBP
// 00487215: POP EDI
// 00487216: POP ESI
// 00487217: POP EBX
// 00487218: RET

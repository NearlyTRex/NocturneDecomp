// Name: engine_font.cpp_setShadowColor_FUN_004ce0f0
// Address: 004ce0f0
// Address Range: [[004ce0f0, 004ce210]]
// Convention: __cdecl
// Signature: void engine_font.cpp_setShadowColor_FUN_004ce0f0(uint red, uint green, uint blue)
// Globals:
//   TerminatedCString s_engine_font_cpp_0062a6df
//   TerminatedCString s_Invalid_bitsPerPixel_in__0062a6f2
//   int g_BitsPerPixel = 0x8
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   ushort g_ShadowColor16
//   int g_ShadowColor32
//   int g_ShadowColorRed
//   int g_ShadowColorGreen
//   int g_ShadowColorBlue
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ce1d7) */

void __cdecl engine_font_cpp_setShadowColor_FUN_004ce0f0(uint red,uint green,uint blue)

{
  if (g_BitsPerPixel != 8) {
    if (g_BitsPerPixel == 0x10) {
      g_ShadowColor16 =
           (ushort)(blue / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f)) |
           (ushort)(red / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
           (ushort)(green / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f));
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ShadowColor32 =
           blue << ((byte)g_BlueBitPosition & 0x1f) |
           red << ((byte)g_RedBitPosition & 0x1f) | green << ((byte)g_GreenBitPosition & 0x1f);
    }
    else {
      g_CurrentFilename = "..\\engine\\font.cpp";
      g_CurrentLineNumber = 0x398;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  g_ShadowColorGreen = green;
  g_ShadowColorBlue = blue;
  g_ShadowColorRed = red;
  return;
}


// Assembly code:
// 004ce0f0: PUSH EBX
//   Label: engine_font.cpp_setShadowColor_FUN_004ce0f0
// 004ce0f1: PUSH ESI
// 004ce0f2: PUSH EDI
// 004ce0f3: PUSH EBP
// 004ce0f4: SUB ESP,0xc
// 004ce0f7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ce0fb: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004ce0ff: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004ce103: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004ce109: CMP EDX,0x8
// 004ce10c: JZ 0x004ce14e
//   XREF to: 004ce14e (CONDITIONAL_JUMP)
// 004ce10e: CMP EDX,0x10
// 004ce111: JZ 0x004ce168
//   XREF to: 004ce168 (CONDITIONAL_JUMP)
// 004ce113: CMP EDX,0x20
// 004ce116: JNZ 0x004ce1ea
//   XREF to: 004ce1ea (CONDITIONAL_JUMP)
// 004ce11c: CMP EDX,EDX
// 004ce11e: JNZ 0x004ce1d7
//   XREF to: 004ce1d7 (CONDITIONAL_JUMP)
// 004ce124: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004ce12a: MOV EAX,EDI
// 004ce12c: MOV EDX,EBX
// 004ce12e: SHL EAX,CL
// 004ce130: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004ce136: SHL EDX,CL
// 004ce138: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004ce13e: OR EAX,EDX
// 004ce140: MOV EDX,ESI
// 004ce142: SHL EDX,CL
// 004ce144: MOV ECX,EDX
// 004ce146: OR ECX,EAX
// 004ce148: MOV dword ptr [0x02d7b414],ECX
//   Label: LAB_004ce148
//   XREF to: 02d7b414 (WRITE)
// 004ce14e: MOV dword ptr [0x02d7b41c],EBX
//   Label: LAB_004ce14e
//   XREF to: 02d7b41c (WRITE)
// 004ce154: MOV dword ptr [0x02d7b420],ESI
//   XREF to: 02d7b420 (WRITE)
// 004ce15a: MOV dword ptr [0x02d7b418],EDI
//   XREF to: 02d7b418 (WRITE)
// 004ce160: ADD ESP,0xc
// 004ce163: POP EBP
// 004ce164: POP EDI
// 004ce165: POP ESI
// 004ce166: POP EBX
// 004ce167: RET
// 004ce168: MOV EBP,dword ptr [0x02d01f28]
//   Label: LAB_004ce168
//   XREF to: 02d01f28 (READ)
// 004ce16e: MOV EAX,EDI
// 004ce170: XOR EDX,EDX
// 004ce172: DIV EBP
// 004ce174: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x1c] (DATA)
// 004ce177: MOV ECX,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004ce17d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 004ce180: XOR EDX,EDX
// 004ce182: MOV EAX,EBX
// 004ce184: DIV ECX
// 004ce186: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004ce18a: MOV EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004ce190: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004ce194: XOR EDX,EDX
// 004ce196: MOV EAX,ESI
// 004ce198: DIV EBP
// 004ce19a: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004ce19e: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004ce1a4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004ce1a8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004ce1ab: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 004ce1af: SHL EAX,CL
// 004ce1b1: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004ce1b7: SHL EDX,CL
// 004ce1b9: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004ce1bf: OR EAX,EDX
// 004ce1c1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004ce1c5: SHL EDX,CL
// 004ce1c7: MOV ECX,EDX
// 004ce1c9: OR ECX,EAX
// 004ce1cb: MOV word ptr [0x02d7b412],CX
//   XREF to: 02d7b412 (WRITE)
// 004ce1d2: JMP 0x004ce14e
//   XREF to: 004ce14e (UNCONDITIONAL_JUMP)
// 004ce1d7: MOV EAX,EBX
//   Label: LAB_004ce1d7
// 004ce1d9: MOV ECX,EDI
// 004ce1db: SHL EAX,0x8
// 004ce1de: SHL ECX,0x10
// 004ce1e1: OR ECX,EAX
// 004ce1e3: OR ECX,ESI
// 004ce1e5: JMP 0x004ce148
//   XREF to: 004ce148 (UNCONDITIONAL_JUMP)
// 004ce1ea: MOV EAX,0x62a6df
//   Label: LAB_004ce1ea
//   XREF to: 0062a6df (DATA)
// 004ce1ef: MOV EDX,0x398
// 004ce1f4: PUSH 0x62a6f2
//   XREF to: 0062a6f2 (DATA)
// 004ce1f9: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004ce1fe: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004ce204: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ce209: ADD ESP,0x4
// 004ce20c: JMP 0x004ce14e
//   XREF to: 004ce14e (UNCONDITIONAL_JUMP)

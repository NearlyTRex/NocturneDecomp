// Name: engine_font.cpp_packPixelNative_FUN_004d1170
// Address: 004d1170
// Address Range: [[004d1170, 004d11bc]]
// Convention: __cdecl
// Signature: uint engine_font.cpp_packPixelNative_FUN_004d1170(int red, int green, int blue)
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00578135 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelNative_FUN_004d1170(int red,int green,int blue)

{
  if (g_BitsPerPixel == 0x20) {
    return blue << ((byte)g_BlueBitPosition & 0x1f) |
           red << ((byte)g_RedBitPosition & 0x1f) | green << ((byte)g_GreenBitPosition & 0x1f);
  }
  return red << 0x10 | green << 8 | blue;
}


// Assembly code:
// 004d1170: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_font.cpp_packPixelNative_FUN_004d1170
//   XREF to: Stack[0x4] (READ)
// 004d1174: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004d1178: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004d117f: JNZ 0x004d11a6
//   XREF to: 004d11a6 (CONDITIONAL_JUMP)
// 004d1181: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004d1187: SHL EAX,CL
// 004d1189: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004d118f: SHL EDX,CL
// 004d1191: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004d1197: OR EAX,EDX
// 004d1199: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004d119d: SHL EDX,CL
// 004d119f: MOV ECX,EDX
// 004d11a1: OR ECX,EAX
// 004d11a3: MOV EAX,ECX
// 004d11a5: RET
// 004d11a6: PUSH EBX
//   Label: LAB_004d11a6
// 004d11a7: MOV ECX,EAX
// 004d11a9: MOV EAX,EDX
// 004d11ab: SHL ECX,0x10
// 004d11ae: SHL EAX,0x8
// 004d11b1: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004d11b5: OR ECX,EAX
// 004d11b7: OR ECX,EBX
// 004d11b9: POP EBX
// 004d11ba: MOV EAX,ECX
// 004d11bc: RET

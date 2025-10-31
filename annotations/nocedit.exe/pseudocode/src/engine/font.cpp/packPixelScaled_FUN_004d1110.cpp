// Name: engine_font.cpp_packPixelScaled_FUN_004d1110
// Address: 004d1110
// Address Range: [[004d1110, 004d1164]]
// Convention: __cdecl
// Signature: uint engine_font.cpp_packPixelScaled_FUN_004d1110(int red, int green, int blue)
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00578079 [UNCONDITIONAL_CALL]
// Globals:
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor

#include "nocturne.h"

uint __cdecl engine_font_cpp_packPixelScaled_FUN_004d1110(int red,int green,int blue)

{
  return (uint)blue / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f) |
         (uint)green / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f) |
         (uint)red / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f);
}


// Assembly code:
// 004d1110: PUSH EBX
//   Label: engine_font.cpp_packPixelScaled_FUN_004d1110
// 004d1111: PUSH ESI
// 004d1112: PUSH EDI
// 004d1113: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d1117: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004d111b: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004d111f: MOV ECX,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004d1125: MOV EAX,EDI
// 004d1127: XOR EDX,EDX
// 004d1129: DIV ECX
// 004d112b: MOV EDI,EAX
// 004d112d: XOR EDX,EDX
// 004d112f: MOV EAX,EBX
// 004d1131: MOV EBX,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004d1137: DIV EBX
// 004d1139: MOV EBX,EAX
// 004d113b: XOR EDX,EDX
// 004d113d: MOV EAX,ESI
// 004d113f: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004d1145: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004d114b: SHL EDI,CL
// 004d114d: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004d1153: SHL EBX,CL
// 004d1155: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004d115b: OR EBX,EDI
// 004d115d: SHL EAX,CL
// 004d115f: OR EAX,EBX
// 004d1161: POP EDI
// 004d1162: POP ESI
// 004d1163: POP EBX
// 004d1164: RET

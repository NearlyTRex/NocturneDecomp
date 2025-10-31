// Name: core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
// Address: 00471a70
// Address Range: [[00471a70, 00471ac4]]
// Convention: __cdecl
// Signature: ushort core_dimage.cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage * this_ptr, uint red, uint green, uint blue)
// Cross-references:
//   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 (00471ad0) at 00471c7b [UNCONDITIONAL_CALL]
// Globals:
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor

#include "nocturne.h"

ushort __cdecl
core_dimage_cpp_CDemonImage_packColor_FUN_00471a70
          (CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f)) |
         (ushort)(green / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)(red / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f));
}


// Assembly code:
// 00471a70: PUSH EBX
//   Label: core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
// 00471a71: PUSH ESI
// 00471a72: PUSH EDI
// 00471a73: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00471a77: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00471a7b: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00471a7f: MOV ECX,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 00471a85: MOV EAX,EDI
// 00471a87: XOR EDX,EDX
// 00471a89: DIV ECX
// 00471a8b: MOV EDI,EAX
// 00471a8d: XOR EDX,EDX
// 00471a8f: MOV EAX,EBX
// 00471a91: MOV EBX,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00471a97: DIV EBX
// 00471a99: MOV EBX,EAX
// 00471a9b: XOR EDX,EDX
// 00471a9d: MOV EAX,ESI
// 00471a9f: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00471aa5: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00471aab: SHL EDI,CL
// 00471aad: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00471ab3: SHL EBX,CL
// 00471ab5: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00471abb: OR EBX,EDI
// 00471abd: SHL EAX,CL
// 00471abf: OR EAX,EBX
// 00471ac1: POP EDI
// 00471ac2: POP ESI
// 00471ac3: POP EBX
// 00471ac4: RET

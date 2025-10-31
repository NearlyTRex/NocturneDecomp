// Name: shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80
// Address: 00447a80
// Address Range: [[00447a80, 00447aae]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord, int max_coord, int pixel_offset)
// Globals:
//   int g_CramCurrentAcceptableSize
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord,int max_coord,int pixel_offset)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(0xc);
  return ((max_coord - min_coord) * pixel_offset) / g_CramCurrentAcceptableSize + min_coord;
}


// Assembly code:
// 00447a80: PUSH 0xc
//   Label: shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80
// 00447a85: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00447a8a: PUSH EBX
// 00447a8b: PUSH ESI
// 00447a8c: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00447a90: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00447a94: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00447a98: SUB EDX,ECX
// 00447a9a: IMUL EDX,EBX
// 00447a9d: MOV ESI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447aa3: MOV EAX,EDX
// 00447aa5: SAR EDX,0x1f
// 00447aa8: IDIV ESI
// 00447aaa: ADD EAX,ECX
// 00447aac: POP ESI
// 00447aad: POP EBX
// 00447aae: RET

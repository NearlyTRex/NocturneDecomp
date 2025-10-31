// Name: core_dlight.cpp_drawGrayscalePixel_FUN_00473360
// Address: 00473360
// Address Range: [[00473360, 0047338c]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_drawGrayscalePixel_FUN_00473360(int x, int y, int grayscale_value)
// Globals:
//   void*[1024] g_ScreenBufferArray

#include "nocturne.h"

void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00473360(int x,int y,int grayscale_value)

{
  *(int *)((int)g_ScreenBufferArray[y] + x * 4) = grayscale_value * 0x10101;
  return;
}


// Assembly code:
// 00473360: PUSH EBX
//   Label: core_dlight.cpp_drawGrayscalePixel_FUN_00473360
// 00473361: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00473365: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00473369: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0047336d: SHL EDX,0x2
// 00473370: MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00473377: LEA ECX,[EAX + EDX*0x1]
// 0047337a: MOV EAX,EBX
// 0047337c: SHL EAX,0x8
// 0047337f: LEA EDX,[EBX + EAX*0x1]
// 00473382: MOV EAX,EBX
// 00473384: SHL EAX,0x10
// 00473387: ADD EDX,EAX
// 00473389: MOV dword ptr [ECX],EDX
// 0047338b: POP EBX
// 0047338c: RET

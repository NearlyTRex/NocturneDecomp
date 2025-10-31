// Name: core_setdir.cpp_setPixelGrayscale_FUN_005748a0
// Address: 005748a0
// Address Range: [[005748a0, 005748cc]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_setPixelGrayscale_FUN_005748a0(int x, int y, int grayscale_value)
// Globals:
//   void*[1024] g_ScreenBufferArray

#include "nocturne.h"

void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_005748a0(int x,int y,int grayscale_value)

{
  *(int *)((int)g_ScreenBufferArray[y] + x * 4) = grayscale_value * 0x10101;
  return;
}


// Assembly code:
// 005748a0: PUSH EBX
//   Label: core_setdir.cpp_setPixelGrayscale_FUN_005748a0
// 005748a1: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005748a5: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005748a9: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005748ad: SHL EDX,0x2
// 005748b0: MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 005748b7: LEA ECX,[EAX + EDX*0x1]
// 005748ba: MOV EAX,EBX
// 005748bc: SHL EAX,0x8
// 005748bf: LEA EDX,[EBX + EAX*0x1]
// 005748c2: MOV EAX,EBX
// 005748c4: SHL EAX,0x10
// 005748c7: ADD EDX,EAX
// 005748c9: MOV dword ptr [ECX],EDX
// 005748cb: POP EBX
// 005748cc: RET

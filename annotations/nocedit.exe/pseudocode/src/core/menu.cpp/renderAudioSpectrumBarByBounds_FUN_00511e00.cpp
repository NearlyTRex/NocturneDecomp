// Name: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00
// Address: 00511e00
// Address Range: [[00511e00, 00511e1e]]
// Convention: __cdecl
// Signature: void core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00(int x_center, int y_bottom, int y_top)
// Function calls:
//   core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70

#include "nocturne.h"

void __cdecl
core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_00511e00(int x_center,int y_bottom,int y_top)

{
  core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(x_center,y_top,(y_top - y_bottom) + 1);
  return;
}


// Assembly code:
// 00511e00: PUSH EBX
//   Label: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00
// 00511e01: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00511e05: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00511e09: MOV EAX,EDX
// 00511e0b: SUB EAX,ECX
// 00511e0d: INC EAX
// 00511e0e: PUSH EAX
// 00511e0f: PUSH EDX
// 00511e10: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00511e14: PUSH EBX
// 00511e15: CALL core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
//   XREF to: 0050fe70 (UNCONDITIONAL_CALL)
// 00511e1a: ADD ESP,0xc
// 00511e1d: POP EBX
// 00511e1e: RET

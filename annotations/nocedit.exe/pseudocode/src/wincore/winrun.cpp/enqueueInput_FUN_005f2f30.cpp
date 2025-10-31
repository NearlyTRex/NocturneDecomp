// Name: wincore_winrun.cpp_enqueueInput_FUN_005f2f30
// Address: 005f2f30
// Address Range: [[005f2f30, 005f2f69]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_enqueueInput_FUN_005f2f30(int input_value)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df2a3 [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 (005f3150) at 005f330f [UNCONDITIONAL_CALL]
// Globals:
//   BOOL g_UseMultimediaTimer
//   int g_InputReadIndex
//   int g_InputWriteIndex

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005f2f30(int input_value)

{
  g_InputWriteIndex = g_InputWriteIndex + 1;
  (&g_UseMultimediaTimer)[g_InputWriteIndex] = input_value;
  if (0x13 < g_InputWriteIndex) {
    g_InputWriteIndex = 0;
  }
  if ((g_InputWriteIndex == g_InputReadIndex) &&
     (g_InputReadIndex = g_InputReadIndex + 1, 0x13 < g_InputReadIndex)) {
    g_InputReadIndex = 0;
  }
  return;
}


// Assembly code:
// 005f2f30: PUSH EBX
//   Label: wincore_winrun.cpp_enqueueInput_FUN_005f2f30
// 005f2f31: MOV EDX,dword ptr [0x03f96c1c]
//   XREF to: 03f96c1c (READ)
// 005f2f37: MOV ECX,dword ptr [0x03f96c18]
//   XREF to: 03f96c18 (READ)
// 005f2f3d: INC EDX
// 005f2f3e: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f2f42: MOV dword ptr [EDX*0x4 + 0x3f96bc4],EBX
//   XREF to: 03f96bc4 (DATA)
// 005f2f49: CMP EDX,0x14
// 005f2f4c: JL 0x005f2f50
//   XREF to: 005f2f50 (CONDITIONAL_JUMP)
// 005f2f4e: XOR EDX,EDX
// 005f2f50: CMP EDX,ECX
//   Label: LAB_005f2f50
// 005f2f52: JNZ 0x005f2f5c
//   XREF to: 005f2f5c (CONDITIONAL_JUMP)
// 005f2f54: INC ECX
// 005f2f55: CMP ECX,0x14
// 005f2f58: JL 0x005f2f5c
//   XREF to: 005f2f5c (CONDITIONAL_JUMP)
// 005f2f5a: XOR ECX,ECX
// 005f2f5c: MOV dword ptr [0x03f96c18],ECX
//   Label: LAB_005f2f5c
//   XREF to: 03f96c18 (WRITE)
// 005f2f62: MOV dword ptr [0x03f96c1c],EDX
//   XREF to: 03f96c1c (WRITE)
// 005f2f68: POP EBX
// 005f2f69: RET

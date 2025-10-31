// Name: core_cloth.cpp_FUN_0043ab80
// Address: 0043ab80
// Address Range: [[0043ab80, 0043aba8]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043ab80()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043ca56 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c2d0 (0043c2d0) at 0043c304 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d36c5 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 005204b6 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8ed2 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6189 [UNCONDITIONAL_CALL]
// Function calls:
//   core_cloth.cpp_FUN_0043abb0

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043ab80(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void core_cloth_cpp_FUN_0043ab80(void)

{
  core_cloth_cpp_FUN_0043abb0();
  return;
}


// Assembly code:
// 0043ab80: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043ab80
// 0043ab81: PUSH ESI
// 0043ab82: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 0043ab86: PUSH EDX
// 0043ab87: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0043ab8b: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0043ab8f: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0043ab93: PUSH ECX
// 0043ab94: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043ab98: PUSH EBX
// 0043ab99: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0043ab9d: PUSH ESI
// 0043ab9e: CALL core_cloth.cpp_FUN_0043abb0
//   XREF to: 0043abb0 (UNCONDITIONAL_CALL)
// 0043aba3: ADD ESP,0x18
// 0043aba6: POP ESI
// 0043aba7: POP EBX
// 0043aba8: RET

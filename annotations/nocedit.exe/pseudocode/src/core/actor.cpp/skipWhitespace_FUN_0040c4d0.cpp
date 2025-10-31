// Name: core_actor.cpp_skipWhitespace_FUN_0040c4d0
// Address: 0040c4d0
// Address Range: [[0040c4d0, 0040c4ed]]
// Convention: __cdecl
// Signature: void core_actor.cpp_skipWhitespace_FUN_0040c4d0(char * * parse_pos)
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

void __cdecl core_actor_cpp_skipWhitespace_FUN_0040c4d0(char **parse_pos)

{
  while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
    *parse_pos = *parse_pos + 1;
  }
  return;
}


// Assembly code:
// 0040c4d0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_skipWhitespace_FUN_0040c4d0
//   XREF to: Stack[0x4] (READ)
// 0040c4d4: MOV EAX,dword ptr [ECX]
//   Label: LAB_0040c4d4
// 0040c4d6: MOV DL,byte ptr [EAX]
// 0040c4d8: INC DL
// 0040c4da: AND EDX,0xff
// 0040c4e0: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040c4e7: JZ 0x0040c47d
//   XREF to: 0040c47d (CONDITIONAL_JUMP)
// 0040c4e9: INC EAX
// 0040c4ea: MOV dword ptr [ECX],EAX
// 0040c4ec: JMP 0x0040c4d4
//   XREF to: 0040c4d4 (UNCONDITIONAL_JUMP)

// Name: core_netgame.cpp_CNetGame_FUN_00543930
// Address: 00543930
// Address Range: [[00543930, 00543963]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_00543930()
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 00540191 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540d22 [UNCONDITIONAL_CALL]
// Function calls:
//   core_netgame.cpp_CNetGame_FUN_00541230

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_00543930(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_netgame_cpp_CNetGame_FUN_00543930(void)

{
  core_netgame_cpp_CNetGame_FUN_00541230();
  return;
}


// Assembly code:
// 00543930: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_FUN_00543930
// 00543931: SUB ESP,0xc
// 00543934: MOV byte ptr [ESP + 0x4],0xd
//   XREF to: Stack[-0xc] (WRITE)
// 00543939: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0054393d: MOV dword ptr [ESP + 0x5],EAX
//   XREF to: Stack[-0xb] (WRITE)
// 00543941: MOV EAX,ESP
// 00543943: PUSH EAX
// 00543944: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00543948: PUSH ECX
// 00543949: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054394d: MOV EDX,0x9
// 00543952: PUSH EBX
// 00543953: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00543957: CALL core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: 00541230 (UNCONDITIONAL_CALL)
// 0054395c: ADD ESP,0xc
// 0054395f: ADD ESP,0xc
// 00543962: POP EBX
// 00543963: RET

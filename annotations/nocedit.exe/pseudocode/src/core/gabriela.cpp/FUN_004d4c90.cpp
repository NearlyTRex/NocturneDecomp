// Name: core_gabriela.cpp_FUN_004d4c90
// Address: 004d4c90
// Address Range: [[004d4c90, 004d4cdf]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4c90()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d32e7 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4ea0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CLightActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d4c90(undefined4 param_1) */

undefined4 core_gabriela_cpp_FUN_004d4c90(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  int in_stack_00000004;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x24b4),g_CLightActorClassInfo.name_hash
                     );
  if ((pCVar2 != (CDemonActor *)0x0) && ((iVar1 = pCVar2[4].scale.y, iVar1 == 2 || (iVar1 == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}


// Assembly code:
// 004d4c90: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d4c90
// 004d4c91: SUB ESP,0x4
// 004d4c94: MOV EDX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 004d4c9a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d4c9e: PUSH EDX
// 004d4c9f: MOV ECX,dword ptr [EAX + 0x24b4]
// 004d4ca5: PUSH ECX
// 004d4ca6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d4cab: ADD ESP,0x8
// 004d4cae: TEST EAX,EAX
// 004d4cb0: JZ 0x004d4cd1
//   XREF to: 004d4cd1 (CONDITIONAL_JUMP)
// 004d4cb2: MOV EBX,dword ptr [EAX + 0x66c]
// 004d4cb8: CMP EBX,0x2
// 004d4cbb: JZ 0x004d4cc2
//   XREF to: 004d4cc2 (CONDITIONAL_JUMP)
// 004d4cbd: CMP EBX,0x3
// 004d4cc0: JNZ 0x004d4cd1
//   XREF to: 004d4cd1 (CONDITIONAL_JUMP)
// 004d4cc2: MOV dword ptr [ESP],0xbf860a92
//   Label: LAB_004d4cc2
//   XREF to: Stack[-0x8] (DATA)
// 004d4cc9: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004d4ccc: ADD ESP,0x4
// 004d4ccf: POP EBX
// 004d4cd0: RET
// 004d4cd1: MOV dword ptr [ESP],0xbfc80fc6
//   Label: LAB_004d4cd1
//   XREF to: Stack[-0x8] (DATA)
// 004d4cd8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004d4cdb: ADD ESP,0x4
// 004d4cde: POP EBX
// 004d4cdf: RET

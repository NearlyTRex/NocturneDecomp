// Name: core_stranger.cpp_FUN_005be430
// Address: 005be430
// Address Range: [[005be430, 005be47f]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005be430()
// Globals:
//   undefined4 g_CLightActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

undefined4 core_stranger_cpp_FUN_005be430(void)

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
// 005be430: PUSH EBX
//   Label: core_stranger.cpp_FUN_005be430
// 005be431: SUB ESP,0x4
// 005be434: MOV EDX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 005be43a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005be43e: PUSH EDX
// 005be43f: MOV ECX,dword ptr [EAX + 0x24b4]
// 005be445: PUSH ECX
// 005be446: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005be44b: ADD ESP,0x8
// 005be44e: TEST EAX,EAX
// 005be450: JZ 0x005be471
//   XREF to: 005be471 (CONDITIONAL_JUMP)
// 005be452: MOV EBX,dword ptr [EAX + 0x66c]
// 005be458: CMP EBX,0x2
// 005be45b: JZ 0x005be462
//   XREF to: 005be462 (CONDITIONAL_JUMP)
// 005be45d: CMP EBX,0x3
// 005be460: JNZ 0x005be471
//   XREF to: 005be471 (CONDITIONAL_JUMP)
// 005be462: MOV dword ptr [ESP],0xbf860a92
//   Label: LAB_005be462
//   XREF to: Stack[-0x8] (DATA)
// 005be469: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005be46c: ADD ESP,0x4
// 005be46f: POP EBX
// 005be470: RET
// 005be471: MOV dword ptr [ESP],0xbfc80fc6
//   Label: LAB_005be471
//   XREF to: Stack[-0x8] (DATA)
// 005be478: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005be47b: ADD ESP,0x4
// 005be47e: POP EBX
// 005be47f: RET

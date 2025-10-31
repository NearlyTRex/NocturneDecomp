// Name: core_stone.cpp_FUN_005bad70
// Address: 005bad70
// Address Range: [[005bad70, 005badc8]]
// Convention: unknown
// Signature: undefined core_stone.cpp_FUN_005bad70()
// Globals:
//   TerminatedCString s_CHero_00653164
//   undefined4 g_CActorDestinationClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_stone.cpp_FUN_005bad70(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_stone_cpp_FUN_005bad70(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int in_stack_00000004;
  CDemonActor *in_stack_0000000c;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x66c),
                      g_CActorDestinationClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[1].location.area_id != 0)) {
    return 0;
  }
  if (*(int *)(in_stack_00000004 + 0x314) != 3) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000000c,"CHero");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(in_stack_00000004 + 0x314);
}


// Assembly code:
// 005bad70: PUSH EBX
//   Label: core_stone.cpp_FUN_005bad70
// 005bad71: PUSH EBP
// 005bad72: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005bad76: MOV EDX,dword ptr [0x020a4874]
//   XREF to: 020a4874 (READ)
// 005bad7c: PUSH EDX
// 005bad7d: MOV ECX,dword ptr [EBX + 0x66c]
// 005bad83: PUSH ECX
// 005bad84: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005bad89: ADD ESP,0x8
// 005bad8c: TEST EAX,EAX
// 005bad8e: JZ 0x005bad99
//   XREF to: 005bad99 (CONDITIONAL_JUMP)
// 005bad90: CMP dword ptr [EAX + 0x184],0x0
// 005bad97: JNZ 0x005badab
//   XREF to: 005badab (CONDITIONAL_JUMP)
// 005bad99: CMP dword ptr [EBX + 0x314],0x3
//   Label: LAB_005bad99
// 005bada0: JNZ 0x005badb0
//   XREF to: 005badb0 (CONDITIONAL_JUMP)
// 005bada2: MOV EAX,dword ptr [EBX + 0x314]
//   Label: LAB_005bada2
// 005bada8: POP EBP
// 005bada9: POP EBX
// 005badaa: RET
// 005badab: XOR EAX,EAX
//   Label: LAB_005badab
// 005badad: POP EBP
// 005badae: POP EBX
// 005badaf: RET
// 005badb0: PUSH 0x653164
//   Label: LAB_005badb0
//   XREF to: 00653164 (DATA)
// 005badb5: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005badb9: PUSH EBP
// 005badba: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005badbf: ADD ESP,0x8
// 005badc2: TEST EAX,EAX
// 005badc4: JNZ 0x005bada2
//   XREF to: 005bada2 (CONDITIONAL_JUMP)
// 005badc6: POP EBP
// 005badc7: POP EBX
// 005badc8: RET

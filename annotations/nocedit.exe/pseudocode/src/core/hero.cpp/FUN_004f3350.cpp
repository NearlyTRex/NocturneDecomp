// Name: core_hero.cpp_FUN_004f3350
// Address: 004f3350
// Address Range: [[004f3350, 004f33a4]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3350()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4075 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bcf33 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CBoxActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3350(undefined4 param_1) */

void core_hero_cpp_FUN_004f3350(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x1fba4) == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x1fba4),g_CBoxActorClassInfo.name_hash)
  ;
  if (in_stack_00000004 == pCVar1[2].was_created) {
    pCVar1[2].was_created = 0;
    sound_sndmain_cpp_FUN_005a9c40();
  }
  *(undefined4 *)(in_stack_00000004 + 0x1fba4) = 0;
  return;
}


// Assembly code:
// 004f3350: PUSH EBX
//   Label: core_hero.cpp_FUN_004f3350
// 004f3351: PUSH EBP
// 004f3352: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f3356: MOV EDX,dword ptr [EBX + 0x1fba4]
// 004f335c: TEST EDX,EDX
// 004f335e: JNZ 0x004f3363
//   XREF to: 004f3363 (CONDITIONAL_JUMP)
// 004f3360: POP EBP
// 004f3361: POP EBX
// 004f3362: RET
// 004f3363: PUSH EDI
//   Label: LAB_004f3363
// 004f3364: MOV ECX,dword ptr [0x008229e8]
//   XREF to: 008229e8 (READ)
// 004f336a: PUSH ECX
// 004f336b: PUSH EDX
// 004f336c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f3371: MOV EDI,dword ptr [EAX + 0x320]
// 004f3377: ADD ESP,0x8
// 004f337a: CMP EBX,EDI
// 004f337c: JNZ 0x004f3397
//   XREF to: 004f3397 (CONDITIONAL_JUMP)
// 004f337e: MOV EBP,dword ptr [EAX + 0x328]
// 004f3384: PUSH EBP
// 004f3385: MOV dword ptr [EAX + 0x320],0x0
// 004f338f: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004f3394: ADD ESP,0x4
// 004f3397: MOV dword ptr [EBX + 0x1fba4],0x0
//   Label: LAB_004f3397
// 004f33a1: POP EDI
// 004f33a2: POP EBP
// 004f33a3: POP EBX
// 004f33a4: RET

// Name: core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390
// Address: 005e7390
// Address Range: [[005e7390, 005e7406]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6489 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_voicusummon_wav_00656cbf
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDripClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_drip.cpp_FUN_0048e6b0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_AnotherVoicuSummonWavCall(undefined4 param_1) */

void core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar4 = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4),
                        g_CDripClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[2].location.position.y == 2.8026e-45)) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar2 == 0) {
        core_drip_cpp_FUN_0048e6b0();
      }
    }
    iVar4 = iVar4 + 4;
  }
  return;
}


// Assembly code:
// 005e7390: PUSH EBX
//   Label: core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390
// 005e7391: PUSH ESI
// 005e7392: PUSH EDI
// 005e7393: PUSH EBP
// 005e7394: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e7398: PUSH 0x656cbf
//   XREF to: 00656cbf (DATA)
// 005e739d: MOV EAX,dword ptr [EBX + 0x154]
// 005e73a3: PUSH EBX
// 005e73a4: XOR ESI,ESI
// 005e73a6: XOR EDI,EDI
// 005e73a8: CALL dword ptr [EAX + 0x24]
// 005e73ab: ADD ESP,0x8
// 005e73ae: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_005e73ae
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e73b4: CMP ESI,dword ptr [EBX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005e73ba: JL 0x005e73c1
//   XREF to: 005e73c1 (CONDITIONAL_JUMP)
// 005e73bc: POP EBP
// 005e73bd: POP EDI
// 005e73be: POP ESI
// 005e73bf: POP EBX
// 005e73c0: RET
// 005e73c1: MOV ECX,dword ptr [0x02c9b16c]
//   Label: LAB_005e73c1
//   XREF to: 02c9b16c (READ)
// 005e73c7: PUSH ECX
// 005e73c8: MOV EBP,dword ptr [EDI + EBX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 005e73cf: PUSH EBP
// 005e73d0: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e73d5: MOV EBX,EAX
// 005e73d7: ADD ESP,0x8
// 005e73da: TEST EAX,EAX
// 005e73dc: JZ 0x005e7401
//   XREF to: 005e7401 (CONDITIONAL_JUMP)
// 005e73de: CMP dword ptr [EAX + 0x2d4],0x2
// 005e73e5: JNZ 0x005e7401
//   XREF to: 005e7401 (CONDITIONAL_JUMP)
// 005e73e7: PUSH 0x3f000000
// 005e73ec: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005e73f1: ADD ESP,0x4
// 005e73f4: TEST EAX,EAX
// 005e73f6: JNZ 0x005e7401
//   XREF to: 005e7401 (CONDITIONAL_JUMP)
// 005e73f8: PUSH EBX
// 005e73f9: CALL core_drip.cpp_FUN_0048e6b0
//   XREF to: 0048e6b0 (UNCONDITIONAL_CALL)
// 005e73fe: ADD ESP,0x4
// 005e7401: INC ESI
//   Label: LAB_005e7401
// 005e7402: ADD EDI,0x4
// 005e7405: JMP 0x005e73ae
//   XREF to: 005e73ae (UNCONDITIONAL_JUMP)

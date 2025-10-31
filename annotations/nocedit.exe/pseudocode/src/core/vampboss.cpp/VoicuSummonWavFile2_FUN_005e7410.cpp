// Name: core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
// Address: 005e7410
// Address Range: [[005e7410, 005e7470]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6687 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_voicusummon_wav_00656ccf
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CEmitterClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_emitter.cpp_FUN_004a7e80

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_VoicuSummonWavFile2(undefined4 param_1) */

void core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                        g_CEmitterClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (*(int *)pCVar1[1].actor_name == 2)) {
      core_emitter_cpp_FUN_004a7e80();
    }
    iVar2 = iVar2 + 4;
  }
  return;
}


// Assembly code:
// 005e7410: PUSH EBX
//   Label: core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
// 005e7411: PUSH ESI
// 005e7412: PUSH EDI
// 005e7413: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e7417: PUSH 0x656ccf
//   XREF to: 00656ccf (DATA)
// 005e741c: MOV EAX,dword ptr [EBX + 0x154]
// 005e7422: PUSH EBX
// 005e7423: XOR ESI,ESI
// 005e7425: CALL dword ptr [EAX + 0x24]
// 005e7428: ADD ESP,0x8
// 005e742b: XOR EBX,EBX
// 005e742d: MOV EAX,[0x006810c8]
//   Label: LAB_005e742d
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 005e7432: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005e7438: JL 0x005e743e
//   XREF to: 005e743e (CONDITIONAL_JUMP)
// 005e743a: POP EDI
// 005e743b: POP ESI
// 005e743c: POP EBX
// 005e743d: RET
// 005e743e: MOV ECX,dword ptr [0x02cf2bb4]
//   Label: LAB_005e743e
//   XREF to: 02cf2bb4 (READ)
// 005e7444: PUSH ECX
// 005e7445: MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 005e744c: PUSH EDI
// 005e744d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e7452: ADD ESP,0x8
// 005e7455: TEST EAX,EAX
// 005e7457: JZ 0x005e746b
//   XREF to: 005e746b (CONDITIONAL_JUMP)
// 005e7459: CMP dword ptr [EAX + 0x158],0x2
// 005e7460: JNZ 0x005e746b
//   XREF to: 005e746b (CONDITIONAL_JUMP)
// 005e7462: PUSH EAX
// 005e7463: CALL core_emitter.cpp_FUN_004a7e80
//   XREF to: 004a7e80 (UNCONDITIONAL_CALL)
// 005e7468: ADD ESP,0x4
// 005e746b: INC ESI
//   Label: LAB_005e746b
// 005e746c: ADD EBX,0x4
// 005e746f: JMP 0x005e742d
//   XREF to: 005e742d (UNCONDITIONAL_JUMP)

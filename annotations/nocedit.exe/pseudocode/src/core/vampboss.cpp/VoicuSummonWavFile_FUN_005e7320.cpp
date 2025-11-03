// Name: core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320
// Address: 005e7320
// Address Range: [[005e7320, 005e7380]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6692 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_voicusummon_wav_00656caf
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 g_CTVBatClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_tvbat.cpp_FUN_005e4d70

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_VoicuSummonWavFile(undefined4 param_1) */

void core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CTVBatClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[0x8f].orient_matrix.m[0].x != 0.0)) {
      core_tvbat_cpp_FUN_005e4d70();
    }
    iVar3 = iVar3 + 4;
  }
  return;
}


// Assembly code:
// 005e7320: PUSH EBX
//   Label: core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320
// 005e7321: PUSH ESI
// 005e7322: PUSH EDI
// 005e7323: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e7327: PUSH 0x656caf
//   XREF to: 00656caf (DATA)
// 005e732c: MOV EAX,dword ptr [EBX + 0x154]
// 005e7332: PUSH EBX
// 005e7333: XOR ESI,ESI
// 005e7335: CALL dword ptr [EAX + 0x24]
// 005e7338: ADD ESP,0x8
// 005e733b: XOR EBX,EBX
// 005e733d: MOV EAX,[0x006810c8]
//   Label: LAB_005e733d
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 005e7342: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005e7348: JL 0x005e734e
//   XREF to: 005e734e (CONDITIONAL_JUMP)
// 005e734a: POP EDI
// 005e734b: POP ESI
// 005e734c: POP EBX
// 005e734d: RET
// 005e734e: MOV ECX,dword ptr [0x03f87518]
//   Label: LAB_005e734e
//   XREF to: 03f87518 (READ)
// 005e7354: PUSH ECX
// 005e7355: MOV EDI,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 005e735c: PUSH EDI
// 005e735d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e7362: ADD ESP,0x8
// 005e7365: TEST EAX,EAX
// 005e7367: JZ 0x005e737b
//   XREF to: 005e737b (CONDITIONAL_JUMP)
// 005e7369: CMP dword ptr [EAX + 0xc064],0x0
// 005e7370: JZ 0x005e737b
//   XREF to: 005e737b (CONDITIONAL_JUMP)
// 005e7372: PUSH EAX
// 005e7373: CALL core_tvbat.cpp_FUN_005e4d70
//   XREF to: 005e4d70 (UNCONDITIONAL_CALL)
// 005e7378: ADD ESP,0x4
// 005e737b: INC EBX
//   Label: LAB_005e737b
// 005e737c: ADD ESI,0x4
// 005e737f: JMP 0x005e733d
//   XREF to: 005e733d (UNCONDITIONAL_JUMP)

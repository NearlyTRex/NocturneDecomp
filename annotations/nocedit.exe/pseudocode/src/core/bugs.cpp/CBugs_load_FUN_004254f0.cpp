// Name: core_bugs.cpp_CBugs_load_FUN_004254f0
// Address: 004254f0
// Address Range: [[004254f0, 00425608]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_CBugs_load_FUN_004254f0()
// Globals:
//   TerminatedCString s_count_00616d33
//   TerminatedCString s_modelCount_00616d39
//   undefined4 DAT_00616d44
//   TerminatedCString s_modelName_00616d45
//   TerminatedCString s_allowChase_00616d4f
//   TerminatedCString s_allowSwarm_00616d5a
//   TerminatedCString s_allowChaseEvent_00616d65
//   TerminatedCString s_allowSwarmEvent_00616d75
//   TerminatedCString s_animateEvent_00616d85
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: int actors_enemy_bugs.cpp_CBugs_load(CBugs* pBugs) */

void core_bugs_cpp_CBugs_load_FUN_004254f0(void)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc),
             "count");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978),"modelCount")
  ;
  if (g_ActorReadingMode == 1) {
    pCVar1 = (CKeyFramedModelInstance *)(in_stack_00000004[1].base_character.cloth_data + 0x397c);
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(pCVar1,&DAT_00616d44);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)
                       (in_stack_00000004[1].base_character.cloth_data + 0x3f6c));
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978)) {
    pCVar1 = (CKeyFramedModelInstance *)(in_stack_00000004[1].base_character.cloth_data + 0x397c);
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices
                     [0x3c].m[1].y,"allowChase");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices
                     [0x3c].m[1].z,"allowSwarm");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices
                       [0x3c].m + 2),"allowChaseEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices
                       [0x3e].m[2].x,"allowSwarmEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices
                       [0x40].m[2].y,"animateEvent");
  return;
}


// Assembly code:
// 004254f0: PUSH EBX
//   Label: core_bugs.cpp_CBugs_load_FUN_004254f0
// 004254f1: PUSH ESI
// 004254f2: PUSH EDI
// 004254f3: PUSH EBP
// 004254f4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004254f8: PUSH EDI
// 004254f9: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 004254fe: ADD ESP,0x4
// 00425501: PUSH 0x616d33
//   XREF to: 00616d33 (DATA)
// 00425506: LEA EBX,[EDI + 0xbec0]
// 0042550c: PUSH EBX
// 0042550d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00425512: ADD ESP,0x8
// 00425515: PUSH 0x616d39
//   XREF to: 00616d39 (DATA)
// 0042551a: LEA EBX,[EDI + 0x122c4]
// 00425520: PUSH EBX
// 00425521: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00425526: MOV EDX,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 0042552c: ADD ESP,0x8
// 0042552f: CMP EDX,0x1
// 00425532: JNZ 0x00425560
//   XREF to: 00425560 (CONDITIONAL_JUMP)
// 00425534: LEA ESI,[EDI + 0x122c8]
// 0042553a: MOV EBX,ESI
// 0042553c: ADD ESI,0x5f0
// 00425542: PUSH 0x616d44
//   Label: LAB_00425542
//   XREF to: 00616d44 (DATA)
// 00425547: PUSH EBX
// 00425548: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0042554d: ADD EBX,0x17c
// 00425553: ADD ESP,0x8
// 00425556: CMP EBX,ESI
// 00425558: JNZ 0x00425542
//   XREF to: 00425542 (CONDITIONAL_JUMP)
// 0042555a: LEA EAX,[EAX]
// 00425560: MOV ECX,dword ptr [EDI + 0x122c4]
//   Label: LAB_00425560
// 00425566: XOR EBX,EBX
// 00425568: TEST ECX,ECX
// 0042556a: JLE 0x004255a0
//   XREF to: 004255a0 (CONDITIONAL_JUMP)
// 0042556c: LEA ESI,[EDI + 0x122c8]
// 00425572: PUSH 0x616d45
//   Label: LAB_00425572
//   XREF to: 00616d45 (DATA)
// 00425577: PUSH ESI
// 00425578: INC EBX
// 00425579: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0042557e: ADD ESP,0x8
// 00425581: MOV EBP,dword ptr [EDI + 0x122c4]
// 00425587: ADD ESI,0x17c
// 0042558d: CMP EBX,EBP
// 0042558f: JL 0x00425572
//   XREF to: 00425572 (CONDITIONAL_JUMP)
// 00425591: LEA EAX,[EAX]
// 00425597: LEA EDX,[EDX]
// 0042559d: LEA EAX,[EAX]
// 004255a0: PUSH 0x616d4f
//   Label: LAB_004255a0
//   XREF to: 00616d4f (DATA)
// 004255a5: LEA EBX,[EDI + 0x19898]
// 004255ab: PUSH EBX
// 004255ac: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004255b1: ADD ESP,0x8
// 004255b4: PUSH 0x616d5a
//   XREF to: 00616d5a (DATA)
// 004255b9: LEA EBX,[EDI + 0x1989c]
// 004255bf: PUSH EBX
// 004255c0: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004255c5: ADD ESP,0x8
// 004255c8: PUSH 0x616d65
//   XREF to: 00616d65 (DATA)
// 004255cd: LEA EBX,[EDI + 0x198a0]
// 004255d3: PUSH EBX
// 004255d4: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004255d9: ADD ESP,0x8
// 004255dc: PUSH 0x616d75
//   XREF to: 00616d75 (DATA)
// 004255e1: LEA EBX,[EDI + 0x19904]
// 004255e7: PUSH EBX
// 004255e8: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004255ed: ADD ESP,0x8
// 004255f0: PUSH 0x616d85
//   XREF to: 00616d85 (DATA)
// 004255f5: ADD EDI,0x19968
// 004255fb: PUSH EDI
// 004255fc: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00425601: ADD ESP,0x8
// 00425604: POP EBP
// 00425605: POP EDI
// 00425606: POP ESI
// 00425607: POP EBX
// 00425608: RET

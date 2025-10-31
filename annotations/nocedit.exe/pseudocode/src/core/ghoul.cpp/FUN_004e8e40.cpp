// Name: core_ghoul.cpp_FUN_004e8e40
// Address: 004e8e40
// Address Range: [[004e8e40, 004e8ed3]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8e40()
// Globals:
//   void* switchdataD_004e8e20 = 004e8e66
//   TerminatedCString s_guul_dfm_0062df01
//   TerminatedCString s_chubgul2_dfm_0062df0a
//   TerminatedCString s_guullmap_dfm_0062df17
//   TerminatedCString s_longguul_dfm_0062df24
//   TerminatedCString s_chubguul_dfm_0062df31
// Function calls:
//   core_actor.cpp_FUN_0040cc70
//   core_enemy.cpp_CEnemy_FUN_004aa250
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e8e40(undefined4 param_1) */

void core_ghoul_cpp_FUN_004e8e40(void)

{
  undefined4 uVar1;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  uVar1 = core_actor_cpp_FUN_0040cc70();
  switch(uVar1) {
  case 0:
    core_skeleton_cpp_FUN_005a0840();
    break;
  case 1:
    core_skeleton_cpp_FUN_005a0840();
    return;
  case 2:
    core_skeleton_cpp_FUN_005a0840();
    return;
  case 3:
    core_skeleton_cpp_FUN_005a0840();
    return;
  case 4:
    core_skeleton_cpp_FUN_005a0840();
    return;
  }
  return;
}


// Assembly code:
// 004e8e40: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e8e40
// 004e8e41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e8e45: PUSH EBX
// 004e8e46: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 004e8e4b: ADD ESP,0x4
// 004e8e4e: PUSH 0x4
// 004e8e50: PUSH 0x0
// 004e8e52: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004e8e57: ADD ESP,0x8
// 004e8e5a: CMP EAX,0x4
// 004e8e5d: JA 0x004e8e7a
//   XREF to: 004e8e7a (CONDITIONAL_JUMP)
// 004e8e5f: JMP dword ptr [EAX*0x4 + 0x4e8e20]
//   Label: switchD
//   XREF to: 004e8e66 (COMPUTED_JUMP)
//   XREF to: 004e8e7c (COMPUTED_JUMP)
//   XREF to: 004e8e92 (COMPUTED_JUMP)
//   XREF to: 004e8ea8 (COMPUTED_JUMP)
//   XREF to: 004e8ebe (COMPUTED_JUMP)
//   XREF to: 004e8e20 (DATA)
// 004e8e66: PUSH 0x62df01
//   Label: caseD_0
//   XREF to: 0062df01 (DATA)
// 004e8e6b: ADD EBX,0x158
// 004e8e71: PUSH EBX
// 004e8e72: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e8e77: ADD ESP,0x8
// 004e8e7a: POP EBX
//   Label: default
// 004e8e7b: RET
// 004e8e7c: PUSH 0x62df0a
//   Label: caseD_1
//   XREF to: 0062df0a (DATA)
// 004e8e81: ADD EBX,0x158
// 004e8e87: PUSH EBX
// 004e8e88: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e8e8d: ADD ESP,0x8
// 004e8e90: POP EBX
// 004e8e91: RET
// 004e8e92: PUSH 0x62df17
//   Label: caseD_2
//   XREF to: 0062df17 (DATA)
// 004e8e97: ADD EBX,0x158
// 004e8e9d: PUSH EBX
// 004e8e9e: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e8ea3: ADD ESP,0x8
// 004e8ea6: POP EBX
// 004e8ea7: RET
// 004e8ea8: PUSH 0x62df24
//   Label: caseD_3
//   XREF to: 0062df24 (DATA)
// 004e8ead: ADD EBX,0x158
// 004e8eb3: PUSH EBX
// 004e8eb4: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e8eb9: ADD ESP,0x8
// 004e8ebc: POP EBX
// 004e8ebd: RET
// 004e8ebe: PUSH 0x62df31
//   Label: caseD_4
//   XREF to: 0062df31 (DATA)
// 004e8ec3: ADD EBX,0x158
// 004e8ec9: PUSH EBX
// 004e8eca: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e8ecf: ADD ESP,0x8
// 004e8ed2: POP EBX
// 004e8ed3: RET

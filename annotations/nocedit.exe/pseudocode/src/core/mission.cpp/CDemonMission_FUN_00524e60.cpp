// Name: core_mission.cpp_CDemonMission_FUN_00524e60
// Address: 00524e60
// Address Range: [[00524e60, 00524ee5]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00524e60(CDemonMission * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdf23 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHero_0063966c
//   TerminatedCString s_CEnemy_00639672
//   TerminatedCString s_CNPC_00639679
//   TerminatedCString s_CWeapon_0063967e
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00524e60(CDemonMission *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  FILE *in_stack_00000008;
  int in_stack_0000000c;
  
  for (actor_ptr = this_ptr->first_actor; actor_ptr != (CDemonActor *)0x0;
      actor_ptr = (actor_ptr->metadata).next_actor) {
    if ((in_stack_0000000c != 0) ||
       ((((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHero"), iVar1 == 0 &&
          (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CEnemy"), iVar1 == 0))
         && (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CNPC"), iVar1 == 0))
        && (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CWeapon"), iVar1 == 0)
        ))) {
      (*((actor_ptr->metadata).vtable)->writeDependencies)(actor_ptr,in_stack_00000008);
    }
  }
  return;
}


// Assembly code:
// 00524e60: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00524e60
// 00524e61: PUSH ESI
// 00524e62: PUSH EDI
// 00524e63: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00524e67: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00524e6b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00524e6f: MOV EBX,dword ptr [EBX + 0x548]
// 00524e75: TEST EBX,EBX
// 00524e77: JZ 0x00524e98
//   XREF to: 00524e98 (CONDITIONAL_JUMP)
// 00524e79: TEST EDI,EDI
//   Label: LAB_00524e79
// 00524e7b: JZ 0x00524e9c
//   XREF to: 00524e9c (CONDITIONAL_JUMP)
// 00524e7d: PUSH ESI
//   Label: LAB_00524e7d
// 00524e7e: MOV EAX,dword ptr [EBX + 0x154]
// 00524e84: PUSH EBX
// 00524e85: CALL dword ptr [EAX + 0xe0]
// 00524e8b: ADD ESP,0x8
// 00524e8e: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00524e8e
// 00524e94: TEST EBX,EBX
// 00524e96: JNZ 0x00524e79
//   XREF to: 00524e79 (CONDITIONAL_JUMP)
// 00524e98: POP EDI
//   Label: LAB_00524e98
// 00524e99: POP ESI
// 00524e9a: POP EBX
// 00524e9b: RET
// 00524e9c: PUSH 0x63966c
//   Label: LAB_00524e9c
//   XREF to: 0063966c (DATA)
// 00524ea1: PUSH EBX
// 00524ea2: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00524ea7: ADD ESP,0x8
// 00524eaa: TEST EAX,EAX
// 00524eac: JNZ 0x00524e8e
//   XREF to: 00524e8e (CONDITIONAL_JUMP)
// 00524eae: PUSH 0x639672
//   XREF to: 00639672 (DATA)
// 00524eb3: PUSH EBX
// 00524eb4: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00524eb9: ADD ESP,0x8
// 00524ebc: TEST EAX,EAX
// 00524ebe: JNZ 0x00524e8e
//   XREF to: 00524e8e (CONDITIONAL_JUMP)
// 00524ec0: PUSH 0x639679
//   XREF to: 00639679 (DATA)
// 00524ec5: PUSH EBX
// 00524ec6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00524ecb: ADD ESP,0x8
// 00524ece: TEST EAX,EAX
// 00524ed0: JNZ 0x00524e8e
//   XREF to: 00524e8e (CONDITIONAL_JUMP)
// 00524ed2: PUSH 0x63967e
//   XREF to: 0063967e (DATA)
// 00524ed7: PUSH EBX
// 00524ed8: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00524edd: ADD ESP,0x8
// 00524ee0: TEST EAX,EAX
// 00524ee2: JNZ 0x00524e8e
//   XREF to: 00524e8e (CONDITIONAL_JUMP)
// 00524ee4: JMP 0x00524e7d
//   XREF to: 00524e7d (UNCONDITIONAL_JUMP)

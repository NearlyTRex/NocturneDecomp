// Name: core_mission.cpp_CDemonMission_FUN_00523f20
// Address: 00523f20
// Address Range: [[00523f20, 00523f4a]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00523f50 (00523f50) at 00523f6b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 (00524a80) at 00524b68 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524296 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005244e6 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524d65 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00538df0 (00538df0) at 00538e35 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dbc4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e973 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 (0053bc80) at 0053bcb1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_deleteActor_FUN_00408820
//   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523f20(CDemonMission *this_ptr)

{
  CDemonActor *in_stack_00000008;
  int in_stack_00000010;
  
  if (in_stack_00000008 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(this_ptr,in_stack_00000008);
    if (in_stack_00000010 != 0) {
      core_actor_cpp_deleteActor_FUN_00408820(in_stack_00000008);
      return;
    }
  }
  return;
}


// Assembly code:
// 00523f20: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00523f20
// 00523f21: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00523f25: TEST EBX,EBX
// 00523f27: JNZ 0x00523f2b
//   XREF to: 00523f2b (CONDITIONAL_JUMP)
// 00523f29: POP EBX
//   Label: LAB_00523f29
// 00523f2a: RET
// 00523f2b: PUSH EBX
//   Label: LAB_00523f2b
// 00523f2c: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00523f30: PUSH EDX
// 00523f31: CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   XREF to: 00523be0 (UNCONDITIONAL_CALL)
// 00523f36: ADD ESP,0x8
// 00523f39: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0xc] (READ)
// 00523f3e: JZ 0x00523f29
//   XREF to: 00523f29 (CONDITIONAL_JUMP)
// 00523f40: PUSH EBX
// 00523f41: CALL core_actor.cpp_deleteActor_FUN_00408820
//   XREF to: 00408820 (UNCONDITIONAL_CALL)
// 00523f46: ADD ESP,0x4
// 00523f49: POP EBX
// 00523f4a: RET

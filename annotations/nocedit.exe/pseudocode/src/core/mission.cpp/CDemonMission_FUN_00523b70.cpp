// Name: core_mission.cpp_CDemonMission_FUN_00523b70
// Address: 00523b70
// Address Range: [[00523b70, 00523bd8]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_00413f20 (00413f20) at 00413fbd [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 (00418e10) at 00418eda [UNCONDITIONAL_CALL]
//   core_gore.cpp_CreateFlies_FUN_004edf30 (004edf30) at 004ee006 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 (00520ba0) at 00520c48 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 (00524920) at 00524a40 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523475 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524d6f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bf32 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bbda [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dbd5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e400 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d16d [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 00546016 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c546d [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c7243 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e71fe [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e858c [UNCONDITIONAL_CALL]
// Function calls:
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523b70(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008 != (CDemonActor *)0x0) {
    if (in_stack_00000008->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
    }
    iVar1 = *(int *)this_ptr->field6_0x54c;
    if (iVar1 != 0) {
      (in_stack_00000008->metadata).next_actor = (CDemonActor *)0x0;
      *(int *)(in_stack_00000008->metadata).field5_0x28 = iVar1;
      *(CDemonActor **)(*(int *)this_ptr->field6_0x54c + 0x14c) = in_stack_00000008;
      *(CDemonActor **)this_ptr->field6_0x54c = in_stack_00000008;
      return;
    }
    (in_stack_00000008->metadata).next_actor = (CDemonActor *)0x0;
    (in_stack_00000008->metadata).field5_0x28[0] = '\0';
    (in_stack_00000008->metadata).field5_0x28[1] = '\0';
    (in_stack_00000008->metadata).field5_0x28[2] = '\0';
    (in_stack_00000008->metadata).field5_0x28[3] = '\0';
    this_ptr->first_actor = in_stack_00000008;
    *(CDemonActor **)this_ptr->field6_0x54c = in_stack_00000008;
  }
  return;
}


// Assembly code:
// 00523b70: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00523b70
// 00523b71: PUSH ESI
// 00523b72: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00523b76: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00523b7a: TEST EBX,EBX
// 00523b7c: JZ 0x00523ba5
//   XREF to: 00523ba5 (CONDITIONAL_JUMP)
// 00523b7e: CMP byte ptr [EBX],0x0
// 00523b81: JZ 0x00523ba8
//   XREF to: 00523ba8 (CONDITIONAL_JUMP)
// 00523b83: MOV EDX,dword ptr [ESI + 0x54c]
//   Label: LAB_00523b83
// 00523b89: TEST EDX,EDX
// 00523b8b: JNZ 0x00523bb4
//   XREF to: 00523bb4 (CONDITIONAL_JUMP)
// 00523b8d: MOV dword ptr [EBX + 0x14c],EDX
// 00523b93: MOV dword ptr [EBX + 0x150],EDX
// 00523b99: MOV dword ptr [ESI + 0x548],EBX
// 00523b9f: MOV dword ptr [ESI + 0x54c],EBX
// 00523ba5: POP ESI
//   Label: LAB_00523ba5
// 00523ba6: POP EBX
// 00523ba7: RET
// 00523ba8: PUSH EBX
//   Label: LAB_00523ba8
// 00523ba9: PUSH ESI
// 00523baa: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 00523baf: ADD ESP,0x8
// 00523bb2: JMP 0x00523b83
//   XREF to: 00523b83 (UNCONDITIONAL_JUMP)
// 00523bb4: MOV dword ptr [EBX + 0x14c],0x0
//   Label: LAB_00523bb4
// 00523bbe: MOV dword ptr [EBX + 0x150],EDX
// 00523bc4: MOV EAX,dword ptr [ESI + 0x54c]
// 00523bca: MOV dword ptr [EAX + 0x14c],EBX
// 00523bd0: MOV dword ptr [ESI + 0x54c],EBX
// 00523bd6: POP ESI
// 00523bd7: POP EBX
// 00523bd8: RET

// Name: core_mission.cpp_CDemonMission_FUN_00524030
// Address: 00524030
// Address Range: [[00524030, 00524065]]
// Convention: __cdecl
// Signature: char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f649 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa400 (004aa400) at 004aa4d5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e199e [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f4626 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 (00523990) at 00523a8f [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524660 (00524660) at 005246c4 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524cc0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e093 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b7c6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c2f5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d220 (0053d220) at 0053d373 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053dde1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ac5a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b2e6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 (0053cad0) at 0053cb77 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d069 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565d8a [UNCONDITIONAL_CALL]
//   core_script.cpp_GetDemonActor_FUN_005594e0 (005594e0) at 00559609 [UNCONDITIONAL_CALL]
//   core_script.cpp_GetReferencedActor_FUN_00560760 (00560760) at 005607c6 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da941 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfbe5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

char * __cdecl core_mission_cpp_CDemonMission_FUN_00524030(CDemonMission *this_ptr)

{
  CDemonActor *str1;
  int iVar1;
  char *in_stack_00000008;
  
  str1 = this_ptr->first_actor;
  while( true ) {
    if (str1 == (CDemonActor *)0x0) {
      return (char *)0x0;
    }
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->actor_name,in_stack_00000008);
    if (iVar1 == 0) break;
    str1 = (str1->metadata).next_actor;
  }
  return str1->actor_name;
}


// Assembly code:
// 00524030: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00524030
// 00524031: PUSH ESI
// 00524032: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00524036: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052403a: MOV EBX,dword ptr [EBX + 0x548]
// 00524040: TEST EBX,EBX
// 00524042: JZ 0x0052405c
//   XREF to: 0052405c (CONDITIONAL_JUMP)
// 00524044: PUSH ESI
//   Label: LAB_00524044
// 00524045: PUSH EBX
// 00524046: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0052404b: ADD ESP,0x8
// 0052404e: TEST EAX,EAX
// 00524050: JZ 0x00524061
//   XREF to: 00524061 (CONDITIONAL_JUMP)
// 00524052: MOV EBX,dword ptr [EBX + 0x14c]
// 00524058: TEST EBX,EBX
// 0052405a: JNZ 0x00524044
//   XREF to: 00524044 (CONDITIONAL_JUMP)
// 0052405c: XOR EAX,EAX
//   Label: LAB_0052405c
// 0052405e: POP ESI
// 0052405f: POP EBX
// 00524060: RET
// 00524061: MOV EAX,EBX
//   Label: LAB_00524061
// 00524063: POP ESI
// 00524064: POP EBX
// 00524065: RET

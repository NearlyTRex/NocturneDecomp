// Name: core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
// Address: 00524700
// Address Range: [[00524700, 00524757]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_00413f20 (00413f20) at 00413f92 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 (00418e10) at 00418eca [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e0344 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd930 (004dd930) at 004dd96d [UNCONDITIONAL_CALL]
//   core_game.cpp_giveHeroWeapon_FUN_004dd870 (004dd870) at 004dd88d [UNCONDITIONAL_CALL]
//   core_gore.cpp_CreateFlies_FUN_004edf30 (004edf30) at 004edff6 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 (004f3d80) at 004f3de7 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe862 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 (00520ba0) at 00520c32 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523b70 (00523b70) at 00523baa [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524d59 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bfe2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bab0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e3ac [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d162 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c7170 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e84ea [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_mission.cpp_FUN_00524660

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission *this_ptr)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  CDemonActor *in_stack_00000008;
  char acStack_24 [24];
  
  in_stack_00000008->actor_name[0] = '\0';
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(in_stack_00000008);
  core_mission_cpp_FUN_00524660();
  pcVar2 = acStack_24;
  do {
    cVar1 = *pcVar2;
    in_stack_00000008->actor_name[0] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    in_stack_00000008->actor_name[1] = cVar1;
    in_stack_00000008 = (CDemonActor *)(in_stack_00000008->actor_name + 2);
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00524700: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
// 00524701: PUSH ESI
// 00524702: PUSH EDI
// 00524703: SUB ESP,0x20
// 00524706: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0052470a: PUSH EDI
// 0052470b: MOV byte ptr [EDI],0x0
// 0052470e: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 00524713: ADD ESP,0x4
// 00524716: MOV BL,byte ptr [EAX]
// 00524718: MOV EDX,EAX
// 0052471a: CMP BL,0x43
// 0052471d: JNZ 0x00524722
//   XREF to: 00524722 (CONDITIONAL_JUMP)
// 0052471f: LEA EDX,[EAX + 0x1]
// 00524722: PUSH EDX
//   Label: LAB_00524722
// 00524723: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 00524727: PUSH EAX
// 00524728: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0052472c: PUSH EDX
// 0052472d: CALL core_mission.cpp_FUN_00524660
//   XREF to: 00524660 (UNCONDITIONAL_CALL)
// 00524732: ADD ESP,0xc
// 00524735: MOV ESI,ESP
// 00524737: PUSH EDI
// 00524738: MOV AL,byte ptr [ESI]
//   Label: LAB_00524738
//   XREF to: Stack[-0x2c] (DATA)
// 0052473a: MOV byte ptr [EDI],AL
// 0052473c: CMP AL,0x0
// 0052473e: JZ 0x00524750
//   XREF to: 00524750 (CONDITIONAL_JUMP)
// 00524740: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2b] (READ)
// 00524743: ADD ESI,0x2
// 00524746: MOV byte ptr [EDI + 0x1],AL
// 00524749: ADD EDI,0x2
// 0052474c: CMP AL,0x0
// 0052474e: JNZ 0x00524738
//   XREF to: 00524738 (CONDITIONAL_JUMP)
// 00524750: POP EDI
//   Label: LAB_00524750
// 00524751: ADD ESP,0x20
// 00524754: POP EDI
// 00524755: POP ESI
// 00524756: POP EBX
// 00524757: RET

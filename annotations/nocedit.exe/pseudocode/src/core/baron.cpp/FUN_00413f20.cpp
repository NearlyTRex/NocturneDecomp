// Name: core_baron.cpp_FUN_00413f20
// Address: 00413f20
// Address Range: [[00413f20, 00413fe1]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00413f20()
// Cross-references:
//   core_baron.cpp_CBaronWeapon_FUN_00413e30 (00413e30) at 00413e36 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaronWeapon_process_FUN_00413dc0 (00413dc0) at 00413dc5 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 (00413e90) at 00413ee9 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413df0 (00413df0) at 00413df6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CBaron_0061510c
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CBaronClassInfo.name_hash
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700

#include "nocturne.h"

/* Signature: undefined1 actors_hero_baron.cpp_FUN_00413f20(undefined4 param_1) */

void core_baron_cpp_FUN_00413f20(void)

{
  CDemonMission *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x578) == 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                          g_CBaronClassInfo.name_hash);
      *(CDemonActor **)(in_stack_00000004 + 0x578) = pCVar1;
      if (pCVar1 != (CDemonActor *)0x0) break;
      iVar3 = iVar3 + 4;
    }
    if (*(int *)(in_stack_00000004 + 0x578) == 0) {
      pCVar1 = core_actor_cpp_createActorByName_FUN_0040c430("CBaron");
      this_ptr = g_CDemonMissionPtr;
      *(CDemonActor **)(in_stack_00000004 + 0x578) = pCVar1;
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
      (*(code *)**(undefined4 **)(*(int *)(in_stack_00000004 + 0x578) + 0x154))();
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x578) + 0x154) + 0x60))();
      return;
    }
  }
  return;
}


// Assembly code:
// 00413f20: PUSH EBX
//   Label: core_baron.cpp_FUN_00413f20
// 00413f21: PUSH ESI
// 00413f22: PUSH EDI
// 00413f23: PUSH EBP
// 00413f24: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00413f28: CMP dword ptr [EDI + 0x578],0x0
// 00413f2f: JNZ 0x00413f4b
//   XREF to: 00413f4b (CONDITIONAL_JUMP)
// 00413f31: XOR ESI,ESI
// 00413f33: XOR EBX,EBX
// 00413f35: MOV EAX,[0x006810c8]
//   Label: LAB_00413f35
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 00413f3a: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00413f40: JL 0x00413f50
//   XREF to: 00413f50 (CONDITIONAL_JUMP)
// 00413f42: CMP dword ptr [EDI + 0x578],0x0
//   Label: LAB_00413f42
// 00413f49: JZ 0x00413f77
//   XREF to: 00413f77 (CONDITIONAL_JUMP)
// 00413f4b: POP EBP
//   Label: LAB_00413f4b
// 00413f4c: POP EDI
// 00413f4d: POP ESI
// 00413f4e: POP EBX
// 00413f4f: RET
// 00413f50: MOV EBP,dword ptr [0x00822518]
//   Label: LAB_00413f50
//   XREF to: 00822518 (READ)
// 00413f56: PUSH EBP
// 00413f57: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 00413f5e: PUSH EDX
// 00413f5f: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00413f64: ADD ESP,0x8
// 00413f67: MOV dword ptr [EDI + 0x578],EAX
// 00413f6d: TEST EAX,EAX
// 00413f6f: JNZ 0x00413f42
//   XREF to: 00413f42 (CONDITIONAL_JUMP)
// 00413f71: INC EBX
// 00413f72: ADD ESI,0x4
// 00413f75: JMP 0x00413f35
//   XREF to: 00413f35 (UNCONDITIONAL_JUMP)
// 00413f77: PUSH 0x61510c
//   Label: LAB_00413f77
//   XREF to: 0061510c (DATA)
// 00413f7c: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 00413f81: ADD ESP,0x4
// 00413f84: PUSH EAX
// 00413f85: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00413f8b: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 00413f8c: MOV dword ptr [EDI + 0x578],EAX
// 00413f92: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 00413f97: ADD ESP,0x8
// 00413f9a: MOV EAX,dword ptr [EDI + 0x578]
// 00413fa0: PUSH EAX
// 00413fa1: MOV EBX,dword ptr [EAX + 0x154]
// 00413fa7: CALL dword ptr [EBX]
// 00413fa9: ADD ESP,0x4
// 00413fac: MOV EAX,dword ptr [EDI + 0x578]
// 00413fb2: PUSH EAX
// 00413fb3: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00413fb9: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 00413fba: LEA ESI,[EDI + 0x30]
// 00413fbd: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 00413fc2: ADD ESP,0x8
// 00413fc5: ADD EDI,0x20
// 00413fc8: PUSH ESI
// 00413fc9: MOV EAX,dword ptr [EDI + 0x558]
// 00413fcf: PUSH EDI
// 00413fd0: MOV EBX,dword ptr [EAX + 0x154]
// 00413fd6: PUSH EAX
// 00413fd7: CALL dword ptr [EBX + 0x60]
// 00413fda: ADD ESP,0xc
// 00413fdd: POP EBP
// 00413fde: POP EDI
// 00413fdf: POP ESI
// 00413fe0: POP EBX
// 00413fe1: RET

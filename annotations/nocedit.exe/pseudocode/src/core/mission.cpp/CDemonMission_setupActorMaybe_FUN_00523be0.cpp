// Name: core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
// Address: 00523be0
// Address Range: [[00523be0, 00523cb0]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe561 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_loadItems_FUN_004ff740 (004ff740) at 004ff762 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523f20 (00523f20) at 00523f31 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005244b4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d14a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00639087
//   TerminatedCString s_core_mission_cpp_0063909b
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0
          (CDemonMission *this_ptr,CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (actor_ptr,"..\\core\\mission.cpp",0x2c8);
  pCVar1 = this_ptr->first_actor;
  while( true ) {
    if (pCVar1 == (CDemonActor *)0x0) {
      return;
    }
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (pCVar1,"..\\core\\mission.cpp",0x2ce);
    if (pCVar1 == actor_ptr) break;
    pCVar1 = pCVar1->next_actor;
  }
  iVar2 = actor_ptr->field28_0x150;
  if (iVar2 == 0) {
    pCVar1 = actor_ptr->next_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      this_ptr->first_actor = (CDemonActor *)0x0;
      this_ptr->field6_0x54c[0] = '\0';
      this_ptr->field6_0x54c[1] = '\0';
      this_ptr->field6_0x54c[2] = '\0';
      this_ptr->field6_0x54c[3] = '\0';
    }
    else {
      this_ptr->first_actor = pCVar1;
      pCVar1->field28_0x150 = 0;
    }
  }
  else {
    pCVar1 = actor_ptr->next_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      *(int *)this_ptr->field6_0x54c = iVar2;
      *(undefined4 *)(iVar2 + 0x14c) = 0;
    }
    else {
      *(CDemonActor **)(iVar2 + 0x14c) = pCVar1;
      pCVar1->field28_0x150 = actor_ptr->field28_0x150;
    }
  }
  actor_ptr->next_actor = (CDemonActor *)0x0;
  actor_ptr->field28_0x150 = 0;
  return;
}


// Assembly code:
// 00523be0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
// 00523be1: PUSH ESI
// 00523be2: PUSH EDI
// 00523be3: PUSH EBP
// 00523be4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00523be8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00523bec: TEST ESI,ESI
// 00523bee: JNZ 0x00523bf5
//   XREF to: 00523bf5 (CONDITIONAL_JUMP)
// 00523bf0: POP EBP
// 00523bf1: POP EDI
// 00523bf2: POP ESI
// 00523bf3: POP EBX
// 00523bf4: RET
// 00523bf5: PUSH 0x2c8
//   Label: LAB_00523bf5
// 00523bfa: PUSH 0x639087
//   XREF to: 00639087 (DATA)
// 00523bff: PUSH ESI
// 00523c00: XOR EBP,EBP
// 00523c02: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00523c07: MOV EBX,dword ptr [EDI + 0x548]
// 00523c0d: ADD ESP,0xc
// 00523c10: TEST EBX,EBX
// 00523c12: JZ 0x00523c6e
//   XREF to: 00523c6e (CONDITIONAL_JUMP)
// 00523c14: PUSH 0x2ce
//   Label: LAB_00523c14
// 00523c19: PUSH 0x63909b
//   XREF to: 0063909b (DATA)
// 00523c1e: PUSH EBX
// 00523c1f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00523c24: ADD ESP,0xc
// 00523c27: CMP EBX,ESI
// 00523c29: JNZ 0x00523c64
//   XREF to: 00523c64 (CONDITIONAL_JUMP)
// 00523c2b: MOV EDX,dword ptr [ESI + 0x150]
//   Label: LAB_00523c2b
// 00523c31: TEST EDX,EDX
// 00523c33: JNZ 0x00523c85
//   XREF to: 00523c85 (CONDITIONAL_JUMP)
// 00523c35: MOV EBX,dword ptr [ESI + 0x14c]
// 00523c3b: TEST EBX,EBX
// 00523c3d: JNZ 0x00523c77
//   XREF to: 00523c77 (CONDITIONAL_JUMP)
// 00523c3f: MOV dword ptr [EDI + 0x548],EDX
// 00523c45: MOV dword ptr [EDI + 0x54c],EDX
// 00523c4b: MOV dword ptr [ESI + 0x14c],0x0
//   Label: LAB_00523c4b
// 00523c55: MOV dword ptr [ESI + 0x150],0x0
// 00523c5f: POP EBP
// 00523c60: POP EDI
// 00523c61: POP ESI
// 00523c62: POP EBX
// 00523c63: RET
// 00523c64: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00523c64
// 00523c6a: TEST EBX,EBX
// 00523c6c: JNZ 0x00523c14
//   XREF to: 00523c14 (CONDITIONAL_JUMP)
// 00523c6e: TEST EBP,EBP
//   Label: LAB_00523c6e
// 00523c70: JNZ 0x00523c2b
//   XREF to: 00523c2b (CONDITIONAL_JUMP)
// 00523c72: POP EBP
// 00523c73: POP EDI
// 00523c74: POP ESI
// 00523c75: POP EBX
// 00523c76: RET
// 00523c77: MOV dword ptr [EDI + 0x548],EBX
//   Label: LAB_00523c77
// 00523c7d: MOV dword ptr [EBX + 0x150],EDX
// 00523c83: JMP 0x00523c4b
//   XREF to: 00523c4b (UNCONDITIONAL_JUMP)
// 00523c85: MOV ECX,dword ptr [ESI + 0x14c]
//   Label: LAB_00523c85
// 00523c8b: TEST ECX,ECX
// 00523c8d: JNZ 0x00523c9d
//   XREF to: 00523c9d (CONDITIONAL_JUMP)
// 00523c8f: MOV dword ptr [EDI + 0x54c],EDX
// 00523c95: MOV dword ptr [EDX + 0x14c],ECX
// 00523c9b: JMP 0x00523c4b
//   XREF to: 00523c4b (UNCONDITIONAL_JUMP)
// 00523c9d: MOV dword ptr [EDX + 0x14c],ECX
//   Label: LAB_00523c9d
// 00523ca3: MOV EBX,dword ptr [ESI + 0x150]
// 00523ca9: MOV dword ptr [ECX + 0x150],EBX
// 00523caf: JMP 0x00523c4b
//   XREF to: 00523c4b (UNCONDITIONAL_JUMP)

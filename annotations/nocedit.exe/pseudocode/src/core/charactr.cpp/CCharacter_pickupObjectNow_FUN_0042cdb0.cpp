// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
// Address: 0042cdb0
// Address Range: [[0042cdb0, 0042ce78]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c355 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f6cf [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3890 (004f3890) at 004f38ae [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f93a0 (004f93a0) at 004f945c [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525afe [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5481 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e720f [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e857c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9947 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_006172a2
//   TerminatedCString s_CCharacter_pickupObjectN_006172b7
//   TerminatedCString s_core_charactr_cpp_006172e8
//   TerminatedCString s_CCharacter_pickupObjectN_006172fd
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter *this_ptr)

{
  SCarryHand *pSVar1;
  int in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  
  if ((in_stack_00000008 < 0) || (1 < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xbd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (in_stack_0000000c != (CDemonActor *)0x0) {
    (*(this_ptr->base_actor).metadata.vtable[1].renderTargetPoints)(&this_ptr->base_actor);
    pSVar1 = this_ptr->carry_hands + in_stack_00000008;
    if ((*(int *)(pSVar1->field0_0x0 + 4) < 0) ||
       (*(int *)((this_ptr->model).padding_0x0 + *(int *)(pSVar1->field0_0x0 + 4) * 4 + 0x2140) != 0
       )) {
      if (*(int *)pSVar1->field0_0x0 < 0) {
        g_CurrentFilename = "..\\core\\charactr.cpp";
        g_CurrentLineNumber = 0xbeb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((in_stack_0000000c->metadata).vtable)->pickup)(in_stack_0000000c,&this_ptr->base_actor);
      pSVar1->carry_actor = in_stack_0000000c;
      core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr);
      return;
    }
  }
  return;
}


// Assembly code:
// 0042cdb0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
// 0042cdb1: PUSH ESI
// 0042cdb2: PUSH EDI
// 0042cdb3: PUSH EBP
// 0042cdb4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042cdb8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042cdbc: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042cdc0: TEST EDI,EDI
// 0042cdc2: JL 0x0042cdc9
//   XREF to: 0042cdc9 (CONDITIONAL_JUMP)
// 0042cdc4: CMP EDI,0x2
// 0042cdc7: JL 0x0042cdec
//   XREF to: 0042cdec (CONDITIONAL_JUMP)
// 0042cdc9: MOV EDX,0x6172a2
//   Label: LAB_0042cdc9
//   XREF to: 006172a2 (PARAM)
// 0042cdce: MOV ECX,0xbd3
// 0042cdd3: PUSH 0x6172b7
//   XREF to: 006172b7 (DATA)
// 0042cdd8: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0042cdde: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0042cde4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042cde9: ADD ESP,0x4
// 0042cdec: TEST EBP,EBP
//   Label: LAB_0042cdec
// 0042cdee: JNZ 0x0042cdf5
//   XREF to: 0042cdf5 (CONDITIONAL_JUMP)
// 0042cdf0: POP EBP
//   Label: LAB_0042cdf0
// 0042cdf1: POP EDI
// 0042cdf2: POP ESI
// 0042cdf3: POP EBX
// 0042cdf4: RET
// 0042cdf5: PUSH 0x0
//   Label: LAB_0042cdf5
// 0042cdf7: PUSH EDI
// 0042cdf8: MOV EAX,dword ptr [EBX + 0x154]
// 0042cdfe: PUSH EBX
// 0042cdff: CALL dword ptr [EAX + 0x13c]
// 0042ce05: MOV EAX,EDI
// 0042ce07: SHL EAX,0x4
// 0042ce0a: ADD EAX,EDI
// 0042ce0c: LEA ESI,[EBX + 0x24ac]
// 0042ce12: SHL EAX,0x2
// 0042ce15: ADD ESI,EAX
// 0042ce17: MOV EAX,dword ptr [ESI + 0x4]
// 0042ce1a: ADD ESP,0xc
// 0042ce1d: TEST EAX,EAX
// 0042ce1f: JL 0x0042ce2b
//   XREF to: 0042ce2b (CONDITIONAL_JUMP)
// 0042ce21: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 0042ce29: JZ 0x0042cdf0
//   XREF to: 0042cdf0 (CONDITIONAL_JUMP)
// 0042ce2b: CMP dword ptr [ESI],0x0
//   Label: LAB_0042ce2b
// 0042ce2e: JGE 0x0042ce52
//   XREF to: 0042ce52 (CONDITIONAL_JUMP)
// 0042ce30: MOV EAX,0x6172e8
//   XREF to: 006172e8 (PARAM)
// 0042ce35: MOV EDX,0xbeb
// 0042ce3a: PUSH 0x6172fd
//   XREF to: 006172fd (DATA)
// 0042ce3f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0042ce44: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0042ce4a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042ce4f: ADD ESP,0x4
// 0042ce52: PUSH EBX
//   Label: LAB_0042ce52
// 0042ce53: MOV EAX,dword ptr [EBP + 0x154]
// 0042ce59: PUSH EBP
// 0042ce5a: CALL dword ptr [EAX + 0x80]
// 0042ce60: ADD ESP,0x8
// 0042ce63: PUSH dword ptr [ESP + 0x20]
// 0042ce67: PUSH EDI
// 0042ce68: PUSH EBX
// 0042ce69: MOV dword ptr [ESI + 0x8],EBP
// 0042ce6c: CALL core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
//   XREF to: 0042ce80 (UNCONDITIONAL_CALL)
// 0042ce71: ADD ESP,0xc
// 0042ce74: POP EBP
// 0042ce75: POP EDI
// 0042ce76: POP ESI
// 0042ce77: POP EBX
// 0042ce78: RET

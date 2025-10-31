// Name: core_bugs.cpp_FUN_004250f0
// Address: 004250f0
// Address Range: [[004250f0, 004251a6]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004250f0()
// Globals:
//   void* switchdataD_004250d4 = 0042512b
//   CEventList* g_CEventListInstance = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_bugs.cpp_FUN_00425cc0
//   core_bugs.cpp_FUN_00425fe0
//   core_bugs.cpp_FUN_00426410
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004250f0(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_004250f0(void)

{
  CCharacter *pCVar1;
  int iVar2;
  CCharacter *in_stack_00000004;
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar2 != 0) {
    if ((*(int *)(in_stack_00000004[2].model.padding_0x0 + 0x1af8) == 0) &&
       (iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                          (g_CEventListInstance,in_stack_00000004[2].model.padding_0x0 + 0x1b00),
       iVar2 != 0)) {
      pCVar1 = in_stack_00000004 + 2;
      (pCVar1->model).padding_0x0[0x1af8] = '\x01';
      (pCVar1->model).padding_0x0[0x1af9] = '\0';
      (pCVar1->model).padding_0x0[0x1afa] = '\0';
      (pCVar1->model).padding_0x0[0x1afb] = '\0';
    }
    if ((*(int *)(in_stack_00000004[2].model.padding_0x0 + 0x1afc) == 0) &&
       (iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                          (g_CEventListInstance,in_stack_00000004[2].model.padding_0x0 + 0x1b64),
       iVar2 != 0)) {
      pCVar1 = in_stack_00000004 + 2;
      (pCVar1->model).padding_0x0[0x1afc] = '\x01';
      (pCVar1->model).padding_0x0[0x1afd] = '\0';
      (pCVar1->model).padding_0x0[0x1afe] = '\0';
      (pCVar1->model).padding_0x0[0x1aff] = '\0';
    }
    switch(*(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x20)) {
    case 0:
      core_bugs_cpp_FUN_00425cc0();
      break;
    case 1:
      core_bugs_cpp_FUN_00425fe0();
      return;
    case 2:
      core_bugs_cpp_FUN_00426410();
      return;
    }
  }
  return;
}


// Assembly code:
// 004250f0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004250f0
// 004250f1: PUSH EDI
// 004250f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004250f6: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004250fa: PUSH EBX
// 004250fb: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00425100: ADD ESP,0x8
// 00425103: TEST EAX,EAX
// 00425105: JZ 0x00425138
//   XREF to: 00425138 (CONDITIONAL_JUMP)
// 00425107: CMP dword ptr [EBX + 0x19898],0x0
// 0042510e: JZ 0x0042513b
//   XREF to: 0042513b (CONDITIONAL_JUMP)
// 00425110: CMP dword ptr [EBX + 0x1989c],0x0
//   Label: LAB_00425110
// 00425117: JZ 0x00425161
//   XREF to: 00425161 (CONDITIONAL_JUMP)
// 00425119: MOV EAX,dword ptr [EBX + 0xbebc]
//   Label: LAB_00425119
// 0042511f: CMP EAX,0x3
// 00425122: JA 0x00425138
//   XREF to: 00425138 (CONDITIONAL_JUMP)
// 00425124: JMP dword ptr [EAX*0x4 + 0x4250d4]
//   Label: switchD
//   XREF to: 0042512b (COMPUTED_JUMP)
//   XREF to: 00425138 (COMPUTED_JUMP)
//   XREF to: 00425187 (COMPUTED_JUMP)
//   XREF to: 00425197 (COMPUTED_JUMP)
//   XREF to: 004250d4 (DATA)
// 0042512b: PUSH dword ptr [ESP + 0x10]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 0042512f: PUSH EBX
// 00425130: CALL core_bugs.cpp_FUN_00425cc0
//   XREF to: 00425cc0 (UNCONDITIONAL_CALL)
// 00425135: ADD ESP,0x8
// 00425138: POP EDI
//   Label: caseD_3
// 00425139: POP EBX
// 0042513a: RET
// 0042513b: LEA EAX,[EBX + 0x198a0]
//   Label: LAB_0042513b
// 00425141: PUSH EAX
// 00425142: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00425148: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00425149: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0042514e: ADD ESP,0x8
// 00425151: TEST EAX,EAX
// 00425153: JZ 0x00425110
//   XREF to: 00425110 (CONDITIONAL_JUMP)
// 00425155: MOV dword ptr [EBX + 0x19898],0x1
// 0042515f: JMP 0x00425110
//   XREF to: 00425110 (UNCONDITIONAL_JUMP)
// 00425161: LEA EAX,[EBX + 0x19904]
//   Label: LAB_00425161
// 00425167: PUSH EAX
// 00425168: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0042516e: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 0042516f: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00425174: ADD ESP,0x8
// 00425177: TEST EAX,EAX
// 00425179: JZ 0x00425119
//   XREF to: 00425119 (CONDITIONAL_JUMP)
// 0042517b: MOV dword ptr [EBX + 0x1989c],0x1
// 00425185: JMP 0x00425119
//   XREF to: 00425119 (UNCONDITIONAL_JUMP)
// 00425187: PUSH dword ptr [ESP + 0x10]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0042518b: PUSH EBX
// 0042518c: CALL core_bugs.cpp_FUN_00425fe0
//   XREF to: 00425fe0 (UNCONDITIONAL_CALL)
// 00425191: ADD ESP,0x8
// 00425194: POP EDI
// 00425195: POP EBX
// 00425196: RET
// 00425197: PUSH dword ptr [ESP + 0x10]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 0042519b: PUSH EBX
// 0042519c: CALL core_bugs.cpp_FUN_00426410
//   XREF to: 00426410 (UNCONDITIONAL_CALL)
// 004251a1: ADD ESP,0x8
// 004251a4: POP EDI
// 004251a5: POP EBX
// 004251a6: RET

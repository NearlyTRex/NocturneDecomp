// Name: core_msnedit.cpp_FUN_00538df0
// Address: 00538df0
// Address Range: [[00538df0, 00538e9d]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00538df0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005386a3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_msnedit.cpp_FUN_00538ea0
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_00538df0(undefined4 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_00538df0(void)

{
  CDemonActor *pCVar1;
  CLocation *pCVar2;
  void *pvVar3;
  CDemonMission *in_stack_00000004;
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < (int)in_stack_00000004->set_list)) {
    pCVar1 = in_stack_00000004->first_actor;
    while (pCVar1 != (CDemonActor *)0x0) {
      pCVar2 = &pCVar1->location;
      pCVar1 = (pCVar1->metadata).next_actor;
      if (in_stack_00000008 == pCVar2->area_id) {
        core_msnedit_cpp_FUN_00538ea0();
        core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
      }
    }
    for (pCVar1 = in_stack_00000004->first_actor; pCVar1 != (CDemonActor *)0x0;
        pCVar1 = (pCVar1->metadata).next_actor) {
      (*((pCVar1->metadata).vtable)->onAreaDeleted)(pCVar1,in_stack_00000008);
    }
    pvVar3 = (void *)((int)in_stack_00000004->set_list + -1);
    in_stack_00000004->set_list = pvVar3;
    crt_string_c_memmove_FUN_005fe5e0
              (in_stack_00000004->field4_0x148 + in_stack_00000008 * 0x100,
               in_stack_00000004->field4_0x148 + in_stack_00000008 * 0x100,
               ((int)pvVar3 - in_stack_00000008) * 0x100);
  }
  return;
}


// Assembly code:
// 00538df0: PUSH EDI
//   Label: core_msnedit.cpp_FUN_00538df0
// 00538df1: PUSH EBP
// 00538df2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00538df6: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00538dfa: TEST EBP,EBP
// 00538dfc: JL 0x00538e9b
//   XREF to: 00538e9b (CONDITIONAL_JUMP)
// 00538e02: CMP EBP,dword ptr [EDI + 0x144]
// 00538e08: JGE 0x00538e9b
//   XREF to: 00538e9b (CONDITIONAL_JUMP)
// 00538e0e: PUSH ESI
// 00538e0f: PUSH EBX
// 00538e10: MOV EBX,dword ptr [EDI + 0x548]
// 00538e16: TEST EBX,EBX
// 00538e18: JZ 0x00538e43
//   XREF to: 00538e43 (CONDITIONAL_JUMP)
// 00538e1a: MOV ECX,dword ptr [EBX + 0x2c]
//   Label: LAB_00538e1a
// 00538e1d: MOV ESI,dword ptr [EBX + 0x14c]
// 00538e23: CMP EBP,ECX
// 00538e25: JNZ 0x00538e3d
//   XREF to: 00538e3d (CONDITIONAL_JUMP)
// 00538e27: PUSH EBX
// 00538e28: PUSH EDI
// 00538e29: CALL core_msnedit.cpp_FUN_00538ea0
//   XREF to: 00538ea0 (UNCONDITIONAL_CALL)
// 00538e2e: ADD ESP,0x8
// 00538e31: PUSH 0x1
// 00538e33: PUSH EBX
// 00538e34: PUSH EDI
// 00538e35: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 00538e3a: ADD ESP,0xc
// 00538e3d: MOV EBX,ESI
//   Label: LAB_00538e3d
// 00538e3f: TEST ESI,ESI
// 00538e41: JNZ 0x00538e1a
//   XREF to: 00538e1a (CONDITIONAL_JUMP)
// 00538e43: MOV EBX,dword ptr [EDI + 0x548]
//   Label: LAB_00538e43
// 00538e49: TEST EBX,EBX
// 00538e4b: JZ 0x00538e70
//   XREF to: 00538e70 (CONDITIONAL_JUMP)
// 00538e4d: PUSH EBP
//   Label: LAB_00538e4d
// 00538e4e: MOV EAX,dword ptr [EBX + 0x154]
// 00538e54: PUSH EBX
// 00538e55: CALL dword ptr [EAX + 0xc8]
// 00538e5b: MOV EBX,dword ptr [EBX + 0x14c]
// 00538e61: ADD ESP,0x8
// 00538e64: TEST EBX,EBX
// 00538e66: JNZ 0x00538e4d
//   XREF to: 00538e4d (CONDITIONAL_JUMP)
// 00538e68: LEA EAX,[EAX]
// 00538e6e: MOV EDX,EDX
// 00538e70: MOV EBX,dword ptr [EDI + 0x144]
//   Label: LAB_00538e70
// 00538e76: DEC EBX
// 00538e77: MOV EAX,EBX
// 00538e79: SUB EAX,EBP
// 00538e7b: SHL EAX,0x8
// 00538e7e: PUSH EAX
// 00538e7f: MOV EAX,EBP
// 00538e81: ADD EDI,0x148
// 00538e87: SHL EAX,0x8
// 00538e8a: ADD EAX,EDI
// 00538e8c: PUSH EAX
// 00538e8d: PUSH EAX
// 00538e8e: MOV dword ptr [EDI + -0x4],EBX
// 00538e91: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00538e96: ADD ESP,0xc
// 00538e99: POP EBX
// 00538e9a: POP ESI
// 00538e9b: POP EBP
//   Label: LAB_00538e9b
// 00538e9c: POP EDI
// 00538e9d: RET

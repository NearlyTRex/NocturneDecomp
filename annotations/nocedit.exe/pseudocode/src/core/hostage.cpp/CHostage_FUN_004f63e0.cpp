// Name: core_hostage.cpp_CHostage_FUN_004f63e0
// Address: 004f63e0
// Address Range: [[004f63e0, 004f6442]]
// Convention: __cdecl
// Signature: int core_hostage.cpp_CHostage_FUN_004f63e0(CHostage * this_ptr)
// Globals:
//   CEventList* g_CEventListInstance = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_event.cpp_FUN_004aabe0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_FUN_004f63e0(CHostage *this_ptr)

{
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  (this_ptr->base_npc).base_character.grabbed_type = in_stack_0000000c;
  (this_ptr->base_npc).base_character.grabbed_by = in_stack_00000008;
  if (in_stack_0000000c == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    core_event_cpp_FUN_004aabe0();
  }
  this_ptr->field8_0x1fae0[0xc] = '\0';
  this_ptr->field8_0x1fae0[0xd] = '\0';
  this_ptr->field8_0x1fae0[0xe] = '@';
  this_ptr->field8_0x1fae0[0xf] = '@';
  *(undefined4 *)(this_ptr->field8_0x1fae0 + 8) = in_stack_00000010;
  return 1;
}


// Assembly code:
// 004f63e0: PUSH EBX
//   Label: core_hostage.cpp_CHostage_FUN_004f63e0
// 004f63e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f63e5: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004f63e9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f63ed: MOV dword ptr [EBX + 0x259c],EAX
// 004f63f3: MOV dword ptr [EBX + 0x2598],EDX
// 004f63f9: TEST EAX,EAX
// 004f63fb: JZ 0x004f6418
//   XREF to: 004f6418 (CONDITIONAL_JUMP)
// 004f63fd: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004f63fd
//   XREF to: Stack[0x8] (READ)
// 004f6401: MOV dword ptr [EBX + 0x1faec],0x40400000
// 004f640b: MOV dword ptr [EBX + 0x1fae8],EAX
// 004f6411: MOV EAX,0x1
// 004f6416: POP EBX
// 004f6417: RET
// 004f6418: PUSH 0x1
//   Label: LAB_004f6418
// 004f641a: PUSH 0x4
// 004f641c: LEA EAX,[EBX + 0x158]
// 004f6422: PUSH EAX
// 004f6423: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f6428: ADD ESP,0xc
// 004f642b: LEA EAX,[EBX + 0x1f8bc]
// 004f6431: PUSH EAX
// 004f6432: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004f6438: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004f6439: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f643e: ADD ESP,0x8
// 004f6441: JMP 0x004f63fd
//   XREF to: 004f63fd (UNCONDITIONAL_JUMP)

// Name: core_mission.cpp_CDemonMission_FUN_005248a0
// Address: 005248a0
// Address Range: [[005248a0, 005248d2]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_005248a0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_005248a0(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  uint *in_stack_00000008;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    (*this_ptr_00->vtable->calculateChecksum)(this_ptr_00,in_stack_00000008);
  }
  return;
}


// Assembly code:
// 005248a0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_005248a0
// 005248a1: PUSH ESI
// 005248a2: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005248a6: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005248aa: MOV EBX,dword ptr [EBX + 0x548]
// 005248b0: TEST EBX,EBX
// 005248b2: JZ 0x005248d0
//   XREF to: 005248d0 (CONDITIONAL_JUMP)
// 005248b4: PUSH ESI
//   Label: LAB_005248b4
// 005248b5: MOV EAX,dword ptr [EBX + 0x154]
// 005248bb: PUSH EBX
// 005248bc: CALL dword ptr [EAX + 0xc0]
// 005248c2: MOV EBX,dword ptr [EBX + 0x14c]
// 005248c8: ADD ESP,0x8
// 005248cb: TEST EBX,EBX
// 005248cd: JNZ 0x005248b4
//   XREF to: 005248b4 (CONDITIONAL_JUMP)
// 005248cf: NOP
// 005248d0: POP ESI
//   Label: LAB_005248d0
// 005248d1: POP EBX
// 005248d2: RET

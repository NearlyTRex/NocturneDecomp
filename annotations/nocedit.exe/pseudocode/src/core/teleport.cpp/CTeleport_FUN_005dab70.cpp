// Name: core_teleport.cpp_CTeleport_FUN_005dab70
// Address: 005dab70
// Address Range: [[005dab70, 005dab9c]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005dab70(CTeleport * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dab70(CTeleport *this_ptr)

{
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base_actor,in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0xc) != in_stack_0000000c) {
    return;
  }
  this_ptr->field1_0x158[0xc] = '\0';
  this_ptr->field1_0x158[0xd] = '\0';
  this_ptr->field1_0x158[0xe] = '\0';
  this_ptr->field1_0x158[0xf] = '\0';
  return;
}


// Assembly code:
// 005dab70: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_FUN_005dab70
// 005dab71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dab75: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dab79: PUSH EDX
// 005dab7a: PUSH EBX
// 005dab7b: CALL core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
//   XREF to: 0040d000 (UNCONDITIONAL_CALL)
// 005dab80: ADD ESP,0x8
// 005dab83: MOV ECX,dword ptr [EBX + 0x164]
// 005dab89: CMP ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dab8d: JZ 0x005dab91
//   XREF to: 005dab91 (CONDITIONAL_JUMP)
// 005dab8f: POP EBX
// 005dab90: RET
// 005dab91: MOV dword ptr [EBX + 0x164],0x0
//   Label: LAB_005dab91
// 005dab9b: POP EBX
// 005dab9c: RET

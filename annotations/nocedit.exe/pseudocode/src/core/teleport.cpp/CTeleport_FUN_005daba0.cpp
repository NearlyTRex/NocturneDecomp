// Name: core_teleport.cpp_CTeleport_FUN_005daba0
// Address: 005daba0
// Address Range: [[005daba0, 005dabd9]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005daba0(CTeleport * this_ptr)
// Globals:
//   undefined4 s_CTeleportDest_00654ceb
//   TerminatedCString s_Destination_00654cf9
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005daba0(CTeleport *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_0000000c);
  return;
}


// Assembly code:
// 005daba0: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_FUN_005daba0
// 005daba1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005daba5: PUSH EDX
// 005daba6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dabaa: PUSH ECX
// 005dabab: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005dabb0: ADD ESP,0x8
// 005dabb3: PUSH 0x0
// 005dabb5: PUSH 0x654ceb
//   XREF to: 00654ceb (DATA)
// 005dabba: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005dabbe: PUSH 0x0
// 005dabc0: ADD EAX,0x164
// 005dabc5: PUSH EAX
// 005dabc6: PUSH 0x654cf9
//   XREF to: 00654cf9 (DATA)
// 005dabcb: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005dabcf: PUSH EBX
// 005dabd0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005dabd5: ADD ESP,0x18
// 005dabd8: POP EBX
// 005dabd9: RET

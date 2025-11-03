// Name: core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
// Address: 0040d000
// Address Range: [[0040d000, 0040d030]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000(CDemonActor * this_ptr, CDemonActor * deleted_actor)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0 (0042f8a0) at 0042f8ac [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005babf0 (005babf0) at 005babfa [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dab70 (005dab70) at 005dab7b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000
          (CDemonActor *this_ptr,CDemonActor *deleted_actor)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000014;
  
  pCVar1 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (pCVar1 != in_stack_00000014) {
    return;
  }
  (*this_ptr->vtable->onDropped)(this_ptr,(CVector3f *)0x0);
  return;
}


// Assembly code:
// 0040d000: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
// 0040d001: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040d005: PUSH EBX
// 0040d006: MOV EAX,dword ptr [EBX + 0x154]
// 0040d00c: CALL dword ptr [EAX + 0x8c]
// 0040d012: ADD ESP,0x4
// 0040d015: CMP EAX,dword ptr [ESP + 0xc]
// 0040d019: JZ 0x0040d01d
//   XREF to: 0040d01d (CONDITIONAL_JUMP)
// 0040d01b: POP EBX
// 0040d01c: RET
// 0040d01d: PUSH 0x0
//   Label: LAB_0040d01d
// 0040d01f: MOV EAX,dword ptr [EBX + 0x154]
// 0040d025: PUSH EBX
// 0040d026: CALL dword ptr [EAX + 0x84]
// 0040d02c: ADD ESP,0x8
// 0040d02f: POP EBX
// 0040d030: RET

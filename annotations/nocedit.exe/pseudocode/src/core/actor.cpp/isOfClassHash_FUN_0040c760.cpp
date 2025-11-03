// Name: core_actor.cpp_isOfClassHash_FUN_0040c760
// Address: 0040c760
// Address Range: [[0040c760, 0040c787]]
// Convention: __cdecl
// Signature: int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash)
// Cross-references:
//   core_actor.cpp_castToClassHash_FUN_0040c790 (0040c790) at 0040c7a3 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa400 (004aa400) at 004aa495 [UNCONDITIONAL_CALL]
//   core_script.cpp_GetDemonActor_FUN_005594e0 (005594e0) at 00559566 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20 (00572e20) at 00572e68 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_checkNameHash_FUN_0040c700

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c760(CDemonActor *actor_ptr,uint class_name_hash)

{
  CDemonActorType *type_ptr;
  int iVar1;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return (int)actor_ptr;
  }
  type_ptr = (*actor_ptr->vtable->getActorType)(actor_ptr);
  iVar1 = core_actor_cpp_checkNameHash_FUN_0040c700(type_ptr,class_name_hash);
  return iVar1;
}


// Assembly code:
// 0040c760: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_isOfClassHash_FUN_0040c760
//   XREF to: Stack[0x4] (READ)
// 0040c764: TEST EAX,EAX
// 0040c766: JNZ 0x0040c769
//   XREF to: 0040c769 (CONDITIONAL_JUMP)
// 0040c768: RET
// 0040c769: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0040c769
//   XREF to: Stack[0x8] (READ)
// 0040c76d: PUSH EDX
// 0040c76e: PUSH EAX
// 0040c76f: MOV EDX,dword ptr [EAX + 0x154]
// 0040c775: CALL dword ptr [EDX + 0xc4]
// 0040c77b: ADD ESP,0x4
// 0040c77e: PUSH EAX
// 0040c77f: CALL core_actor.cpp_checkNameHash_FUN_0040c700
//   XREF to: 0040c700 (UNCONDITIONAL_CALL)
// 0040c784: ADD ESP,0x8
// 0040c787: RET

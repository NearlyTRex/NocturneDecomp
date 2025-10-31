// Name: core_trash.cpp_CTrash_FUN_005df720
// Address: 005df720
// Address Range: [[005df720, 005df74b]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_FUN_005df720(CTrash * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_FUN_005df720(CTrash *this_ptr)

{
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,in_stack_00000008)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000008[0xc]._link,in_stack_0000000c);
  return;
}


// Assembly code:
// 005df720: PUSH EBX
//   Label: core_trash.cpp_CTrash_FUN_005df720
// 005df721: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005df725: PUSH EDX
// 005df726: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005df72a: PUSH ECX
// 005df72b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005df730: ADD ESP,0x8
// 005df733: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005df737: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005df73b: PUSH EBX
// 005df73c: ADD EAX,0x158
// 005df741: PUSH EAX
// 005df742: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 005df747: ADD ESP,0x8
// 005df74a: POP EBX
// 005df74b: RET

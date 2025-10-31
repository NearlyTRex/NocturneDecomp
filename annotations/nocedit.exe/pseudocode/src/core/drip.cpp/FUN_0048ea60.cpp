// Name: core_drip.cpp_FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048ea8b]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048ea60()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048ea60(undefined4 param_1, undefined4 param_2)
    */

void core_drip_cpp_FUN_0048ea60(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000008[0xc]._link,in_stack_0000000c);
  return;
}


// Assembly code:
// 0048ea60: PUSH EBX
//   Label: core_drip.cpp_FUN_0048ea60
// 0048ea61: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048ea65: PUSH EDX
// 0048ea66: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048ea6a: PUSH ECX
// 0048ea6b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0048ea70: ADD ESP,0x8
// 0048ea73: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048ea77: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048ea7b: PUSH EBX
// 0048ea7c: ADD EAX,0x158
// 0048ea81: PUSH EAX
// 0048ea82: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 0048ea87: ADD ESP,0x8
// 0048ea8a: POP EBX
// 0048ea8b: RET

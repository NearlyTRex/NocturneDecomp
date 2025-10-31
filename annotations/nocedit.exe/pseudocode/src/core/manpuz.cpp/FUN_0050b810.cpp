// Name: core_manpuz.cpp_FUN_0050b810
// Address: 0050b810
// Address Range: [[0050b810, 0050b83b]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b810()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b810(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050b810(void)

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
// 0050b810: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b810
// 0050b811: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b815: PUSH EDX
// 0050b816: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b81a: PUSH ECX
// 0050b81b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0050b820: ADD ESP,0x8
// 0050b823: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b827: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b82b: PUSH EBX
// 0050b82c: ADD EAX,0x158
// 0050b831: PUSH EAX
// 0050b832: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 0050b837: ADD ESP,0x8
// 0050b83a: POP EBX
// 0050b83b: RET

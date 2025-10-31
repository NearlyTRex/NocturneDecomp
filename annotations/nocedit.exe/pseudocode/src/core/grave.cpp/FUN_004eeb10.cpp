// Name: core_grave.cpp_FUN_004eeb10
// Address: 004eeb10
// Address Range: [[004eeb10, 004eeb3b]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004eeb10()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004eeb10(undefined4 param_1, undefined4 param_2)
    */

void core_grave_cpp_FUN_004eeb10(void)

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
// 004eeb10: PUSH EBX
//   Label: core_grave.cpp_FUN_004eeb10
// 004eeb11: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eeb15: PUSH EDX
// 004eeb16: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004eeb1a: PUSH ECX
// 004eeb1b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004eeb20: ADD ESP,0x8
// 004eeb23: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eeb27: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eeb2b: PUSH EBX
// 004eeb2c: ADD EAX,0x158
// 004eeb31: PUSH EAX
// 004eeb32: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 004eeb37: ADD ESP,0x8
// 004eeb3a: POP EBX
// 004eeb3b: RET

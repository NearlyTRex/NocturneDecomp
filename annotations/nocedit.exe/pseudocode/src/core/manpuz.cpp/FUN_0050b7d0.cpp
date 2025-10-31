// Name: core_manpuz.cpp_FUN_0050b7d0
// Address: 0050b7d0
// Address Range: [[0050b7d0, 0050b806]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b7d0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b7d0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050b7d0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000004[2].location.position.y,in_stack_00000008)
  ;
  return;
}


// Assembly code:
// 0050b7d0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b7d0
// 0050b7d1: PUSH ESI
// 0050b7d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b7d6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050b7da: PUSH ESI
// 0050b7db: PUSH EBX
// 0050b7dc: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0050b7e1: ADD ESP,0x8
// 0050b7e4: PUSH ESI
// 0050b7e5: LEA EAX,[EBX + 0x158]
// 0050b7eb: PUSH EAX
// 0050b7ec: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 0050b7f1: ADD ESP,0x8
// 0050b7f4: PUSH ESI
// 0050b7f5: LEA EAX,[EBX + 0x2d4]
// 0050b7fb: PUSH EAX
// 0050b7fc: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 0050b801: ADD ESP,0x8
// 0050b804: POP ESI
// 0050b805: POP EBX
// 0050b806: RET

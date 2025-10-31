// Name: core_manpuz.cpp_FUN_0050b2c0
// Address: 0050b2c0
// Address Range: [[0050b2c0, 0050b2eb]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b2c0()
// Globals:
//   double DOUBLE_0063593d = -0.0100000000000000
// Function calls:
//   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b2c0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050b2c0(void)

{
  CDemonActor *in_stack_00000004;
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(in_stack_00000004,in_stack_00000008);
  if ((in_stack_00000008->hit_position).z <= (float)DOUBLE_0063593d) {
    return;
  }
  in_stack_00000008->alpha_or_wetness = 1.0;
  return;
}


// Assembly code:
// 0050b2c0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b2c0
// 0050b2c1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b2c5: PUSH EBX
// 0050b2c6: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b2ca: PUSH EDX
// 0050b2cb: CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
//   XREF to: 00409840 (UNCONDITIONAL_CALL)
// 0050b2d0: FLD float ptr [EBX + 0x34]
// 0050b2d3: ADD ESP,0x8
// 0050b2d6: FCOMP double ptr [0x0063593d]
//   XREF to: 0063593d (READ)
// 0050b2dc: FNSTSW AX
// 0050b2de: SAHF
// 0050b2df: JA 0x0050b2e3
//   XREF to: 0050b2e3 (CONDITIONAL_JUMP)
// 0050b2e1: POP EBX
// 0050b2e2: RET
// 0050b2e3: MOV dword ptr [EBX + 0x50],0x3f800000
//   Label: LAB_0050b2e3
// 0050b2ea: POP EBX
// 0050b2eb: RET

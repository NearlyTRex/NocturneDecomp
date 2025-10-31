// Name: core_dracbrid.cpp_FUN_00486430
// Address: 00486430
// Address Range: [[00486430, 0048644b]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486430()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

float * core_dracbrid_cpp_FUN_00486430(void)

{
  float fVar1;
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
  *in_stack_00000008 = fVar1 + *in_stack_00000008;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
  in_stack_00000008[1] = fVar1 + in_stack_00000008[1];
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
  in_stack_00000008[2] = fVar1 + in_stack_00000008[2];
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  return in_stack_00000004;
}


// Assembly code:
// 00486430: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00486430
// 00486431: PUSH ESI
// 00486432: SUB ESP,0x4
// 00486435: MOV ESI,dword ptr [ESP + 0x10]
// 00486439: MOV EBX,dword ptr [ESP + 0x14]
// 0048643d: PUSH 0x40a00000
// 00486442: PUSH 0xc0a00000
// 00486447: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

// Name: core_flamegun.cpp_FUN_004cbab0
// Address: 004cbab0
// Address Range: [[004cbab0, 004cbacf]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cbab0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cbab0(undefined4 param_1) */

float core_flamegun_cpp_FUN_004cbab0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x56c) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(150.0,200.0);
  return fVar1;
}


// Assembly code:
// 004cbab0: SUB ESP,0x8
//   Label: core_flamegun.cpp_FUN_004cbab0
// 004cbab3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004cbab7: CMP dword ptr [EAX + 0x56c],0x6
// 004cbabe: JNZ 0x004cbad1
//   XREF to: 004cbad1 (CONDITIONAL_JUMP)
// 004cbac0: XOR ECX,ECX
// 004cbac2: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x8] (DATA)
// 004cbac5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004cbac8: ADD ESP,0x8
// 004cbacb: LEA EAX,[EAX]
// 004cbace: MOV ECX,ECX

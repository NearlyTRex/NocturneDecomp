// Name: core_flies.cpp_FUN_004cc820
// Address: 004cc820
// Address Range: [[004cc820, 004cc840]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc820()
// Cross-references:
//   core_flies.cpp_FUN_004cbf00 (004cbf00) at 004cc1fd [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc760 (004cc760) at 004cc797 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004cc820(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

float * core_flies_cpp_FUN_004cc820(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float local_38 [6];
  float afStack_20 [3];
  float fStack_14;
  
  fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  in_stack_00000008[1] = fStack_14;
  in_stack_00000008[1] =
       in_stack_00000008[1] * in_stack_00000008[1] * *(float *)(in_stack_00000004 + 0x15c);
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x158) * (float)DOUBLE_0062a45e,
                     *(float *)(in_stack_00000004 + 0x158) * (float)DOUBLE_0062a456);
  *in_stack_00000008 = fVar6;
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x160) * (float)DOUBLE_0062a45e,
                     *(float *)(in_stack_00000004 + 0x160) * (float)DOUBLE_0062a456);
  in_stack_00000008[2] = fVar6;
  if (in_stack_0000000c != (float *)0x0) {
    fVar6 = *in_stack_00000008 - *in_stack_0000000c;
    fVar4 = in_stack_00000008[1] - in_stack_0000000c[1];
    fVar5 = in_stack_00000008[2] - in_stack_0000000c[2];
    fVar3 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    if ((float)DOUBLE_0062a466 < fVar3) {
      fVar4 = fVar4 * FLOAT_0062a46e;
      fVar5 = fVar5 * FLOAT_0062a46e;
      fVar3 = 1.0 / fVar3;
      fVar1 = in_stack_0000000c[1];
      fVar2 = in_stack_0000000c[2];
      if (in_stack_00000008 != afStack_20) {
        *in_stack_00000008 = *in_stack_0000000c + fVar6 * FLOAT_0062a46e * fVar3;
        in_stack_00000008[1] = fVar1 + fVar4 * fVar3;
        in_stack_00000008[2] = fVar2 + fVar5 * fVar3;
        return in_stack_00000008;
      }
    }
    else if ((fVar3 < 1.0) && (0.0 < fVar3)) {
      fVar3 = 1.0 / fVar3;
      fVar1 = in_stack_0000000c[1];
      fVar2 = in_stack_0000000c[2];
      if (in_stack_00000008 != local_38) {
        *in_stack_00000008 = *in_stack_0000000c + fVar6 * fVar3;
        in_stack_00000008[1] = fVar1 + fVar4 * fVar3;
        in_stack_00000008[2] = fVar2 + fVar5 * fVar3;
        return in_stack_00000008;
      }
    }
  }
  return in_stack_00000008;
}


// Assembly code:
// 004cc820: PUSH EBX
//   Label: core_flies.cpp_FUN_004cc820
// 004cc821: PUSH ESI
// 004cc822: PUSH EDI
// 004cc823: PUSH EBP
// 004cc824: MOV EBP,ESP
// 004cc826: SUB ESP,0x6c
// 004cc829: AND ESP,0xfffffff8
// 004cc82c: MOV EDI,dword ptr [EBP + 0x14]
// 004cc82f: MOV EBX,dword ptr [EBP + 0x18]
// 004cc832: MOV ESI,dword ptr [EBP + 0x1c]
// 004cc835: PUSH 0x3f800000
// 004cc83a: PUSH 0x0
// 004cc83c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

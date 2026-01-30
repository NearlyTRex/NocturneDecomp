// Name: core_gore.cpp_FUN_004ec2f0
// Address: 004ec2f0
// Address Range: [[004ec2f0, 004ec38e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ec2f0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ec2f0(uint param_1, uint param_2,
   uint param_3) */

void __cdecl core_gore_cpp_FUN_004ec2f0(void)

{
  int iVar1;
  uint *in_stack_00000004;
  float *in_stack_00000008;
  uint in_stack_0000000c;
  
  in_stack_00000004[4] = 0;
  if ((float *)(in_stack_00000004 + 1) != in_stack_00000008) {
    in_stack_00000004[1] = *in_stack_00000008;
    in_stack_00000004[2] = in_stack_00000008[1];
    in_stack_00000004[3] = in_stack_00000008[2];
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  in_stack_00000004[10] = iVar1;
  in_stack_00000004[9] = 0;
  in_stack_00000004[0xb] = (int)ROUND(*in_stack_00000008 * 256.0f);
  in_stack_00000004[0xc] = (int)ROUND(in_stack_00000008[1] * 256.0f);
  in_stack_00000004[0xd] = (int)ROUND(in_stack_00000008[2] * 256.0f);
  in_stack_00000004[0xe] = 0;
  in_stack_00000004[0xf] = 0xffff;
  in_stack_00000004[0x10] = 0;
  *in_stack_00000004 = 0;
  in_stack_00000004[8] = 0;
  in_stack_00000004[5] = in_stack_0000000c;
  in_stack_00000004[7] = in_stack_00000004[8];
  in_stack_00000004[6] = in_stack_00000004[7];
  return;
}

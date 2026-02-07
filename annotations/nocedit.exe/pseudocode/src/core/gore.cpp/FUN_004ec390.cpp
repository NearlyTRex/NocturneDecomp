// Name: core_gore.cpp_FUN_004ec390
// Address: 004ec390
// Address Range: [[004ec390, 004ec462]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ec390(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ec390(void)

{
  int iVar1;
  float10 fVar2;
  uint *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  in_stack_00000004[4] = 1;
  if ((float *)(in_stack_00000004 + 1) != in_stack_00000008) {
    in_stack_00000004[1] = *in_stack_00000008;
    in_stack_00000004[2] = in_stack_00000008[1];
    in_stack_00000004[3] = in_stack_00000008[2];
  }
  fVar2 = atan2
                    ((float10)in_stack_0000000c[1],
                     SQRT((float10)*in_stack_0000000c * (float10)*in_stack_0000000c +
                          (float10)in_stack_0000000c[2] * (float10)in_stack_0000000c[2]));
  in_stack_00000004[8] = 0;
  in_stack_00000004[6] = (float)-fVar2;
  fVar2 = atan2((float10)*in_stack_0000000c,(float10)in_stack_0000000c[2]);
  in_stack_00000004[7] = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  in_stack_00000004[10] = iVar1;
  in_stack_00000004[9] = 0;
  in_stack_00000004[0xb] = (int)ROUND(*in_stack_00000008 * 256.0f);
  in_stack_00000004[0xc] = (int)ROUND(in_stack_00000008[1] * 256.0f);
  in_stack_00000004[0xd] = (int)ROUND(in_stack_00000008[2] * 256.0f);
  in_stack_00000004[0xe] = (int)ROUND(*in_stack_0000000c * 65536.0f);
  in_stack_00000004[0xf] = (int)ROUND(in_stack_0000000c[1] * 65536.0f);
  in_stack_00000004[0x10] = (int)ROUND(in_stack_0000000c[2] * 65536.0f);
  *in_stack_00000004 = 0;
  in_stack_00000004[5] = in_stack_00000008;
  return;
}

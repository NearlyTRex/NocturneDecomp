// Name: core_boneguy.cpp_FUN_0041ba10
// Address: 0041ba10
// Address Range: [[0041ba10, 0041bbb7]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041ba10()

#include "nocturne.h"

float * core_boneguy_cpp_FUN_0041ba10(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 in_ST0;
  double dVar8;
  float *in_stack_00000004;
  int in_stack_00000008;
  float fStack_4c;
  float local_38;
  float local_24;
  float fStack_20;
  float local_18;
  
  fVar2 = *(float *)(in_stack_00000008 + 4);
  fVar3 = *(float *)(in_stack_00000008 + 8);
  dVar1 = (double)fVar2;
  fVar7 = fVar3;
  if (0.0 < dVar1) {
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    dVar8 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */(fVar2,CONCAT22 /* combine 2-byte values */((short)((uint)fVar3 >> 0x10),
                                                       (ushort)(0.0 < dVar1) << 8 |
                                                       (ushort)NAN(dVar1) << 10 |
                                                       (ushort)(dVar1 == 0.0) << 0xe)));
    fVar4 = (1.0 - local_38) * fVar2;
    fStack_4c = (float)((ulonglong)dVar1 >> 0x20);
    fStack_4c = fStack_4c - (float)(int)ROUND(dVar8);
    fVar5 = (1.0 - local_38 * fStack_4c) * fVar2;
    fVar6 = (1.0 - (1.0 - fStack_4c) * local_38) * fVar2;
    fVar3 = local_24;
    fVar7 = local_18;
    switch(((int)ROUND(dVar8) + 600) % 6) {
    case 0:
      fVar3 = fVar4;
      fStack_20 = fVar2;
      fVar7 = fVar6;
      break;
    case 1:
      fVar3 = fVar4;
      fStack_20 = fVar5;
      fVar7 = fVar2;
      break;
    case 2:
      fVar3 = fVar6;
      fStack_20 = fVar4;
      fVar7 = fVar2;
      break;
    case 3:
      fVar3 = fVar2;
      fStack_20 = fVar4;
      fVar7 = fVar5;
      break;
    case 4:
      fVar3 = fVar2;
      fStack_20 = fVar6;
      fVar7 = fVar4;
      break;
    case 5:
      fVar3 = fVar5;
      fStack_20 = fVar2;
      fVar7 = fVar4;
    }
  }
  local_18 = fVar7;
  local_24 = fVar3;
  *in_stack_00000004 = fStack_20;
  in_stack_00000004[1] = local_18;
  in_stack_00000004[2] = local_24;
  return in_stack_00000004;
}

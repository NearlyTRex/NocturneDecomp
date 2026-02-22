// Name: core_set.cpp_computeTriangleNormalIndexed_FUN_0056e2b0
// Address: 0056e2b0
// Address Range: [[0056e2b0, 0056e3de]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0056e2b0(void)

#include "nocturne.h"

void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0056e2b0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  float *in_stack_0000000c;
  
  piVar6 = (int *)((uint)in_stack_00000008[1] * 0xc + in_stack_00000004);
  piVar1 = (int *)((uint)*in_stack_00000008 * 0xc + in_stack_00000004);
  piVar7 = (int *)(in_stack_00000004 + (uint)in_stack_00000008[2] * 0xc);
  fVar2 = (float)(piVar6[1] - piVar1[1]) * (float)(piVar7[2] - piVar6[2]) -
          (float)(piVar7[1] - piVar6[1]) * (float)(piVar6[2] - piVar1[2]);
  fVar5 = (float)(*piVar7 - *piVar6) * (float)(piVar6[2] - piVar1[2]) -
          (float)(*piVar6 - *piVar1) * (float)(piVar7[2] - piVar6[2]);
  fVar4 = (float)(*piVar6 - *piVar1) * (float)(piVar7[1] - piVar6[1]) -
          (float)(*piVar7 - *piVar6) * (float)(piVar6[1] - piVar1[1]);
  fVar3 = (float)(g_LightAttenuationMax -
                 ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) >> 1)) *
          (float)65535;
  *in_stack_0000000c = fVar2 * fVar3;
  in_stack_0000000c[1] = fVar5 * fVar3;
  in_stack_0000000c[2] = fVar4 * fVar3;
  return;
}

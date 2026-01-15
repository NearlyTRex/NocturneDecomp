// Name: core_cloth.cpp_FUN_0043a2b0
// Address: 0043a2b0
// Address Range: [[0043a2b0, 0043a41c]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043a2b0()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043a2b0(uint param_1, uint param_2,
   uint param_3) */

void core_cloth_cpp_FUN_0043a2b0(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  uint *puVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffec8;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [3];
  uint local_9c;
  uint local_8c;
  uint local_7c;
  CMatrix3x4f local_78;
  float local_48 [12];
  uint local_18 [3];
  
  bVar7 = 0;
  iVar2 = in_stack_00000008 * 0xac + in_stack_00000004 + 0x3ce90;
  core_xform_cpp_inverse_FUN_005f6210
            ((CMatrix3x4f *)(in_stack_0000000c + 0xe80 + *(int *)(iVar2 + 0x40) * 0x30),
             in_stack_fffffec8);
  pfVar3 = local_48;
  pCVar5 = &local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_78,(CMatrix3x4f *)(iVar2 + 0x48),in_stack_fffffec8);
  puVar4 = local_d8;
  puVar6 = (uint *)&stack0xfffffec8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  *(CMatrix3x4f **)(iVar2 + 0x78) = in_stack_fffffec8;
  *(float *)(iVar2 + 0x7c) = local_128;
  *(float *)(iVar2 + 0x80) = local_118;
  *(float *)(iVar2 + 0x84) = local_134;
  *(float *)(iVar2 + 0x88) = local_124;
  *(float *)(iVar2 + 0x8c) = local_114;
  *(float *)(iVar2 + 0x90) = local_130;
  *(float *)(iVar2 + 0x94) = local_120;
  *(float *)(iVar2 + 0x98) = local_110;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)&stack0xfffffec8,in_stack_fffffec8);
  puVar4 = local_108;
  puVar6 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if ((uint *)(iVar2 + 0xa0) == local_18) {
    return;
  }
  *(uint *)(iVar2 + 0xa0) = local_9c;
  *(uint *)(iVar2 + 0xa4) = local_8c;
  *(uint *)(iVar2 + 0xa8) = local_7c;
  return;
}

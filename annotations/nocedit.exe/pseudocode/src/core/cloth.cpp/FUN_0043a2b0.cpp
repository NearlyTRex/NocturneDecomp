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
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffec8;
  CMatrix3x4f *in_stack_fffffecc;
  CMatrix3x4f *in_stack_fffffed0;
  float fStack_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  uint auStack_fc [11];
  uint auStack_d0 [12];
  uint auStack_a0 [4];
  uint uStack_90;
  uint uStack_80;
  uint local_78;
  CMatrix3x4f CStack_74;
  uint auStack_44 [14];
  
  bVar5 = 0;
  iVar2 = in_stack_00000008 * 0xac + in_stack_00000004 + 0x3ce90;
  core_xform_cpp_inverse_FUN_005f6210
            ((CMatrix3x4f *)(in_stack_0000000c + 0xe80 + *(int *)(iVar2 + 0x40) * 0x30),
             in_stack_fffffec8);
  puVar3 = auStack_44;
  puVar4 = &local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_74,(CMatrix3x4f *)(iVar2 + 0x48),in_stack_fffffecc);
  puVar3 = auStack_d0;
  puVar4 = (uint *)&stack0xfffffecc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(CMatrix3x4f **)(iVar2 + 0x78) = in_stack_fffffed0;
  *(float *)(iVar2 + 0x7c) = local_120;
  *(float *)(iVar2 + 0x80) = local_110;
  *(float *)(iVar2 + 0x84) = fStack_12c;
  *(float *)(iVar2 + 0x88) = fStack_11c;
  *(float *)(iVar2 + 0x8c) = fStack_10c;
  *(float *)(iVar2 + 0x90) = local_128;
  *(float *)(iVar2 + 0x94) = local_118;
  *(float *)(iVar2 + 0x98) = local_108;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)&stack0xfffffed0,in_stack_fffffed0);
  puVar3 = auStack_fc;
  puVar4 = auStack_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if ((uint *)(iVar2 + 0xa0) == (uint *)&stack0xfffffff4) {
    return;
  }
  *(uint *)(iVar2 + 0xa0) = uStack_90;
  *(uint *)(iVar2 + 0xa4) = uStack_80;
  *(float *)(iVar2 + 0xa8) = CStack_74.m[0].x;
  return;
}

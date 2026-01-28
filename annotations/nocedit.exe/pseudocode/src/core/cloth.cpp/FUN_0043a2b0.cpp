// Name: core_cloth.cpp_FUN_0043a2b0
// Address: 0043a2b0
// Address Range: [[0043a2b0, 0043a41c]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043a2b0(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043a2b0(uint param_1, uint param_2,
   uint param_3) */

void core_cloth_cpp_FUN_0043a2b0(void)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f local_138;
  CMatrix3x4f local_108;
  CMatrix3x4f local_d8;
  float local_a8 [3];
  uint local_9c;
  uint local_8c;
  uint local_7c;
  CMatrix3x4f local_78;
  CMatrix3x4f local_48;
  uint local_18 [3];
  
  bVar6 = 0;
  iVar2 = in_stack_00000008 * 0xac + in_stack_00000004 + 0x3ce90;
  core_xform_cpp_inverse_FUN_005f6210
            ((CMatrix3x4f *)(in_stack_0000000c + 0xe80 + *(int *)(iVar2 + 0x40) * 0x30),&local_48);
  pCVar3 = &local_48;
  pCVar4 = &local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_78,(CMatrix3x4f *)(iVar2 + 0x48),&local_d8);
  pCVar3 = &local_d8;
  pCVar4 = &local_138;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  *(float *)(iVar2 + 0x78) = local_138.m[0].w;
  *(float *)(iVar2 + 0x7c) = local_138.m[1].w;
  *(float *)(iVar2 + 0x80) = local_138.m[2].w;
  *(float *)(iVar2 + 0x84) = local_138.m[0].x;
  *(float *)(iVar2 + 0x88) = local_138.m[1].x;
  *(float *)(iVar2 + 0x8c) = local_138.m[2].x;
  *(float *)(iVar2 + 0x90) = local_138.m[0].y;
  *(float *)(iVar2 + 0x94) = local_138.m[1].y;
  *(float *)(iVar2 + 0x98) = local_138.m[2].y;
  core_xform_cpp_inverse_FUN_005f6210(&local_138,&local_108);
  pCVar3 = &local_108;
  pfVar5 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  if ((uint *)(iVar2 + 0xa0) == local_18) {
    return;
  }
  *(uint *)(iVar2 + 0xa0) = local_9c;
  *(uint *)(iVar2 + 0xa4) = local_8c;
  *(uint *)(iVar2 + 0xa8) = local_7c;
  return;
}

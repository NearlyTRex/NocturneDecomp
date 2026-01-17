// Name: core_cloth.cpp_FUN_0043dcc0
// Address: 0043dcc0
// Address Range: [[0043dcc0, 0043ddd2]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043dcc0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_FUN_0043dcc0(uint param_1, uint param_2) */

void core_cloth_cpp_FUN_0043dcc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  CCloth *in_stack_00000004;
  char *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0
            ((CKeyFramedModel *)in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190((CKeyFramedModel *)in_stack_00000004)
  ;
  fVar4 = 0.005f;
  fVar3 = 0.9f;
  fVar2 = 32.0f;
  fVar1 = 0.125f;
  in_stack_00000004->padding_0x0[0x3ce88] = '\0';
  fVar5 = 0.5f;
  in_stack_00000004->padding_0x0[0x3ce89] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8a] = -0x80;
  in_stack_00000004->padding_0x0[0x3ce8b] = '?';
  in_stack_00000004->padding_0x0[0x3ce84] = '\x01';
  fVar6 = 0.5f;
  in_stack_00000004->padding_0x0[0x3ce85] = '\0';
  in_stack_00000004->padding_0x0[0x3ce86] = '\0';
  in_stack_00000004->padding_0x0[0x3ce87] = '\0';
  in_stack_00000004->padding_0x0[0x3f028] = '\0';
  fVar7 = 0.05f;
  in_stack_00000004->padding_0x0[0x3f029] = '\0';
  in_stack_00000004->padding_0x0[0x3f02a] = '\0';
  in_stack_00000004->padding_0x0[0x3f02b] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8c] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8d] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8e] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8f] = '\0';
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce58) = fVar1;
  uVar8 = _DAT_0065bb70;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce5c) = fVar2;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce60) = fVar3;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce64) = fVar4;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce68) = fVar5;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce6c) = fVar6;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce70) = fVar7;
  *(uint *)(in_stack_00000004->padding_0x0 + 0x3ce74) = uVar8;
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(in_stack_00000004);
  iVar10 = 0;
  if (0 < *(int *)(in_stack_00000004->padding_0x0 + 0x104)) {
    pcVar11 = in_stack_00000004->padding_0x0 + 0x5798;
    iVar12 = 0;
    do {
      piVar9 = (int *)(*(int *)(in_stack_00000004->padding_0x0 + 0x10c) + iVar12);
      iVar10 = iVar10 + 1;
      *(float *)pcVar11 = (float)*piVar9 * _DAT_0065bb44;
      *(float *)(pcVar11 + 4) = (float)piVar9[1] * _DAT_0065bb44;
      *(float *)(pcVar11 + 8) = (float)piVar9[2] * _DAT_0065bb44;
      pcVar11 = pcVar11 + 0x11c;
      iVar12 = iVar12 + 0xc;
    } while (iVar10 < *(int *)(in_stack_00000004->padding_0x0 + 0x104));
  }
  return;
}

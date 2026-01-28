// Name: core_cloth.cpp_FUN_0043dcc0
// Address: 0043dcc0
// Address Range: [[0043dcc0, 0043ddd2]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043dcc0(void)

#include "nocturne.h"

void core_cloth_cpp_FUN_0043dcc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
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
  in_stack_00000004->unk[0x3ce88] = '\0';
  fVar5 = 0.5f;
  in_stack_00000004->unk[0x3ce89] = '\0';
  in_stack_00000004->unk[0x3ce8a] = -0x80;
  in_stack_00000004->unk[0x3ce8b] = '?';
  in_stack_00000004->unk[0x3ce84] = '\x01';
  fVar6 = 0.5f;
  in_stack_00000004->unk[0x3ce85] = '\0';
  in_stack_00000004->unk[0x3ce86] = '\0';
  in_stack_00000004->unk[0x3ce87] = '\0';
  in_stack_00000004->unk[0x3f028] = '\0';
  fVar7 = 0.05f;
  in_stack_00000004->unk[0x3f029] = '\0';
  in_stack_00000004->unk[0x3f02a] = '\0';
  in_stack_00000004->unk[0x3f02b] = '\0';
  in_stack_00000004->unk[0x3ce8c] = '\0';
  in_stack_00000004->unk[0x3ce8d] = '\0';
  in_stack_00000004->unk[0x3ce8e] = '\0';
  in_stack_00000004->unk[0x3ce8f] = '\0';
  *(float *)(in_stack_00000004->unk + 0x3ce58) = fVar1;
  fVar1 = 0.15f;
  *(float *)(in_stack_00000004->unk + 0x3ce5c) = fVar2;
  *(float *)(in_stack_00000004->unk + 0x3ce60) = fVar3;
  *(float *)(in_stack_00000004->unk + 0x3ce64) = fVar4;
  *(float *)(in_stack_00000004->unk + 0x3ce68) = fVar5;
  *(float *)(in_stack_00000004->unk + 0x3ce6c) = fVar6;
  *(float *)(in_stack_00000004->unk + 0x3ce70) = fVar7;
  *(float *)(in_stack_00000004->unk + 0x3ce74) = fVar1;
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(in_stack_00000004);
  iVar9 = 0;
  if (0 < *(int *)(in_stack_00000004->unk + 0x104)) {
    pcVar10 = in_stack_00000004->unk + 0x5798;
    iVar11 = 0;
    do {
      piVar8 = (int *)(*(int *)(in_stack_00000004->unk + 0x10c) + iVar11);
      iVar9 = iVar9 + 1;
      *(float *)pcVar10 = (float)*piVar8 * 0.00390625f;
      *(float *)(pcVar10 + 4) = (float)piVar8[1] * 0.00390625f;
      *(float *)(pcVar10 + 8) = (float)piVar8[2] * 0.00390625f;
      pcVar10 = pcVar10 + 0x11c;
      iVar11 = iVar11 + 0xc;
    } while (iVar9 < *(int *)(in_stack_00000004->unk + 0x104));
  }
  return;
}

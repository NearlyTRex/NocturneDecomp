// Name: core_bugs.cpp_FUN_004272f0
// Address: 004272f0
// Address Range: [[004272f0, 004273f1]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_004272f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004272f0(CCharacter* param_1) */

void core_bugs_cpp_FUN_004272f0(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *point;
  int iVar7;
  int in_stack_00000004;
  
  puVar1 = (uint *)(in_stack_00000004 + 0xbecc);
  if ((uint *)(in_stack_00000004 + 0x199cc) != puVar1) {
    *(uint *)(in_stack_00000004 + 0x199cc) = *puVar1;
    *(uint *)(in_stack_00000004 + 0x199d0) = *(uint *)(in_stack_00000004 + 0xbed0);
    *(uint *)(in_stack_00000004 + 0x199d4) = *(uint *)(in_stack_00000004 + 0xbed4);
  }
  if ((uint *)(in_stack_00000004 + 0x199d8) != puVar1) {
    *(uint *)(in_stack_00000004 + 0x199d8) = *puVar1;
    *(uint *)(in_stack_00000004 + 0x199dc) = *(uint *)(in_stack_00000004 + 0xbed0);
    *(uint *)(in_stack_00000004 + 0x199e0) = *(uint *)(in_stack_00000004 + 0xbed4);
  }
  iVar7 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0xbec0)) {
    point = (CVector3f *)(in_stack_00000004 + 0xbf0c);
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                ((CBoundingBox3D *)(in_stack_00000004 + 0x199cc),point);
      point = (CVector3f *)&point[5].y;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0xbec0));
  }
  fVar2 = *(float *)(in_stack_00000004 + 0x199cc) + -0.3333333f;
  fVar3 = *(float *)(in_stack_00000004 + 0x199d4) + -0.3333333f;
  fVar4 = *(float *)(in_stack_00000004 + 0x199d8) + 0.3333333f;
  fVar5 = *(float *)(in_stack_00000004 + 0x199dc) + 0.3333333f;
  fVar6 = *(float *)(in_stack_00000004 + 0x199e0) + 0.3333333f;
  *(float *)(in_stack_00000004 + 0x199d0) = *(float *)(in_stack_00000004 + 0x199d0) + -0.3333333f
  ;
  *(float *)(in_stack_00000004 + 0x199d4) = fVar3;
  *(float *)(in_stack_00000004 + 0x199d8) = fVar4;
  *(float *)(in_stack_00000004 + 0x199dc) = fVar5;
  *(float *)(in_stack_00000004 + 0x199e0) = fVar6;
  *(float *)(in_stack_00000004 + 0x199cc) = fVar2;
  return;
}

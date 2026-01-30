// Name: core_bodypart.cpp_FUN_0041add0
// Address: 0041add0
// Address Range: [[0041add0, 0041ae4b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_0041add0(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_FUN_0041add0(void)

{
  int iVar1;
  uint *puVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x28c);
  if (iVar1 < 3) {
    puVar2 = (uint *)(in_stack_00000004 + 0x290 + iVar1 * 0x194);
    *(int *)(in_stack_00000004 + 0x28c) = iVar1 + 1;
    if (puVar2 != in_stack_0000000c) {
      *puVar2 = *in_stack_0000000c;
      puVar2[1] = in_stack_0000000c[1];
      puVar2[2] = in_stack_0000000c[2];
    }
    if (puVar2 + 3 != in_stack_00000010) {
      puVar2[3] = *in_stack_00000010;
      puVar2[4] = in_stack_00000010[1];
      puVar2[5] = in_stack_00000010[2];
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(puVar2 + 6),in_stack_00000008);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(puVar2 + 6));
  }
  return;
}

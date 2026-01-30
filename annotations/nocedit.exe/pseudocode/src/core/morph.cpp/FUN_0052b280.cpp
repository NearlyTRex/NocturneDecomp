// Name: core_morph.cpp_FUN_0052b280
// Address: 0052b280
// Address Range: [[0052b280, 0052b30c]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_FUN_0052b280(void)

#include "nocturne.h"

int __cdecl core_morph_cpp_FUN_0052b280(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  float local_18;
  
  iVar7 = 0;
  local_18 = 1e+30;
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x54)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(in_stack_00000004 + 0x58);
      fVar2 = *in_stack_00000008 - *(float *)(iVar5 + 4 + iVar1);
      fVar3 = in_stack_00000008[1] - *(float *)(iVar5 + 8 + iVar1);
      fVar4 = in_stack_00000008[2] - *(float *)(iVar5 + 0xc + iVar1);
      fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_18) {
        iVar7 = iVar6;
        local_18 = fVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0x54));
  }
  return iVar7;
}

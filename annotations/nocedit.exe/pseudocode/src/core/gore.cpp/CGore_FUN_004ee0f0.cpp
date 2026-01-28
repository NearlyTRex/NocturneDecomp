// Name: core_gore.cpp_CGore_FUN_004ee0f0
// Address: 004ee0f0
// Address Range: [[004ee0f0, 004ee1df]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_FUN_004ee0f0(CGore *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_FUN_004ee0f0(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  CBloodSplat *pCVar2;
  int iVar3;
  float *in_stack_00000008;
  uint *in_stack_0000000c;
  
  iVar3 = 0;
  if (0 < DAT_02da8720) {
    pCVar1 = DAT_02da8724;
    do {
      if (((ABS(in_stack_00000008[1] - *(float *)(pCVar1->unk + 8)) <= (float)0.5) &&
          (ABS(*in_stack_00000008 - *(float *)(pCVar1->unk + 4)) <= (float)1.333)) &&
         (ABS(in_stack_00000008[2] - *(float *)(pCVar1->unk + 0xc)) <= (float)1.333)) {
        *in_stack_0000000c = *(uint *)(pCVar1->unk + 0x10);
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar3 < DAT_02da8720);
  }
  iVar3 = 0;
  if (0 < DAT_02d873d8) {
    pCVar2 = DAT_02d873dc;
    do {
      if (((*(int *)(pCVar2->unk + 0x10) == 0) &&
          (ABS(in_stack_00000008[1] - *(float *)(pCVar2->unk + 8)) <= (float)0.5)) &&
         ((ABS(*in_stack_00000008 - *(float *)(pCVar2->unk + 4)) <= (float)0.5 &&
          (ABS(in_stack_00000008[2] - *(float *)(pCVar2->unk + 0xc)) <= (float)0.5)))) {
        *in_stack_0000000c = *(uint *)(pCVar2->unk + 0x14);
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < DAT_02d873d8);
  }
  return 0;
}

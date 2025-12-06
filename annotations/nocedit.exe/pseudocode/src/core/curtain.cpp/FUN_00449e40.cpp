// Name: core_curtain.cpp_FUN_00449e40
// Address: 00449e40
// Address Range: [[00449e40, 00449f08]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449e40()

#include "nocturne.h"

void core_curtain_cpp_FUN_00449e40(void)

{
  CVector3f *pCVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CVector3f *input;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_30;
  float local_20;
  float local_1c;
  float local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x204)) {
    local_18 = (float)(in_stack_00000004 + 0x208);
    local_14 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x228);
    do {
      input = (CVector3f *)(iVar3 * 0x74 + (int)local_18);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(local_14,&local_30,input);
      local_20 = pCVar1->x + *(float *)(in_stack_00000004 + 0x20);
      local_1c = pCVar1->y + *(float *)(in_stack_00000004 + 0x24);
      local_18 = pCVar1->z + *(float *)(in_stack_00000004 + 0x28);
      if (pfVar2 != &local_20) {
        *pfVar2 = local_20;
        pfVar2[1] = local_1c;
        pfVar2[2] = local_18;
      }
      if (&input[4].z != &input[2].z) {
        input[4].z = input[2].z;
        input[5].x = input[3].x;
        input[5].y = input[3].y;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 0x1d;
    } while (iVar3 < *(int *)(in_stack_00000008 + 0x204));
  }
  return;
}

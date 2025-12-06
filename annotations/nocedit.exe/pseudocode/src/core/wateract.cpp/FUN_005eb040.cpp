// Name: core_wateract.cpp_FUN_005eb040
// Address: 005eb040
// Address Range: [[005eb040, 005eb0eb]]
// Convention: unknown
// Signature: undefined core_wateract.cpp_FUN_005eb040()

#include "nocturne.h"

void core_wateract_cpp_FUN_005eb040(void)

{
  CVector3f *pCVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x3f *local_18;
  int local_14;
  
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x298)) {
    local_14 = in_stack_00000004 + 0x29c;
    local_18 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x2a8);
    do {
      local_30.x = *pfVar2 - *(float *)(in_stack_00000004 + 0x20);
      pCVar3 = (CVector3f *)(iVar4 * 0x20 + local_14);
      local_30.y = pfVar2[1] - *(float *)(in_stack_00000004 + 0x24);
      local_30.z = pfVar2[2] - *(float *)(in_stack_00000004 + 0x28);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (local_18,&local_24,&local_30);
      if (pCVar3 != pCVar1) {
        pCVar3->x = pCVar1->x;
        pCVar3->y = pCVar1->y;
        pCVar3->z = pCVar1->z;
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iVar4 < *(int *)(in_stack_00000008 + 0x298));
  }
  return;
}

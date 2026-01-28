// Name: core_wateract.cpp_FUN_005eafa0
// Address: 005eafa0
// Address Range: [[005eafa0, 005eb03a]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_005eafa0(void)

#include "nocturne.h"

void core_wateract_cpp_FUN_005eafa0(void)

{
  CVector3f *pCVar1;
  float *pfVar2;
  int iVar3;
  int in_stack_00000004;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x298)) {
    local_18 = in_stack_00000004 + 0x29c;
    local_14 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x2a8);
    do {
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (local_14,&local_24,(CVector3f *)(iVar3 * 0x20 + local_18));
      local_30 = pCVar1->x + *(float *)(in_stack_00000004 + 0x20);
      local_2c = pCVar1->y + *(float *)(in_stack_00000004 + 0x24);
      local_28 = pCVar1->z + *(float *)(in_stack_00000004 + 0x28);
      if (pfVar2 != &local_30) {
        *pfVar2 = local_30;
        pfVar2[1] = local_2c;
        pfVar2[2] = local_28;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x298));
  }
  return;
}

// Name: engine_3d.c_FUN_004078f0
// Address: 004078f0
// Address Range: [[004078f0, 0040790b]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_004078f0(int *param_1)

#include "nocturne.h"

void engine_3d_c_FUN_004078f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_00403800_006093c4)[iVar1])(param_1);
    return;
  }
  return;
}

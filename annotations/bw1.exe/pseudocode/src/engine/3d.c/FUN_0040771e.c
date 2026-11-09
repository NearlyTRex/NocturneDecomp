// Name: engine_3d.c_FUN_0040771e
// Address: 0040771e
// Address Range: [[0040771e, 0040773b]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_0040771e(int *param_1)

#include "nocturne.h"

void engine_3d_c_FUN_0040771e(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_006104f4)[iVar1])(param_1);
    return;
  }
  return;
}

// Name: engine_3d.c_FUN_0040775e
// Address: 0040775e
// Address Range: [[0040775e, 0040777b]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_0040775e(int *param_1)

#include "nocturne.h"

void engine_3d_c_FUN_0040775e(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_005f07c4)[iVar1])(param_1);
    return;
  }
  return;
}

// Name: engine_3d.c_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 00407754]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00407720(int *param_1)

#include "nocturne.h"

void engine_3d_c_FUN_00407720(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = *param_1;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      param_1 = (int *)(*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_005f07c4)[iVar1])
                                 (param_1);
    } while (param_1 != (int *)0x0);
    DAT_005fba40 = 1;
  }
  return;
}

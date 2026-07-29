// Name: engine_3d.c_FUN_00408e80
// Address: 00408e80
// Address Range: [[00408e80, 00408eb0]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00408e80(int *param_1)

#include "nocturne.h"

void engine_3d_c_FUN_00408e80(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    while( true ) {
      iVar1 = *param_1;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      param_1 = (int *)(*(code *)(&g_MRGLBlockHandlerTable)[iVar1])(param_1);
    }
    DAT_005b7644 = 1;
  }
  return;
}

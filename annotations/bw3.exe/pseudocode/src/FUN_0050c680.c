// Name: FUN_0050c680
// Address: 0050c680
// Address Range: [[0050c680, 0050c740]]
// Convention: unknown
// Signature: undefined4 FUN_0050c680(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050c680(int param_1,float *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x138c0) != *param_2) || (*(float *)(param_1 + 0x138c4) != param_2[1]))
     || (*(float *)(param_1 + 0x138c8) != param_2[2])) {
    if ((float *)(param_1 + 0x138c0) != param_2) {
      *(float *)(param_1 + 0x138c0) = *param_2;
      *(float *)(param_1 + 0x138c4) = param_2[1];
      *(float *)(param_1 + 0x138c8) = param_2[2];
    }
    _DAT_01ec1514 = 1;
    do {
      iVar1 = FUN_0050baa0(param_1,param_2,param_1 + 0x138cc,param_4);
      *(int *)(param_1 + 0x138bc) = iVar1;
      if (iVar1 == 1) break;
      _DAT_01ec1514 = _DAT_01ec1514 + 1;
    } while (_DAT_01ec1514 < 4);
  }
  if ((uint *)(param_1 + 0x138cc) != param_3) {
    *param_3 = *(uint *)(param_1 + 0x138cc);
    param_3[1] = *(uint *)(param_1 + 0x138d0);
    param_3[2] = *(uint *)(param_1 + 0x138d4);
    return *(uint *)(param_1 + 0x138bc);
  }
  return *(uint *)(param_1 + 0x138bc);
}

// Name: FUN_005349a0
// Address: 005349a0
// Address Range: [[005349a0, 00534a60]]
// Convention: unknown
// Signature: undefined4 FUN_005349a0(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005349a0(int param_1,float *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x138c0) != *param_2) || (*(float *)(param_1 + 0x138c4) != param_2[1]))
     || (*(float *)(param_1 + 0x138c8) != param_2[2])) {
    if ((float *)(param_1 + 0x138c0) != param_2) {
      *(float *)(param_1 + 0x138c0) = *param_2;
      *(float *)(param_1 + 0x138c4) = param_2[1];
      *(float *)(param_1 + 0x138c8) = param_2[2];
    }
    _DAT_01e6be44 = 1;
    do {
      iVar1 = FUN_00533dc0(param_1,param_2,param_1 + 0x138cc,param_4);
      *(int *)(param_1 + 0x138bc) = iVar1;
      if (iVar1 == 1) break;
      _DAT_01e6be44 = _DAT_01e6be44 + 1;
    } while (_DAT_01e6be44 < 4);
  }
  if ((uint *)(param_1 + 0x138cc) != param_3) {
    *param_3 = *(uint *)(param_1 + 0x138cc);
    param_3[1] = *(uint *)(param_1 + 0x138d0);
    param_3[2] = *(uint *)(param_1 + 0x138d4);
    return *(uint *)(param_1 + 0x138bc);
  }
  return *(uint *)(param_1 + 0x138bc);
}

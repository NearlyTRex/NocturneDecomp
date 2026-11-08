// Name: FUN_00513650
// Address: 00513650
// Address Range: [[00513650, 00513710]]
// Convention: unknown
// Signature: undefined4 FUN_00513650(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00513650(int param_1,float *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x138c0) != *param_2) || (*(float *)(param_1 + 0x138c4) != param_2[1]))
     || (*(float *)(param_1 + 0x138c8) != param_2[2])) {
    if ((float *)(param_1 + 0x138c0) != param_2) {
      *(float *)(param_1 + 0x138c0) = *param_2;
      *(float *)(param_1 + 0x138c4) = param_2[1];
      *(float *)(param_1 + 0x138c8) = param_2[2];
    }
    _DAT_01e4fed4 = 1;
    do {
      iVar1 = FUN_00512a70(param_1,param_2,param_1 + 0x138cc,param_4);
      *(int *)(param_1 + 0x138bc) = iVar1;
      if (iVar1 == 1) break;
      _DAT_01e4fed4 = _DAT_01e4fed4 + 1;
    } while (_DAT_01e4fed4 < 4);
  }
  if ((uint *)(param_1 + 0x138cc) != param_3) {
    *param_3 = *(uint *)(param_1 + 0x138cc);
    param_3[1] = *(uint *)(param_1 + 0x138d0);
    param_3[2] = *(uint *)(param_1 + 0x138d4);
    return *(uint *)(param_1 + 0x138bc);
  }
  return *(uint *)(param_1 + 0x138bc);
}

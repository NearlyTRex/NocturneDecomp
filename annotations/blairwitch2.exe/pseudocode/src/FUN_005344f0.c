// Name: FUN_005344f0
// Address: 005344f0
// Address Range: [[005344f0, 00534578]]
// Convention: unknown
// Signature: void FUN_005344f0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005344f0(int param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (float *)0x0) {
    *(uint *)(param_1 + 0x16166c) = 0;
    return;
  }
  local_10 = (int)ROUND(*param_2 * _DAT_005fb210);
  local_c = (int)ROUND(param_2[1] * _DAT_005fb210);
  local_8 = (int)ROUND(param_2[2] * _DAT_005fb210);
  FUN_00531460(param_1,&local_10,0,0,0);
  uVar1 = DAT_00622034;
  *(uint *)(param_1 + 0x16166c) = 1;
  uVar2 = DAT_0062203c;
  *(uint *)(param_1 + 0x161670) = uVar1;
  *(uint *)(param_1 + 0x161678) = uVar2;
  *(uint *)(param_1 + 0x161674) = DAT_00622038;
  return;
}

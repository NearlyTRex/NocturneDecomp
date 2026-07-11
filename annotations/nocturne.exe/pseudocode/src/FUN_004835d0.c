// Name: FUN_004835d0
// Address: 004835d0
// Address Range: [[004835d0, 004836a2]]
// Convention: unknown
// Signature: void FUN_004835d0(int param_1)

#include "nocturne.h"

void FUN_004835d0(int param_1)

{
  int iVar1;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  FUN_00460a00(DAT_005ae704,param_1 + 4);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x10,0);
  iVar1 = FUN_00454530(0x1c08d48);
  local_24 = *(uint *)(iVar1 + 0x338);
  local_20 = *(uint *)(iVar1 + 0x33c);
  local_1c = *(uint *)(iVar1 + 0x340);
  local_18 = *(uint *)(iVar1 + 0x344);
  local_14 = *(uint *)(iVar1 + 0x348);
  local_10 = *(uint *)(iVar1 + 0x34c);
  iVar1 = FUN_0041ceb0(&local_24,0);
  if (iVar1 != 0) {
    FUN_0050adc0(0x01E57284,param_1 + 4,param_1 + 0x10,&local_24,&local_18,param_1 + 0x1c);
    FUN_004544d0(0x1c08d48,0,0xffffffff);
  }
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}

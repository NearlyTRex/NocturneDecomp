// Name: FUN_004cabf0
// Address: 004cabf0
// Address Range: [[004cabf0, 004cac8a]]
// Convention: unknown
// Signature: void FUN_004cabf0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004cabf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1338 + param_2 * 0x60;
  if ((*(int *)(0x01CC9450 + 4) == 0) && (*(float *)(iVar2 + 0x18) <= 0.0)) {
    return;
  }
  FUN_00460aa0(DAT_005ae704,iVar2 + 0x28,iVar2 + 0x1c);
  iVar1 = FUN_00454530(param_1 + 0x448,0xffffffff);
  FUN_004544d0(param_1 + 0x448,(float)(*(int *)(iVar1 + 0x100) + -1) * *(float *)(iVar2 + 0x18));
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}

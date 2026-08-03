// Name: core_dcamera.cpp_FUN_00448310
// Address: 00448310
// Address Range: [[00448310, 00448372]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00448310(int param_1)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00448310(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      iVar1 = *(int *)(param_1 + 0x13c) * iVar3;
      iVar2 = *(int *)(param_1 + 0x148) + iVar3;
      iVar3 = iVar3 + 1;
      _memcpy
                ((void *)(iVar1 * 4 + *(int *)(param_1 + 0x15c)),
                 (void *)(*(int *)(&DAT_01bd4260 + iVar2 * 4) + *(int *)(param_1 + 0x144) * 4),
                 *(int *)(param_1 + 0x13c) << 2);
    } while (iVar3 < *(int *)(param_1 + 0x140));
  }
  return;
}

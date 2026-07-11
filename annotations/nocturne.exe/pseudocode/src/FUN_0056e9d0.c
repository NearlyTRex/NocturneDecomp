// Name: FUN_0056e9d0
// Address: 0056e9d0
// Address Range: [[0056e9d0, 0056ea38]]
// Convention: unknown
// Signature: void FUN_0056e9d0(int *param_1,int *param_2)

#include "nocturne.h"

void FUN_0056e9d0(int *param_1,int *param_2)

{
  int iVar1;
  _MEMORY_BASIC_INFORMATION local_28;
  byte local_c [4];
  
  VirtualQuery(local_c,&local_28,0x1c);
  if (DAT_005c1d11 < 0x8000) {
    iVar1 = (int)local_28.AllocationBase + 0x3000;
  }
  else if ((DAT_005c1d11 < 0x8000) || (3 < DAT_005c1d0f)) {
    iVar1 = (int)local_28.AllocationBase + 0x13000;
  }
  else {
    iVar1 = (int)local_28.AllocationBase + 0x12000;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)local_28.BaseAddress + local_28.RegionSize;
  }
  return;
}

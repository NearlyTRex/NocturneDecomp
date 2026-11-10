// Name: crt_unknown.c_FUN_005c2da0
// Address: 005c2da0
// Address Range: [[005c2da0, 005c2e08]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c2da0(int *param_1,int *param_2)

#include "nocturne.h"

void FUN_005c2da0(int *param_1,int *param_2)

{
  int iVar1;
  _MEMORY_BASIC_INFORMATION local_28;
  byte local_c [4];
  
  VirtualQuery(local_c,&local_28,0x1c);
  if (DAT_0061f289 < 0x8000) {
    iVar1 = (int)local_28.AllocationBase + 0x3000;
  }
  else if ((DAT_0061f289 < 0x8000) || (3 < DAT_0061f287)) {
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

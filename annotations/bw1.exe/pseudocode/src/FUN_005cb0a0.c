// Name: FUN_005cb0a0
// Address: 005cb0a0
// Address Range: [[005cb0a0, 005cb108]]
// Convention: unknown
// Signature: void FUN_005cb0a0(int *param_1,int *param_2)

#include "nocturne.h"

void FUN_005cb0a0(int *param_1,int *param_2)

{
  int iVar1;
  _MEMORY_BASIC_INFORMATION local_28;
  byte local_c [4];
  
  VirtualQuery(local_c,&local_28,0x1c);
  if (DAT_006265e1 < 0x8000) {
    iVar1 = (int)local_28.AllocationBase + 0x3000;
  }
  else if ((DAT_006265e1 < 0x8000) || (3 < DAT_006265df)) {
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

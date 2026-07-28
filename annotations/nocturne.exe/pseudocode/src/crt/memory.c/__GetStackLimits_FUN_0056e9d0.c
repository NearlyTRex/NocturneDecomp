// Name: crt_memory.c___GetStackLimits_FUN_0056e9d0
// Address: 0056e9d0
// Address Range: [[0056e9d0, 0056ea38]]
// Convention: __cdecl
// Signature: void __cdecl crt_memory_c___GetStackLimits_FUN_0056e9d0(ThreadData *pStackBound,uint *pHeapBound)

#include "nocturne.h"

void __cdecl __GetStackLimits(ThreadData *pStackBound,uint *pHeapBound)

{
  uint uVar1;
  _MEMORY_BASIC_INFORMATION local_28;
  byte local_c [4];
  
  VirtualQuery(local_c,&local_28,0x1c);
  if (DAT_005c1d11 < 0x8000) {
    uVar1 = (int)local_28.AllocationBase + 0x3000;
  }
  else if ((DAT_005c1d11 < 0x8000) || (3 < DAT_005c1d0f)) {
    uVar1 = (int)local_28.AllocationBase + 0x13000;
  }
  else {
    uVar1 = (int)local_28.AllocationBase + 0x12000;
  }
  if (pStackBound != (ThreadData *)0x0) {
    pStackBound->stack_limit = uVar1;
  }
  if (pHeapBound != (uint *)0x0) {
    *pHeapBound = (int)local_28.BaseAddress + local_28.RegionSize;
  }
  return;
}

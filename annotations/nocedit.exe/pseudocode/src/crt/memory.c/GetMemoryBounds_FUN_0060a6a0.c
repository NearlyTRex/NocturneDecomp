// Name: crt_memory.c_GetMemoryBounds_FUN_0060a6a0
// Address: 0060a6a0
// Address Range: [[0060a6a0, 0060a708]]
// Convention: __cdecl
// Signature: void __cdecl crt_memory_c_GetMemoryBounds_FUN_0060a6a0(ThreadData *pStackBound,uint *pHeapBound)

#include "nocturne.h"

void __cdecl crt_memory_c_GetMemoryBounds_FUN_0060a6a0(ThreadData *pStackBound,uint *pHeapBound)

{
  uint uVar1;
  _MEMORY_BASIC_INFORMATION local_28;
  byte local_c [4];
  
  (*g_VirtualQueryFunc)(local_c,&local_28,0x1c);
  if (g_WindowsPlatformVersion < SYSTEM_WINDOWS_NT_4_0) {
    uVar1 = (int)local_28.AllocationBase + 0x3000;
  }
  else if ((g_WindowsPlatformVersion < SYSTEM_WINDOWS_NT_4_0) || (3 < g_WindowsMinorVersion)) {
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

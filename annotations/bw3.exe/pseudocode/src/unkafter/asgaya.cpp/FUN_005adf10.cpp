// Name: unkafter_asgaya.cpp_FUN_005adf10
// Address: 005adf10
// Address Range: [[005adf10, 005adf78]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005adf10(int *param_1,int *param_2)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005adf10(int *param_1,int *param_2)

{
  int iVar1;
  _MEMORY_BASIC_INFORMATION local_28;
  byte local_c [4];
  
  VirtualQuery(local_c,&local_28,0x1c);
  if (DAT_00607985 < 0x8000) {
    iVar1 = (int)local_28.AllocationBase + 0x3000;
  }
  else if ((DAT_00607985 < 0x8000) || (3 < DAT_00607983)) {
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

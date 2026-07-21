// Name: FUN_005524d0
// Address: 005524d0
// Address Range: [[005524d0, 0055250f]]
// Convention: unknown
// Signature: void FUN_005524d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005524d0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_trigger_cpp_CTrigger_ctor_FUN_005478b0(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_waypoint_cpp_CWaypoint_setup_FUN_00552510_005a4034;
  *(uint *)(iVar1 + 0x158) = 0x3f000000;
  *(uint *)(iVar1 + 0x15c) = 0x3f800000;
  *(uint *)(iVar1 + 0x160) = 0x3f000000;
  *(uint *)(iVar1 + 0x368) = 0;
  return;
}

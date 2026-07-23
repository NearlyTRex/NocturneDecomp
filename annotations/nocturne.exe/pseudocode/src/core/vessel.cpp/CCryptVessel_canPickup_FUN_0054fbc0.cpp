// Name: core_vessel.cpp_CCryptVessel_canPickup_FUN_0054fbc0
// Address: 0054fbc0
// Address Range: [[0054fbc0, 0054fbf7]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_CCryptVessel_canPickup_FUN_0054fbc0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_vessel_cpp_CCryptVessel_canPickup_FUN_0054fbc0(int param_1,uint param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x7e0) == 0) && (*(int *)(param_1 + 0x3b0) == 0)) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero"), iVar1 != 0)) {
    return 4;
  }
  return 0;
}

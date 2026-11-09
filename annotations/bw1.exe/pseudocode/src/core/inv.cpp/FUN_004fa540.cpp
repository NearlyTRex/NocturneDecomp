// Name: core_inv.cpp_FUN_004fa540
// Address: 004fa540
// Address Range: [[004fa540, 004fa6b8]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004fa540(undefined4 param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

uint core_inv_cpp_FUN_004fa540(uint param_1,CDemonActor *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 5) {
    return 1;
  }
  if ((param_3 == 0) && (iVar1 = core_actor_cpp_FUN_0040c550(param_2,&DAT_005e6818), iVar1 != 0)) {
    return 1;
  }
  if (param_3 == 1) {
    iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CShotgun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CCrossbow");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CTommyGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CElephantGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CRifle");
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (param_3 == 2) {
      iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CFlameThrower");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CLightGun");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CLightpis");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((param_3 == 3) &&
       (iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CMelee"), iVar1 != 0)) {
      return 1;
    }
    if (param_3 == 4) {
      iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CDynamite");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CFlashlight");
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

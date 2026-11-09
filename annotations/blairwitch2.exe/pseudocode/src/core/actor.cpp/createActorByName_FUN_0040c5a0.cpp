// Name: core_actor.cpp_createActorByName_FUN_0040c5a0
// Address: 0040c5a0
// Address Range: [[0040c5a0, 0040c63d]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_createActorByName_FUN_0040c5a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_createActorByName_FUN_0040c5a0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_getActorClassByName_FUN_0040c530(param_1);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0xaad;
    core_main_c_FUN_004e4500("Can't create actor of unknown class type: %s",param_1);
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0xab3;
    core_main_c_FUN_004e4500("Can't create instance of abstract type %s",param_1);
  }
  iVar1 = (**(code **)(iVar1 + 0x2c))();
  if (iVar1 != 0) {
    return iVar1;
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0xabc;
  core_main_c_FUN_004e4500("Not enough memory to create %s",param_1);
  return 0;
}

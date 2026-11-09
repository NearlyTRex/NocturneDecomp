// Name: core_actor.cpp_createActorByName_FUN_0040c4f0
// Address: 0040c4f0
// Address Range: [[0040c4f0, 0040c58d]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_createActorByName_FUN_0040c4f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_createActorByName_FUN_0040c4f0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_getActorClassByName_FUN_0040c480(param_1);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0xaac;
    core_main_c_FUN_004e4330("Can't create actor of unknown class type: %s",param_1);
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0xab2;
    core_main_c_FUN_004e4330("Can't create instance of abstract type %s",param_1);
  }
  iVar1 = (**(code **)(iVar1 + 0x2c))();
  if (iVar1 != 0) {
    return iVar1;
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0xabb;
  core_main_c_FUN_004e4330("Not enough memory to create %s",param_1);
  return 0;
}

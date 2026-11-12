// Name: core_actor.cpp_createActorByName_FUN_0040c4f0
// Address: 0040c4f0
// Address Range: [[0040c4f0, 0040c58d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c4f0(char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c4f0(char *class_name)

{
  CDemonActorType *pCVar1;
  CDemonActor *pCVar2;
  
  pCVar1 = core_actor_cpp_getActorClassByName_FUN_0040c480(class_name);
  if (pCVar1 == (CDemonActorType *)0x0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0xaac;
    core_main_c_FUN_004e4330("Can't create actor of unknown class type: %s",class_name);
  }
  if (pCVar1->factory_func == (CDemonActor_FactoryFunc *)0x0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0xab2;
    core_main_c_FUN_004e4330("Can't create instance of abstract type %s",class_name);
  }
  pCVar2 = (*pCVar1->factory_func)();
  if (pCVar2 != (CDemonActor *)0x0) {
    return pCVar2;
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0xabb;
  core_main_c_FUN_004e4330("Not enough memory to create %s",class_name);
  return (CDemonActor *)0x0;
}

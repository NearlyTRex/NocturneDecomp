// Name: core_actor.cpp_createActorByName_FUN_0040d540
// Address: 0040d540
// Address Range: [[0040d540, 0040d5dd]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040d540(char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040d540(char *class_name)

{
  CDemonActorType *pCVar1;
  CDemonActor *pCVar2;
  
  pCVar1 = core_actor_cpp_getActorClassByName_FUN_0040d4d0(class_name);
  if (pCVar1 == (CDemonActorType *)0x0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0xa4a;
    core_main_c_FUN_004c8440("Can't create actor of unknown class type: %s",class_name);
  }
  if (pCVar1->factory_func == (CDemonActor_FactoryFunc *)0x0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0xa50;
    core_main_c_FUN_004c8440("Can't create instance of abstract type %s",class_name);
  }
  pCVar2 = (*pCVar1->factory_func)();
  if (pCVar2 != (CDemonActor *)0x0) {
    return pCVar2;
  }
  PTR_01cc4800 = "..\\core\\actor.cpp";
  INT_01cc4804 = 0xa59;
  core_main_c_FUN_004c8440("Not enough memory to create %s",class_name);
  return (CDemonActor *)0x0;
}

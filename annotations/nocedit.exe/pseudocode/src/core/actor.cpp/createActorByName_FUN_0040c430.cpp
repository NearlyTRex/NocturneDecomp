// Name: core_actor.cpp_createActorByName_FUN_0040c430
// Address: 0040c430
// Address Range: [[0040c430, 0040c4cd]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c430(char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c430(char *class_name)

{
  CDemonActorType *pCVar1;
  CDemonActor *pCVar2;
  
  pCVar1 = core_actor_cpp_getActorClassByName_FUN_0040c3c0(class_name);
  if (pCVar1 == (CDemonActorType *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xa3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create actor of unknown class type: %s",class_name);
  }
  if (pCVar1->factory_func == (CDemonActor_FactoryFunc *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xa41;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create instance of abstract type %s",class_name);
  }
  pCVar2 = (*pCVar1->factory_func)();
  if (pCVar2 != (CDemonActor *)0x0) {
    return pCVar2;
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 0xa4a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough memory to create %s",class_name);
  return (CDemonActor *)0x0;
}

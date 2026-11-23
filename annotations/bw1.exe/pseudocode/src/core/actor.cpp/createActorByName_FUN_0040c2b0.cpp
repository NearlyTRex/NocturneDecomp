// Name: core_actor.cpp_createActorByName_FUN_0040c2b0
// Address: 0040c2b0
// Address Range: [[0040c2b0, 0040c34d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c2b0(char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c2b0(char *class_name)

{
  CDemonActorType *pCVar1;
  CDemonActor *pCVar2;
  
  pCVar1 = core_actor_cpp_getActorClassByName_FUN_0040c240(class_name);
  if (pCVar1 == (CDemonActorType *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2706;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't create actor of unknown class type: %s");
  }
  if (pCVar1->factory_func == (CDemonActor_FactoryFunc *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2712;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't create instance of abstract type %s");
  }
  pCVar2 = (*pCVar1->factory_func)();
  if (pCVar2 != (CDemonActor *)0x0) {
    return pCVar2;
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 2721;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Not enough memory to create %s");
  return (CDemonActor *)0x0;
}

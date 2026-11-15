// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b107]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(char *property_description,char *property_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(char *property_description,char *property_type)

{
  if (DAT_007c303c != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(DAT_007c303c);
  }
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x843;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n");
  return;
}

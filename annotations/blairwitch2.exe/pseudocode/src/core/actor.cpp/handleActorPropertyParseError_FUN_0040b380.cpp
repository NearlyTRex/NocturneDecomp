// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
// Address: 0040b380
// Address Range: [[0040b380, 0040b3f7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(char *property_description,char *property_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(char *property_description,char *property_type)

{
  if (DAT_007bc03c != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(DAT_007bc03c);
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x85e;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n");
  return;
}

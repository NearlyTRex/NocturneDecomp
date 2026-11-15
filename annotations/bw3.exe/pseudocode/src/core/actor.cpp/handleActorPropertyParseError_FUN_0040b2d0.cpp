// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
// Address: 0040b2d0
// Address Range: [[0040b2d0, 0040b347]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)

{
  if (DAT_007df9bc != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(DAT_007df9bc);
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x85d;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n");
  return;
}

// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
// Address: 0040b2d0
// Address Range: [[0040b2d0, 0040b347]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  byte *puVar3;
  CDemonActor *pCVar4;
  
  pCVar1 = DAT_007df9bc;
  pcVar2 = "(unknown)";
  pCVar4 = (CDemonActor *)"(unknown)";
  if (DAT_007df9bc != (CDemonActor *)0x0) {
    pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(DAT_007df9bc);
    pCVar4 = pCVar1;
  }
  if (property_type == (char *)0x0) {
    property_type = "(unknown)";
  }
  puVar3 = &DAT_005b59e9;
  if (DAT_007df9b8 == 2) {
    puVar3 = &DAT_005b59ee;
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x85d;
  core_main_c_FUN_004e4330
            ("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pCVar4,pcVar2,property_type,
             property_description);
  return;
}

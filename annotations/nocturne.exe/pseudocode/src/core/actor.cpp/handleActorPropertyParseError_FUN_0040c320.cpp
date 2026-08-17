// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
// Address: 0040c320
// Address Range: [[0040c320, 0040c397]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  char *pcVar3;
  CDemonActor *pCVar4;
  
  pCVar1 = DAT_00763e8c;
  pcVar2 = "(unknown)";
  pCVar4 = (CDemonActor *)"(unknown)";
  if (DAT_00763e8c != (CDemonActor *)0x0) {
    pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(DAT_00763e8c);
    pCVar4 = pCVar1;
  }
  if (property_type == (char *)0x0) {
    property_type = "(unknown)";
  }
  pcVar3 = "load";
  if (DAT_00763e88 == 2) {
    pcVar3 = "save";
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 2043;
  core_main_c_displayErrorAndQuit_FUN_004c8440
            ("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",pcVar3,pCVar4,pcVar2,property_type,
             property_description);
  return;
}

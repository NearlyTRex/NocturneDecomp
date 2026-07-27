// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
// Address: 0040c320
// Address Range: [[0040c320, 0040c397]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(undefined4 param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(uint param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = DAT_00763e8c;
  pcVar1 = "(unknown)";
  pcVar3 = "(unknown)";
  if (DAT_00763e8c != (char *)0x0) {
    pcVar1 = (char *)core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(DAT_00763e8c);
    pcVar3 = pcVar2;
  }
  if (param_2 == (char *)0x0) {
    param_2 = "(unknown)";
  }
  pcVar2 = "load";
  if (DAT_00763e88 == 2) {
    pcVar2 = "save";
  }
  PTR_01cc4800 = "..\\core\\actor.cpp";
  INT_01cc4804 = 0x7fb;
  core_main_c_FUN_004c8440("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",pcVar2,pcVar3,pcVar1,param_2,param_1)
  ;
  return;
}

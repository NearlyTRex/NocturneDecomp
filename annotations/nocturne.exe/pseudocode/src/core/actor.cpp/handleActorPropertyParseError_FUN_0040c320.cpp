// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
// Address: 0040c320
// Address Range: [[0040c320, 0040c397]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(uint param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *puVar3;
  char *pcVar4;
  
  pcVar1 = DAT_00763e8c;
  pcVar2 = "(unknown)";
  pcVar4 = "(unknown)";
  if (DAT_00763e8c != (char *)0x0) {
    pcVar2 = (char *)core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(DAT_00763e8c);
    pcVar4 = pcVar1;
  }
  if (param_2 == (char *)0x0) {
    param_2 = "(unknown)";
  }
  puVar3 = &DAT_00577b75;
  if (DAT_00763e88 == 2) {
    puVar3 = &DAT_00577b7a;
  }
  _DAT_01cc4800 = "..\\core\\actor.cpp";
  _DAT_01cc4804 = 0x7fb;
  FUN_004c8440("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pcVar4,pcVar2,param_2,param_1);
  return;
}

// Name: core_door.cpp_FUN_00481250
// Address: 00481250
// Address Range: [[00481250, 004812a8]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00481250(void)

#include "nocturne.h"

void core_door_cpp_FUN_00481250(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CDoorClassInfo.name_hash)
  ;
  fVar2 = pCVar3[2].orient.pitch;
  if (fVar2 == 0.0) {
    pcVar4 = "Closed";
  }
  else if (fVar2 == 2.8026e-45) {
    pcVar4 = "Open";
  }
  else {
    pcVar4 = "Unknown";
  }
  do {
    cVar1 = *pcVar4;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}

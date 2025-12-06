// Name: core_lever.cpp_FUN_00505100
// Address: 00505100
// Address Range: [[00505100, 00505158]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505100()

#include "nocturne.h"

void core_lever_cpp_FUN_00505100(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLeverClassInfo.name_hash);
  fVar2 = pCVar3[2].location.position.z;
  if (fVar2 == 0.0) {
    pcVar4 = "Ground lever";
  }
  else if (fVar2 == 1.4013e-45) {
    pcVar4 = "Wall lever";
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

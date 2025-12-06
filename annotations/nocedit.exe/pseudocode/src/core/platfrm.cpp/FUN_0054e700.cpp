// Name: core_platfrm.cpp_FUN_0054e700
// Address: 0054e700
// Address Range: [[0054e700, 0054e758]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e700()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e700(uint param_1, byte
   param_2, uint param_3) */

void core_platfrm_cpp_FUN_0054e700(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  fVar2 = pCVar3[2].location.position.y;
  if (fVar2 == 0.0) {
    pcVar4 = "At start";
  }
  else if (fVar2 == 1.4013e-45) {
    pcVar4 = "At end";
  }
  else {
    pcVar4 = "WTF";
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

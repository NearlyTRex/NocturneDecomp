// Name: core_boxactor.cpp_FUN_00423310
// Address: 00423310
// Address Range: [[00423310, 00423379]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00423310()

#include "nocturne.h"

void core_boxactor_cpp_FUN_00423310(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000010;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  switch(pCVar2[4].scale.y) {
  case 0:
    pcVar3 = "Custom";
    break;
  case 1:
    pcVar3 = "Flashlight";
    break;
  case 2:
    pcVar3 = "Lantern";
    break;
  case 3:
    pcVar3 = "Globe";
    break;
  default:
    pcVar3 = "???";
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_00000010 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_00000010[1] = cVar1;
    in_stack_00000010 = in_stack_00000010 + 2;
  } while (cVar1 != '\0');
  return;
}

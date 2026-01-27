// Name: core_platfrm.cpp_FUN_0054e400
// Address: 0054e400
// Address Range: [[0054e400, 0054e462]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e400()

#include "nocturne.h"

void core_platfrm_cpp_FUN_0054e400(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  switch(pCVar2[5].unk1) {
  default:
    pcVar3 = "Disabled";
    break;
  case 1:
    pcVar3 = "Start";
    break;
  case 2:
    pcVar3 = "End";
    break;
  case 3:
    pcVar3 = "Both";
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}

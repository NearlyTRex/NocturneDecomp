// Name: core_platfrm.cpp_FUN_0054e4e0
// Address: 0054e4e0
// Address Range: [[0054e4e0, 0054e52d]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_0054e4e0(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e4e0(uint param_1, byte
   param_2, uint param_3) */

void core_platfrm_cpp_FUN_0054e4e0(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  if (*(char *)&pCVar2[2].orient_matrix.m[0].y == '\0') {
    pcVar3 = "(Manual course)";
  }
  else {
    pcVar3 = (char *)&pCVar2[2].orient_matrix.m[0].y;
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *(char *)((int)pcVar3 + 1);
    pcVar3 = (char *)((int)pcVar3 + 2);
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}

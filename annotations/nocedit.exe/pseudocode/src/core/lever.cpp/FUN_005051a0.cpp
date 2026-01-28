// Name: core_lever.cpp_FUN_005051a0
// Address: 005051a0
// Address Range: [[005051a0, 0050520e]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_005051a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_005051a0(uint param_1, byte param_2,
   uint param_3) */

void core_lever_cpp_FUN_005051a0(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLeverClassInfo.name_hash);
  if ((float)0.5 <= (float)pCVar2[2].location.area_id) {
    core_lever_cpp_FUN_00504b20();
    pcVar3 = "On";
  }
  else {
    core_lever_cpp_FUN_00504b20();
    pcVar3 = "Off";
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

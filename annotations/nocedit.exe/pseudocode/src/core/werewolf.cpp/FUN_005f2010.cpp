// Name: core_werewolf.cpp_FUN_005f2010
// Address: 005f2010
// Address Range: [[005f2010, 005f2061]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_005f2010(void)

#include "nocturne.h"

void core_werewolf_cpp_FUN_005f2010(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  char *format;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CWerewolfClassInfo.name_hash);
  if (pCVar1[0x8d].unk13 == 0) {
    format = "Train";
  }
  else {
    if (pCVar1[0x8d].unk13 != 1) {
      sprintf(in_stack_0000000c,"Train Alpha");
      return;
    }
    format = "Forest";
  }
  sprintf(in_stack_0000000c,format);
  return;
}

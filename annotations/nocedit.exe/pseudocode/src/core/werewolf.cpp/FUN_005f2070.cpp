// Name: core_werewolf.cpp_FUN_005f2070
// Address: 005f2070
// Address Range: [[005f2070, 005f20c1]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f2070()

#include "nocturne.h"

uint core_werewolf_cpp_FUN_005f2070(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CWerewolfClassInfo.name_hash);
  if (pCVar1[0x8d].unk13 == 0) {
    pCVar1[0x8d].unk13 = 1;
  }
  else {
    if (pCVar1[0x8d].unk13 != 1) {
      pCVar1[0x8d].unk13 = 0;
      return 1;
    }
    pCVar1[0x8d].unk13 = 2;
  }
  return 1;
}

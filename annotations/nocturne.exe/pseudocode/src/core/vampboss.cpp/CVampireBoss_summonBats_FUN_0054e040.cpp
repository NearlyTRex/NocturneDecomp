// Name: core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040
// Address: 0054e040
// Address Range: [[0054e040, 0054e0a0]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(CVampireBoss *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)(iVar3 + 0x14cd70 + 0x01E57284),
                        g_CTVBatActorType_02dd110c.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (*(int *)(pCVar1[0x91].create_event + 4) != 0)) {
      core_tvbat_cpp_FUN_0054bfc0(pCVar1);
    }
    iVar3 = iVar3 + 4;
  }
  return;
}

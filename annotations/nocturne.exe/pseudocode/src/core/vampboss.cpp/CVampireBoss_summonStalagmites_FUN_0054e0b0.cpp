// Name: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0
// Address: 0054e0b0
// Address Range: [[0054e0b0, 0054e126]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(CVampireBoss *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)(iVar4 + 0x14cd70 + 0x01E57284),
                        g_CDripActorType_01b7b2f4.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[2].location.area_id == 2)) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
      if (iVar2 == 0) {
        core_drip_cpp_FUN_00462710(pCVar1);
      }
    }
    iVar4 = iVar4 + 4;
  }
  return;
}

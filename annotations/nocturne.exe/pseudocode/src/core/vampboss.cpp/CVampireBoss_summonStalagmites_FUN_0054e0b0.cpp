// Name: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0
// Address: 0054e0b0
// Address Range: [[0054e0b0, 0054e126]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(CVampireBoss *this_ptr)

{
  CDrip *this_ptr_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
    this_ptr_00 = (CDrip *)core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(CDemonActor **)(iVar3 + 0x14cd70 + 0x01E57284),
                                      g_CDripActorType_01b7b2f4.name_hash);
    if ((this_ptr_00 != (CDrip *)0x0) && (this_ptr_00->type == DRIP_TYPE_STALAG)) {
      iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
      if (iVar1 == 0) {
        core_drip_cpp_FUN_00462710(this_ptr_00);
      }
    }
    iVar3 = iVar3 + 4;
  }
  return;
}

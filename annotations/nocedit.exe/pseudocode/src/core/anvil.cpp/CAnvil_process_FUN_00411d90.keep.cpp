// Name: core_anvil.cpp_CAnvil_process_FUN_00411d90
// Address: 00411d90
// MANUAL RECONSTRUCTION
// Address Range: [[00411d90, 00411eb4]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr,float delta_time)

{
  CHero *sim_target;
  int iVar1;
  int iVar4;
  SDamageInfo local_48;
  float fVar2;
  CHero *pCVar1;
  int iVar3;

#if NOCTURNE_AUTHENTIC_NETPLAY
  sim_target = g_HeroActors[g_LocalHeroIndex];
#else
  sim_target = nocturne_net_sim_target_for((CDemonActor *)this_ptr);
#endif
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->drop_condition);
  iVar3 = g_LocalHeroIndex;
  if (iVar4 != 0) {
    this_ptr->triggered = 1;
    pCVar1 = g_HeroActors[iVar3];
    (this_ptr->base).location = (pCVar1->base).base.location;
    (this_ptr->base).location.position.y =
         this_ptr->drop_height + (this_ptr->base).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)32;
    this_ptr->yvel = fVar2;
    iVar1 = g_LocalHeroIndex;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    if ((this_ptr->base).location.position.y < (g_HeroActors[iVar1]->base).base.location.position.y)
    {
      (this_ptr->base).location.position.y = (g_HeroActors[iVar1]->base).base.location.position.y;
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base).location.position.y <
        (sim_target->base).base.location.position.y + (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_48);
      local_48.damage_amount = 9999.9;
      local_48.damage_type = DAMAGE_TYPE_CRUSHED;
      local_48.attacker = &this_ptr->base;
      local_48.wielder = &this_ptr->base;
      (*(((sim_target->base).base.vtable._uc)->_uc).processDamage)
                (&sim_target->base,&local_48);
      return;
    }
  }
  return;
}

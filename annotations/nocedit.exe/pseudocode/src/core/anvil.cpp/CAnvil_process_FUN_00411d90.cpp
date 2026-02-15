// Name: core_anvil.cpp_CAnvil_process_FUN_00411d90
// Address: 00411d90
// Address Range: [[00411d90, 00411eb4]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr,float delta_time)

{
  CHero *pCVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  SDamageInfo local_48;
  
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->drop_condition);
  iVar3 = g_LocalHeroIndex;
  if (iVar4 != 0) {
    this_ptr->triggered = 1;
    pCVar1 = g_HeroActors[iVar3];
    (this_ptr->base).location.position.x = (pCVar1->base).base.location.position.x;
    (this_ptr->base).location.position.y = (pCVar1->base).base.location.position.y;
    (this_ptr->base).location.position.z = (pCVar1->base).base.location.position.z;
    (this_ptr->base).location.area_id = (pCVar1->base).base.location.area_id;
    (this_ptr->base).location.position.y =
         this_ptr->drop_height + (this_ptr->base).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)32;
    this_ptr->yvel = fVar2;
    iVar3 = g_LocalHeroIndex;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    if ((this_ptr->base).location.position.y < (g_HeroActors[iVar3]->base).base.location.position.y)
    {
      (this_ptr->base).location.position.y = (g_HeroActors[iVar3]->base).base.location.position.y;
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base).location.position.y <
        (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y + (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_48);
      local_48.damage_amount = 9999.9;
      local_48.gore_multiplier = 1.12104e-44;
      local_48.attacker = &this_ptr->base;
      local_48.wielder = &this_ptr->base;
      (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).processDamage)
                (&g_HeroActors[g_LocalHeroIndex]->base,&local_48);
      return;
    }
  }
  return;
}

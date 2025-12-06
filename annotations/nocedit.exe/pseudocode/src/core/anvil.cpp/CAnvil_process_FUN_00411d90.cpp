// Name: core_anvil.cpp_CAnvil_process_FUN_00411d90
// Address: 00411d90
// Address Range: [[00411d90, 00411eb4]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_process_FUN_00411d90(CAnvil * this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr)

{
  CHero *pCVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  float in_stack_0000000c;
  SDamageInfo local_44;
  CAnvil *pCStack_8;
  
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->drop_condition);
  iVar3 = g_LocalHeroIndex;
  if (iVar4 != 0) {
    this_ptr->triggered = 1;
    pCVar1 = g_HeroActors[iVar3];
    (this_ptr->base_actor).location.position.x =
         (pCVar1->base_character).base_actor.location.position.x;
    (this_ptr->base_actor).location.position.y =
         (pCVar1->base_character).base_actor.location.position.y;
    (this_ptr->base_actor).location.position.z =
         (pCVar1->base_character).base_actor.location.position.z;
    (this_ptr->base_actor).location.area_id = (pCVar1->base_character).base_actor.location.area_id;
    (this_ptr->base_actor).location.position.y =
         this_ptr->drop_height + (this_ptr->base_actor).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - in_stack_0000000c * (float)32;
    this_ptr->yvel = fVar2;
    iVar3 = g_LocalHeroIndex;
    (this_ptr->base_actor).location.position.y = fVar2 + (this_ptr->base_actor).location.position.y;
    if ((this_ptr->base_actor).location.position.y <
        (g_HeroActors[iVar3]->base_character).base_actor.location.position.y) {
      (this_ptr->base_actor).location.position.y =
           (g_HeroActors[iVar3]->base_character).base_actor.location.position.y;
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base_actor).location.position.y <
        (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position.y +
        (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_44);
      local_44.damage_flags = 0x461c3f9a;
      local_44.attacker = (CDemonActor *)&DAT_00000008;
      local_44.wielder = &this_ptr->base_actor;
      pCStack_8 = this_ptr;
      (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
        playAmbientSoundWithVolume)
                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(char *)&local_44.damage_amount,
                 unaff_EDI);
      return;
    }
  }
  return;
}

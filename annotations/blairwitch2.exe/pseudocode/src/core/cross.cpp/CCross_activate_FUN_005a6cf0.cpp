// Name: core_cross.cpp_CCross_activate_FUN_005a6cf0
// Address: 005a6cf0
// Address Range: [[005a6cf0, 005a6ec5]]
// Convention: __cdecl
// Signature: void __cdecl core_cross_cpp_CCross_activate_FUN_005a6cf0(CCross *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cross_cpp_CCross_activate_FUN_005a6cf0(CCross *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  CHero *this_ptr_00;
  EDeathState EVar4;
  CDemonActor *pCVar5;
  CLocation *pCVar6;
  byte bVar7;
  float afStackY_1028 [1014];
  char *sound_name;
  uint class_name_hash;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  if (this_ptr->blast_pending <= 0.0) {
    this_ptr->blast_pending = 1.0;
    this_ptr->unused_83c = 0;
    this_ptr->charge_time = 0.0;
    this_ptr->blast_strength = this_ptr->charge;
    if (this_ptr->charge < (float)_DAT_005f074d) {
      sound_name = "$@crosssmall.wav" + 2;
    }
    else {
      sound_name = "crossfull.wav";
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,sound_name,
               &(this_ptr->base).base.base.location.position);
    pCVar6 = &(this_ptr->base).base.base.location;
    local_1c = 0;
    for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      this_ptr_00 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c),
                                        g_CBasicEnemyClassInfo.name_hash);
      if ((this_ptr_00 != (CHero *)0x0) && ((this_ptr_00->path_map).height_cache[5][0x2b] != 0)) {
        EVar4 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)
                          ((CCharacter *)this_ptr_00);
        if ((EVar4 == DEATH_STATE_ALIVE) &&
           (pCVar1 = &(this_ptr_00->base).base.location,
           fVar2 = (pCVar6->position).x - (pCVar1->position).x,
           fVar3 = (this_ptr->base).base.base.location.position.z -
                   (this_ptr_00->base).base.location.position.z,
           SQRT(fVar3 * fVar3 + fVar2 * fVar2) < this_ptr->blast_strength * (float)_DAT_005f0755)) {
          fStack_34 = (pCVar1->position).x - (pCVar6->position).x;
          fStack_30 = (this_ptr_00->base).base.location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_2c = (this_ptr_00->base).base.location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_40 = fStack_34;
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8);
          *(uint *)(&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          (*(((this_ptr_00->base).base.vtable._uh)->_uh).setInventoryIndex)
                    (this_ptr_00,(int)&stack0xffffffc0);
          class_name_hash = g_CCharacterClassInfo.name_hash;
          pCVar5 = (*((this_ptr->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar5,class_name_hash);
          (this_ptr_00->player_input).action_state.use_item = (int)pCVar5;
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return;
}

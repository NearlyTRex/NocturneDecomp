// Name: core_cross.cpp_FUN_005a6cf0
// Address: 005a6cf0
// Address Range: [[005a6cf0, 005a6ec5]]
// Convention: unknown
// Signature: void core_cross_cpp_FUN_005a6cf0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_cross_cpp_FUN_005a6cf0(CDemonActor *param_1)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  CHero *this_ptr;
  EDeathState EVar4;
  CDemonActor *pCVar5;
  byte bVar6;
  float afStackY_1028 [1014];
  char *sound_name;
  uint class_name_hash;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_1c;
  int local_18;
  
  bVar6 = 0;
  if (param_1[3].location.position.y <= 0.0) {
    param_1[3].location.position.y = 1.0;
    param_1[3].location.position.x = 0.0;
    fVar2 = *(float *)(param_1[3].actor_name + 0xc);
    param_1[3].actor_name[0x10] = '\0';
    param_1[3].actor_name[0x11] = '\0';
    param_1[3].actor_name[0x12] = '\0';
    param_1[3].actor_name[0x13] = '\0';
    *(float *)(param_1[3].actor_name + 0x1c) = fVar2;
    if (fVar2 < (float)_DAT_005f074d) {
      sound_name = "$@crosssmall.wav" + 2;
    }
    else {
      sound_name = "crossfull.wav";
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,sound_name,&(param_1->location).position);
    local_1c = 0;
    for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      this_ptr = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                    (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c),
                                     g_CBasicEnemyClassInfo.name_hash);
      if ((this_ptr != (CHero *)0x0) && ((this_ptr->path_map).height_cache[5][0x2b] != 0)) {
        EVar4 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
        if ((EVar4 == DEATH_STATE_ALIVE) &&
           (pCVar1 = &(this_ptr->base).base.location,
           fVar2 = (param_1->location).position.x - (pCVar1->position).x,
           fVar3 = (param_1->location).position.z - (this_ptr->base).base.location.position.z,
           SQRT(fVar3 * fVar3 + fVar2 * fVar2) <
           *(float *)(param_1[3].actor_name + 0x1c) * (float)_DAT_005f0755)) {
          fStack_34 = (pCVar1->position).x - (param_1->location).position.x;
          fStack_30 = (this_ptr->base).base.location.position.y - (param_1->location).position.y;
          fStack_2c = (this_ptr->base).base.location.position.z - (param_1->location).position.z;
          fStack_40 = fStack_34;
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          (*(((this_ptr->base).base.vtable._uh)->_uh).setInventoryIndex)
                    (this_ptr,(int)&stack0xffffffc0);
          class_name_hash = g_CCharacterClassInfo.name_hash;
          pCVar5 = (*((param_1->vtable)._ub)->getCarrier)(param_1);
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar5,class_name_hash);
          (this_ptr->player_input).action_state.use_item = (int)pCVar5;
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return;
}

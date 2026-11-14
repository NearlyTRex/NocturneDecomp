// Name: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004d38b0
// Address: 004d38b0
// Address Range: [[004d38b0, 004d3ae0]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(CHero *this_ptr)

{
  CHero *this_ptr_00;
  float fVar1;
  float fVar2;
  byte bVar3;
  float afStackY_1080 [1008];
  SInteractionInfo SStack_b8;
  float fStack_98;
  float afStack_94 [4];
  float local_84;
  uint local_80;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_60;
  uint local_5c;
  float local_58;
  uint local_50;
  uint local_44;
  float local_3c;
  CDemonActor *pCStack_38;
  CDemonActor *pCStack_34;
  float fStack_30;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_18;
  
  bVar3 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = &(this_ptr->base).base.location;
  do {
    if (g_CDemonSetPtr->actor_count <= local_24) {
      return 0;
    }
    this_ptr_00 = *(CHero **)((int)g_CDemonSetPtr->actors + local_20);
    afStack_94[2] = (this_ptr_00->base).base.location.position.x - (local_1c->position).x;
    afStack_94[3] = (this_ptr_00->base).base.location.position.y - (local_1c->position).y;
    local_84 = (this_ptr_00->base).base.location.position.z - (local_1c->position).z;
    local_74 = afStack_94[2];
    afStack_94[(uint)bVar3 * -2 + 9] = afStack_94[(uint)bVar3 * -2 + 3];
    afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (((ABS(local_70) <= (float)_DAT_005c4db5) &&
        (local_70 = 0.0, SQRT(local_6c * local_6c + local_74 * local_74) <= (float)_DAT_005c4db5))
       && (this_ptr_00 != this_ptr)) {
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_94 + 8);
      local_5c = local_50;
      afStack_94[(uint)bVar3 * -2 + 0xf] = afStack_94[(uint)bVar3 * -2 + 0x12];
      afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
           afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
      local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (local_58 - (this_ptr->base).base.orient.vec.y);
      if (ABS(local_18) <= (float)_DAT_005c4dbd) {
        core_actor_cpp_FUN_00408bf0(this_ptr_00,local_1c);
        local_44 = local_80;
        afStack_94[(uint)bVar3 * -2 + 0x15] = afStack_94[(uint)bVar3 * -2 + 6];
        afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16] =
             afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
        if (local_3c <= 0.0) {
          (*((this_ptr_00->base).base.vtable._ub)->getInteractionInfo)
                    ((CDemonActor *)this_ptr_00,&SStack_b8);
          if ((SStack_b8.can_interact != 0) && (SStack_b8.interacting_actor == (CDemonActor *)0x0))
          {
            fStack_30 = SStack_b8.approach_offset;
            pCStack_38 = SStack_b8.interacting_actor;
            pCStack_34 = SStack_b8.interacting_actor;
            core_actor_cpp_FUN_00408b80(this_ptr_00,&pCStack_38);
            fStack_68 = fStack_98;
            afStack_94[(uint)bVar3 * -2 + 0xc] = afStack_94[(uint)bVar3 * -2];
            afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
                 afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            fVar1 = fStack_68 - (local_1c->position).x;
            fVar2 = fStack_60 - (local_1c->position).z;
            if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)_DAT_005c4dc5) {
              this_ptr->hero_action_range = 0.0;
              this_ptr->hero_action = 10;
              this_ptr->hero_action_actor = (CDemonActor *)this_ptr_00;
              this_ptr->hero_action_target = (CDemonActor *)this_ptr_00;
              return 1;
            }
          }
        }
      }
    }
    local_24 = local_24 + 1;
    local_20 = local_20 + 4;
  } while( true );
}

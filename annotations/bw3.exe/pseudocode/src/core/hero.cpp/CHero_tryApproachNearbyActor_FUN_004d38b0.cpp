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
  CVector3f CStack_98;
  float local_8c;
  float local_88 [2];
  CVector3f local_80;
  float local_74;
  float local_70 [4];
  float fStack_60;
  uint local_5c;
  float local_58;
  uint local_50;
  float local_44;
  float local_3c;
  CVector3f CStack_38;
  int local_24;
  int local_20;
  CVector3f *local_1c;
  float local_18;
  
  bVar3 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = &(this_ptr->base).base.location.position;
  do {
    if (g_CDemonSetPtr->actor_count <= local_24) {
      return 0;
    }
    this_ptr_00 = *(CHero **)((int)g_CDemonSetPtr->actors + local_20);
    local_8c = (this_ptr_00->base).base.location.position.x - ((CVector3f *)&local_1c->x)->x;
    local_88[0] = (this_ptr_00->base).base.location.position.y - local_1c->y;
    local_88[1] = (this_ptr_00->base).base.location.position.z - local_1c->z;
    local_74 = local_8c;
    local_70[(uint)bVar3 * -2] = local_88[(uint)bVar3 * -2];
    local_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         local_88[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (((ABS(local_70[0]) <= (float)_DAT_005c4db5) &&
        (local_70[0] = 0.0,
        SQRT(local_70[1] * local_70[1] + local_74 * local_74) <= (float)_DAT_005c4db5)) &&
       (this_ptr_00 != this_ptr)) {
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_74);
      local_5c = local_50;
      local_70[(uint)bVar3 * -2 + 6] = local_70[(uint)bVar3 * -2 + 9];
      local_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
           local_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
      local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (local_58 - (this_ptr->base).base.orient.vec.y);
      if (ABS(local_18) <= (float)_DAT_005c4dbd) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  ((CDemonActor *)this_ptr_00,local_1c,&local_80);
        local_44 = local_80.x;
        local_70[(uint)bVar3 * -2 + 0xc] = *(float *)((int)&local_80 + (uint)bVar3 * -8 + 4);
        local_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
             *(float *)((int)&local_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (local_3c <= 0.0) {
          (*((this_ptr_00->base).base.vtable._ub)->getInteractionInfo)
                    ((CDemonActor *)this_ptr_00,&SStack_b8);
          if ((SStack_b8.can_interact != 0) && (SStack_b8.interacting_actor == (CDemonActor *)0x0))
          {
            CStack_38.z = SStack_b8.approach_offset;
            CStack_38.x = (float)SStack_b8.interacting_actor;
            CStack_38.y = (float)SStack_b8.interacting_actor;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr_00,&CStack_38,&CStack_98);
            local_70[2] = CStack_98.x;
            local_70[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_98 + (uint)bVar3 * -8 + 4);
            local_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
                 *(float *)((int)&CStack_98 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
            fVar1 = local_70[2] - ((CVector3f *)&local_1c->x)->x;
            fVar2 = fStack_60 - local_1c->z;
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

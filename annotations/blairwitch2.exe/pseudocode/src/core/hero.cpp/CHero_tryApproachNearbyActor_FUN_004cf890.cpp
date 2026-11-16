// Name: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004cf890
// Address: 004cf890
// Address Range: [[004cf890, 004cfac0]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004cf890(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004cf890(CHero *this_ptr)

{
  CHero *this_ptr_00;
  float fVar1;
  float fVar2;
  byte bVar3;
  float afStackY_1080 [1008];
  SInteractionInfo SStack_b8;
  float local_98;
  float local_94 [2];
  CVector3f local_8c;
  CVector3f CStack_80;
  CVector3f local_74;
  float fStack_68;
  float afStack_64 [5];
  CVector3f local_50;
  float local_44;
  float afStack_40 [2];
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
    local_98 = (this_ptr_00->base).base.location.position.x - ((CVector3f *)&local_1c->x)->x;
    local_94[0] = (this_ptr_00->base).base.location.position.y - local_1c->y;
    local_94[1] = (this_ptr_00->base).base.location.position.z - local_1c->z;
    local_74.x = local_98;
    *(float *)((int)&local_74 + (uint)bVar3 * -8 + 4) = local_94[(uint)bVar3 * -2];
    *(float *)((int)&local_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         local_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (((ABS(local_74.y) <= (float)_DAT_005d9d1c) &&
        (local_74.y = 0.0,
        SQRT(local_74.z * local_74.z + local_74.x * local_74.x) <= (float)_DAT_005d9d1c)) &&
       (this_ptr_00 != this_ptr)) {
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_74,&local_50);
      afStack_64[2] = local_50.x;
      afStack_64[(uint)bVar3 * -2 + 3] = *(float *)((int)&local_50 + (uint)bVar3 * -8 + 4);
      afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           *(float *)((int)&local_50 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           (afStack_64[3] - (this_ptr->base).base.orient.vec.y);
      if (ABS(local_18) <= (float)_DAT_005d9d24) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr_00,local_1c,&local_8c);
        local_44 = local_8c.x;
        afStack_40[(uint)bVar3 * -2] = *(float *)((int)&local_8c + (uint)bVar3 * -8 + 4);
        afStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             *(float *)((int)&local_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (afStack_40[1] <= 0.0) {
          (*((this_ptr_00->base).base.vtable._ub)->getInteractionInfo)
                    ((CDemonActor *)this_ptr_00,&SStack_b8);
          if ((SStack_b8.can_interact != 0) && (SStack_b8.interacting_actor == (CDemonActor *)0x0))
          {
            CStack_38.z = SStack_b8.approach_offset;
            CStack_38.x = (float)SStack_b8.interacting_actor;
            CStack_38.y = (float)SStack_b8.interacting_actor;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr_00,&CStack_38,&CStack_80);
            fStack_68 = CStack_80.x;
            afStack_64[(uint)bVar3 * -2] = *(float *)((int)&CStack_80 + (uint)bVar3 * -8 + 4);
            afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                 *(float *)((int)&CStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
            fVar1 = fStack_68 - ((CVector3f *)&local_1c->x)->x;
            fVar2 = afStack_64[1] - local_1c->z;
            if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)_DAT_005d9d2c) {
              this_ptr->hero_action_range = 0.0;
              this_ptr->hero_action = 9;
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

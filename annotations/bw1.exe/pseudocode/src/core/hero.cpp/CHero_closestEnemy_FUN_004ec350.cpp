// Name: core_hero.cpp_CHero_closestEnemy_FUN_004ec350
// Address: 004ec350
// Address Range: [[004ec350, 004ec535]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004ec350(CHero *this_ptr,float *out_distance)

#include "nocturne.h"

CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004ec350(CHero *this_ptr,float *out_distance)

{
  CEnemy *this_ptr_00;
  CDemonActor *pCVar1;
  EDeathState EVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1030 [985];
  CVector3f aCStack_c0 [10];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CEnemy *local_28;
  float fStack_24;
  int local_20;
  CLocation *local_1c;
  int local_18;
  
  bVar4 = 0;
  local_20 = 0;
  *out_distance = 9999.9;
  local_18 = 0;
  local_1c = &(this_ptr->base).base.location;
  local_28 = (CEnemy *)0x0;
  for (; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
    this_ptr_00 = *(CEnemy **)((int)g_CDemonSetPtr->enemies + local_18);
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                       ((CDemonActor *)this_ptr_00,g_CVehicleClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                         ((CDemonActor *)this_ptr_00,g_CMobsterClassInfo.name_hash);
      if ((pCVar1 == (CDemonActor *)0x0) || (pCVar1[0x90].scale.y == 0)) {
        EVar2 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr_00->base);
        if (EVar2 == DEATH_STATE_ALIVE) {
          iVar3 = (*((this_ptr_00->base).base.vtable._ub)->shouldIgnoreForTargeting)
                            ((CDemonActor *)this_ptr_00);
          if (iVar3 == 0) {
            __arrinit(aCStack_c0,10,&g_CVectorTypeInfo);
            iVar3 = (*((this_ptr_00->base).base.vtable._ub)->getTargetPoints)
                              ((CDemonActor *)this_ptr_00,aCStack_c0);
            if (0 < iVar3) {
              fStack_48 = (local_1c->position).x - (this_ptr_00->base).base.location.position.x;
              afStack_44[0] = (local_1c->position).y - (this_ptr_00->base).base.location.position.y;
              afStack_44[1] = (local_1c->position).z - (this_ptr_00->base).base.location.position.z;
              afStack_44[2] = fStack_48;
              afStack_44[(uint)bVar4 * -2 + 3] = afStack_44[(uint)bVar4 * -2];
              afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                   afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              afStack_44[3] = afStack_44[3] * (float)2;
              fStack_24 = fStack_34 * fStack_34 +
                          afStack_44[2] * afStack_44[2] + afStack_44[3] * afStack_44[3];
              if (fStack_24 < *out_distance) {
                *out_distance = fStack_24;
                local_28 = this_ptr_00;
              }
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  if (local_28 == (CEnemy *)0x0) {
    return (CEnemy *)0x0;
  }
  *out_distance = SQRT(*out_distance);
  return local_28;
}

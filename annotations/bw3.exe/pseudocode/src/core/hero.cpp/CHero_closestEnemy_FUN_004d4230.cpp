// Name: core_hero.cpp_CHero_closestEnemy_FUN_004d4230
// Address: 004d4230
// Address Range: [[004d4230, 004d43da]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004d4230(CHero *this_ptr,float *out_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004d4230(CHero *this_ptr,float *out_distance)

{
  CEnemy *this_ptr_00;
  EDeathState EVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1030 [985];
  CVector3f aCStack_c0 [10];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CEnemy *pCStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  CLocation *pCStack_18;
  
  bVar3 = 0;
  iStack_1c = 0;
  *out_distance = 9999.9;
  iStack_20 = 0;
  pCStack_18 = &(this_ptr->base).base.location;
  pCStack_28 = (CEnemy *)0x0;
  for (; iStack_1c < g_CDemonSetPtr->enemy_count; iStack_1c = iStack_1c + 1) {
    this_ptr_00 = *(CEnemy **)((int)g_CDemonSetPtr->enemies + iStack_20);
    EVar1 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr_00->base);
    if (EVar1 == DEATH_STATE_ALIVE) {
      iVar2 = (*((this_ptr_00->base).base.vtable._ub)->shouldIgnoreForTargeting)
                        ((CDemonActor *)this_ptr_00);
      if (iVar2 == 0) {
        __arrinit(aCStack_c0,10,&g_CVectorTypeInfo);
        iVar2 = (*((this_ptr_00->base).base.vtable._ub)->getTargetPoints)
                          ((CDemonActor *)this_ptr_00,aCStack_c0);
        if (0 < iVar2) {
          fStack_48 = (pCStack_18->position).x - (this_ptr_00->base).base.location.position.x;
          afStack_44[0] = (pCStack_18->position).y - (this_ptr_00->base).base.location.position.y;
          afStack_44[1] = (pCStack_18->position).z - (this_ptr_00->base).base.location.position.z;
          afStack_44[2] = fStack_48;
          afStack_44[(uint)bVar3 * -2 + 3] = afStack_44[(uint)bVar3 * -2];
          afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          afStack_44[3] = afStack_44[3] * (float)_DAT_005c4e85;
          fStack_24 = fStack_34 * fStack_34 +
                      afStack_44[2] * afStack_44[2] + afStack_44[3] * afStack_44[3];
          if (fStack_24 < *out_distance) {
            *out_distance = fStack_24;
            pCStack_28 = this_ptr_00;
          }
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  if (pCStack_28 == (CEnemy *)0x0) {
    return (CEnemy *)0x0;
  }
  *out_distance = SQRT(*out_distance);
  return pCStack_28;
}

// Name: core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_hero_cpp_CHero_findNearestEnemy_FUN_004f3960(CHero *this_ptr,float *out_distance)

#include "nocturne.h"

CEnemy * __cdecl core_hero_cpp_CHero_findNearestEnemy_FUN_004f3960(CHero *this_ptr,float *out_distance)

{
  CEnemy *this_ptr_00;
  CVehicle *pCVar1;
  CDemonActor *pCVar2;
  EDeathState EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CVector3f aCStack_a8 [10];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CEnemy *local_1c;
  float fStack_18;
  CLocation *local_14;
  
  *out_distance = 9999.9;
  iVar5 = 0;
  local_14 = &(this_ptr->base).base.location;
  local_1c = (CEnemy *)0x0;
  for (iVar6 = 0; iVar6 < g_CDemonSetPtr->enemy_count; iVar6 = iVar6 + 1) {
    this_ptr_00 = *(CEnemy **)((int)g_CDemonSetPtr->enemies + iVar5);
    pCVar1 = (CVehicle *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       ((CDemonActor *)this_ptr_00,g_CVehicleClassInfo.name_hash);
    if (pCVar1 == (CVehicle *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         ((CDemonActor *)this_ptr_00,g_CMobsterClassInfo.name_hash);
      if ((pCVar2 == (CDemonActor *)0x0) || (*(int *)(pCVar2[0x8e].actor_name + 0x10) == 0)) {
        EVar3 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr_00->base);
        if (EVar3 == DEATH_STATE_ALIVE) {
          iVar4 = (*((this_ptr_00->base).base.vtable._ub)->shouldIgnoreForTargeting)
                            ((CDemonActor *)this_ptr_00);
          if (iVar4 == 0) {
            __arrinit(aCStack_a8,10,&g_CVectorTypeInfo);
            iVar4 = (*((this_ptr_00->base).base.vtable._ub)->getTargetPoints)
                              ((CDemonActor *)this_ptr_00,aCStack_a8);
            if (0 < iVar4) {
              fStack_30 = (local_14->position).x - (this_ptr_00->base).base.location.position.x;
              fStack_2c = ((local_14->position).y - (this_ptr_00->base).base.location.position.y) *
                          (float)2;
              fStack_28 = (local_14->position).z - (this_ptr_00->base).base.location.position.z;
              fStack_18 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
              if (fStack_18 < *out_distance) {
                *out_distance = fStack_18;
                local_1c = this_ptr_00;
              }
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  if (local_1c == (CEnemy *)0x0) {
    return (CEnemy *)0x0;
  }
  *out_distance = SQRT(*out_distance);
  return local_1c;
}

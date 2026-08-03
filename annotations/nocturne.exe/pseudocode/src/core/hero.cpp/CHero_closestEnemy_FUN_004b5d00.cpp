// Name: core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
// Address: 004b5d00
// Address Range: [[004b5d00, 004b5e87]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(CHero *this_ptr,float *out_distance)

#include "nocturne.h"

CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(CHero *this_ptr,float *out_distance)

{
  CEnemy *this_ptr_00;
  CDemonActor *pCVar1;
  EDeathState EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f aCStack_a8 [10];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CEnemy *local_1c;
  float fStack_18;
  CLocation *local_14;
  
  *out_distance = 9999.9;
  iVar4 = 0;
  local_14 = &(this_ptr->base).base.location;
  local_1c = (CEnemy *)0x0;
  for (iVar5 = 0; iVar5 < g_CDemonSet_PTR_005be368->enemy_count; iVar5 = iVar5 + 1) {
    this_ptr_00 = *(CEnemy **)((int)g_CDemonSet_PTR_005be368->enemies + iVar4);
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                       ((CDemonActor *)this_ptr_00,g_CVehicleActorType_02dd1190.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                         ((CDemonActor *)this_ptr_00,g_CMobsterActorType_01ccdbd8.name_hash);
      if ((pCVar1 == (CDemonActor *)0x0) || (pCVar1[0x90].orient_matrix.m[1].x == 0.0)) {
        EVar2 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr_00->base);
        if (EVar2 == DEATH_STATE_ALIVE) {
          iVar3 = (*((this_ptr_00->base).base.vtable._ub)->shouldIgnoreForTargeting)
                            ((CDemonActor *)this_ptr_00);
          if (iVar3 == 0) {
            __arrinit(aCStack_a8,10,&g_CVectorTypeInfo_005993b0);
            iVar3 = (*((this_ptr_00->base).base.vtable._ub)->getTargetPoints)
                              ((CDemonActor *)this_ptr_00,aCStack_a8);
            if (0 < iVar3) {
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
    iVar4 = iVar4 + 4;
  }
  if (local_1c == (CEnemy *)0x0) {
    return (CEnemy *)0x0;
  }
  *out_distance = SQRT(*out_distance);
  return local_1c;
}

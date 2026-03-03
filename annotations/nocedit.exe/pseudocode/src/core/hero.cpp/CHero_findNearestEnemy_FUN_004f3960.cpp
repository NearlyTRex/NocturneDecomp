// Name: core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: __cdecl
// Signature: float __cdecl core_hero_cpp_CHero_findNearestEnemy_FUN_004f3960(CHero *this_ptr,float *out_distance)

#include "nocturne.h"

float __cdecl core_hero_cpp_CHero_findNearestEnemy_FUN_004f3960(CHero *this_ptr,float *out_distance)

{
  CCharacter *this_ptr_00;
  CVehicle *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f aCStack_a8 [10];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CCharacter *local_1c;
  float fStack_18;
  CLocation *local_14;
  
  *out_distance = 9999.9;
  iVar4 = 0;
  local_14 = &(this_ptr->base).base.location;
  local_1c = (CCharacter *)0x0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->enemy_count; iVar5 = iVar5 + 1) {
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->enemies + iVar4);
    pCVar1 = (CVehicle *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (&this_ptr_00->base,g_CVehicleClassInfo.name_hash);
    if (pCVar1 == (CVehicle *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (&this_ptr_00->base,g_CMobsterClassInfo.name_hash);
      if ((pCVar2 == (CDemonActor *)0x0) || (*(int *)(pCVar2[0x8e].actor_name + 0x10) == 0)) {
        iVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
        if (iVar3 == 0) {
          iVar3 = (*((this_ptr_00->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr_00->base);
          if (iVar3 == 0) {
            __arrinit(aCStack_a8,10,&g_CVectorTypeInfo);
            iVar3 = (*((this_ptr_00->base).vtable._ub)->getTargetPoints)
                              (&this_ptr_00->base,aCStack_a8);
            if (0 < iVar3) {
              fStack_30 = (local_14->position).x - (this_ptr_00->base).location.position.x;
              fStack_2c = ((local_14->position).y - (this_ptr_00->base).location.position.y) *
                          (float)2;
              fStack_28 = (local_14->position).z - (this_ptr_00->base).location.position.z;
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
  if (local_1c == (CCharacter *)0x0) {
    return 0.0;
  }
  *out_distance = SQRT(*out_distance);
  return (float)local_1c;
}

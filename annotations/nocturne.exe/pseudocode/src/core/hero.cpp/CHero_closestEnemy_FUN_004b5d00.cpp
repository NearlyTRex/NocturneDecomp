// Name: core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
// Address: 004b5d00
// Address Range: [[004b5d00, 004b5e87]]
// Convention: unknown
// Signature: CCharacter * core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(int param_1,float *param_2)

#include "nocturne.h"

CCharacter * core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(int param_1,float *param_2)

{
  CCharacter *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3f aCStack_a8 [10];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CCharacter *local_1c;
  float fStack_18;
  float *local_14;
  
  *param_2 = 9999.9;
  iVar3 = 0;
  local_14 = (float *)(param_1 + 0x20);
  local_1c = (CCharacter *)0x0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x150bf4); iVar4 = iVar4 + 1) {
    this_ptr = *(CCharacter **)(iVar3 + 0x150bf8 + 0x01E57284);
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (&this_ptr->base,g_CVehicleActorType_02dd1190.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (&this_ptr->base,g_CMobsterActorType_01ccdbd8.name_hash);
      if ((pCVar1 == (CDemonActor *)0x0) || (pCVar1[0x90].orient_matrix.m[1].x == 0.0)) {
        iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr);
        if (iVar2 == 0) {
          iVar2 = (*((this_ptr->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr->base);
          if (iVar2 == 0) {
            __arrinit(aCStack_a8,10,&g_CVectorTypeInfo_005993b0);
            iVar2 = (*((this_ptr->base).vtable._ub)->getTargetPoints)(&this_ptr->base,aCStack_a8);
            if (0 < iVar2) {
              fStack_30 = *local_14 - (this_ptr->base).location.position.x;
              fStack_2c = (local_14[1] - (this_ptr->base).location.position.y) *
                          (float)2;
              fStack_28 = local_14[2] - (this_ptr->base).location.position.z;
              fStack_18 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
              if (fStack_18 < *param_2) {
                *param_2 = fStack_18;
                local_1c = this_ptr;
              }
            }
          }
        }
      }
    }
    iVar3 = iVar3 + 4;
  }
  if (local_1c == (CCharacter *)0x0) {
    return (CCharacter *)0x0;
  }
  *param_2 = SQRT(*param_2);
  return local_1c;
}

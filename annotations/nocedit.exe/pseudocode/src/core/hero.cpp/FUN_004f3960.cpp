// Name: core_hero.cpp_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: unknown
// Signature: float core_hero_cpp_FUN_004f3960 (undefined4 param_1,undefined4 param_2,float *unaff_EBX,undefined4 param_4, int param_5,float *param_6)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3960(uint param_1, uint param_2)
    */

float core_hero_cpp_FUN_004f3960
                (uint param_1,uint param_2,float *unaff_EBX,uint param_4,
                int param_5,float *param_6)

{
  CCharacter *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f aCStack_a0 [10];
  float fStack_20;
  float local_1c;
  float fStack_18;
  int local_14;
  
  iVar5 = 0;
  *param_6 = 9999.9;
  iVar4 = 0;
  local_14 = param_5 + 0x20;
  local_1c = 0.0;
  while( true ) {
    if (*(int *)(g_CDemonSetPtr->unk4 + 0x1f3c) <= iVar5) break;
    this_ptr = *(CCharacter **)(g_CDemonSetPtr->unk4 + iVar4 + 8000);
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (&this_ptr->base,g_CVehicleClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (&this_ptr->base,g_CMobsterClassInfo.name_hash);
      if ((pCVar2 == (CDemonActor *)0x0) || (*(int *)(pCVar2[0x8e].actor_name + 0x10) == 0)) {
        iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr);
        if (iVar3 == 0) {
          iVar3 = (*((this_ptr->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr->base);
          if (iVar3 == 0) {
            __arrinit(aCStack_a0,10,&g_CVectorTypeInfo);
            iVar3 = (*((this_ptr->base).vtable._ub)->getTargetPoints)(&this_ptr->base,aCStack_a0);
            if (0 < iVar3) {
              fStack_20 = *unaff_EBX - (this_ptr->base).location.position.x;
              local_1c = (unaff_EBX[1] - (this_ptr->base).location.position.y) *
                         (float)2;
              fStack_18 = unaff_EBX[2] - (this_ptr->base).location.position.z;
              fVar1 = fStack_18 * fStack_18 + fStack_20 * fStack_20 + local_1c * local_1c;
              if (fVar1 < *param_6) {
                *param_6 = fVar1;
              }
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  }
  if (local_1c == 0.0) {
    return 0.0;
  }
  *param_6 = SQRT(*param_6);
  return local_1c;
}

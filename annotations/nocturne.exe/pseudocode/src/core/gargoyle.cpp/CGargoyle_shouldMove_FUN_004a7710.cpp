// Name: core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710
// Address: 004a7710
// Address Range: [[004a7710, 004a7857]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(CGargoyle *this_ptr)

{
  CLocation *pCVar1;
  CCharacter *pCVar2;
  CDemonActor *pCVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [16];
  
  pCVar2 = (this_ptr->base).victim;
  this_ptr->returning_home = 0;
  if (pCVar2 != (CCharacter *)0x0) {
    pCVar1 = &(this_ptr->base).base.base.location;
    local_24 = (pCVar1->position).x - (pCVar2->base).location.position.x;
    local_20 = (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y;
    local_1c = (this_ptr->base).base.base.location.position.z - (pCVar2->base).location.position.z;
    if (SQRT(local_1c * local_1c + local_24 * local_24 + local_20 * local_20) <=
        (this_ptr->base).guard_distance) {
      pfVar6 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                  (local_18,&local_24);
      if (&local_24 != pfVar6) {
        local_24 = *pfVar6;
        local_20 = pfVar6[1];
        local_1c = pfVar6[2];
      }
      fVar7 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               ((((this_ptr->base).victim)->base).orient.vec.y - local_20);
      if ((fVar7 < (float)-0.31415926534999999) || ((float)0.31415926534999999 < fVar7)) {
        return 1;
      }
    }
    else {
      pCVar3 = this_ptr->home_base;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar7 = (pCVar3->location).position.x - (pCVar1->position).x;
        fVar4 = (pCVar3->location).position.y - (this_ptr->base).base.base.location.position.y;
        fVar5 = (pCVar3->location).position.z - (this_ptr->base).base.base.location.position.z;
        if (1.0 <= SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar4 * fVar4)) {
          this_ptr->returning_home = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

// Name: core_gargoyle.cpp_CGargoyle_FUN_004e48a0
// Address: 004e48a0
// Address Range: [[004e48a0, 004e49e7]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e48a0(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e48a0(CGargoyle *this_ptr)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float fVar6;
  CVector3f local_24;
  CVector3f local_18;
  
  pCVar2 = (this_ptr->base).victim;
  this_ptr->returning_home = 0;
  if (pCVar2 != (CDemonActor *)0x0) {
    pCVar1 = &(this_ptr->base).base.base.location;
    local_24.x = (pCVar1->position).x - (pCVar2->location).position.x;
    local_24.y = (this_ptr->base).base.base.location.position.y - (pCVar2->location).position.y;
    local_24.z = (this_ptr->base).base.base.location.position.z - (pCVar2->location).position.z;
    if (SQRT(local_24.z * local_24.z + local_24.x * local_24.x + local_24.y * local_24.y) <=
        (this_ptr->base).guard_distance) {
      pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_18,&local_24)
      ;
      if (&local_24 != pCVar5) {
        local_24.x = pCVar5->x;
        local_24.y = pCVar5->y;
        local_24.z = pCVar5->z;
      }
      fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        ((((this_ptr->base).victim)->orient).vec.y - local_24.y);
      if ((fVar6 < (float)-0.31415926534999999) || ((float)0.31415926534999999 < fVar6)) {
        return 1;
      }
    }
    else {
      pCVar2 = this_ptr->home_base;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar6 = (pCVar2->location).position.x - (pCVar1->position).x;
        fVar3 = (pCVar2->location).position.y - (this_ptr->base).base.base.location.position.y;
        fVar4 = (pCVar2->location).position.z - (this_ptr->base).base.base.location.position.z;
        if (1.0 <= SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3)) {
          this_ptr->returning_home = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

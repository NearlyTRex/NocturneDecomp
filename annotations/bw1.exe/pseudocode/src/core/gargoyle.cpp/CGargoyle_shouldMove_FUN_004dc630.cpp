// Name: core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004dc630
// Address: 004dc630
// Address Range: [[004dc630, 004dc7c0]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004dc630(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004dc630(CGargoyle *this_ptr)

{
  CLocation *pCVar1;
  CCharacter *pCVar2;
  CDemonActor *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float afStackY_1030 [1011];
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48 [3];
  CVector3f local_24;
  
  bVar7 = 0;
  pCVar2 = (this_ptr->base).victim;
  this_ptr->returning_home = 0;
  if (pCVar2 != (CCharacter *)0x0) {
    pCVar1 = &(this_ptr->base).base.base.location;
    local_60 = (pCVar1->position).x - (pCVar2->base).location.position.x;
    local_5c = (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y;
    local_58 = (this_ptr->base).base.base.location.position.z - (pCVar2->base).location.position.z;
    if (SQRT(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) <=
        (this_ptr->base).guard_distance) {
      local_54.x = local_60;
      local_54.y = local_5c;
      local_54.z = local_58;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_54,local_48);
      local_24.x = local_48[0].x;
      *(uint *)((int)&local_24 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)local_48 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&local_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)local_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&local_54 != &local_24) {
        local_54.x = local_24.x;
        local_54.y = local_24.y;
        local_54.z = local_24.z;
      }
      fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                        ((((this_ptr->base).victim)->base).orient.vec.y - local_54.y);
      if ((fVar6 < -0.3141593f) || (0.3141593f < fVar6)) {
        return 1;
      }
    }
    else {
      pCVar3 = this_ptr->home_base;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar6 = (pCVar3->location).position.x - (pCVar1->position).x;
        fVar4 = (pCVar3->location).position.y - (this_ptr->base).base.base.location.position.y;
        fVar5 = (pCVar3->location).position.z - (this_ptr->base).base.base.location.position.z;
        if (1.0 <= SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4)) {
          this_ptr->returning_home = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

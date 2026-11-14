// Name: core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004c51a0
// Address: 004c51a0
// Address Range: [[004c51a0, 004c5330]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004c51a0(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004c51a0(CGargoyle *this_ptr)

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
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_24;
  float local_20;
  float local_1c;
  
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
      local_54 = local_60;
      local_50 = local_5c;
      local_4c = local_58;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffac);
      local_24 = local_48;
      (&stack0xffffffe0)[(uint)bVar7 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar7 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      if (&stack0xffffffac != &stack0xffffffdc) {
        local_54 = local_24;
        local_50 = local_20;
        local_4c = local_1c;
      }
      fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                        ((((this_ptr->base).victim)->base).orient.vec.y - local_50);
      if ((fVar6 < _DAT_005c3f28) || (_DAT_005c3f2c < fVar6)) {
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

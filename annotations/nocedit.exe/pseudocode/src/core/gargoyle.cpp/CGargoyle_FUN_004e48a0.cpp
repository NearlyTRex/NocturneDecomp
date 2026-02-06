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
  int iVar2;
  CDemonActor *pCVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  float fVar7;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar2 = *(int *)((this_ptr->base).unk2 + 4);
  this_ptr->unk2[0x14] = '\0';
  this_ptr->unk2[0x15] = '\0';
  this_ptr->unk2[0x16] = '\0';
  this_ptr->unk2[0x17] = '\0';
  if (iVar2 != 0) {
    pCVar1 = &(this_ptr->base).base.base.location;
    local_24.x = (pCVar1->position).x - *(float *)(iVar2 + 0x20);
    local_24.y = (this_ptr->base).base.base.location.position.y - *(float *)(iVar2 + 0x24);
    local_24.z = (this_ptr->base).base.base.location.position.z - *(float *)(iVar2 + 0x28);
    if (SQRT(local_24.z * local_24.z + local_24.x * local_24.x + local_24.y * local_24.y) <=
        (this_ptr->base).guard_distance) {
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&local_18,&local_24);
      if (&local_24 != pCVar6) {
        local_24.x = pCVar6->x;
        local_24.y = pCVar6->y;
        local_24.z = pCVar6->z;
      }
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (*(float *)(*(int *)((this_ptr->base).unk2 + 4) + 0x34) - local_24.y);
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
          this_ptr->unk2[0x14] = '\x01';
          this_ptr->unk2[0x15] = '\0';
          this_ptr->unk2[0x16] = '\0';
          this_ptr->unk2[0x17] = '\0';
          return 1;
        }
      }
    }
  }
  return 0;
}

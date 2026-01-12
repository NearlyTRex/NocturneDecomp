// Name: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
// Address: 0040a0f0
// Address Range: [[0040a0f0, 0040a202]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor * this_ptr)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D local_30;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ae);
  pCVar4 = (*this_ptr->vtable->getBoundingBox)(this_ptr,&local_30);
  fVar1 = (pCVar4->max).x - (pCVar4->min).x;
  uVar5 = 0;
  fVar2 = (pCVar4->max).y - (pCVar4->min).y;
  fVar3 = (pCVar4->max).z - (pCVar4->min).z;
  if ((((fVar1 < 1.0) && (fVar2 < 1.0)) && ((float)2 < fVar3)) &&
     (((fVar3 < (float)6 && (fVar1 < fVar3)) && (fVar2 < fVar3)))) {
    uVar5 = 2;
  }
  if (((fVar1 < 1.0) && (fVar2 < 1.0)) &&
     ((1.0 < fVar3 && (((fVar3 < (float)2 && (fVar1 < fVar3)) && (fVar2 < fVar3))))))
  {
    uVar5 = uVar5 | 4;
  }
  return uVar5;
}

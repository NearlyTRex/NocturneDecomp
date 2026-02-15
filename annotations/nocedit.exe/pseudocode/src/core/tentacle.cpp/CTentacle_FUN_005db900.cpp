// Name: core_tentacle.cpp_CTentacle_FUN_005db900
// Address: 005db900
// Address Range: [[005db900, 005db9ca]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_FUN_005db900(CTentacle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_tentacle_cpp_CTentacle_FUN_005db900(CTentacle *this_ptr)

{
  CTentacle *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char *in_stack_00000008;
  int local_14;
  
  iVar5 = 0;
  local_14 = 0;
  do {
    if (g_CDemonSetPtr->character_count <= local_14) {
      return 0;
    }
    actor_ptr = *(CTentacle **)((int)g_CDemonSetPtr->characters + iVar5);
    if (actor_ptr != this_ptr) {
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)actor_ptr,in_stack_00000008);
      if (iVar4 != 0) {
        fVar1 = (actor_ptr->base).base.base.location.position.x -
                (this_ptr->base).base.base.location.position.x;
        fVar2 = ((actor_ptr->base).base.base.location.position.y -
                (this_ptr->base).base.base.location.position.y) * (float)3;
        fVar3 = (actor_ptr->base).base.base.location.position.z -
                (this_ptr->base).base.base.location.position.z;
        if (SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < (this_ptr->base).guard_distance) {
          (this_ptr->base).victim = (CDemonActor *)actor_ptr;
          return 1;
        }
      }
    }
    local_14 = local_14 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}

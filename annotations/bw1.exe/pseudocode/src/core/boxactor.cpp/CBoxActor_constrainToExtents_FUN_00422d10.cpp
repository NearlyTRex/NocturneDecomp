// Name: core_boxactor.cpp_CBoxActor_constrainToExtents_FUN_00422d10
// Address: 00422d10
// Address Range: [[00422d10, 00422df1]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_00422d10(CBoxActor *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_00422d10(CBoxActor *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1034 [1002];
  uint local_7c [6];
  uint local_64 [6];
  CBoundingBox3D local_4c;
  float fStack_34;
  float afStack_30 [5];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float local_10;
  
  bVar4 = 0;
  if (this_ptr->constrain_extents_actor == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_FUN_00408bb0(this_ptr->constrain_extents_actor,&(this_ptr->base).location);
  local_4c.min.x = local_10;
  *(float *)((int)&local_4c + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2 + 9];
  *(float *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  (*((this_ptr->constrain_extents_actor->vtable)._ub)->getBoundingBox)
            (this_ptr->constrain_extents_actor,&local_4c);
  puVar2 = local_64;
  puVar3 = local_7c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_box_cpp_FUN_00421af0(local_7c);
  local_4c.max.x = afStack_30[2];
  *(float *)((int)&local_4c + (uint)bVar4 * -8 + 0x10) = afStack_30[(uint)bVar4 * -2 + 3];
  *(float *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x14) =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (&local_4c != (CBoundingBox3D *)&local_4c.max) {
    local_4c.min.x = local_4c.max.x;
    local_4c.min.y = local_4c.max.y;
    local_4c.min.z = local_4c.max.z;
  }
  core_actor_cpp_FUN_00408b40(this_ptr->constrain_extents_actor,&local_4c);
  fStack_1c = fStack_34;
  afStack_30[(uint)bVar4 * -2 + 6] = afStack_30[(uint)bVar4 * 0xfffffffe];
  afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  (this_ptr->base).location.position.x = fStack_1c;
  (this_ptr->base).location.position.y = fStack_18;
  (this_ptr->base).location.position.z = fStack_14;
  return;
}

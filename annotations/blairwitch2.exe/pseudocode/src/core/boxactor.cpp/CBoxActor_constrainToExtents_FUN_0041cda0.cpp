// Name: core_boxactor.cpp_CBoxActor_constrainToExtents_FUN_0041cda0
// Address: 0041cda0
// Address Range: [[0041cda0, 0041ce81]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_0041cda0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_0041cda0(CBoxActor *this_ptr)

{
  int iVar1;
  uint *puVar2;
  CVector3f *unaff_EDI;
  uint *puVar3;
  byte bVar4;
  float afStackY_1034 [1002];
  CBoundingBox3D CStack_74;
  uint auStack_5c [4];
  CBoundingBox3D local_4c;
  float afStack_34 [2];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  CVector3f local_10;
  
  bVar4 = 0;
  if (this_ptr->constrain_extents_actor == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            (this_ptr->constrain_extents_actor,&(this_ptr->base).location.position,&local_10);
  local_4c.min.x = local_10.x;
  afStack_34[(uint)bVar4 * -2 + -5] = *(float *)((int)&local_10 + (uint)bVar4 * -8 + 4);
  afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -4] =
       *(float *)((int)&local_10 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  (*((this_ptr->constrain_extents_actor->vtable)._ub)->getBoundingBox)
            (this_ptr->constrain_extents_actor,&local_4c);
  puVar2 = auStack_5c;
  puVar3 = (uint *)&stack0xffffff84;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041bb80(&CStack_74,unaff_EDI,&CStack_20);
  local_4c.max.z = CStack_20.x;
  afStack_34[(uint)bVar4 * -2] = *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
  afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (&local_4c.min.z != &local_4c.max.z) {
    local_4c.min.z = local_4c.max.z;
    local_4c.max.x = afStack_34[0];
    local_4c.max.y = afStack_34[1];
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (this_ptr->constrain_extents_actor,(CVector3f *)&local_4c.min.z,&CStack_2c);
  fStack_14 = CStack_2c.x;
  *(uint *)((int)&local_10 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_10 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  (this_ptr->base).location.position.x = fStack_14;
  (this_ptr->base).location.position.y = local_10.x;
  (this_ptr->base).location.position.z = local_10.y;
  return;
}

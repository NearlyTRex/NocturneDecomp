// Name: core_simbox.cpp_CSimBox_setup_FUN_00540070
// Address: 00540070
// Address Range: [[00540070, 005401ad]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00540070(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00540070(CSimBox *this_ptr)

{
  byte *position;
  UOrientationVector *pUVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1004 [995];
  CBoundingBox3D *in_stack_ffffff94;
  float fStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  uint auStack_4c [6];
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  CVector3f CStack_1c;
  float fStack_10;
  
  bVar5 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff94);
  puVar3 = auStack_4c;
  puVar4 = (uint *)&stack0xffffff94;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if (&fStack_34 != &fStack_64) {
    fStack_34 = fStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
  }
  if (&fStack_28 != &fStack_58) {
    fStack_28 = fStack_58;
    uStack_24 = uStack_54;
    uStack_20 = uStack_50;
  }
  fStack_10 = fStack_28 - fStack_34;
  CStack_1c.x = fStack_28 - fStack_34;
  *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8);
  *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  position = &(this_ptr->base).field_0x20;
  core_box_cpp_CBox_setupCorners_FUN_005b1c80
            (&this_ptr->physics_box,(CVector3f *)position,&(this_ptr->base).orient.vec,&CStack_1c,
             this_ptr->weight);
  if (&this_ptr->spawn_position != (CVector3f *)position) {
    (this_ptr->spawn_position).x = *(float *)position;
    (this_ptr->spawn_position).y = *(float *)&(this_ptr->base).field_0x24;
    (this_ptr->spawn_position).z = *(float *)&(this_ptr->base).field_0x28;
  }
  pUVar1 = &(this_ptr->base).orient;
  if (&this_ptr->spawn_orientation != (CVector3f *)pUVar1) {
    (this_ptr->spawn_orientation).x = (pUVar1->vec).x;
    (this_ptr->spawn_orientation).y = (this_ptr->base).orient.vec.y;
    (this_ptr->spawn_orientation).z = (this_ptr->base).orient.vec.z;
  }
  if (this_ptr->type != 1) {
    return;
  }
  (this_ptr->physics_box).is_valid = 0;
  return;
}

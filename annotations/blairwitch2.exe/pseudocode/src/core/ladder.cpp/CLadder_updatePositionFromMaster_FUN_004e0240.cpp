// Name: core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e0376]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_004e0240(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_004e0240(CLadder *this_ptr)

{
  UOrientationVector *pUVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_101c [965];
  uint uStack_e8;
  uint uStack_d8;
  uint uStack_c8;
  byte auStack_c4 [48];
  byte auStack_94 [48];
  uint auStack_64 [12];
  uint uStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar5 = 0;
  if (this_ptr->master_actor == (CDemonActor *)0x0) {
    return;
  }
  core_xform_cpp_FUN_00591c10
            (auStack_c4,&this_ptr->relative_position,&this_ptr->cached_euler_angles);
  core_xform_cpp_FUN_00591c10
            (auStack_94,&this_ptr->master_actor->field_0x20,&this_ptr->master_actor->orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_c4,auStack_94);
  puVar3 = auStack_64;
  puVar4 = (uint *)&stack0xffffff0c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_10 = uStack_e8;
  uStack_c = uStack_d8;
  uStack_8 = uStack_c8;
  uStack_34 = uStack_e8;
  afStack_30[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 9];
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  *(uint *)&(this_ptr->base).field_0x20 = uStack_34;
  *(float *)&(this_ptr->base).field_0x24 = afStack_30[0];
  *(float *)&(this_ptr->base).field_0x28 = afStack_30[1];
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&stack0xffffff0c);
  pUVar1 = &(this_ptr->base).orient;
  afStack_30[2] = fStack_1c;
  afStack_30[(uint)bVar5 * -2 + 3] = afStack_30[(uint)bVar5 * -2 + 6];
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if (pUVar1 != (UOrientationVector *)(afStack_30 + 2)) {
    (pUVar1->vec).x = afStack_30[2];
    (this_ptr->base).orient.vec.y = afStack_30[3];
    (this_ptr->base).orient.vec.z = fStack_20;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  return;
}

// Name: core_boxactor.cpp_FUN_00422390
// Address: 00422390
// Address Range: [[00422390, 004224a5]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422390()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00422390(uint param_1, uint
   param_2, uint param_3) */

void core_boxactor_cpp_FUN_00422390(void)

{
  float fVar1;
  float fVar2;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  double local_60;
  byte auStack_58 [20];
  float local_44;
  CVector3f local_40;
  CVector3f CStack_34;
  float fStack_28;
  byte local_24 [20];
  float fStack_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)(auStack_58 + 0x10),in_stack_00000008);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (in_stack_00000004,(CVector3f *)local_24,in_stack_0000000c);
  if ((float)local_24._8_4_ * local_40.x +
      (float)local_24._0_4_ * (float)auStack_58._16_4_ + (float)local_24._4_4_ * local_44 < 0.0) {
    (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)&local_60);
    fStack_10 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                          ((CBoundingBox3D *)auStack_58,&local_40,(CVector3f *)(local_24 + 8),
                           &CStack_34);
    local_60 = (double)fStack_10;
    if ((0.0 <= local_60) && (local_60 < 1.0)) {
      fStack_10 = (float)1.01 - fStack_10;
      fStack_28 = in_stack_0000000c->x * fStack_10;
      local_24._0_4_ = in_stack_0000000c->y * fStack_10;
      local_24._4_4_ = in_stack_0000000c->z * fStack_10;
      fVar1 = (in_stack_00000004->location).position.y;
      (in_stack_00000004->location).position.x =
           (in_stack_00000004->location).position.x + fStack_28;
      fVar2 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.y = fVar1 + (float)local_24._0_4_;
      (in_stack_00000004->location).position.z = fVar2 + (float)local_24._4_4_;
      core_boxactor_cpp_FUN_004218d0();
      core_boxactor_cpp_FUN_00422590();
      return;
    }
  }
  return;
}

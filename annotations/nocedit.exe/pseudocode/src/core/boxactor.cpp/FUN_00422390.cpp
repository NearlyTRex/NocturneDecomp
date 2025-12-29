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
  float fVar3;
  float fVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  byte local_48 [8];
  float local_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_2c;
  CVector3f local_20;
  float fStack_14;
  float fStack_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)local_48,in_stack_00000008);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (in_stack_00000004,&local_20,in_stack_0000000c);
  if (fStack_14 * fStack_38 + local_20.y * local_40 + local_20.z * fStack_3c < 0.0) {
    (*in_stack_00000004->vtable->getBoundingBox)
              (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffa8);
    fVar5 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                      ((CBoundingBox3D *)(local_48 + 4),&CStack_2c,(CVector3f *)&stack0xfffffff8,
                       &local_20);
    local_48 = (byte  [8])(double)fVar5;
    if ((0.0 <= (double)local_48) && ((double)local_48 < 1.0)) {
      fVar5 = (float)1.01 - fVar5;
      fStack_10 = in_stack_0000000c->x * fVar5;
      fVar1 = in_stack_0000000c->y;
      fVar2 = in_stack_0000000c->z;
      fVar3 = (in_stack_00000004->location).position.y;
      (in_stack_00000004->location).position.x =
           (in_stack_00000004->location).position.x + fStack_10;
      fVar4 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.y = fVar3 + fVar1 * fVar5;
      (in_stack_00000004->location).position.z = fVar4 + fVar2 * fVar5;
      core_boxactor_cpp_FUN_004218d0();
      local_48._0_4_ = in_stack_00000004;
      core_boxactor_cpp_FUN_00422590();
      return;
    }
  }
  return;
}

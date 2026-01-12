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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CBoundingBox3D CStack_5c;
  CVector3f local_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float local_24;
  CVector3f local_20;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,&local_44,in_stack_00000008);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (in_stack_00000004,&local_20,in_stack_0000000c);
  if (local_20.z * local_44.z + local_20.x * local_44.x + local_20.y * local_44.y < 0.0) {
    (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_5c);
    fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                          (&CStack_5c,&local_44,&local_20,&CStack_38);
    if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
      fStack_14 = (float)1.01 - fStack_14;
      fStack_2c = in_stack_0000000c->x * fStack_14;
      fStack_28 = in_stack_0000000c->y * fStack_14;
      local_24 = in_stack_0000000c->z * fStack_14;
      fVar1 = (in_stack_00000004->location).position.y;
      (in_stack_00000004->location).position.x =
           (in_stack_00000004->location).position.x + fStack_2c;
      fVar2 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.y = fVar1 + fStack_28;
      (in_stack_00000004->location).position.z = fVar2 + local_24;
      core_boxactor_cpp_FUN_004218d0();
      core_boxactor_cpp_FUN_00422590();
      return;
    }
  }
  return;
}

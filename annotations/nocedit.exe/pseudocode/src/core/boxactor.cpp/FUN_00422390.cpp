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
  byte local_60 [8];
  byte auStack_58 [20];
  CVector3f local_44;
  CVector3f CStack_38;
  float fStack_28;
  float local_24;
  CVector3f local_20;
  float fStack_14;
  float fStack_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)(auStack_58 + 0x10),in_stack_00000008);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (in_stack_00000004,&local_20,in_stack_0000000c);
  if (fStack_14 * CStack_38.x + local_20.y * local_44.y + local_20.z * local_44.z < 0.0) {
    (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)auStack_58);
    fStack_10 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                          ((CBoundingBox3D *)(local_60 + 4),&local_44,&local_20,&CStack_38);
    local_60 = (byte  [8])(double)fStack_10;
    if ((0.0 <= (double)local_60) && ((double)local_60 < 1.0)) {
      fStack_10 = (float)1.01 - fStack_10;
      fStack_28 = in_stack_0000000c->x * fStack_10;
      local_24 = in_stack_0000000c->y * fStack_10;
      local_20.x = in_stack_0000000c->z * fStack_10;
      fVar1 = (in_stack_00000004->location).position.y;
      (in_stack_00000004->location).position.x =
           (in_stack_00000004->location).position.x + fStack_28;
      fVar2 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.y = fVar1 + local_24;
      (in_stack_00000004->location).position.z = fVar2 + local_20.x;
      core_boxactor_cpp_FUN_004218d0();
      local_60._0_4_ = in_stack_00000004;
      core_boxactor_cpp_FUN_00422590();
      return;
    }
  }
  return;
}
